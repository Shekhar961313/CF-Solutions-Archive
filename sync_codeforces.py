import requests
import os
import time
import subprocess

# --- CONFIGURATION ---
CF_HANDLE = "here_i_am_"
REPO_PATH = "."
PROBLEM_LEVEL_FOLDERS = ["A", "B", "C", "D", "E", "F", "G", "H"]
OTHER_FOLDER = "Other_Problems"
# --- END OF CONFIGURATION ---

LANG_EXTENSIONS = {
    "GNU C++17": "cpp",
    "GNU C++20 (64)": "cpp",
    "Python 3": "py",
    "PyPy 3": "py",
    "Java 11": "java",
}

def get_solved_problems():
    url = f"https://codeforces.com/api/user.status?handle={CF_HANDLE}"
    try:
        response = requests.get(url)
        response.raise_for_status()
        data = response.json()
        if data['status'] != 'OK':
            print(f"Error fetching data: {data.get('comment')}")
            return {}
        
        solved = {}
        for sub in data['result']:
            if sub['verdict'] == 'OK':
                problem = sub['problem']
                if 'contestId' in problem:
                    problem_id = f"{problem['contestId']}{problem['index']}"
                    if problem_id not in solved or sub['creationTimeSeconds'] > solved[problem_id]['creationTimeSeconds']:
                        solved[problem_id] = sub
        return solved
    except requests.exceptions.RequestException as e:
        print(f"Request error: {e}")
        return {}

def get_folder_for_level(problem_index):
    if problem_index and problem_index[0].isalpha():
        return problem_index[0].upper()
    return OTHER_FOLDER

def main():
    print("🚀 Starting Codeforces sync process...")
    solved_submissions = get_solved_problems()
    if not solved_submissions:
        print("⚠️ No solved submissions found or API error. Exiting.")
        return

    new_files_added = False

    for folder in PROBLEM_LEVEL_FOLDERS + [OTHER_FOLDER]:
        os.makedirs(os.path.join(REPO_PATH, folder), exist_ok=True)

    for problem_id, sub in sorted(solved_submissions.items(), key=lambda item: item[1]['creationTimeSeconds']):
        problem = sub['problem']
        problem_index = problem.get('index')
        folder_name = get_folder_for_level(problem_index)

        if folder_name not in PROBLEM_LEVEL_FOLDERS and folder_name != OTHER_FOLDER:
            folder_name = OTHER_FOLDER

        rating = problem.get('rating')
        problem_name = "".join(c for c in problem['name'] if c.isalnum() or c in (' ', '_')).rstrip()
        lang_ext = LANG_EXTENSIONS.get(sub['programmingLanguage'], 'txt')
        file_name = f"{problem['contestId']}{problem_index}-{problem_name}.{lang_ext}"
        file_path = os.path.join(REPO_PATH, folder_name, file_name)

        if not os.path.exists(file_path):
            print(f"📄 New problem: {problem['name']} ({problem_index}) → '{folder_name}'")

            content = f"""// Problem: {problem['name']}
// Contest: {sub['contestId']}
// URL: https://codeforces.com/problemset/problem/{problem['contestId']}/{problem['index']}
// Rating: {rating if rating else 'Unrated'}
// 
// Submission ID: {sub['id']}
// Language: {sub['programmingLanguage']}
// Date: {time.strftime('%Y-%m-%d %H:%M:%S', time.localtime(sub['creationTimeSeconds']))}
//
// --- SOLUTION ---
// NOTE: The Codeforces API does not provide the source code for submissions.
// You can manually paste your solution here.
"""
            with open(file_path, 'w', encoding='utf-8') as f:
                f.write(content)

            new_files_added = True

    if new_files_added:
        print("✅ New files added. Committing and pushing to GitHub...")
        try:
            subprocess.run(["git", "pull"], cwd=REPO_PATH, check=True)
            subprocess.run(["git", "add", "."], cwd=REPO_PATH, check=True)
            subprocess.run(["git", "commit", "-m", "Add new Codeforces solutions"], cwd=REPO_PATH, check=True)
            subprocess.run(["git", "push"], cwd=REPO_PATH, check=True)
            print("✅ Successfully pushed to GitHub!")
        except subprocess.CalledProcessError as e:
            print("❌ Git error:", e)
    else:
        print("📦 No new files to commit. Everything is up-to-date.")

if __name__ == '__main__':
    main()


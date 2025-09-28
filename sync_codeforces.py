import requests
import os
import time
import subprocess

# --- CONFIGURATION (Updated for Level-Based Sorting) ---
# Your Codeforces handle (MUST CHANGE)
CF_HANDLE = "Shekhar961313"

# The local path to your cloned GitHub repository
# This should be "." as the script runs from the repo root
REPO_PATH = "."

# A list of folders you expect. The script will create them if they don't exist.
# It will use the first letter of the problem index (A, B, C...) to find the folder.
PROBLEM_LEVEL_FOLDERS = ["A", "B", "C", "D", "E", "F", "G", "H"]

# A fallback folder for problems that don't have a standard letter index.
OTHER_FOLDER = "Other_Problems"
# --- END OF CONFIGURATION ---

# Supported language extensions
LANG_EXTENSIONS = {
    "GNU C++17": "cpp",
    "GNU C++20 (64)": "cpp",
    "Python 3": "py",
    "PyPy 3": "py",
    "Java 11": "java",
}

def get_solved_problems():
    """Fetches all 'OK' submissions from the Codeforces API."""
    url = f"https://codeforces.com/api/user.status?handle={CF_HANDLE}"
    try:
        response = requests.get(url)
        response.raise_for_status()
        data = response.json()
        if data['status'] != 'OK':
            print(f"Error fetching data from Codeforces API: {data.get('comment')}")
            return {}
        
        solved = {}
        for sub in data['result']:
            if sub['verdict'] == 'OK':
                problem = sub['problem']
                # Ensure the problem has a contestId to be valid
                if 'contestId' in problem:
                    problem_id = f"{problem['contestId']}{problem['index']}"
                    if problem_id not in solved or sub['creationTimeSeconds'] > solved[problem_id]['creationTimeSeconds']:
                        solved[problem_id] = sub
        return solved
        
    except requests.exceptions.RequestException as e:
        print(f"An error occurred while fetching data: {e}")
        return {}

def get_folder_for_level(problem_index):
    """(New Function) Determines folder based on problem index (e.g., A, B1, C2 -> C)."""
    if problem_index and problem_index[0].isalpha():
        level = problem_index[0].upper()
        return level
    return OTHER_FOLDER

def main():
    """Main function to sync solved problems."""
    print("Starting Codeforces sync process...")
    solved_submissions = get_solved_problems()
    if not solved_submissions:
        print("No solved submissions found or API error. Exiting.")
        return

    new_files_added = False
    
    # Create folders if they don't exist
    for folder in PROBLEM_LEVEL_FOLDERS + [OTHER_FOLDER]:
        os.makedirs(os.path.join(REPO_PATH, folder), exist_ok=True)

    for problem_id, sub in sorted(solved_submissions.items(), key=lambda item: item[1]['creationTimeSeconds']):
        problem = sub['problem']
        
        # (Updated Logic) Get folder based on problem index (A, B, C...)
        problem_index = problem.get('index')
        folder_name = get_folder_for_level(problem_index)

        # Skip if the determined folder isn't in our expected list, unless it's the fallback
        if folder_name not in PROBLEM_LEVEL_FOLDERS and folder_name != OTHER_FOLDER:
            folder_name = OTHER_FOLDER

        rating = problem.get('rating') # We can still save the rating as info
        problem_name = "".join(c for c in problem['name'] if c.isalnum() or c in (' ', '_')).rstrip()
        lang_ext = LANG_EXTENSIONS.get(sub['programmingLanguage'], 'txt')
        
        file_name = f"{problem['contestId']}{problem_index}-{problem_name}.{lang_ext}"
        file_path = os.path.join(REPO_PATH, folder_name, file_name)

        if not os.path.exists(file_path):
            print(f"New solved problem found: {problem['name']} ({problem_index}). Adding to folder '{folder_name}'...")
            
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
        print("New solutions found. Committing to repository...")
    else:
        print("No new solved problems to add. Everything is up-to-date.")

if __name__ == '__main__':
    main()
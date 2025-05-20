todo_list = []

def display_todo_list():
    if not todo_list:
        print("Your to-do list is empty.")
    else:
        print("To-Do List:")
        for i, task in enumerate(todo_list, 1):
            print(f"{i}. {task}")

def add_task(task):
    todo_list.append(task)
    print(f"Task '{task}' added to your to-do list.")

def remove_task(task_number):
    if 1 <= task_number <= len(todo_list):
        removed_task = todo_list.pop(task_number - 1)
        print(f"Task '{removed_task}' removed from your to-do list.")
    else:
        print("Invalid task number.")

def update_task(task_number, new_task):
    if 1 <= task_number <= len(todo_list):
        todo_list[task_number - 1] = new_task
        print(f"Task {task_number} updated to '{new_task}'.")
    else:
        print("Invalid task number.")

while True:
    print("\nOptions:")
    print("1. Display To-Do List")
    print("2. Add Task")
    print("3. Remove Task")
    print("4. Update Task")
    print("5. Exit")
    
    choice = input("Enter your choice: ")
    
    if choice == '1':
        display_todo_list()
    elif choice == '2':
        task = input("Enter the task: ")
        add_task(task)
    elif choice == '3':
        task_number = int(input("Enter the task number to remove: "))
        remove_task(task_number)
    elif choice == '4':
        task_number = int(input("Enter the task number to update: "))
        new_task = input("Enter the updated task: ")
        update_task(task_number, new_task)
    elif choice == '5':
        print("Goodbye!")
        break
    else:
        print("Invalid choice. Please select a valid option.")

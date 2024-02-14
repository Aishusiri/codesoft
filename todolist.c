class ToDoList:
    def _init_(self):
        self.tasks = {}

    def add_task(self, task):
        self.tasks[task] = False
        print("Task added successfully!")

    def remove_task(self, task):
        if task in self.tasks:
            del self.tasks[task]
            print("Task removed successfully!")
        else:
            print("Task not found in the list.")

    def mark_task_complete(self, task):
        if task in self.tasks:
            self.tasks[task] = True
            print("Task marked as complete!")
        else:
            print("Task not found in the list.")

    def view_tasks(self):
        if self.tasks:
            print("Your To-Do List:")
            for task, completed in self.tasks.items():
                status = "Done" if completed else "Pending"
                print(f"- {task}: {status}")
        else:
            print("Your To-Do List is empty.")

# Example usage:
if _name_ == "_main_":
    todo = ToDoList()

    while True:
        print("\nMenu:")
        print("1. Add Task")
        print("2. Remove Task")
        print("3. Mark Task as Complete")
        print("4. View Tasks")
        print("5. Exit")

        choice = input("Enter your choice: ")

        if choice == "1":
            task = input("Enter the task: ")
            todo.add_task(task)
        elif choice == "2":
            task = input("Enter the task to remove: ")
            todo.remove_task(task)
        elif choice == "3":
            task = input("Enter the task to mark as complete: ")
            todo.mark_task_complete(task)
        elif choice == "4":
            todo.view_tasks()
        elif choice == "5":
            print("Exiting...")
            break
        else:
            print("Invalid choice! Please try again.")
queue = []

while True:
    print("\n--- Queue Menu ---")
    print("1. Enqueue")
    print("2. Dequeue")
    print("3. Display")
    print("4. Exit")

    choice = int(input("Enter Your Choice: "))

    if choice==1:
        element = input("Enter Element: ")
        queue.append(element)
        print(element, "added to queue")

    elif choice ==2:
        if len(queue)==0:
            print("Queue is Empty")
        else:
            element = queue.pop(0)
            print(element, "removed from the queue")

    elif choice==3:
        if len(queue)==0:
            print("Queue is Empty")
        else:
            print("Queue", queue)

    elif choice == 4:
        print("Program Ended.")
        break

    else:
        print("Invalid choice")
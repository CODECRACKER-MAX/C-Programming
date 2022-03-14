// Concept of Circular Queue in C

#include <stdio.h>


int MAX_SIZE = 3;
int my_array[3]; // Maximum size of the array.

int front = 0;  // for deleting elements.
int rear = -1;  // for adding the elements.

// Functions used in the program are:

void enqueue()
{
    // Before adding element check if the queue is full or not.

    int a = IsFull();

    if (a == 1)
    {
        printf("Sorry, the queue is full, you cannot add more elements in the queue! \n\n");
        main();
    }

    // If the returned value is not equals to 1, then it's not full.
    else
    {
        int temp;
        printf("Enter the element to add in the queue: ");
        scanf("%d",&temp);
        rear++;
        my_array[rear] = temp;
        printf("\nRear = %d \n", rear);
    }

}

void dequeue()
{
    // First check if the front value is greater than -1.

    if (front != -1 && front < rear)
    {
        front++;
    }

    else
    {
        printf("Queue underflow\n");
    }

}

// Display all the available items in the queue.
void Display()
{

    printf("Items in the queue are: ");
    for (int i = front; i <= rear; i++)
    {
        printf("%d ", my_array[i]);
    }

}

int IsFull()
{

   if (rear - front >= 2)
   {
       printf("The queue is full! \n");
       return 1;
   }

   else
   {
       return 0;
   }

}

int IsEmpty()
{
    if (front == -1)
    {
        printf("The queue is empty! \n");
        return 1;
    }

    else
    {
        return 0;
    }

}

void main()
{
    while(1)
    {

        printf("\nRear = %d\n", rear);
        printf("Front = %d\n",front);

        int choice;

        printf("\t\t\t\t\t\tCircular Queue in C \n\n\n");
        printf("1. Enqueue \n");
        printf("2. Dequeue \n");
        printf("3. Display \n");
        printf("4. IsFull \n");
        printf("5. IsEmpty \n");
        printf("6. Exit \n\n\n");

        // All operations for available options.

        printf("Enter your choice: ");
        scanf("%d",&choice);

        if (choice == 1)
        {
            enqueue();
        }

        else if (choice == 2 )
        {
            dequeue();
        }

        else if (choice == 3)
        {
            Display();
        }

        else if (choice == 4)
        {
            IsFull();
        }

        else if (choice == 5)
        {
            IsEmpty();
        }

        else
        {
            printf("Invalid choice! Please choose anyone of the available operations \n");
            main();
        }

    }


}

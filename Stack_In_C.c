// Implementation of stack in C, [Last In First Out]

#include <stdio.h>

int top = -1; // Used for adding and deleting items from the stack.
int my_data[3];
int MASKSTACK = 2;

void Design()
{

    printf("\t\t\t\t\t  Stack Implementation In C \n\n");
    printf("\t\t\t\t\t\t============= \n");
    printf("\t\t\t\t\t\t||Main Menu|| \n");
    printf("\t\t\t\t\t\t============ \n\n\n");

}

void Push() // Used to add items in the stack!
{

    if (top >= MASKSTACK) // If the elements in the stack are equals to 3.
    {
        printf("\nStack Overflow !");
    }

    else // If the elements in the stack are not equal to 3 neither are greater then 3.
    {
        int elem;
        printf("Enter the element to add: ");
        scanf("%d",&elem);
        top = top + 1; // Since, the starting value of top is -1, We will increment it in the beginning.
        my_data[top] = elem;
    }
    printf("\n\n");

}

void Pop() // To delete items from the stack.
{

    // First To Check If The Stack is underflow!
    if (top <= -1)
    {
        printf("\nStack Underflow!");
        // main();
    }

    else
    {
        top = top - 1; // Deleting the value's from the stack.
    }
    printf("\n\n");

}

void Display()
{
    // To display the elements presented in the stack.

    printf("\nThe elements in the stack are: ");

    for (int i = top; i >= 0; i--) // Reverse The Displaying Process, Since we need to place the last element in the first place
    {
        printf("%d ",my_data[i]);
    }

    printf("\n\n");

}


void main()
{

    Design();

    while(1)
    {

    int usr_choice;

    printf("1. Add Items to Stack \n");
    printf("2. Delete Items from Stack \n");
    printf("3. Display Items from Stack \n");
    printf("4. Exit \n\n");
    printf("Enter your choice: ");
    scanf("%d",&usr_choice);

    if (usr_choice == 1)
    {
        Push();
    }

    else if (usr_choice == 2)
    {
        Pop();

    }

    else if (usr_choice == 3)
    {
        Display();
    }

    else if (usr_choice == 4)
    {

        exit(1); // Exit the application!
    }

    else
    {
        printf("Invalid Option Entered!Please Choose any one of the following options \n\n");
    }

    }
}

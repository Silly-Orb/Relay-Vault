#include <stdio.h>

#define MAX 100 // Maximum size of the array

// Function to display the elements of the array

void display(int arr[], int size)
{

    if (size == 0)
    {

        printf("Array is empty.\n");

        return;
    }

    printf("Elements of the array: ");

    for (int i = 0; i < size; i++)
    {

        printf("%d ", arr[i]);
    }

    printf("\n");
}

// Function to insert an element into the array

void insert(int arr[], int *size, int element, int position)
{

    if (*size >= MAX)
    {

        printf("Array is full. Cannot insert more elements.\n");

        return;
    }

    if (position < 0 || position > *size)
    {

        printf("Invalid position. Please enter a valid position.\n");

        return;
    }

    for (int i = *size; i > position; i--)
    {

        arr[i] = arr[i - 1];
    }

    arr[position] = element;

    (*size)++;

    printf("Element inserted successfully.\n");
}

// Function to delete an element from the array

void delete(int arr[], int *size, int position)
{

    if (*size == 0)
    {

        printf("Array is empty. Cannot delete elements.\n");

        return;
    }

    if (position < 0 || position >= *size)
    {

        printf("Invalid position. Please enter a valid position.\n");

        return;
    }

    for (int i = position; i < *size - 1; i++)
    {

        arr[i] = arr[i + 1];
    }

    (*size)--;

    printf("Element deleted successfully.\n");
}

int main()
{

    int arr[MAX];

    int size = 0, choice, element, position;

    while (1)
    {

        printf("\nMenu:\n");

        printf("1. Insert an element\n");

        printf("2. Delete an element\n");

        printf("3. Display all elements\n");

        printf("4. Exit\n");

        printf("Enter your choice: ");

        scanf("%d", &choice);

        switch (choice)
        {

        case 1:

            printf("Enter the element to insert: ");

            scanf("%d", &element);

            printf("Enter the position to insert (0-based index): ");

            scanf("%d", &position);

            insert(arr, &size, element, position);

            break;

        case 2:

            printf("Enter the position of the element to delete (0-based index): ");

            scanf("%d", &position);

            delete (arr, &size, position);

            break;

        case 3:

            display(arr, size);

            break;

        case 4:

            printf("Exiting the program.\n");

            return 0;

        default:

            printf("Invalid choice. Please try again.\n");
        }
    }
}
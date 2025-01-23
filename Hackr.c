#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int elements;

    scanf("%d", &elements);

    int arr[5];

    for (int i = 0; i < elements; i++)
    {
        scanf("%d", &arr[i]);
    }

    // no. of queries to perform==3

    int query;
    scanf("%d", &query);

    for (int i = 0; i < query; i++)
    {

        int choice;
        scanf("%d", &choice);

        switch (choice)
        {
        // case==1, only insert 20 to the last spot of the array
        case 1:
        {
            int insert;
            scanf("%d", &insert);
            arr[elements] = insert;
            elements++;
            break;
        }
        // case==2
        case 2:
        {
            int value;
            scanf("%d", &value);
            int inpos2;
            scanf("%d", &inpos2);
            if (inpos2 < elements && inpos2 >= 0)
            {

                for (int i = elements; i > inpos2; i--)
                {
                    arr[i] = arr[i - 1];
                }
                arr[inpos2] = value;
                elements++;
                printf("[");
                for (int i = 0; i < elements; i++)
                {
                    if (i != elements - 1)
                    {
                        printf("%d, ", arr[i]);
                    }

                    else
                    {
                        printf("%d", arr[i]);
                    }
                }
                printf("]");
                printf("\n");
            }
            else
            {
                printf("Invalid position\n");
            }
            break;
        }

        default:
            printf("Invalid position\n");
        }
    }

    return 0;
}
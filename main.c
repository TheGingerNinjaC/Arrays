// Chane van der Berg
// 18/08/2018
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    size_t n;                           // Array size
    printf("Enter size of array: ");    // Prompt user input
    scanf("%d", &n);                    // Read user input
    int arr[n];                         // Array of size n
    size_t i;                           // Index
    int m;

    // Prompt and receive values
    for(i = 0; i < n ; i++)
    {
        printf("Enter value for array index %d: ", i);
        scanf("%d", &arr[i]);
    }

    // Output the array
    printf("Current array: ");

    for(i = 0; i < n; i++)
    {
        printf("%d " , arr[i]);
    }

    // Prompt number to shift
    printf("\nEnter the number of positions to shift: ");
    scanf("%d", &m);

    int temp[n];                            // Temporary array
    for(i = 0; i < n; i++)
    {
        if((i+m)<n)                         // Shift within boundaries
            temp[i+m] = arr[i];
        else                                // Shift end numbers to front
        {
            temp[i+m-n] = arr[i];
        }
    }

    // Output new array
    for(i = 0; i < n; i++)
    {
        printf("%d ", temp[i]);
    }
    return 0;
}

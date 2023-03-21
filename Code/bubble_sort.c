#include <stdio.h>

int main()
{
    int arr[] = {35, 7, 9, 2, 4, 23, 12, 67, 19};  // create array.
    int elements = sizeof(arr) / sizeof(arr[0]); //find size of array or amount of elements in array.
    int temp = 0;   // create temporary slot.
    for (int i = 0; i < elements; i++)  // loop from i = 0 to amount of elements in array - 1.
    {
        for (int j = i + 1; j < elements; j++) // loop from j = 0 to amount of elements in array - 1.
        {
            if (arr[i] < arr[j]) // check if index n < index n + 1.
            {
                temp = arr[j];   // assign value of index n + 1 to tempoary.
                arr[j] = arr[i]; // assign value of index n to index n + 1.
                arr[i] = temp;  // assign value of tempoary to index n.
            }
        }
    }
    for (int i = 0; i < elements; i++) // display elements in array.
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
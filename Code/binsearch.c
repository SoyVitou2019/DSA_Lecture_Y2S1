#include <stdio.h>

void bin_search(int sizeElements, int search, int arr[]);
// void inserts(int arr[], int sizeElements);
// void delete(int arr[], int search, int sizeElements);
int main()
{

    int arr[] = {2, 3, 5, 45, 67, 75, 87, 93, 234};
    int sizeElements = sizeof(arr) / sizeof(arr[0]);
    // inserts(arr, sizeElements);

    int search = 67;
    bin_search(sizeElements, search, arr);
    // binary search
    // printf("%d",arr[]);

    // display elements in arrays.
    // for (int i = 0; i < sizeElements; i++)
    // {
    //     printf("%d ", arr[i]);
    // }
    return 0;
}

void bin_search(int sizeElements, int search, int arr[])
{
    int low = 0;
    int up = sizeElements - 1;
    int mid = 0;
    int index = 0;
    while (low <= up)
    {
        mid = (low + up) / 2;
        if (search == arr[mid])
        {
            index = mid;
            break;
        }
        else if (search < arr[mid])
        {
            up = mid - 1;
        }
        else if (search > arr[mid])
        {
            low = mid + 1;
        }
    }
}

void inserts(int arr[], int sizeElements)
{
    int temp = 0;
    int search = 0;
    printf("Enter number search :");
    scanf("%d", &search);
    for (int j = 0; j < sizeElements; j++)
    {
        if (search >= arr[j] && search <= arr[j + 1])
        {
            for (int i = j; i < sizeElements; i++)
            {
                temp = arr[i];
                arr[i] = search;
                search = arr[i + 1];
            }
            break;
        }
    }
}

void delete(int arr[], int search, int sizeElements)
{

    for (int i = 0; i < sizeElements; i++)
    {
        if (search == arr[i])
        {
            for (int j = i; j < sizeElements - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
        }
    }
}
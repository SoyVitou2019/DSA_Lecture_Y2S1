#include <stdio.h>

void delete(int index, int count, int arr[]);
void insert(int index, int value, int arr[]);
void delete_all(int value, int arr[]);
void search_duplicate(int value, int arr[]);
void search_None_duplicate(int value, int arr[]);

int main()
{
    int arr[] = {233, 38, 24, 55, 24, 0};

    // all function are here.
    // delete(2, 5, arr);
    // insert(2, 345, arr);
    // delete_all(24, arr);
    // search_duplicate(24, arr);
    // search_None_duplicate(24, arr);

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

void delete(int index, int count, int arr[])
{
    for (int i = index; i < count; i++)
    {
        arr[i] = arr[i + 1];
    }
}

void insert(int index, int value, int arr[])
{
    int temp = 0;
    for (int i = index; i < 5 + 1; i++)
    {
        temp = arr[i];
        arr[i] = value;
        value = temp;
    }
}
void delete_all(int value, int arr[])
{
    int temp = 0;
    for (int i = 0; i < 5; i++)
    {
        if (value == arr[i])
        {
            for (int j = i; j < 5 + 1; j++)
            {

                arr[j] = arr[j + 1];
            }
        }
    }
}
void search_duplicate(int value, int arr[])
{
    int count = 0;
    for (int i = 0; i < 6; i++)
    {
        if (value == arr[i])
        {
            count++;
        }
    }
    printf("The number %d have :%d element.\n", value, count);
}
void search_None_duplicate(int value, int arr[])
{
    int count = 0;
    for (int i = 0; i < 6; i++)
    {
        if (value == arr[i])
        {
            printf("The number %d at index : %d in arrays. \n", value, i);
            break;
        }
    }
}

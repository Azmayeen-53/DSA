#include <stdio.h>

int linear_search(int array[], int element, int size)
{

    for (int i = 0; i < size; i++)
    {
        if (array[i] == element)
        {

            return i;
        }
    }
    return -1;
}

int main()
{

    int array[100] = {
        2,
        3435,
        4,
        54,
        23,
        23,
        2,
    };
    int size = sizeof(array) / sizeof(int);

    int elment = 273;
    int search = linear_search(array, elment, size);
    printf("The seaching element is %d and it found in %d index ", elment, search);
}
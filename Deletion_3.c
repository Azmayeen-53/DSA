#include <stdio.h>

void display(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d, ", array[i]);
    }
    printf("\n");
}

void deletion(int array[], int size, int index)
{

    for (int i = index; i < size - 1; i++)
    {
        array[i] = array[i + 1];
    }
}

int main()
{
    int array[100] = {5, 45, 76, 565, 45, 5, 3, 3};
    int size = 8;
    display(array, size);
    deletion(array, size, 3);
    size-=1;
    display(array,size);
}
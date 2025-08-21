#include<stdio.h>

void display(int *array, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
}

int insertion(int array[], int size, int element, int capasity,int index ){
        if (size>capasity)
        {
            return-1;
        }

    for (int i = size-1; i>=index; i--)
    {
        array[i+1]=array[i];
    }
    array[index]=element;
    return 1;
}
int main(){

    int array[100]={1,2,4,5,6,7,7};
    int size=7;
    display(array,size);
    insertion(array,size,564,100,2);
    size+=1;
    display(array,size);



}
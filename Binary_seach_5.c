#include <stdio.h>

int binary(int array[], int size, int element)
{
    int low = 0, mid, high = size - 1;
  
    while (low <= high)
    {
          mid = (low + high) / 2;
        if (array[mid] == element)
        {
            return mid;
        }
        else if (array[mid]< element)
        {

            low = mid + 1;
        }
        else{
            high=mid-1;
        }
    }
    return-1;
}
int main()
{
    int arr[]={5,55,56,133,156,234,544,666,876,5476,7655};
    int size=sizeof(arr)/sizeof(int);
    int element=666;
    int search=binary(arr,size,element);
    printf("The element is %d in the %d index",element,search);

}
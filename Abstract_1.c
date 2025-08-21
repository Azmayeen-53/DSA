#include<stdio.h>
#include<stdlib.h>

struct array
{// its a flexible array system not a fixed one like array [10]
    int *value;
    int total_size;
    int used_size;
};

void createarray(struct array *n, int total, int usize ){// *n is a pointer  
    // THis is constuctor in OOP
    n->total_size=total; // setting how much sace need to reserved
    n->used_size=usize; // how much I need to use 
    n->value=(int*)malloc(total *sizeof(int)); 

}
void set(struct array*n){
    int a;
    for(int i=0; i<n->used_size; i++){
        printf("Enter the element %d \n",i);
        scanf("%d",&a);
        n->value[i] =a;
    } 
}

void show(struct array*n){
    for (int i = 0; i < n->used_size; i++)
    {
        printf("%d\n",n->value[i]);
    }
    
}

int main(){

    struct array number;
    createarray(&number, 10,5);  
    set(&number);   
    show(&number);

    struct array bolaka;
    createarray(&bolaka,30,6);


}
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

void linkedlist(struct Node *popo){
    while(popo!=NULL){
        printf("%d\n",popo->data);
        popo= popo->next;
    }
}
int main(){

    struct Node *head;
    struct Node *first;
    struct Node *second;

    head=(struct Node*)malloc(sizeof (struct Node));
    second=(struct Node*)malloc(sizeof (struct Node));
    first=(struct Node*)malloc(sizeof (struct Node));

    scanf("%d",&head->data);
    head->next=first;

    first->data=67;
    first->next=second;

    second->data=45;
    second->next=NULL;

    linkedlist(head);

}
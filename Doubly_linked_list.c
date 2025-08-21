#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
    struct node* prev;
};

struct node* doubly_Linked_list(struct node* head, struct node* tail){
    struct node* ptr=head;
    while (ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;

    }
    printf("\n");
    struct node* qtr=tail;
     while (qtr!=NULL)
    {
        printf("%d ",qtr->data);
        qtr=qtr->prev;

    }
    return head;


}
int main(){

     struct node* head = (struct node*)malloc(sizeof(struct node));
    struct node* second = (struct node*)malloc(sizeof(struct node));
    struct node* third = (struct node*)malloc(sizeof(struct node));

    head->data = 10;
    head->next = second;
    head->prev = NULL;

    second->data = 20;
    second->next = third;
    second->prev = head;

    third->data = 30;
    third->next = NULL;
    third->prev = second;

    head=doubly_Linked_list(head,third);

}

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct node* Linked_list_seaching(struct node* head, int value){
    struct node* ptr=head;
    while (ptr!=NULL)
    {
        if (ptr->data==value)
        {
            printf("The value %d is in the linked list",value);
            return ptr;
        }
        ptr=ptr->next;  
    }
    printf("Linked list doesn't have the value %d\n", value);
    return NULL;
}
int main(){
    struct node* head;
    struct node* first;
    struct node* second;


    head=(struct node*)malloc(sizeof(struct node));
    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));

    head->data=456;
    head->next=first;

    first->data=34;
    first->next=second;

    second->data=23;
    second->next=NULL;

    head=Linked_list_seaching(head,233);


}


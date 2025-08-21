#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *Linked_list_circular(struct node *head)
{
    struct node *ptr = head;

    do
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;

    } while (ptr != head);
}
int main()
{

    struct node *head;
    struct node *FIRST;
    struct node *SECOND;

    head = (struct node *)malloc(sizeof(struct node));
    FIRST = (struct node *)malloc(sizeof(struct node));
    SECOND = (struct node *)malloc(sizeof(struct node));

    head->data = 65;
    head->next = FIRST;

    FIRST->data = 23;
    FIRST->next = SECOND;

    SECOND->data = 213;
    SECOND->next = head;

    head = Linked_list_circular(head);
}

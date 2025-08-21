#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
// insertion at the begenning
struct node *linked_first(struct node *head, int data)
{

    struct node *ptr = (struct node *)malloc(sizeof(struct node));

    ptr->data = data;
    ptr->next = head;
    return ptr;
}

// insertion at the end

struct node *linked_end(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = NULL;
    ptr->data = data;

    struct node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = ptr;
    return head;
}

// insertion in the middle

struct node *linked_where_you_want(struct node *head, int data, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *temp = head;
    int i = 0;
    while (i != index - 1)
    {
        temp = temp->next;
        i++;
    }
    ptr->data = data;
    ptr->next = temp->next;
    temp->next = ptr;
    return head;
}

void display(struct node *head)
{
    while (head != NULL)
    {
        printf("%d\n", head->data);
        head = head->next;
    }
}

int main()
{
    struct node *head;
    struct node *first;
    struct node *second;
    struct node *third;

    head = (struct node *)malloc(sizeof(struct node));
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 56;
    head->next = first;

    first->data = 44;
    first->next = second;

    second->data = 66;
    second->next = third;

    third->data = 12;
    third->next = NULL;

    head = linked_first(head, 334);

    head = linked_end(head, 4455);

    head = linked_where_you_want(head, 69, 2);

    display(head);
}


#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *deletion_at_first(struct node *head)
{
    struct node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

struct node *deletion_at_middle(struct node *head, int index)
{
    struct node *ptr = head;
    struct node *qtr = head->next;
    for (int i = 0; i < index - 1; i++)
    {

        ptr = ptr->next;
        qtr = qtr->next;
    }
    ptr->next = qtr->next;
    free(qtr);

    return head;
}

struct node *deletion_at_last(struct node *head)
{
    struct node *ptr = head;
    struct node *qtr = head->next;
    while (qtr->next != NULL)
    {

        ptr = ptr->next;
        qtr = qtr->next;
    }
    ptr->next = NULL;
    free(qtr);

    return head;
}

void traversal(struct node *head)
{
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
}

int main()
{
    struct node *head;
    struct node *first;
    struct node *second;

    head = (struct node *)malloc(sizeof(struct node));
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));

    head->data = 5;
    head->next = first;

    first->data = 44;
    first->next = second;

    second->data = 56;
    second->next = NULL;

    head = deletion_at_middle(head, 1);
    traversal(head);
}

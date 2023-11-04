#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

int main()
{
    //Linked Lists
    struct node *head = malloc(sizeof(struct node));
    head->data = 1;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 2;
    current->link = NULL;
    head->link = current;

    current = malloc(sizeof(struct node));
    current->data = 3;
    current->link = NULL;
    head->link->link = current;

    printf("Enter a Data: ");
    int input;
    scanf("%d", &input);

    ///Creates a new node
    struct node *ptr, *temp;
    ptr = head;
    temp = malloc(sizeof(struct node));

    temp->data = input;
    temp->link = NULL;

    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = temp;

    //Prints the New Node
    int count = 0;
    ptr = head;
    while (ptr != NULL)
    {
        count++;
        printf("The Node #%d has a data of %d\n", count, ptr->data);
        ptr = ptr->link;
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct list
{
    char task[100];
    struct list *next;
};

int menu(int input);

int main()
{

    int input, count = 0;
    struct list *head = malloc(sizeof(struct list));
    head->next = NULL;

    do
    {
        input = menu(input);
        struct list *ptr, *temp;
        temp = malloc(sizeof(struct list));
        ptr = head;

        char desc[100];

        switch (input)
        {
        case 1:
            printf("Enter task: ");
            scanf(" %100[^\n]", desc);

            strncpy(temp->task, desc, sizeof(head->task));
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = temp;
            count++;
            break;
        case 2:
            if (count == 0)
            {
                printf("\nYour List is Empty\n");
            }
            else
            {
                printf("\nTo-Do List!\n");

                while (ptr->next != NULL)
                {
                    printf("%d. %s\n", count, ptr->task);
                    ptr = ptr->next;
                }
            }
        }
    } while (input != 4);

    return 0;
}

int menu(int input)
{
    do
    {

        printf("[1] Add Task\n");
        printf("[2] Print List\n");
        printf("[3] Remove Task\n");
        printf("[4] Exit\n");

        scanf("%d", &input);

    } while (input < 0 || input > 4);
}

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head;

int main()
{
    struct node *first = (struct node*) malloc(sizeof(struct node));
    struct node *second = (struct node*) malloc(sizeof(struct node));

    head = first;

    first->data = 1;
    first->next = second;

    second->data = 2;
    second->next = NULL;


    if(head == NULL)
    {
        printf("a lista encadeada não foi iniciada\n");
        return 0;
    }
    else
    {
        printf("%d %d\n", head->data, second->data);
        
        free(second);
        second = NULL;

        free(first);
        first->next = NULL;

        free(head);

        printf("A lista foi desalocada\n");
    }
    
    return 0;
}
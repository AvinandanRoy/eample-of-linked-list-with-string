#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int name ;
    struct Node* next ;
};

void printList(struct Node* element )
{
    while(element != NULL){
        printf("%s\n",element->name);
        element = element->next;
    }
}

int main()
{
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;
    struct Node* forth = NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    forth = (struct Node*)malloc(sizeof(struct Node));

    head->name = "Krishna Kanta Roy";
    head->next= second;

    second->name = "Lipka Rani Roy";
    second->next = third;

    third->name = "Avinandan Roy";
    third->next= forth;

    forth->name = "Pranta Roy ";
    forth->next= NULL;

    printList(head);
}


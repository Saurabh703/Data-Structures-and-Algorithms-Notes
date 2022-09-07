#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node * next;
    struct Node * prev;
};

void linkedListTraversal(struct Node * ptr){
    // while (ptr != NULL)
    // {
    //      printf("Element forward: %d\n", ptr->data);
    //      ptr = ptr->next;
    // }
    while (ptr!=NULL)
    {
        printf("%d\n", ptr->prev);
        ptr = ptr->prev;
    }
    
    
   }

int main()
{
    struct Node * head;
    struct Node * second;
    struct Node * third;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *) malloc(sizeof(struct Node));
    second = (struct Node *) malloc(sizeof(struct Node));
    third = (struct Node *) malloc(sizeof(struct Node));
    
    // Link first and second nodes
    head->data = 7;
    head->next = second;
    head->prev = NULL;

    // Link second and third nodes
    second->data = 11;
    second->next = third;
    second->prev = head;

    // Terminate the list at the third node
    third->data = 77;
    third->next = NULL;
    third->prev = second;

    linkedListTraversal(head);
    return 0;
}
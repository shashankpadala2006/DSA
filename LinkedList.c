#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};
void linkedListTraversls(struct Node *ptr){
    while(ptr!=NULL){
        printf("element: %d\n",ptr->data);
        ptr = ptr->next;
    }
}
int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *forth;
    struct Node *fifth;


    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    forth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;
    
    third->data = 66;
    third->next = forth;

    forth->data = 67;
    forth->next = fifth;

    fifth->data = 69;
    fifth->next = NULL;

    linkedListTraversls(head);
    return 0;
}

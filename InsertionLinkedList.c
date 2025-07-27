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
// INSERT AT FIRST
struct Node * insertAtFirst(struct Node *head,int data ){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node)); 
    ptr -> data = data;
    ptr -> next = head;    
    return ptr;
}
// <======================================================================================>
// INSERT AT End
struct Node * insertAtEnd(struct Node *head,int data ){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node)); 
    ptr -> data = data;
    struct Node *p = head;

    while(p->next!=NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}
// <======================================================================================>
// INSERT AT INDEX
struct Node * insertAtIndex(struct Node *head,int data,int index){
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;
    while(i!=index-1){
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
// <======================================================================================>
// INSERT AFTER NODE
struct Node * insertAfterNode(struct Node *head,struct Node *PrevNode,int data){
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr -> data = data;

    ptr->next=PrevNode->next;
    PrevNode->next = ptr;

    return head;
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

    printf("Before Insetion\n");
    linkedListTraversls(head);
    //head = insertAtFirst(head,56);
    //head = insertAtIndex(head,56,3);
    //head = insertAtEnd(head,55);
    head = insertAfterNode(head,third,45);
    printf("After Insetion\n");
    linkedListTraversls(head);

    return 0;
}
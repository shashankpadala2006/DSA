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
// <==============================================================>
//DELETING THE HEAD
struct Node * deleteFirst(struct Node * head){
    struct Node * ptr = head;
   head = head->next;
    free(ptr);
    return head;
}
// <==============================================================>
//DELETING AT A GIVEN INDEX
struct Node * deleteAtIndex(struct Node * head,int index){
    struct Node *p = head;
    struct Node *q = head->next;
    for(int i = 0;i<index-1;i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next =  q->next;
    free(q);
    return head;
}
// <==============================================================>
//DELETING LAST ELEMENT
struct Node * deleteAtIndex(struct Node * head,int value){
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->next !=NULL)
   {
        p = p->next;
        q = q->next;
   }
   p->next = NULL;
   free(q);
    return head;
}
// <==============================================================>
//DELETING AT A GIVEN VALUE
struct Node * deleteAtGivenValue(struct Node * head,int value){
    struct Node *p = head;
    struct Node *q = head->next;
    while(q->data!=value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if(q->data == value){
        p->next = q->next;
        free(q);
    }
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

    printf("Linked list before deletion\n");
    linkedListTraversls(head);

    head = deleteAtGivenValue(head,3);
    printf("Linked list after deletion\n");
    linkedListTraversls(head);
    return 0;
}
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void linkedListTraversal(struct Node* ptr){
    while(ptr!=NULL){
    printf("Element: %d\n", ptr->data);
    ptr = ptr->next;
    }
}


struct Node * insertAtFirst(struct Node *head, int data){
    struct Node * ptr  = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}


struct Node * insertOnIndex(struct Node *head, int data, int index){
     struct Node * ptr  = (struct Node *)malloc(sizeof(struct Node));
     struct Node *p = head;
     int i=0;

     while(i!=index-1){
        p=p->next;
        i++;
     }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;

    return head;
}


struct Node * insertAtEnd(struct Node *head, int data){
    struct Node * ptr  = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node* p = head;

    while(p->next!=NULL){
        p = p->next;
    }
    p->next =  ptr;
    ptr->next = NULL;

    return head;
}


struct Node * insertAfterNode(struct Node *head,  struct Node* prevNode, int data){
    struct Node * ptr  = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
   
   ptr->next = prevNode->next;
   prevNode->next = ptr;

    return head;
}


int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    //Allocate memory in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    //Link first and second nodes
    head->data = 7;
    head->next = second;

    //Link second and third node
    second->data = 11;
    second->next = third;

    //Link third and fourth node
    third->data = 66;
    third->next = fourth;

    //Terminate the list at fourth node
    fourth->data = 41;
    fourth->next = NULL;

    printf("Linked list before Insertion \n");
    linkedListTraversal(head);

    //head = insertAtFirst(head,66);
    //head = insertOnIndex(head,76,2);
    //head = insertAtEnd(head,99);
    //head = insertAfterNode(head,third,99);

    printf("Linklist after insertion \n");
    linkedListTraversal(head);
}
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void linkedListTraversal(struct Node* head){
    struct Node * ptr = head;
    do{
    printf("Element: %d\n", ptr->data);
    ptr = ptr->next;
    }while(ptr!=head);
}

struct Node* InsertAtFirst(struct Node* head, int data){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node* p = head->next;

    while(p->next!=head){
    p = p->next;
    }

    ptr->next =head;
    ptr->data = data;
    p->next = ptr;

    return ptr;
}

struct Node* InsertAtEnd(struct Node* head, int data){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node* p = head->next;
    
    while(p->next!=head){
    p = p->next;
    }

    p->next = ptr;
    ptr->data = data;
    ptr->next = head;

    return head;
}

struct Node* InsertAtIndex(struct Node* head, int data, int Index){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node* p = head;

    int i=1;
    while(i!=Index-1){
        p = p->next;
        i++;
    }

    ptr->next = p->next;
    p->next = ptr;
    ptr->data = data;

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
    head->data = 4;
    head->next = second;

    //Link second and third node
    second->data = 3;
    second->next = third;

    //Link third and fourth node
    third->data = 6;
    third->next = fourth;

    //link fourth and head node
    fourth->data = 1;
    fourth->next = head;

    printf("Circular LinkedList before Insertion:\n");
    linkedListTraversal(head);

    //head = InsertAtFirst(head,0);
    //head = InsertAtEnd(head,9);
    //head = InsertAtIndex(head,5,2);


    printf("Circular Linkedlist after insertion:\n");
    linkedListTraversal(head);
}
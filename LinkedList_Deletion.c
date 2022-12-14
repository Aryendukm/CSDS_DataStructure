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

// Case1: deleting the first element from the linked list
struct Node* deletFirst(struct Node* head){
    struct Node * ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

//Case2: delete at Index Node
struct Node * deleteAtIndex(struct Node* head, int index){
    struct Node * p = head;
    struct Node * q = head->next;

    for(int i=0; i<index-1;i++){
        p=p->next;
        q=q->next;
    }

    p->next = q->next;
    free(q);

    return head;
}


//Case3: delete last node
struct Node * deleteLastNode(struct Node* head){
    struct Node * p = head;
    struct Node * q = head->next;

    while(q->next!=NULL){
        p=p->next;
        q=q->next;
    }

    p->next = NULL;
    free(q);

    return head;
}



//Case4: delete at Given Value
struct Node * deleteAtValue(struct Node* head, int value){
    struct Node * p = head;
    struct Node * q = head->next;

    while(q->data!=value && q->next!=NULL){
        p=p->next;
        q=q->next;
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
    third->data = 8;
    third->next = fourth;

    //Terminate the list at fourth node
    fourth->data = 1;
    fourth->next = NULL;

    printf("LinkedList Before Deletion\n");
    linkedListTraversal(head);

    //head = deletFirst(head);
    //head = deleteAtIndex(head,2);
    //head = deleteLastNode(head);
    //head = deleteAtValue(head,8);

    printf("LinkedList After deletion\n");
    linkedListTraversal(head);

}
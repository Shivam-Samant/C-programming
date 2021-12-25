#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void LLTraversal(struct Node* head){
    struct Node* ptr = head;
    do{
        printf("Element: %d\n",ptr->data);
        ptr = ptr->next;
    }
    while(ptr!=head);
}

struct Node* insertAtFirst(struct Node* head, int data){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr -> data = data;
    struct Node* p = head ->next;
    while(p->next != head){
        p = p -> next;
    }
    // At this point p points to the last node of this circular linked list

    p -> next = ptr;
    ptr -> next = head;
    head = ptr;
    return head;
}

int main(){
    struct Node* Head;
    struct Node* Second;
    struct Node* Third;
    struct Node* Fourth;

    Head = (struct Node*)malloc(sizeof(struct Node));
    Second = (struct Node*)malloc(sizeof(struct Node));
    Third = (struct Node*)malloc(sizeof(struct Node));
    Fourth = (struct Node*)malloc(sizeof(struct Node));

    Head -> data = 7;
    Head -> next = Second;

    Second -> data = 11;
    Second -> next = Third;

    Third -> data = 15;
    Third -> next = Fourth;

    Fourth -> data = 19;
    Fourth -> next = Head;

    LLTraversal(Head);

    printf("\n");

    Head = insertAtFirst(Head, 1);

    printf("\n");

    LLTraversal(Head);

    return 0;
}

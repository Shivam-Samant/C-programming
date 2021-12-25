#include<stdio.h>
#include<stdlib.h>

struct Node{
    struct Node* prev;
    int data;
    struct Node* next;
};

void LLTraversal(struct Node* head){
    struct Node* p = head;
    while(p->next!=NULL){
        printf("Element: %d\n",p->data);
        p = p -> next;
    }
}

int main(){
    struct Node* Head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* Second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* Third = (struct Node*)malloc(sizeof(struct Node));
    struct Node* Fourth = (struct Node*)malloc(sizeof(struct Node));

    Head -> prev = NULL;
    Head -> data = 1;
    Head -> next = Second;

    Second -> prev = Head;
    Second -> data = 2;
    Second -> next = Third;

    Third -> prev = Second;
    Third -> data = 3;
    Third -> next = Fourth;

    Fourth -> prev = Third;
    Fourth -> data = 1;
    Fourth -> next = NULL;

    LLTraversal(Head);

    return 0;
}
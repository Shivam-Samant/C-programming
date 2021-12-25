#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

void LLTraversal(struct Node* ptr){
    while(ptr!=NULL){
        printf("Element: %d\n",ptr->data);
        ptr = ptr->next;
    }
}

struct Node* insertAtFirst(struct Node* Head, int data)
{
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr -> next = Head;
    ptr -> data = data;
    return ptr;
};

void insertAtIndex(struct Node* Head, int data, int index)
{
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node* p = Head;
    int i=0;
    while(i!=index-1){
        p = p -> next;
        i++;
    }
    ptr -> data = data;
    ptr -> next = p ->next;
    p -> next = ptr;
};

void insertAtEnd(struct Node* Head, int data){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node* p = Head;
    while(p->next!=NULL){
        p = p -> next;
    }
    p -> next = ptr;
    ptr -> data = data;
    ptr -> next = NULL;
}

void insertAfterNode(struct Node* prevNode,int data){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr -> next = prevNode -> next;
    prevNode -> next = ptr;
    ptr -> data = data;
}

int main(){
    struct Node* Head;
    struct Node* Second;
    struct Node* Third;

    Head = (struct Node*)malloc(sizeof(struct Node));
    Second = (struct Node*)malloc(sizeof(struct Node));
    Third = (struct Node*)malloc(sizeof(struct Node));

    Head -> data = 7;
    Head -> next = Second;

    Second -> data = 11;
    Second -> next = Third;

    Third -> data = 15;
    Third -> next = NULL;

    LLTraversal(Head);

    printf("\n");

    Head = insertAtFirst(Head,3);

    LLTraversal(Head);
    
    printf("\n");

    insertAtIndex(Head, 20, 2);

    LLTraversal(Head);

    printf("\n");

    insertAtEnd(Head, 100);

    LLTraversal(Head);

    printf("\n");

    insertAfterNode(Second, 200);

    LLTraversal(Head);

    printf("\n");

    return 0;
}
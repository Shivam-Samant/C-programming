#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void LLTraversal(struct Node* ptr){
    while(ptr!=NULL){
        printf("Element: %d\n",ptr->data);
        ptr = ptr->next;
    }
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
    Fourth -> next = NULL;

    LLTraversal(Head);

    return 0;
}

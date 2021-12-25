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

struct Node* deleteAtFirst(struct Node* head){
    struct Node* ptr = head;
    head = head -> next;
    free(ptr);
    return head;
}

// struct Node* deleteAtIndex(struct Node* ptr, int index){
//     struct Node* p = ptr;
//     struct Node* q = ptr -> next;
//     int i = 0;
//     while(i!=index-1){
//         p = p -> next;
//         q = q -> next;
//         i++;
//     } 
//     p -> next = q -> next;
//     free(q);
// }

struct Node* deleteAtIndex(struct Node* ptr, int value){
    struct Node* p = ptr;
    struct Node* q = ptr -> next;
    while( q -> data != value && q -> next != NULL ){
        p = p -> next;
        q = q -> next;
    } 
    if(q -> data == value) {
        p -> next = q -> next;
        free(q);
    }
}

struct Node* deleteAtEnd(struct Node* ptr){
    struct Node* p = ptr;
    struct Node* q = ptr -> next;
    while( q -> next != NULL ){
        p = p -> next;
        q = q -> next;
    }
    p -> next = NULL;
    free(q);
}

struct Node* deleteAfterNode(struct Node* prevNode){
    struct Node* p = prevNode;
    struct Node* q = prevNode -> next;
    prevNode -> next = q -> next;
    free(q);
}

int main(){
    struct Node* Head;
    struct Node* Second;
    struct Node* Third;
    struct Node* Fourth;
    struct Node* Fifth;
    struct Node* Sixth;

    Head = (struct Node*)malloc(sizeof(struct Node));
    Second = (struct Node*)malloc(sizeof(struct Node));
    Third = (struct Node*)malloc(sizeof(struct Node));
    Fourth = (struct Node*)malloc(sizeof(struct Node));
    Fifth = (struct Node*)malloc(sizeof(struct Node));
    Sixth = (struct Node*)malloc(sizeof(struct Node));

    Head -> data = 7;
    Head -> next = Second;

    Second -> data = 11;
    Second -> next = Third;

    Third -> data = 15;
    Third -> next = Fourth;

    Fourth -> data = 19;
    Fourth -> next = Fifth;

    Fifth -> data = 23;
    Fifth -> next = Sixth;

    Sixth -> data = 27;
    Sixth -> next = NULL;

    LLTraversal(Head);

    printf("\n");

    Head = deleteAtFirst(Head);

    LLTraversal(Head);

    printf("\n");

    // deleteAtIndex(Head, 1);
    deleteAtIndex(Head, 15);

    LLTraversal(Head);

    printf("\n");

    deleteAtEnd(Head);

    LLTraversal(Head);

    printf("\n");

    deleteAfterNode(Second);

    LLTraversal(Head);

    printf("\n");

    return 0;
}
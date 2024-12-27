#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};

void linkedlisttraversal(struct Node*Ptr){
    while(Ptr!=NULL){
    printf("elemrnt: %d\n",Ptr->data);
    Ptr=Ptr->next;}

    }
int main() {
    struct node * head;
    struct node * second;
    struct node * third;

    //alloctee memory for nodes in the limked list in heap
    head=(struct node *)malloc(sizeof(Struct Node));
    second =(struct node*)malloc(sizeof(Struct Node));
    third=(struct node*)malloc(sizeof(Struct Node));

    //link first and second nodes
    head->data=7;
    head->next=second;

    //link second and third nodes
    second->data=11;
    second->next=third;
    
    //terminate the list of the third nodes
    third->data=7;
    third->next=NULL;
    linkedlisttraversal(head);
    

    return 0;


}
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*next;


};
int isfull(struct Node*top){

    struct Node*p=(struct Node*)malloc(sizeof(struct Node));
  
    if(p==NULL){
        return 1;
    }
    else{
        return 0;

    }

    }
int isempty(struct Node*top){
    if(top==NULL){
        return 1;
    }
    else{
        return 0;

    }   
}
int push(struct Node*top,int x){
    if(isfull){
        printf("stack overflow\n");
    }
    else{
    struct Node*n =(struct Node*)malloc(sizeof(struct Node));
    n->data=x;
    n->next=top;
    top=n;
    return top;
    }

    
}




int main(){
    struct Node*top=NULL;
    push(top,78);

    return 0;

}
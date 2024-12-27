#include<stdio.h>
#include<stdlib.h>
struct stack{
int size;
int top;
int*arr;
};

int isempty(struct stack*ptr){
    if(ptr->top==-1){
        return 1;
    }
    else{ 
        return 0;
    }

}
int isfull(struct stack*ptr){
    if(ptr->top== ptr->size-1){
        return 1;
    }
    else{ 
        return 0;
    }


}
void push(struct stack*ptr ,int value){
    if(isfull(ptr)){
        printf("stack overflow");

    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=value;

    }

}

int main(){
    struct stack *sp=(struct stack*)malloc(sizeof(struct stack));

        sp->size=10;
        sp->top=-1;
        sp->arr=(int*)malloc(sp->size*sizeof(int));
        printf("stack has been created sucessfully:");
        printf("%d\n", isfull(sp));
        printf("%d\n", isempty(sp));
        push(sp,56);
        push(sp,56);
        push(sp,56);
        push(sp,56);
        push(sp,56);
        push(sp,56);
        push(sp,56);
        printf("%d\n", isfull(sp));
        printf("%d\n", isempty(sp));

    return 0;
}



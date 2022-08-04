#include <stdio.h>

int stack[100],top,i,operation,n,num;

void main(){
    top=-1;
    printf("Enter the size of the STACK : ");
    scanf("%d",&n);
    printf("Enter your operation\n Press 1 for PUSH\n Press 2 for POP\n Press 3 for PEEK\n Press 4 for Display\n");
    do
    {
        /* code */
        scanf("%d",&operation);
        switch (operation)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;        
        case 4:
            display();
            break;

        default:
            printf("Enter a valid operation between 1 and 4 !!");
            break;
        }
    } while (operation!=0);
}
    
    
void push() {
        printf("Enter the number to push : ");
        scanf("%d",&num);
        if (top==n-1)
        {
            printf("Stack is FULL !!");
        }
        else {
            top++;
            stack[top]=num;
        }   
    }
    void pop() {
        if(top==-1){
            printf("Stack is EMPTY !!");
        }
        else {
            printf("The POPed element is : %d",stack[top]);
            top--;
        }
    }
    void peek() {
        if(top==-1){
            printf("Stack is EMPTY !!");
        }
        else{
            printf("The Peek element is : %d",stack[top]);
        }
    }
    void display() {
        for(i=top;i>=0;i--){
            printf("The Elements in the STACK are : %d ",stack[i]);
        }
    }


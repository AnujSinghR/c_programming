//stack program 
#include<stdio.h>
int maxsize=10;
int stack[10];
int item;
int top=1;
// a function who satisfies the stack is empty or not
int isempty(){
    if(top<maxsize){
        return 1;
    }
    else{
        return 0;
    }
}
int isfull(){
    if(top==maxsize){
        return 1;
    }
    else{
        return 0;
    }
}
int push(int item){
    if(!isfull){
        printf("stack is full\n");
    }else{
        top=top+1;
        stack[top]=item;
}
}
void display1(){
    for(int i=0;i<=top;i++){
        printf("%d\n",stack[i]);
    }
}


int main(){
   push(1);
   push(2);
   push(3);
   push(4);
   push(6);
   push(6);
   push(6);
   push(6);
   push(6);
   push(4);
   push(5);
   push(2);
   display1();
   return 0;
}

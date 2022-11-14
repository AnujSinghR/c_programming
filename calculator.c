#include<stdio.h>
void main() {
    int a;
    char o;
    int b;
    int c;
    printf("put operator : ");
   scanf("%c",&o); 
   printf("put a number : ");
   scanf("%d",&a); 
   printf("put a number : ");
   scanf("%d",&b);
    
    
       if(o=='+'){
        c=a+b;
       }
       else if(o=='*'){
        c=a*b;
       }
       else if(o=='/'){
        c=a/b;
       }
       else if(o=='-'){
        c=a-b;
       }
       printf("%d",c);
    
}
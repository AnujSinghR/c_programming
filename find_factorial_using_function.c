#include<stdio.h>
int factorial(int);
int main(){
    int a,f;
    printf("enter a number\n");
    scanf("%d",&a);
    f=factorial(a);
    printf("%d",f);
    return 0;
}
int factorial(int a){
    int c=1,i;
    for(i=1;i<=a;i++){
        c=c*i;
    }
    return c;
}

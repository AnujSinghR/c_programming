#include<stdio.h>
void smm(int,int);
int main(){
    int a,b;
    printf("enter a and b\n");
    scanf("%d%d",&a,&b);
    smm(a,b);
    return 0;
}
void smm(int a,int b){
    int multi,mod,sub;
    multi=a*b;
    sub=a-b;
    mod=a%b;
    printf("multipication=%d\n",multi);
    printf("subtraction=%d\n",sub);
    printf("mod of a and b = %d\n",mod);
}
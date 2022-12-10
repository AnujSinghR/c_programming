#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    printf("a is grater");
    if(b>a&&b>c)
    printf("b is grater");
    if(c>a&&c>b)
    printf("c is grater");
    return 0;
}
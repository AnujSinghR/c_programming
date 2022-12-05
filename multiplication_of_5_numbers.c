#include<stdio.h>
float avg(int,int,int);
main(){
    int a,b,c;
    float d;
    printf("enter a,b and c");
    scanf("%d%d%d",&a,&b,&c);
    d=avg(a,b,c);
    printf("%d",d);
}
float avg(int a,int b,int c){
    float d;
    d=(float)(a+b+c)/3;
    return d;
}

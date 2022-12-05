#include<stdio.h>
int m_of_5(int,int,int,int,int);
main(){
    int a,b,c,d,e,f;
    printf("enter 5 numbers \n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    f=m_of_5(a,b,c,d,e);
    printf("%d",f);
}
int m_of_5(int a,int b,int c,int d,int e){
    int f;
    f=a*b*c*d*e;
    return f;
}

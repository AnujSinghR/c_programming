#include<stdio.h>
int main(){
    int n,sum=0,m;
    scanf("%d",&n);
    while(n>0){
        m=n%10;
        sum=m+sum;
        n=n/10;
    }
    printf("%d",sum);
}
//write a program to input in an array of a[5] and find the average
#include<stdio.h>
void main(){
    int a[5],i;
    float c=0;
    for(i=0;i<=4;i++){
        scanf("%d",&a[i]);
        c=c+a[i];
       
    }
    c=c/5;
    printf("%d",c);
}
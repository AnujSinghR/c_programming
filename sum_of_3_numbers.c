#include<stdio.h>
float sum(float,float,float);
main(){
    float a,b,c,d;
    printf("enter a b and c\n");
    scanf("%f%f%f",&a,&b,&c);
    d=sum(a,b,c);
    printf("%f",d);
}
float sum(float a,float b,float c){
    float d;
    d=a+b+c;
    return d;
}
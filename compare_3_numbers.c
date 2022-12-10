#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        if(a>c){
            printf("a is grater");
        }
        else{
            ("c is grater");
        }
    }
    else{
        if(b>c){
            printf("b is grater");
        }
        else{
            printf("c is grater");
        }
    }
    return 0;
}
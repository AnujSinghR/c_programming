#include<stdio.h>
int main(){
    int i,j,s=0;
    for(i=2;i<=10;i++){
        for(j=1;j<=i;j++){
            if(i%j==0){
               s=s+1;
            }
        }
        if(s==2){
            printf("%d is prime number\n",i);
        }
        else{
            printf("%d is not prime number\n",i);
        }
        s=0;
    }
    
    return 0;
}
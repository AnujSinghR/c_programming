#include<stdio.h>
#include<string.h>
int main(){
     int i,j,s=0,a,n;
     for(i=1;i<=500;i++){
      n=i;
      s=0;
      while(n>0){
         a=n%10;
         s=s*10+a;
         n=n/10;
      }
         if(i==s){
            printf("%d is palindrome number\n",i);
         }
     }
     return 0;   
}
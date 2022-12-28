#include<stdio.h>
int main(){
    int i,r,j;
    char a='^';
    for(i=0;i<6;i++){
        for(j=0;j<i;j++){
            printf("%c",a);
        }
      i=i+1;
        printf("%c\n",a);
    }
    return 0;
}
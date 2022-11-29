#include<stdio.h>
#include<string.h>
void main(){
    char a[4],c[4];
    int i,b,d;
    gets(a);
    b=strlen(a);
   for(i=0;i<b;i++){
        c[i]=a[b-1-i];
    }
    c[b]=NULL;
    puts(c);
}
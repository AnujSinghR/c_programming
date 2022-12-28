#include<stdio.h>
#include<string.h>
int main(){
    char *a,*b;
    int i,c;
    a=(char *)malloc(sizeof(a));
    b=(char *)malloc(sizeof(b));
    gets(a);
    gets(b);
    c=strlen(a);
    *(a+c)=' ';
    for(i=0;*(b+i)!=NULL;i++){
        c=c+1;
        *(a+c)=*(b+i);
    }
    *(a+1+c)=NULL;
    puts(a);
    return 0;
}
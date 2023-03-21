#include<stdio.h>
int main(){
  int small,b,a[4],i,j;
  for(i=0;i<=4;i++){
  scanf("%d",&a[i]);}
  small=a[0];
  for(i=0;i<=3;i++){
    j=i+1;
    if(small>a[j]){
      small=a[j];

    } 
  }
  printf("%d",small);
  return 0;
}
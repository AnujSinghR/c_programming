#include<stdio.h>
int bits[10];
int bits_after[10];
void number_to_bit(int a){
    int temp=0,num=a;
    printf("converstion of number to bit of = %d\n",a);
      while(num/2>=1){
        printf("bit = %d ",num%2);
        bits[temp]=num%2;
        num=num/2;
        printf("%d\n",num);
        temp++;
      }
      bits[temp]=1;
      int i=0;
    while(i<=temp){
        printf("%d",bits[i]);
        i++;
    }
}
void number_to_bit_after_left_shift(int a){
    int temp=0,num=a;
    printf("converstion of number to bit of = %d\n",a);
      while(num/2>=1){
        printf("bit = %d ",num%2);
        bits_after[temp]=num%2;
        num=num/2;
        printf("%d\n",num);
        temp++;
      }
      bits_after[temp]=1;
      int i=0;
    while(i<=temp){
        printf("%d",bits_after[i]);
        i++;
    }
}
void main(){
    int a = 10;
    int b = a<<2;
    int bit = a/2;
    number_to_bit(a);
   // printf("%d",bit);
   number_to_bit_after_left_shift(b);
}
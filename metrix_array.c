// metrix array
#include<stdio.h>
void main(){
    int i,j,a[3][4],sum1=0,sum2=0,sum3=0;
    for(i=0;i<=2;i++){
        for(j=0;j<=3;j++){
            scanf("%d",&a[i][j]);
            if(i==0){
                sum1=sum1+a[i][j];
            }
            if(i==1){
                sum2=sum2+a[i][j];
            }
            if(i==2){
                sum3=sum3+a[i][j];
            }
        }
        
    }
    printf("%d",sum3);
    
}

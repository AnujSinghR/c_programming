 #include<stdio.h>
int main(){
    int n=7;
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
                
            }
            
        }
        for(int s=0;s<=6;s++){
                    printf("%d\t",arr[s]);
                }
                printf("\n");
    }
    printf("Sorted elements are :-");
    for(int i=0;i<=4;i++){
        printf(" %d",arr[i]);
    }
    return 0;
}
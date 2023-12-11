#include<stdio.h>
int binary_search(int high,int arr[],int target){
    int low = 0;
    int mid;
    while(low<=high){
        mid=(high+low)/2;
      //  printf("high = %d \n low = %d \n mid = %d\n\n",high,low,mid);
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}
int is_sorted(int arr[],int high){
    int i,j,temp=0,max_p=high*(high-1)/2;
    for(i=0;i<high;i++){
        for(j=i+1;j<high;j++){
            
            if(arr[i]<arr[j]){
              temp++;
            }
        }
    }
    printf("%d\n",temp);
    printf("%d\n",max_p);

    if(temp==max_p){
       return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int i,high=5,arr[5],target,result;
    int u_input=1;
    int s,j,temp=0;
    
    printf("enter numbers in array\n");
    for(i=0;i<high;i++){
        scanf("%d",&arr[i]);
    }
    if(is_sorted(arr,high)){
        
         printf("your array is sorted\n");
    printf("what will you need to found :- ");
    scanf("%d",&target);
     result = binary_search(high,arr,target);
    if(result==-1){
        printf("item is not found\n");
    }
    else{
        printf("item is fonded at %d index no...",result);
    }
    }
    else{
        printf("your array is not sorted\n");
        printf("do you want sort your array type n/y :- \n");
        //scanf("%d",&u_input);
    }
    if(u_input==1){
         for(s=0;s<high;s++){
            for(j=s+1;j<high;j++){
                if(arr[j]<arr[s]){ // bubble sort
                    temp=arr[s];
                    arr[s]=arr[j];
                    arr[j]=temp;
                   
                }
            }
            
         }
         //for(s=0;s<high;s++){
         //  
         //       printf("%d",arr[s]);
         //   
         //}

         
   
    }
   else if(u_input==0){
        printf("you cant use binary search in unsorted array");
    }
    return 0;
}
#include<stdio.h>
int main(){
int n,sum=0,len;
float avg;
printf("Enter The Size of Array: ");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    printf("Enter the value of arr[%d]",i);
    scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++){
    sum+=arr[i];
}
printf("Sum is: %d",sum);
len=sizeof(arr)/sizeof(arr[0]);
avg = (float)sum/len;
printf("\nAverage of Array is:%.2f ",avg);
return 0;
}

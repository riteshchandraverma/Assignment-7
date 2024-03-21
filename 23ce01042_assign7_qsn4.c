#include<stdio.h>
int largest(int arr[10],int n) {
    int d=arr[0];
    
    for(int i=1;i<n;i++)
    {
        if(arr[i]>d)
            d=arr[i];
    }

    return d;
}

int main() {
    int arr[10],n;
    
    printf("Enter size of array:");
    scanf("%d",&n);

    printf("Enter array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int li=largest(arr,n);

    printf("Largest integer in the array is:%d",li);

    return 0;
}   

#include<stdio.h>
#include<string.h>
void reverse(char arr[100],int start,int end) {
    if(start>end)
        return;
    
    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    
    reverse(arr,start+1,end-1);
    
}                                               

int main() {
    char s[100];
    printf("Enter a string: ");
    gets(s);

    int n=strlen(s);

    reverse(s,0,n-1);

    printf("%s",s);
    return 0;
}               
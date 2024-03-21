#include<stdio.h>
#include<string.h>

int main() {
    char s[100];
    int n;
    printf("Enter a string:");
    gets(s);

    n=strlen(s);

    int check=0;
    for(int i=0;i<n/2;i++)
    {
        if(s[i]==s[n-i-1])
            check++;
    }
    if(check==n/2)
        printf("It is a palindrome");
    else
        printf("It is not a palindrome");

    return 0;
}
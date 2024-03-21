#include<stdio.h>
#include<string.h>

int main() {
    char s[100],chr;
    int n;

    printf("Enter a string:");
    gets(s);
    
    n=strlen(s);

    printf("Enter the character to be searched:");
    scanf("%c",&chr);

    int check=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]==chr)
        {
            check++;
        }
    }

    printf("Frequency of %c is:%d",chr,check);
    return 0;
}   
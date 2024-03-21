#include<stdio.h>
#include<string.h>
 int main(){

    char str[100];
    printf("Enter a string:\n");
    gets(str);
    int i=0,l;
    l=strlen(str);
    
    for(i=0;i<l;i++)
    {
        if(str[i]>='A'&&str[i]<='Z'||str[i]>='a'&&str[i]<='z')
        {
            printf("%c",str[i]);
        }
    }
    return 0;
 }
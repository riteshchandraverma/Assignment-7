#include<stdio.h>
#include<string.h>
int checkSubstring(char arr1[100], char arr2[100], int m, int n){
    for(int i = 0; i < n; i++){
        int check = 0;
        for(int j = 0; j < m; j++){
            if(arr1[j] == arr2[i])
                check = 1;
        }
        if(!check)
            return 0;
    }
    return 1;
}

int main() {
    char str[100],substr[100];
    int m,n;
    
    printf("Enter string: ");
    gets(str);
    m=strlen(str);

    printf("Enter substing: ");
    gets(substr);
    n=strlen(substr);

    if(checkSubstring(str,substr,m,n))
        printf("Substring is present in string");
    else
        printf("Substring is not present in string");

    return 0;    

}
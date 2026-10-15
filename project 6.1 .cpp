#include <stdio.h>

int main()
{
    char str[30];
    printf("Enter String: ");
    scanf("%s",str);
    int i, length, p = 1;
    for(i = 0; str[i] != '\0'; i++);
    printf("Length: %d\n\n", i);
    length = i;
    for(i = 0; i < (length / 2); i++){
        if(str[i] != str[length - 1 - i]){
            p = 0;
            break;
        }
    }
    if(p == 1){
        printf("String is Palindrome");
    }else{
        printf("String is not Palindrome");
    }
}

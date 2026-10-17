#include<stdio.h>
int main()
{
    int i, c = 0;
    char str[100], *p;
    printf("\nEnter a string: ");
    gets(str);
    p = str; 
    while(*p != '\0')
    {
        c++;
        p++;
    }
        printf("\nLength=%d", c);
}
//
//Enter a string: dev patel

//Length=9
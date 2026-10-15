#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, j, count;
    int len;
    printf("Enter any string: ");
    scanf("%s", str);
    len = strlen(str);
    printf("Output:\n");
    printf("Frequency of each letter:\n");
    for (i = 0; i < len; i++) {
        if (str[i] == '\0') {
            continue;
        }
         count = 1;
        for (j = i + 1; j < len; j++) {
            if (str[j] == str[i]) {
                count++;
                str[j] = '\0'; 
            }
        }
        printf("%c => %d\n", str[i], count);
    }
}

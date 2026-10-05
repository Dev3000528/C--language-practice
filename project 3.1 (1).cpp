#include <stdio.h>
int main() {
char ch = 'a';
printf("Output: ");
do {
if (ch == 'a') {
printf("%c", ch);
} else {
printf(", %c", ch);
}
ch = ch + 4;
} while (ch <= 'z');
}
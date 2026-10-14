#include <stdio.h>
int main() {
int arr[7] = {12, -5, 0, -81, 3, -9, 45};
 int i;
printf("The negative numbers are: ");
for (i = 0; i < 7; i++) {
if (arr[i] < 0) {
printf("%d ", arr[i]);
}
}
printf("\n");
}
//The negative numbers are: -5 -81 -9
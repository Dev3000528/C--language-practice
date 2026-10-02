#include <stdio.h>

int main() {
float angle1, angle2, angle3;


printf("First angle: ");
scanf("%f", &angle1);

printf("Second angle: ");
scanf("%f", &angle2);


angle3 = 180.0 - (angle1 + angle2);


printf("Third angle: %.0f\n", angle3);


}


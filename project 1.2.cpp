
#include <stdio.h>

int main() {
float base_salary, hra_percent, da_percent, ta_percent;
float hra, da, ta, gross_salary;


printf("Enter Base Salary: ");
scanf("%f", &base_salary);

printf("Enter HRA percentage: ");
scanf("%f", &hra_percent);

printf("Enter DA percentage: ");
scanf("%f", &da_percent);

printf("Enter TA percentage: ");
scanf("%f", &ta_percent);


hra = (hra_percent / 100) * base_salary;
da = (da_percent / 100) * base_salary;
ta = (ta_percent / 100) * base_salary;


gross_salary = base_salary + hra + da + ta;


printf("Gross Salary: Rs. %.2f\n", gross_salary);


}



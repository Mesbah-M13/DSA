#include<stdio.h>
#include<string.h>

// int  - 4 byte  1 byte = 8 bit  4 byte = 32 bit
// float- 4 byte 
// char - 1 byte
// bool - 1 byte

int main(){

int age , year;
float pi;

char initial;
char new = 'C';

scanf("%d %d %f %c", &age, &year, &pi, &initial);

printf("age is : %d\n", age);
printf("Pi is : %f\n", pi);

printf("initial is : %c\n", initial);
printf("Other char is : %c\n", new);

return 0;
}


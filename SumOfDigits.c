#include <stdio.h>

int main() {
   
    // Input a 4 digit number in any integer type variable and sum all the four digits, e.g. int a =3487, result = 22

    int num = 2745;
    
    int num1, num2, num3, rem1,rem2,rem3, result;
    
    num1 = num / 1000;
    rem1 = num % 1000;
    
    num2 = rem1 / 100;
    rem2 = rem1 % 100;
    
    num3 = rem2 / 10;
    rem3 = rem2 % 10;
    
    result = num1 + num2 + num3 + rem3;
    
    printf("Sum Of All The Digits Of %d is: %d",num, result);

    
    printf("\n");
    return 0;
}

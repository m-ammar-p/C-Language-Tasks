#include <stdio.h>

int main() {
    
    //Prompt user to input distance in Kilometers and display it in meters.
    
    float num, meter;
    
    printf("Enter A Distance In Kilometer: ");
    scanf("%f",&num);
    
    meter = (num * 1000);
    
    printf("%.2f Kiometer  = %.2f Meter",num, meter);
    
    printf("\n");
    return 0;
}


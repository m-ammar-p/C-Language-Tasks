
#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    float r,w,l,hb,b,result;
    char ch;
    
    printf("1. Press c To Calculate area of Circle [c]\n");
    printf("2. Press r To Calculate area of Rectangle [r]\n");
    printf("3. Press t To Calculate area of Triangle [t]\n");
    
    scanf("%c",&ch);
    
    printf("\n");
    if (ch == 'c') {
        
        printf("Enter Raduis: ");
        scanf("%f",&r);
        
        result = (3.142) * (r * r);
        
        printf("A = %.2f",result);
    }
    else if (ch == 'r'){
        
        printf("Enter Base: ");
        scanf("%f",&b);
        
        printf("Enter Width: ");
        scanf("%f",&w);
        
        result = w * l;
        
        printf("A = %.2f",result);
    }
    
    else if (ch == 't'){
        
        printf("Enter Length: ");
        scanf("%f",&b);
        
        printf("Enter Height: ");
        scanf("%f",&hb);
        
        result = (hb * b) / 2;
        
        printf("A = %.2f",result);
    }
    else{
        printf("Enter Correct Operation");
    }
    printf("\n");
    return 0;
}

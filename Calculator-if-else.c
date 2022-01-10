
#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int num,num2,result;
    char op;
    
    printf("Enter Operator +, - , / , x: ");
    scanf("%c",&op);
    
    printf("Enter Number 1: ");
    scanf("%d",&num);
    
    printf("Enter Number 2: ");
    scanf("%d",&num2);
    
    if (op == '+') {
        
        result = num + num2;
        printf("Sum: %d",result);
    }
    
    else if (op == '-') {
        
        result = num - num2;
        printf("Subtract: %d",result);
    }
    
    else if (op == '/') {
        
        result = num / num2;
        printf("Divide: %d",result);
    }
    
    else if (op == 'x') {
        
        result = num * num2;
        printf("Multiply: %d",result);
    }
    else{
        printf("Enter Correct Operator");
    }
    
    
    printf("\n");
    return 0;
}

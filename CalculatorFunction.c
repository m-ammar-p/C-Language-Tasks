
#include <stdio.h>

int sum();
int subtract();
int mul();
float divide();

int main() {

    char c;
    
    printf("Select Any Airthmetic Operator + , - , * , / \n");
    scanf("%c",&c);
    
    if (c == '+') {
        
        int ans = sum();
        printf("%d",ans);
    }
    else if (c == '-'){
        
        int ans = subtract();
        printf("%d",ans);
    }
    
    else if (c == '*'){
        
        int ans = mul();
        printf("%d",ans);
    }
    else if (c == '/'){
        
        float ans = divide();
        printf("%.2f",ans);
    }
    else{
        
        printf("You hav not select the right option");
    }
    

    printf("\n");
    return 0;
}


int sum() {
    
    int x,y,result;
    
    printf("Enter First Value: ");
    scanf("%d",&x);
    
    printf("Enter Second Value: ");
    scanf("%d",&y);
    
    result = x + y;
    
    return result;
}

int subtract() {
    
    int x,y,result;
    
    printf("Enter First Value: ");
    scanf("%d",&x);
    
    printf("Enter Second Value: ");
    scanf("%d",&y);
    
    result = x - y;
    
    return result;
}

int mul() {
    
    int x,y,result;
    
    printf("Enter First Value: ");
    scanf("%d",&x);
    
    printf("Enter Second Value: ");
    scanf("%d",&y);
    
    result = x * y;
    
    return result;
}

float divide() {
    
    float x,y,result;
    
    printf("Enter First Value: ");
    scanf("%f",&x);
    
    printf("Enter Second Value: ");
    scanf("%f",&y);
    
    result = x / y;
    
    return result;
}

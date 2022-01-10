
#include <stdio.h>

int main() {
    
    int num,i,result=1;
    
    printf("Enter Any Number: ");
    scanf("%d",&num);
    
    for(i=1; i<=num;  i++)
    {
        result*=i;

    }
    printf("%d! = %d ",num,result);
    
    printf("\n");
    return 0;
}

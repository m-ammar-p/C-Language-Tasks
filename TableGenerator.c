

#include <stdio.h>

int main() {
    
    int num,start,end,result;
    
    printf("-------------------Table Generator------------------- \n\n");
    printf("Enter a number of table: ");
    scanf("%d",&num);
    
    printf("Enter starting point: ");
    scanf("%d",&start);
    
    printf("Enter ending point: ");
    scanf("%d",&end);
    
    printf("\n");
    
    if (start <0 || end < start) {
        
        for (int i = 1; i<=10; i++) {
            
            result = num * i;
            printf("%d X %d = %d \n",num,i,result);
        }
    }
    else {
        
        for (int i = start; i<=end; i++) {
            
            result = num * i;
            printf("%d X %d = %d \n",num,i,result);
        }
        
    }
    
    
    
    return 0;
}

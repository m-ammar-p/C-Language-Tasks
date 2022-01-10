
#include <stdio.h>

int main() {
    
    int num,i,first=0,second=1,result;
    
    printf("How Many Numbers of Fibbonacii series you want: ");
    scanf("%d",&num);
    
    printf("\n result = ");
    
    for(i=0; i<num; i++)
    {
        if(i<=1){
            result=i;
        }
        else{
            result=first+second;
            first=second;
            second=result;
        }
        printf("\n\t %d ",result);
    }
    
    printf("\n");
    return 0;
}


#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int arr[5]={0,0,0,0,0};
    
    for (int i = 0; i<5; i++) {
        
        for (int j = 5; j>0; j--) {
            
            arr[j] = arr[j-1];
        }
        
        printf("\nEnter Value For FILO: ");
        scanf("%d",&arr[0]);
        
        for (int k = 0; k<5; k++) {
            
            printf("%d\n",arr[k]);
        }
    }
    
    printf("\n");
    for (int m = 0; m<5; m++) {
        
        printf("%d ",arr[m]);
    }
    
    printf("\n");
    return 0;
}

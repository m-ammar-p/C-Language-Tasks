

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int num = 2,result;
    
    for (int i = 12; i > 0; i--) {
        
        result = i * num;
        
        printf("%d x %d = %d\n",i,num,result);
    }
    
    printf("\n");
    return 0;
}

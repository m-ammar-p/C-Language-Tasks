
#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
// Type casting must be done
    
    int *ptr = (int *)malloc(1);

    *ptr = 5;

    int *p1 = (int *)malloc(4 * sizeof(int));
    
    p1[0] = 6;
    p1[1] = 87;
    
    for (int i = 0; i <sizeof(p1)/sizeof(p1[0]); i++) {
        
        printf("%d\n",p1[i]);
    }
//    printf("%d\n",p1[0]);
//    printf("%d",p1[1]);

 

    
    printf("\n");
    return 0;
}

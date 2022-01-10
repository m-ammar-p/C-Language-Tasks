

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {

    int *ptr = (int *)calloc(2, 2);
    
    int a = 6;
    ptr = &a;

    if (ptr) {
        printf("%d\n",*ptr);
    }

    
//    ptr[0] = 54;
//    ptr[1] = 34;
//    ptr[2] = 64;
//
//    for (int i = 0; i < 3; i++) {
//
//        printf("%d\n",ptr[i]);
//    }
    
    printf("\n");
    return 0;
}

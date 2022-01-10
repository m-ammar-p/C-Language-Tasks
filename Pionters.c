
#include <stdio.h>

void swap(int *x, int *y) {
    
    printf("Before vlaue of x: %d\n",*x);
    printf("Before vlaue of y: %d\n",*y);
    int temp = *x;
    *x = *y;
    *y = temp;
    
    printf("After vlaue of x: %d\n",*x);
    printf("After vlaue of y: %d\n",*y);
}

int main(int argc, const char * argv[]) {
    
    int a = 10;
    int *ptr;
    
    ptr = &a;
    
    printf("Address of a: %x \n",ptr);
    printf("Value of a: %d \n",*ptr);
    
    printf("-----------------------");
    printf("\n");
    
    int b = 20;
    int *ptr2 = &b;
    int **ptr3 = &ptr2;
    int ***ptr4 = &ptr3;
    
    printf("Address of b: %x \n", &b);
    printf("Address of ptr2: %x \n", ptr2);
    printf("Address of ptr3: %x \n", ptr3);
    printf("Value of ptr4: %d \n", ***ptr4);
    
    printf("-----------------------");
    printf("\n");
    
    int x = 37;
    int y = 43;
    
    swap(&x, &y);
    
    
    printf("\n");
    return 0;
}


#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int arr[4] = {17,10,6,20};
    int temp = 0;
    
    for (int i= 0; i<4; i++) {

        for (int j = i + 1; j<3; j++) {

            if (arr[j] < arr[i]) {

                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    for (int k = 0; k <4; k++) {
        
        printf("%d ",arr[k]);
    }
    
    printf("\n");
    return 0;
}

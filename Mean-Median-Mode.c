
#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int len = 7;
    int arr[] = {6, 8, 3, 7, 6, 5, 8};
    int sum = 0, median = 0;
    float mean = 0.0;
    int temp = 0;

// ------------- Mean -------------
    for (int i = 0; i<len; i++) {

        sum += arr[i];

    }
    printf("Sum: %d \n",sum);
    mean = (float)sum / (float)len;

    printf("Mean: %.2f \n",mean);
    
// ------------- Sorting an Array -------------
    for (int j = 0; j < len; j++) {
        
        for (int k = 0; k < len - 1; k++) {
            
            if (arr[k] > arr[k + 1]) {
                
                temp = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = temp;
            }
        }
    }
    
 // ------------- Median -------------
    median = len / 2;
    printf("Position: %d \n",median);


    if (median % 2 == 0) {
        
        printf("Median: %d \n",arr[median - 1]);
    } else{
        
        printf("Median: %d \n", arr[median]);
    }

// ------------- Mode (Most Frequent Value) -------------
    int max = 0;
    int arrTemp[8];
    int count = 0;
    
    for (int l = 0; l < len; l++) {
        
        printf("%d ",arr[l]);
        
        if (arr[l] > max) {
            
            max = arr[l];
        }
        else if (count == 0) {
        
            arrTemp[count] = max;
            count++;
        }
        else {
                arrTemp[count] = max;
                count++;
            }
    }
    
    printf("\nMode: ");
    for (int m = 0; m< count ; m++) {
        
        printf("%d ",arrTemp[m]);
    }
    printf("\n");
    return 0;
}

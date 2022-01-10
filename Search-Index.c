

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int arr[100];
    int size, i, toSearch, found;
    
    // Input size of array
    printf("Enter size of array: ");
    scanf("%d", &size);
    
    // Input elements of array
    printf("\nEnter elements in array: \n");
    for(i=0; i<size; i++)
    {
        printf("%d. ",i+1);
        scanf("%d", &arr[i]);
    }
    
    printf("\nEnter element to search: ");
    scanf("%d", &toSearch);
    
    // Assume that element does not exists in array
    found = 0;
    
    for(i=0; i<size; i++)
    {
     //If element is found in array then raise found flag
    //and terminate from loop.

        if(arr[i] == toSearch)
        {
            found = 1;
            break;
        }
    }
    //If element is not found in array
    if(found == 1)
    {
        printf("\n%d is found at position %d", toSearch, i + 1);
    }
    else
    {
        printf("\n%d is not found in the array", toSearch);
    }
    
    printf("\n");
    return 0;
}

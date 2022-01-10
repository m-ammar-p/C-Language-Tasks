
#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    char chess[8][8] = {
        
        {'a','a','a','a','a','a','a','a'},
        {'a','a','a','a','a','a','a','a'},
        {'a','a','a','a','a','a','a','a'},
        {'a','a','a','a','a','a','a','a'},
        {'a','a','a','a','a','a','a','a'},
        {'a','a','a','a','a','a','a','a'},
        {'a','a','a','a','a','a','a','a'},
        {'a','a','a','a','a','a','a','a'},
        
        
    };
    
    for (int i = 0; i<8; i++) {
        
        for (int j = 0; j<8; j++) {
            
            
            if ((i == 0 && j == 0) || (i == 0 && j == 7)) {
                
                chess[i][j] = 'Q';
            }
            if (i == 3 && j == 3) {
                 chess[i][j] = 'Q';
            }
            if ((i == 7 && j == 0) || (i == 7 && j == 7)) {
               chess[i][j] = 'Q';
            }
           
             printf("%c     ", chess[i][j]);
            
        }
        printf("\n");
    }
    
    
    return 0;
}

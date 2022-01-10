
#include <stdio.h>


int main(int argc, const char * argv[]) {
   
    int math,phy,elec,isl,cp;
    int total,CGPA,GPA;
    
    printf("Maths Marks: ");
    scanf("%d",&math);
    
    printf("Physics Marks: ");
    scanf("%d",&phy);
    
    printf("Electronics Marks: ");
    scanf("%d",&elec);
    
    printf("Islamiat Marks: ");
    scanf("%d",&isl);
    
    printf("Computer Programming Marks: ");
    scanf("%d",&cp);
    
    if (math >=0 && math <=100 && phy >=0 && phy <=100 && elec >=0 && elec <=100 && isl >=0 && isl <=100 && cp >=0 && cp <=100) {
        
        
    }
    else{
        
        printf("Enter Marks Between 0 to 100");
    }
    
    printf("\n");
    return 0;
}

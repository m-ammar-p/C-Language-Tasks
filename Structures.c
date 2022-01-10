

#include <stdio.h>

struct student {
    
    int id;
    char name;
    float cgpa;
};

// Encapsulation
struct info {
    
    struct student studentInfo;
};

int main(int argc, const char * argv[]) {
   
    struct student std;
    struct student ali = {423,'A',3.7};
    
    struct info inforamtion;
    
    std.id = 312;
    std.name = 'R';
    std.cgpa = 3.9;
    
    inforamtion.studentInfo.id = 542;
    inforamtion.studentInfo.name = 'H';
    inforamtion.studentInfo.cgpa = 542;
    
    printf("Student ID: %d\n",std.id);
    printf("Student Name: %c\n",std.name);
    printf("Student CGPA: %.1f\n\n",std.cgpa);
    
    printf("Student ID: %d\n",ali.id);
    printf("Student Name: %c\n",ali.name);
    printf("Student CGPA: %.1f\n\n",ali.cgpa);
    
    printf("Student ID: %d\n",inforamtion.studentInfo.id);
    printf("Student Name: %c\n",inforamtion.studentInfo.name);
    printf("Student CGPA: %.1f\n\n",inforamtion.studentInfo.cgpa);

    
    
    printf("\n");
    return 0;
}

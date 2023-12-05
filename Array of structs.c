#include <stdio.h>
struct students{
    char name[20];
    float gpa;
};
int main(){
    struct students student1 = {"SpongeBob", 4.5};
    struct students student2 = {"Patrick", 2.0};
    struct students student3 = {"Squidward", 3.0};
    struct students student4 = {"Sandy", 5.0};

    struct students all_students[] = {student1,student2,student3,student4};
    int size = sizeof(all_students)/sizeof(all_students[0]);

    for(int i=0;i<size; i++){
        printf("%-50s\t", all_students[i].name);
        printf("%.2f\n", all_students[i].gpa);
    }

    
    return 0;
    
}
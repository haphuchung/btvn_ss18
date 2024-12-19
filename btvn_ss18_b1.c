#include <stdio.h>
struct Student {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {

   struct Student student = {"Nguyen Van A", 20, "0123456789"};
   printf("Name: %s\n", student.name);  
   printf("Age: %d\n", student.age);
   printf("Phone Number: %s\n", student.phoneNumber);

return 0;
}

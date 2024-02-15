// Nested Structures
#include <stdio.h>

typedef struct
{
	char post_code[8];
	int house_number;
}address;

typedef struct
{
 	char name[50]; 
 	int age;
 	address student_addr;
}person;

 int main()
 {
    // Initialize a struct with nested structures 
    person st_y1= {"John Doe", 25,{"LS184NT",20}}; 

    // Accessing members of nested structures 
    printf("Name: %s \n",st_y1.name); 
    printf("Age: %d \n",st_y1.age); 
    printf("Post Code: %s \n",st_y1.student_addr.post_code); 
    printf("House Number :%d  \n",st_y1.student_addr.house_number); 
    printf("%lu\n", sizeof(st_y1));
    return 0;
 }
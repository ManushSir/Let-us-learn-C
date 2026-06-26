#include <stdio.h>
#include<string.h>
struct student{
    char name[20];
    char id[10];
};
union teacher{
    char name [5];
    int salary;
}uteacher;
int main() {
   struct  student mircom ;
   strcpy(mircom.name,"Manush");
   strcpy(mircom.id,"1123");
   printf("\n The name is:%s",mircom.name);
   printf("\n The id is: %s ",mircom.id);
   printf("\n The size of struct is %d", sizeof(mircom));
   strcpy(uteacher.name,"Shreya");
   uteacher.salary = 12345;
   printf("\n The name is %s",uteacher.name);
   printf("\n The Salary is %d",uteacher.salary);
   printf("\n The size of union is:%d",sizeof(uteacher));
   return 0;
}

#include<stdio.h>

int struct Personal(){
    char name[100];
    int DOJ;
    float Salary;

}

int main(){
   struct Personal P1;
   strcpy(P1.name,"S");
   P1.DOJ = 240505;
   P1.Salary=95000;
   
   struct Personal P2;

   strcpy(P2.name,"G");
   P2.DOJ = 240506;
   P2.Salary=950000;

   printf("Name: %s\n",P1.name);
   printf("DOJ: %d\n",P1.DOJ);
   printf("Salary: %d\n",P1.Salary);

   

   printf("Name: %s\n",P2.name);
   printf("DOJ: %d\n",P2.DOJ);
   printf("Salary: %d\n",P2.Salary);

   return 0;




}
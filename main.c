#include <stdio.h>

int main(){
   int id[20];
   char name[50];
   float marks;
   
//student input details
   printf("Enter Student ID:");
   scanf("%s",id);

   printf("Enter Student Name:");
   scanf("%s",name);

   printf("Enter Student Marks:");
   scanf("%f",&marks);
//output details
   printf("\n---Student Details---\n");
   printf("ID:%s\n",id);
   printf("Name:%s\n",name);
   printf("Marks:%.2f\n",marks);
   return 0;
}



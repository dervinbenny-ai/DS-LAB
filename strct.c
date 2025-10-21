#include<stdio.h>
struct employee {
int emp_id;
char name[50];
float salary;
};
int main(){
struct employee e[3];
int i;
printf("Enter the details of the employees:\n");
for(i=0;i<3;i++){
printf("\employee %d:\n",i+1);
printf("Enter the employee id:");
scanf("%d",&e[i].emp_id);
printf("Enter name:");
scanf("%s",e[i].name);
printf("Enter the Salary:");
scanf("%f",&e[i].salary);
}
printf("\n--- employee details ---\n");
for(i=0;i<3;i++){
printf("\n employee %d\n",i+1);
printf("Employee id:%d\n",e[i].emp_id);
printf("name :%s\n",e[i].name);
printf("Salary :%.2f\n",e[i].salary);
}
return 0;
}

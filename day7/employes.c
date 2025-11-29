#include<stdio.h>
#include<string.h>


struct employee{
    int id;
    char name[25];
    char dept[20];
    float exp;
    char location[30];
    char email[30];

};

void main(){
    struct  employee emp[2];
  
    for(int i=0;i<2;i++){
        printf(" enter the details of employee %d\n",i+1);
        printf("enter the employee ID:");
        scanf("%d",emp[i].id);
        getchar();
    
        printf("enter the name:");
        fgets(emp[i].name, sizeof(emp[i].name), stdin);
        printf("enter  the emainl ID:");
        fgets(emp[i].email, sizeof(emp[i].email), stdin);
        printf("enter  the  depaartment:");
        fgets(emp[i].dept, sizeof(emp[i].dept), stdin);
        printf("enter  the  experince:");
        scanf("%f",&emp[i].exp);
        getchar();

        printf(" enter the location:");
       fgets(emp[i].location, sizeof(emp[i].location), stdin); 
    }
    for(int i=0;i<2;i++){
        printf("details of employee %d are as follows :\n",i+1);
        printf("-------------------------------------------------------\n");
        printf(" employee ID:%d\n",emp[i].id);
        printf(" employee name:%d\n",emp[i].name);
        printf(" employee email:%d\n",emp[i].email);
        printf(" employee department:%d\n",emp[i].dept);
        printf(" employee experience:%d\n",emp[i].exp);
        printf(" employee location :%d\n",emp[i].location);
        printf(" -----------------------------------------------------\n");
    }
}
    
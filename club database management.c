#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct member
{
    int phnno[14];
    char name[30];
    char university[25],Department[25],thana[10], ID[10],sem[20];
    char blood[5];
}details;


void main()
{

    int i;
    int menu_return;
    char value;

    FILE *fp;
    menu_return=menu();
    switch(menu_return)
    {
    case 1:
        add();
        printf("Add Another(Y/N)");
        printf(":=>>> Press any key to continue::");
        scanf("%s",&value);

        if(value=='y')
        {
            add();
        }
        else if(value=='n')
        {
            menu();
        }

        break;
    case 2:
        system("cls");
        printf("case 2");

        break;
    case 3:
        system("cls");
        printf("case 3");
        break;
        case 4:
        system("cls");
    printf("\n\n\n\t\t\t\tstoring all club member data information\n\n\n\n");
        exit(0);
        break;

fclose(fp);

    }

}

int menu()
{
    int input;

    printf("\n\n\n\t\t\t\tEnter 1 for Add A member:\t");
    printf("\n\t\t\t\tEnter 2 for Add Search member:\t");
    printf("\n\t\t\t\tEnter 3 for View All Data:\t");
    printf("\n\t\t\t\tEnter 4 for Exit");
    printf("\n\n\n\t\t\tSelect Your Choice:::\n\t\t  >>>Press any key to continue::");
    scanf("%d",&input);

    return input;
}


int add()
{
    FILE *fp;
    char value=0;
    system("cls");
    fp = fopen("Database.txt","a");
    fputs("\n\n", fp);

    printf("Enter  Name: \n");
    scanf("%s",&details.name);
    fputs(details.name,fp);
    fputs(" ", fp);

    printf("\tuniversity name: \n");
    scanf("%s",&details.university);
    fputs(details.university,fp);
    fputs("\tn ", fp);

    printf("\tDepartment name: \n");
    scanf("%s",&details.Department);
    fputs(details.Department,fp);
    fputs("\t", fp);

    printf("\tID: \n");
    scanf("%s",&details.ID);
    fputs(details.ID,fp);
    fputs("\t\t ", fp);

      printf("\sem: \n");
    scanf("%s",&details.sem);
    fputs(details.sem,fp);
    fputs("\t\t ", fp);

    printf("Phone Number: \n");
    scanf("%s",&details.phnno);
    fputs(details.phnno, fp);
    fputs("\t\t ", fp);

    printf("Blood Group: \n");
    scanf("%s",&details.blood);
    fputs(details.blood, fp);
    fputs("\t\t ", fp);

    printf("\tUpzilla/ Thana: \n");
    scanf("%s",&details.thana);
    fputs(details.thana,fp);
    fputs(" ", fp);
          fclose(fp);


}

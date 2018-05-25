#include <stdio.h>
#include <stdlib.h>
#include<string.h>



struct donor
{
    int phnno[14];
    char name[30];
    char village[15], roadno[15], thana[10], zilla[10];
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
        printf(":=>>> Press any key to continue....");
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

    }

}

int menu()
{
    int input;

    printf("\n\n\n\t\t\t\tEnter 1 for Add A Donor");
    printf("\n\t\t\t\tEnter 2 for Add Search");
    printf("\n\t\t\t\tEnter 3 for View All Data");
    printf("\n\t\t\t\tEnter 4 for Exit");
    printf("\n\n\n\t\t\tSelect Your Choice :=>>> Press any key to continue....");
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

    printf("Phone Number: \n");
    scanf("%s",&details.phnno);
    fputs(details.phnno, fp);
    fputs("\t\t ", fp);


    printf("Blood Group: \n");
    scanf("%s",&details.blood);
    fputs(details.blood, fp);
    fputs("\t\t ", fp);


    printf("Village: \n");
    scanf("%s",&details.village);
    fputs(details.village,fp);
    fputs(", ", fp);

    printf("Upzilla/ Thana: \n");
    scanf("%s",&details.thana);
    fputs(details.thana,fp);
    fputs(", ", fp);

    printf("Zilla: \n");
    scanf("%s",&details.zilla);
    fputs(details.zilla,fp);
    fputs(".", fp);

    fclose(fp);


}

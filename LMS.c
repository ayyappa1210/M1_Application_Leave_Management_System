#include<stdio.h>
#include<stdlib.h>
#include<string.h>
COORD coord={0,0};
void gotoxy(int x,int y)
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
int main()
{
    FILE *ft,*fp,*fl;
    char another,choice;
    struct emp
    {
        char name[40];
        int age;
        float bs;
        int day;
        char startdate[10];
        char enddate[10];
    };
    struct emp e;
    char empname[40];
    long int recsize;
    fp=fopen("EMPP.DAT","rb+");
    if(fp==NULL)
    {
        fp=fopen("EMPP.DAT","wb+");
        if(fp==NULL)
        {
            printf("cannot open file");
            exit(1);
        }
    }
    fl=fopen("EMPLEAVE.DAT","rb+");
    if(fl==NULL)
    {
        fl=fopen("EMPLEAVE.DAT","wb+");
        if(fl==NULL)
        {
            printf("cannot open file");
            exit(1);
        }
    }
    recsize=sizeof(e);
    while(1)
    {
        system("cls");
        gotoxy(30,10);
        printf("1. Add Record");
        gotoxy(30,12);
        printf("2. List Record");
        gotoxy(30,14);
        printf("3. Modify Record");
        gotoxy(30,16);
        printf("4. Delete Record");
        gotoxy(30,18);
        printf("5. Leave Record");
        gotoxy(30,20);
        printf("6. Show Leave");
        gotoxy(30,22);
        printf("7. Exit");
        gotoxy(30,24);
        printf("8. Your Choice: ");
        fflush(stdin);
        choice=getchar();
        switch(choice)
        {
            case '1':
            system("cls");
            fseek(fp,0,SEEK_END);
            another='y';
            while(another=='y')
            {
                printf("\nEnter name:");
                scanf("%s",e.name);
                printf("\nEnter age:");
                scanf("%d",e.age);
                printf("\nEnter basic salary: ");
                scanf("%f",e.bs);
                fwrite(&e,recsize,1,fp);
                printf("\nAdd another record(y/n)");
                fflush(stdin);
                another=getchar();
            }
            break;
            case '2':
            system("cls");
            rewind(fp);
            while(fread(&e,recsize,1,fp)==1)
            {
                printf("\n%s %d %.2f",e.name,e.age,e.bs);
            }
            break;
            case '3':
            system("cls");
            another='y';
            while(another=='y')
            {
                printf("\nEnter the employee name to modify: ");
                scanf("%s",empname);
                rewind(fp);
                while(fread(&e,recsize,1,fp)==1)
                {
                    if(strcmp(e.name,empname)==0)
                    {
                        printf("\n Enter new name ,age and bs: ");
                        scanf("%s%d%f",e.name,&e.age,&e.bs);
                        fseek(fp,-recsize,SEEK_CUR);
                        fwrite(&e,recsize,1,fp);
                        break;
                    }
                }
                printf("\nAdd another record(y/n)");
                fflush(stdin);
                another=getchar();
            }
            break;
            case '4':
            system("cls");
            another='y';
            while(another=='y')
            {
                printf("\nEnter the employee name to delete: ");
                scanf("%s",empname);
                ft=fopen("Temp.dat","wb");
                rewind(fp);
                while(fread(&e,recsize,1,fp)==1)
                {
                    if(strcmp(e.name,empname)!=0)
                    {
                        fwrite(&e,recsize,1,ft);
                    }
                }
                fclose(fp);
                fclose(ft);
                remove("EMPP.DAT");
                rename("Temp.dat","EMPP.DAT");
                fp=fopen("EMPP.DAT","rb+");
                printf("\nAdd another record(y/n)");
                fflush(stdin);
                another=getchar();
            }
            break;
            case '5':
            system("cls");
            fseek(fp,0,SEEK_END);
            another='y';
            while(another=='y')
            {
                printf("\nEnter name: ");
                scanf("%s",e.name);
                printf("\nEnter age: ");
                scanf("%d",e.age);
                printf("\nEnter basic salary: ");
                scanf("%f",e.bs);
                fwrite(&e,recsize,1,fp);
                printf("\nAdd another record(y/n)");
                fflush(stdin);
                another=getchar();
            }
            break;
            case '6':
            system("cls");
            rewind(fl);
            while(fread(&e,recsize,1,fl)==1)
            {
                printf("\n%s %s %s %d",e.name,e.startdate,e.enddate,e.day);
            }
        
            break; 
            case '7':
            fclose(fp);
            exit(0);
        }
    }
return 0;
}

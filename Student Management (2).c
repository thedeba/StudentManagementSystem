#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
#include<windows.h>
#include<time.h>
#include <string.h>
void front_page();  /// For Front Page
void title_bar();   /// For Title
void login();       /// For login
void dashboard();   /// For Dashboard
void add();         /// For add record of students
void search();      /// For search student records
void modify();      /// For modify student records
void del();         /// For delete student records
void showInfoAll(); /// Its shows all student information
void showCGPA();    /// Its show CGPA
void input();       /// For take all input
void output();      /// it show outputs
void date();        /// it take date from my device
void logout();      /// For logout from the console
struct student
{
    char id[15];       /// Student ID
    char name[40];     /// Student Name
    char semester[10]; /// Semester
    char scgpa[10];    /// SCGPA of student
    char campus[50];   /// campus
    char age[5];       /// age of student
    char fname[40];    /// Father name of student
    char mname[40];    /// Mother name of student
    char address[80];  /// Address of of student
    char sphone[15];   /// Phone Number of student
    char email[40];    /// Email ID of student
    char gphone[15];   /// Guardian phone number of student
};
struct student s; /// initialize -- Object
FILE *std;        /// Main C-File of this project
void date()       /// Its take date from device
{
    printf("\n\n\n");
    printf("\t\t\t\t\t      Date: %s", __DATE__);
}
void title_bar() /// Title Bar of this project
{
    printf("\n\n\t\t\t\t\t-----------------------------");
    printf("\n\t\t\t\t\t| STUDENT MANAGEMENT SYSTEM |");
    printf("\n\t\t\t\t\t-----------------------------");
}
void front_page() /// This is for front page of this project
{
    int proccess;
    date();
    title_bar();
    printf("\n\n\n\n\n\n");
    printf("\t  CREATED BY  :   Md. Rafit Mostofa,Debashish roy");
    printf("\n\n\n");
    printf("\n\n\n\n\n");
    printf("\t\t\t\t        PRESS 'ENTER' TO CONTINUE......");
    printf("\n\n\n\n\n");
    int x = 1;
    while (x != 13)
    {
        x = getch(); /// It done for only press enter to continue
    }
    printf("\t\t\t\t\t  LOADING.");
    for (proccess = 0; proccess < 2; proccess++) /// Loading when enter the dashboard
    {
        Sleep(200); /// miliseconds 1000 ms = 1 second
        printf(".");
    }
}
void login() /// Its for login process
{
    system("cls");
    date();
    char username[30];
    char password[30];
    int val = 1;
    do
    {
        system("cls");

        printf("\n\n");
        printf("\t\t\t\t\t\t");

        printf("<<<  L O G I N  >>> ");

        printf("\n\n\n\n\n\n");
        printf("\t\t\t\t");

        printf("Enter Username:   ");
        gets(username);

        printf("\n\n");
        printf("\t\t\t\t");

        printf("Enter Password:   ");
        gets(password);

        if (strcmp(username, "admin") == 0 && strcmp(password, "1234") == 0) /// Here is the USERNAME  &  PASSWORRD
        {
            system("cls");
            printf("\n\n\n");
            printf("\t\t\t\t      ");
            printf("<<<  Welcome To Student Management System  >>>");
            printf("\n\n\n\n\n\n");
            printf("\t\t\t\t\t");
            printf("      You Have Logged In Successfully !!!");
            printf("\n\n\n\n\n\n");
            printf("\t\t\t\t    ");
            printf("  Press 'ENTER' To Continue...");
            fflush(stdin);
            getchar();
            dashboard(); /// If username & password ok then it will take you dashboard
            system("cls");
            getchar();
            val = 0;
        }
        else /// It will work when username or password  wrong
        {
            system("cls");
            printf("\n\n\n\n\n\n\n\n\n\n");
            printf("\t\t\t\t");
            printf("Invalid Username Or Password !!!");
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
            printf("\t\t\t\t");
            printf("Press 'ENETR' To Try Again .");
            getchar();
        }
    } while (val == 1);
}
void input() /// It will take input by user
{
    printf("\n\n\n\t\t\t\t");
    printf("Enter The Information Below: ");
    printf("\n\n\n\t\t\t\t");
    printf("ID No                 : ");
    fflush(stdin);
    scanf("%[^\n]s", s.id);
    printf("\n\n\t\t\t\t");
    printf("Full Name             : ");
    fflush(stdin);
    scanf("%[^\n]s", s.name);
    printf("\n\n\t\t\t\t");
    printf("Semester              : ");
    fflush(stdin);
    scanf("%[^\n]s", s.semester);
    printf("\n\n\t\t\t\t");
    printf("SCGPA                 : ");
    fflush(stdin);
    scanf("%[^\n]s", s.scgpa);
    printf("\n\n\t\t\t\t");
    printf("Campus                : ");
    fflush(stdin);
    scanf("%[^\n]s", s.campus);
    printf("\n\n\t\t\t\t");
    printf("Age                   : ");
    fflush(stdin);
    scanf("%[^\n]s", s.age);
    printf("\n\n\t\t\t\t");
    printf("Father Name           : ");
    fflush(stdin);
    scanf("%[^\n]s", s.fname);
    printf("\n\n\t\t\t\t");
    printf("Mother Name           : ");
    fflush(stdin);
    scanf("%[^\n]s", s.mname);
    printf("\n\n\t\t\t\t");
    printf("Current Address       : ");
    fflush(stdin);
    scanf("%[^\n]s", s.address);
    printf("\n\n\t\t\t\t");
    printf("Phone Number          : ");
    fflush(stdin);
    scanf("%[^\n]s", s.sphone);
    printf("\n\n\t\t\t\t");
    printf("Email Address         : ");
    fflush(stdin);
    scanf("%[^\n]s", s.email);
    printf("\n\n\t\t\t\t");
    printf("Guardian Number       : ");
    fflush(stdin);
    scanf("%[^\n]s", s.gphone);
    fflush(stdin);
}
void output() /// it will show output to user
{
    printf("\n\n\n\t\t\t\t");
    printf("ID No                 : %s", s.id);
    printf("\n\n\t\t\t\t");
    printf("Full Name             : %s", s.name);
    printf("\n\n\t\t\t\t");
    printf("Semester              : %s", s.semester);
    printf("\n\n\t\t\t\t");
    printf("SCGPA                 : %s", s.scgpa);
    printf("\n\n\t\t\t\t");
    printf("Campus                : %s", s.campus);
    printf("\n\n\t\t\t\t");
    printf("Age                   : %s", s.age);
    printf("\n\n\t\t\t\t");
    printf("Father Name           : %s", s.fname);
    printf("\n\n\t\t\t\t");
    printf("Mother Name           : %s", s.mname);
    printf("\n\n\t\t\t\t");
    printf("Current Address       : %s", s.address);
    printf("\n\n\t\t\t\t");
    printf("Phone Number          : %s", s.sphone);
    printf("\n\n\t\t\t\t");
    printf("Email Address         : %s", s.email);
    printf("\n\n\t\t\t\t");
    printf("Guardian Number       : %s", s.gphone);
}
void logout() /// Its for exit or logout from the project
{
    system("cls");
    printf("\n\n\n\n\n\n");
    fflush(stdin);
    printf("\t\t\t\t");
    printf("      Created By : PROJECT SNIPER TEAM .");
    printf("\n\n\n");
    printf("\t\t\t");
    printf("  Special Thanks to Dr. Sheak Rashed Haider Noori SIR ( COURSE  TEACHER ) .");
    printf("\n");
    printf("\t\t\t");
    printf(" Also A Big Thanks To All Who Supported Us To Make This Project .");
    printf("\n\n\n\n\n\n");
    exit(0);
}
void add() /// It will take all input from user and also asked if user wants to add more or no ?
{
    system("cls");
    printf("\n\n\n\n\n\t\t\t\t");
    input();                       /// Input function
    std = fopen("sms.txt", "a");   /// C-File
    fwrite(&s, sizeof(s), 1, std); /// It will write in C-file
    fclose(std);                   /// It will close the C-File
    printf("\n\n\n\t\t\t\t");
    printf("Record Added Successfully !!!");
    printf("\n\n\n\t\t\t\t");
    printf("Do You Want To Add More Students Record ? (Y/N) ==>> "); /// Want to add more or not it will take choice from user
    char more;
    scanf("%s", &more);
    if (more == 'Y' || more == 'y')
    {
        add(); /// Again if user wants to add more then record add function will work again
    }
    else
    {
        dashboard(); /// If user don't want to add more then it will take user to the dashboard
    }
    getchar();
}
void search() /// this function will show student searched records
{
    int ch;
    char si[30];
    system("cls");
    printf("\n\n\n\n\n\t\t\t\t");
    printf("Enter Student's ID No : ");
    fflush(stdin);
    scanf("%[^\n]s", si);
    std = fopen("sms.txt", "r");              /// It will open C-File
    while (fread(&s, sizeof(s), 1, std) == 1) /// It will read C-File
    {
        if (strcmp(si, s.id) == 0) /// It will compare two strings
        {
            ch = 1;
            break;
        }
    }
    if (ch == 1) /// When search successful it will work
    {
        system("cls");
        printf("\n\n\n\n\n\t\t\t\t");
        printf("<<<  SEARCH  SUCCESSFULL  >>>");
        fflush(stdin);
        getchar();
        output(); /// It will show output
        printf("\n\n\n\n\t\t\t\t");
        printf("Press 'ENTER' For Main Menu.....");
        getchar();
        dashboard(); /// It will take user to the dashboard
    }
    else /// If record not found then it will work
    {
        system("cls");
        getchar();
        printf("\n\n\n\n\n\t\t\t\t");
        printf("<<<  Record Not Found  >>>");
        printf("\n\n\n\n\n\t\t\t\t");
        printf("Press 'ENTER' For Main Menu.....");
        getchar();
        dashboard(); /// it will take user to the dashboard
    }
    fclose(std); /// It will close the C - file
}
void modify() /// This function will modify student record
{
    int found = 0;
    char mid[30];
    printf("\n\n\n\n\n\t\t\t\t");
    fflush(stdin);
    printf("Enter Student's ID No: ");
    scanf("%[^\n]s", mid);
    fflush(stdin);
    FILE *std;
    std = fopen("sms.txt", "r+");             /// It will open temporary C-File
    while (fread(&s, sizeof(s), 1, std) == 1) /// It will read C-File
    {
        if (strcmp(mid, s.id) == 0) /// It will compare structures
        {
            fflush(stdin);
            system("cls");
            printf("\n\n\n\n\n\t\t\t\t");
            printf("<<<  OLD  RECORD  >>>");
            printf("\n\n\t\t\t\t");
            output(); /// This output function will show user older record of student
            printf("\n\n\n\n\n\t\t\t\t");
            printf("Press 'ENTER' To Modify The Record.....");
            getchar();
            system("cls");
            input();                               /// This input function will take new record from user
            fseek(std, ftell(std) - sizeof(s), 0); ///
            fwrite(&s, sizeof(s), 1, std);         /// This will write in C-File
            found = 1;
            printf("\n\n\n\t\t\t\t");
            printf("Record Saved !!!");
            getchar();
        }
        fclose(std); /// It will close C-File
        dashboard(); /// Then it will take user to the dashboard
    }
    if (!found) /// If record not found then it will work
    {
        system("cls");
        fflush(stdin);
        printf("\n\n\n\t\t\t\t");
        printf("<<< Record Not Found >>>");
        getchar();
        dashboard(); /// Then it will take user to the dashboard
    }
}
void del() /// This is student record delete function
{
    system("cls");
    FILE *std, *temp; /// C-Files
    int ch;
    char si[30];
    printf("\n\n\n\n\t\t\t\t");
    printf("Enter Student's ID No :");
    fflush(stdin);
    scanf("%[^\n]s", si);
    fflush(stdin);
    std = fopen("sms.txt", "r+");             /// It will open C-File and it will just read
    temp = fopen("temp.txt", "w");            /// It will open C-File and it will write
    while (fread(&s, sizeof(s), 1, std) == 1) /// It will Read C-File when data will match for deletion
    {
        if (strcmp(si, s.id) != 0) /// It will compare structures
        {
            fwrite(&s, sizeof(s), 1, temp); /// It will write in temp C - file
        }
    }
    fclose(std);                   /// It will close std file
    fclose(temp);                  /// It will close Temp file
    remove("sms.txt");             /// It will remove std file
    rename("temp.txt", "sms.txt"); /// It will rename temp file and save as sms file
    remove("sms.txt");             /// It will remove std file
    printf("\n\n\n\n\t\t\t\t");
    printf("Record Deleted Successfully !!!");
    printf("\n\n\n\n\t\t\t\t");
    printf("Press 'ENTER' For Main Menu.....");
    getchar();
    dashboard(); /// It will take user to the dashboard
}

void showInfoAll()
{
}

void showCGPA()
{
}
void dashboard()
{
    system("cls");
    title_bar();
    printf("\t\t\t\t");
    date();
    printf("\n\n\n\n\t\t\t\t\t ");
    printf("<<<  D A S H B O A R D  >>>");
    printf("\n\n\n\n\t\t\t\t");
    printf("1. Search Student Record");
    printf("\n\n\t\t\t\t");
    printf("2. Add Student Record");
    printf("\n\n\t\t\t\t");
    printf("3. Modify Student Record");
    printf("\n\n\t\t\t\t");
    printf("4. Delete Student Record");
    printf("\n\n\t\t\t\t");
    printf("5. Show all Student Record");
    printf("\n\n\t\t\t\t");
    printf("6. Show CGPA of Student");
    printf("\n\n\t\t\t\t");
    printf("7. Logout");
    printf("\n\n\t\t\t\t");
    printf("Choose Your Option: ");
    int option;
    fflush(stdin);
    scanf("%d", &option);
    switch (option)
    {
    case 1:
    {
        system("cls");
        search(); /// Student record Search function
    }
    break;
    case 2:
    {
        system("cls");
        add(); /// Student record add function
    }
    break;
    case 3:
    {
        system("cls");
        modify(); /// Student record Modify function
        getchar();
    }
    break;
    case 4:
    {
        system("cls");
        del(); /// Student record Delete function
    }
    break;
    case 5:
    {
        system("cls");
        void showInfoAll(); /// all student information function
    }
    break;
    case 6:
    {
        system("cls");
        showCGPA(); /// CGPA function
    }
    break;
    case 7:
    {
        system("cls");
        logout(); /// Logout function
    }
    break;
    default:
    {
        fflush(stdin);
        printf("\n\n\n\t\t\t");
        printf("     Invalid Input !!!");
        printf("\n\n\n\t\t\t");
        printf("Press 'ENTER' To Choose Again.....");
        getchar();
        dashboard(); /// It will take user to dashboard
    }
    }
}
void main() /// Main function
{
    system("cls");
    front_page(); /// It will show front page
    login();      /// It will show login page
}

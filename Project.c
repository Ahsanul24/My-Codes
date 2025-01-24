#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <unistd.h>
#include <ctype.h>
#include <time.h>
#define COLOR_BOLD "\e[1m"
#define COLOR_OFF "\e[m"
#define ll long long int
int list();
void addmoney();
void cashout();
void transferamount();
void checkdetails();
void topup();
void welnot();
void createacc();
void op();
void captcha();
void filepass();
void filenum();
int totalamount = 10000, add, out, transamo, totaldepo = 0, totalwith = 0, totaltrans = 0, up;
int transper_acc;
char cpass[10], acc[12];
char a[50], phck[20], genotp[6], putotp[6];
int ch;
char first[50], last[50], phone[19], pass[5], num[12];
int main()
{
up:
    printf("\033[0;37m");
    printf(COLOR_BOLD "                  NIRAPOD MOBILE BANKING                  " COLOR_OFF);
    printf("\033[0;34m"); // blue
    printf(COLOR_BOLD "\n\n\n\n\n\n\n 1.Log In                                          2.Sign Up\n" COLOR_OFF);
    int tem;
    scanf("%d", &tem);
    if (tem == 1)
        op();

    else
        createacc();
    while (true)
    {
        system("cls");
        switch (list())
        {

        case 1:
            addmoney();
            totaldepo += add;
            break;
        case 2:
            cashout();
            if (out <= totalamount)
                totalwith += out;
            break;
        case 3:
            transferamount();
            if (transamo <= totalamount)
                totaltrans += transamo;
            break;
        case 4:
            checkdetails();
            break;
        case 5:
            topup();
            break;
        default:
            system("CLS");
            printf("\033[0;31m"); // red
            printf(COLOR_BOLD "\n\n\n\n******Invalid Choice******" COLOR_OFF);
            printf("\033[0;37m"); // white color
            printf(COLOR_BOLD "\nPress any key twice to choose again" COLOR_OFF);
            for (int i = 0; i < 5; i++)
            {
                Sleep(120);
                printf("\033[0;37m"); // white color
                printf(".");
            }
            getch();
            break;
        }
        getch();
    }
}

int list()
{

    printf("\033[0;37m");
    printf(COLOR_BOLD "                  NIRAPOD MOBILE BANKING                  " COLOR_OFF);
    printf("\033[0;34m"); // blue
    printf(COLOR_BOLD "\n\n\n\n1. Add Money" COLOR_OFF);
    printf("\033[0;34m");
    printf(COLOR_BOLD "\n2. Cash Out" COLOR_OFF);
    printf("\033[0;34m");
    printf(COLOR_BOLD "\n3. Transfer Amount" COLOR_OFF);
    printf("\033[0;34m");
    printf(COLOR_BOLD "\n4. Check details" COLOR_OFF);
    printf("\033[0;34m");
    printf(COLOR_BOLD "\n5. TopUp" COLOR_OFF);
    printf("\033[0;37m"); // white
    printf(COLOR_BOLD "\nEnter your choice: " COLOR_BOLD);
    scanf("%d", &ch);
    return (ch);
}

void addmoney()
{
    system("CLS");
    printf("\033[0;37m");
    printf(COLOR_BOLD "                  NIRAPOD MOBILE BANKING                  " COLOR_OFF);
    printf("\n\n\n\nEnter the amount you want to Add: ");
    scanf("%d", &add);
    system("cls");
    printf("\033[0;37m");
    printf(COLOR_BOLD "                  NIRAPOD MOBILE BANKING                  " COLOR_OFF);
    printf("\n\n\n\nPlease Enter Your Choice:");
    printf("\n1.From Bank Account:");
    printf("\n2.From Card:\n");
    int n;
    scanf("%d", &n);
    system("cls");
    printf("\033[0;37m");
    printf(COLOR_BOLD "                  NIRAPOD MOBILE BANKING                  " COLOR_OFF);
    if (n == 1)
    {
        system("CLS");
        printf("\033[0;37m");
        printf(COLOR_BOLD "                  NIRAPOD MOBILE BANKING                  " COLOR_OFF);
        printf("\n\n\n\nPlease Enter Your Bank Code:" COLOR_OFF);
        printf(COLOR_BOLD "\n101.Islami Bank Bangladesh PLC" COLOR_OFF);
        printf(COLOR_BOLD "\n102.Sonali Bank PLC" COLOR_OFF);
        printf(COLOR_BOLD "\n103.Social Islami Bank Bangladesh PLC\n" COLOR_OFF);
        int k, bank;
        char pass[5];
        scanf("%d", &k);
        if (k == 101 || k == 102 || k == 103)
        {
            system("CLS");
            printf("\033[0;37m");
            printf(COLOR_BOLD "                  NIRAPOD MOBILE BANKING                  " COLOR_OFF);
            printf("\n\n\n\nPlease Enter Your Bank Account Number: ");
            scanf("%d", &bank);
            system("cls");
            printf("\033[0;37m");
            printf(COLOR_BOLD "                  NIRAPOD MOBILE BANKING                  " COLOR_OFF);
            printf("\n\n\n\nEnter Your Password: ");
            for (int i = 0; i < 4; i++)
            {
                ch = getch();
                pass[i] = ch;
                ch = '*';
                printf("%c", ch);
            }
            captcha();
            system("cls");
            printf("\033[0;37m"); // white color code
            printf(COLOR_BOLD "\nPlease Wait For Your Tansaction Is Processing" COLOR_OFF);
            for (int i = 0; i < 5; i++)
            {
                Sleep(120);
                printf(".");
            }
            Sleep(2);
            system("cls");
            printf("\033[0;37m");
            printf(COLOR_BOLD "                  NIRAPOD MOBILE BANKING                  " COLOR_OFF);
            printf("\033[0;32m"); // green color code
            printf(COLOR_BOLD "\n\n\n\nYour Transaction Is Successfull" COLOR_OFF);
            for (int i = 0; i < 5; i++)
            {
                Sleep(120);
                printf(".");
            }
            Sleep(1);
            system("cls");
            printf("\033[0;37m");
            printf(COLOR_BOLD "                  NIRAPOD MOBILE BANKING                  " COLOR_OFF);
            welnot();
        }
        else
        {
            system("cls");
            printf("\033[0;37m");
            printf(COLOR_BOLD "                  NIRAPOD MOBILE BANKING                  " COLOR_OFF);
            printf("\033[0;31m"); // red color code
            printf(COLOR_BOLD "\n\n\n\nInvalid Choice" COLOR_OFF);
            Sleep(10000);
            exit(0);
        }
    }
    else
    {
        system("CLS");
        printf("\033[0;37m");
        printf(COLOR_BOLD "                  NIRAPOD MOBILE BANKING                  " COLOR_OFF);
        printf("\n\n\n\nSelect Your Card");
        printf("\n1.Visa Card");
        printf("\n2.MasterCard\n");
        int h;
        scanf("%d", &h);
        system("CLS");
        printf("\033[0;37m");
        printf(COLOR_BOLD "                  NIRAPOD MOBILE BANKING                  " COLOR_OFF);
        long long cnun, cpasss;
        printf("\n\n\n\nPlease Enter Your Card Number:");
        scanf("%lld", &cnun);
        system("cls");
        printf("\033[0;37m");
        printf(COLOR_BOLD "                  NIRAPOD MOBILE BANKING                  " COLOR_OFF);
        printf("\n\n\n\nPlease Enter Your Password:");
        for (int i = 0; i < 4; i++)
        {
            ch = getch();
            cpass[i] = ch;
            ch = '*';
            printf("%c", ch);
        }
        captcha();
        system("cls");
        printf("\033[0;37m");
        printf(COLOR_BOLD "                  NIRAPOD MOBILE BANKING                  " COLOR_OFF);
        printf("\033[0;37m");
        printf(COLOR_BOLD "\n\n\n\nPlease Wait For Your Tansaction Is Processing" COLOR_OFF);
        for (int i = 0; i < 5; i++)
        {
            Sleep(120);
            printf(".");
        }
        Sleep(2);
        system("cls");
        printf("\033[0;37m");
        printf(COLOR_BOLD "                  NIRAPOD MOBILE BANKING                  " COLOR_OFF);
        printf("\033[0;32m"); // green color code
        printf(COLOR_BOLD "\n\n\n\nYour Transaction Is Successfull" COLOR_OFF);
        for (int i = 0; i < 5; i++)
        {
            Sleep(120);
            printf(".");
        }
        Sleep(1);
        system("cls");
        printf("\033[0;37m");
        printf(COLOR_BOLD "                  NIRAPOD MOBILE BANKING                  " COLOR_OFF);
        welnot();
    }
    totalamount += add;
}
void cashout()
{
    system("cls");
    printf("\033[0;37m");
    printf(COLOR_BOLD "                  NIRAPOD MOBILE BANKING                  " COLOR_OFF);
    char number[19];
    printf(COLOR_BOLD "\n\n\n\nAgent Number:" COLOR_OFF);
    scanf("%s", &number);
    system("cls");
    printf("\033[0;37m");
    printf(COLOR_BOLD "                  NIRAPOD MOBILE BANKING                  " COLOR_OFF);
    printf("\n\n\n\nEnter the amount you want to cashout: ");
    scanf("%d", &out);
    system("cls");
    printf("\033[0;37m");
    printf(COLOR_BOLD "                  NIRAPOD MOBILE BANKING                  " COLOR_OFF);
    if (out <= totalamount)
    {
        printf("\n\n\n\nEnter Password: ");
        char x[5];
        for (int i = 0; i < 4; i++)
        {
            ch = getch();
            x[i] = ch;
            ch = '*';
            printf("%c", ch);
        }
        bool check = true;
        for (int i = 0; i < 4; i++)
        {
            if (x[i] != cpass[i])
            {
                check = false;
                break;
            }
        }
        if (!check)
        {
            system("cls");
            printf("\033[0;37m");
            printf(COLOR_BOLD "                  NIRAPOD MOBILE BANKING                  " COLOR_OFF);
            printf("\033[0;31m"); // red color
            printf(COLOR_BOLD "\n\n\n\nIncorecct Password" COLOR_OFF);
            Sleep(10000);
            exit(0);
        }
        totalamount -= out;
        captcha();
        system("cls");
        printf("\033[0;37m");
        printf(COLOR_BOLD "                  NIRAPOD MOBILE BANKING                  " COLOR_OFF);
        printf("\033[0;37m");
        printf(COLOR_BOLD "\n\n\n\nPlease Wait Your Tansaction Is Processing" COLOR_OFF);
        for (int i = 0; i < 8; i++)
        {
            Sleep(100);
            printf(".");
        }
        sleep(1);
        system("cls");
        // Sleep(2);
        printf("\033[0;37m");
        printf(COLOR_BOLD "                  NIRAPOD MOBILE BANKING                  " COLOR_OFF);
        printf("\033[0;32m"); // green color code
        printf(COLOR_BOLD "\n\n\n\nYour Transaction Is Successfull" COLOR_OFF);
        for (int i = 0; i < 8; i++)
        {
            Sleep(100);
            printf(".");
        }
        Sleep(1000);
        system("cls");
        printf("\033[0;37m");
        printf(COLOR_BOLD "                  NIRAPOD MOBILE BANKING                  " COLOR_OFF);
        welnot();
    }
    else
    {
        system("cls");
        printf("\033[0;37m");
        printf(COLOR_BOLD "                  NIRAPOD MOBILE BANKING                  " COLOR_OFF);
        printf("\033[0;31m"); // red color
        printf(COLOR_BOLD "\n\n\n\n******Insufficient Balance******" COLOR_OFF);
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        Sleep(2);
        welnot();
        Sleep(10000);
        exit(0);
    }
}
void transferamount()
{
    system("cls");
    printf("\033[0;37m");
    printf(COLOR_BOLD "                  NIRAPOD MOBILE BANKING                  " COLOR_OFF);
    printf("\n\n\n\nEnter The Mobile Number: ");
    scanf("%d", &transper_acc);
    system("cls");
    printf("\033[0;37m");
    printf(COLOR_BOLD "                  NIRAPOD MOBILE BANKING                  " COLOR_OFF);
    printf("\n\n\n\nAmount: ");
    scanf("%d", &transamo);
    system("cls");
    printf("\033[0;37m");
    printf(COLOR_BOLD "                  NIRAPOD MOBILE BANKING                  " COLOR_OFF);
    printf("\n\n\n\nEnter PIN Number:");
    char n[5];
    scanf("%s", &n);
    bool check = true;
    for (int i = 0; i < 4; i++)
    {
        if (n[i] != cpass[i])
        {
            check = false;
            break;
        }
    }
    system("cls");
    printf("\033[0;37m");
    printf(COLOR_BOLD "                  NIRAPOD MOBILE BANKING                  " COLOR_OFF);
    if (!check)
    {
        system("cls");
        printf("\033[0;37m");
        printf(COLOR_BOLD "                  NIRAPOD MOBILE BANKING                  " COLOR_OFF);
        printf("\033[0;31m"); // red color
        printf(COLOR_BOLD "\n \n\n\nIncorrect PIN\e[m" COLOR_OFF);
        exit(0);
    }
    captcha();
    system("cls");
    printf("\033[0;37m");
    printf(COLOR_BOLD "                  NIRAPOD MOBILE BANKING                  " COLOR_OFF);
    if (transamo <= totalamount)
    {
        totalamount -= transamo;
        printf("\033[0;32m"); // green color code
        printf("\n\n\n\nSuccessfully Transfered");
        for (int i = 1; i < 8; i++)
        {
            Sleep(100);
            printf(".");
        }
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        system("cls");
        printf("\033[0;37m");
        printf(COLOR_BOLD "                  NIRAPOD MOBILE BANKING                  " COLOR_OFF);
        welnot();
    }
    else
    {
        printf("\033[0;31m"); // red color
        printf(COLOR_BOLD "\n\n\n\nInsufficient Balance" COLOR_OFF);
        for (int i = 1; i < 8; i++)
        {
            Sleep(100);
            printf(".");
        }
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        welnot();
    }
}
void checkdetails()
{
    system("cls");
    printf("\033[0;37m");
    printf(COLOR_BOLD "                  NIRAPOD MOBILE BANKING                  " COLOR_OFF);
    printf("\n\n\n\nTotal Amount=%d", totalamount);
    printf("\nTotal Deposited Amount=%d", totaldepo);
    printf("\nTotal Withdrawn Amount=%d", totalwith);
    printf("\nTotal Transfered Amount=%d", totaltrans);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    welnot();
}
void topup()
{
    system("cls");
    printf("\033[0;37m");
    printf(COLOR_BOLD "                  NIRAPOD MOBILE BANKING                  " COLOR_OFF);
    printf("\n\n\n\nEnter Mobile Number:");
    ll nm, i, temp;
    scanf("%lld", &nm);
    system("cls");
    printf("\033[0;37m");
    printf(COLOR_BOLD "                  NIRAPOD MOBILE BANKING                  " COLOR_OFF);
    printf("\n\n\n\nSelect Oparetor:");
    printf("\n1.Banlalink");
    printf("\n2.Robi");
    printf("\n3.Airtel");
    printf("\n4.Teletalk");
    printf("\n5.Grameenphone\n");
    scanf("%d", &i);
    system("cls");
    printf("\033[0;37m");
    printf(COLOR_BOLD "                  NIRAPOD MOBILE BANKING                  " COLOR_OFF);
    printf("\n\n\n\nEnter Amount:");
    scanf("%lld", &temp);
    if (temp > totalamount)
    {
        system("cls");
        printf("\033[0;37m");
        printf(COLOR_BOLD "                  NIRAPOD MOBILE BANKING                  " COLOR_OFF);
        printf("\033[0;31m"); // red color
        printf(COLOR_BOLD "\n\n\n\nInsufficient Balance" COLOR_OFF);
        for (int i = 1; i < 8; i++)
        {
            Sleep(100);
            printf(".");
        }
    }
    else
    {
        system("cls");
        printf("\033[0;37m");
        printf(COLOR_BOLD "                  NIRAPOD MOBILE BANKING                  " COLOR_OFF);
        printf("\n\n\n\nEnter Password: ");
        char x[5];
        for (int i = 0; i < 4; i++)
        {
            ch = getch();
            x[i] = ch;
            ch = '*';
            printf("%c", ch);
        }
        bool check = true;
        for (int i = 0; i < 4; i++)
        {
            if (x[i] != cpass[i])
            {
                check = false;
                break;
            }
        }
        if (!check)
        {
            system("cls");
            printf("\033[0;37m");
            printf(COLOR_BOLD "                  NIRAPOD MOBILE BANKING                  " COLOR_OFF);
            printf("\033[0;31m"); // red color
            printf(COLOR_BOLD "\n\n\n\nIncorecct Password" COLOR_OFF);
            Sleep(10000);
            exit(0);
        }
        totalamount -= temp;
        captcha();
        system("cls");
        printf("\033[0;37m");
        printf(COLOR_BOLD "                  NIRAPOD MOBILE BANKING                  " COLOR_OFF);
        printf("\033[0;37m");
        printf(COLOR_BOLD "\n\n\n\nPlease Wait For Your Tansaction Is Processing" COLOR_OFF);
        for (int i = 0; i < 8; i++)
        {
            Sleep(100);
            printf(".");
        }
        system("cls");
        printf("\033[0;37m");
        printf(COLOR_BOLD "                  NIRAPOD MOBILE BANKING                  " COLOR_OFF);
        printf("\033[0;32m"); // green color code
        printf("\n\n\n\nTopup Successful");
        for (int i = 1; i < 8; i++)
        {
            Sleep(100);
            printf(".");
        }
    }
    system("cls");
    printf("\033[0;37m");
    printf(COLOR_BOLD "                  NIRAPOD MOBILE BANKING                  " COLOR_OFF);
    welnot();
}
void welnot()
{
    printf("\033[0;35m"); // purple color code;
    printf("\n\n\n\nTHANK YOU FOR USING NIRAPOD MOBILE BANKING SERVIESES");
    for (int i = 1; i < 8; i++)
    {
        Sleep(100);
        printf(".");
    }
}
void createacc()
{
    system("cls");
    printf("\033[0;37m");
    printf(COLOR_BOLD "                  NIRAPOD MOBILE BANKING                  " COLOR_OFF);
    filenum();

    char a[50], b[50], c[50], d[50];
    printf("\n\n\n\n\nEnter Your First Name: ");
    scanf("%s", &first);
    printf("\nEnter Your last Name: ");
    scanf("%s", &last);
    printf("\nEnter Your Phone Number: ");
    scanf("%s", &phone);
    if (strcmp(phone, num) == 0)
    {
        system("cls");
        printf("\033[0;31m"); // red color code
        printf(COLOR_BOLD "\n\n\n\nAlready Registered.Please log In....." COLOR_OFF);
        Sleep(10000);
        exit(0);
    }
    printf("\nSet Password: ");
    for (int i = 0; i < 5; i++)
    {
        ch = getch();
        pass[i] = ch;
        ch = '*';
        printf("%c", ch);
    }
    captcha();
    FILE *fp;
    fp = fopen("projectacc.txt", "w+");
    fprintf(fp, "%s%s%s%s", pass, phone, first, last);
    fclose(fp);
    system("cls");
    printf("\033[0;37m");
    printf(COLOR_BOLD "                  NIRAPOD MOBILE BANKING                  " COLOR_OFF);
    Sleep(100);
    printf("\033[0;32m"); // green color code
    printf(COLOR_BOLD "\n\n\nSuccesfully Created Account" COLOR_OFF);
    for (int i = 0; i < 5; i++)
    {
        Sleep(120);
        printf(".");
    }
}
void op()
{
    system("cls");
    printf("\033[0;37m");
    printf(COLOR_BOLD "                  NIRAPOD MOBILE BANKING                  " COLOR_OFF);
    char pass[5], o[5];
    filenum();
    filepass();
    printf("\n\n\n\nEnter Your Mobile Number: ");
    scanf("%s", &acc);
    printf("\nEnter Your Password: ");
    for (int i = 0; i < 4; i++)
    {
        ch = getch();
        pass[i] = ch;
        ch = '*';
        printf("%c", ch);
    }
    bool check = true;
    for (int i = 0; i < 4; i++)
    {
        if (pass[i] != cpass[i])
            check = false;
    }
    if (!check)
    {
        system("cls");
        printf("\033[0;31m"); // red color code
        printf(COLOR_BOLD "\n\n\n\nIncorrect Password!!!" COLOR_OFF);
        Sleep(10000);
        // exit(0);
    }
    else if (strcmp(acc, num) != 0)
    {
        system("cls");
        printf("\033[0;31m"); // red color code
        printf(COLOR_BOLD "\n\n\n\nNot Registered.Please Sing Up" COLOR_OFF);
        Sleep(10000);
        exit(1);
    }
    else
        captcha();
}
void captcha() // complete
{
    char c;
    int i;
    srand((unsigned)time(NULL));
    for (i = 0; i < 5;)
    {
        c = rand() % 127;
        if (isalnum(c))
        {
            genotp[i] = c;
            i++;
        }
    }
    system("cls");
    printf("\033[0;37m");
    printf(COLOR_BOLD "                  NIRAPOD MOBILE BANKING                  " COLOR_OFF);
    printf("\033[0;35m"); // purple color code;
    printf(COLOR_BOLD "\n\n\nEnter The Code: %s\n", genotp);
    scanf("%s", &putotp);
    if (strcmp(genotp, putotp) == 0)
    {
        printf("\033[0;32m"); // green color code
        printf(COLOR_BOLD "\nCaptcha Matched" COLOR_OFF);
        for (int i = 0; i < 5; i++)
        {
            Sleep(120);
            printf(".");
        }
        Sleep(100);
    }
    else
    {
        printf("\033[0;31m"); // red color code
        printf(COLOR_BOLD "\nCaptcha Mismatched" COLOR_OFF);
        for (int i = 0; i < 5; i++)
        {
            Sleep(120);
            printf(".");
        }
        Sleep(10000);
        exit(0);
    }
}
void filepass()
{
    FILE *fp;
    fp = fopen("projectacc.txt", "r");
    char ch;
    int count = 0, i = 0;
    while (!feof(fp))
    {
        ch = fgetc(fp);
        cpass[i] = ch;
        i++;
        if (i == 4)
            break;
    }
    fclose(fp);
}
void filenum()
{
    FILE *fp;
    fp = fopen("projectacc.txt", "r");
    char ch;
    int count = 0, i = 0;
    while (!feof(fp))
    {
        ch = fgetc(fp);
        count++;
        if (count > 5)
        {
            num[i] = ch;
            i++;
            if (i == 11)
                break;
        }
    }
    fclose(fp);
}
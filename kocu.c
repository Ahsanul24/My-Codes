#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <unistd.h>
#define COLOR_BOLD "\e[1m"
#define COLOR_OFF "\e[m"
#define ll long long
int ch;
char phnum[19], cpass[] = "123456";
int itemlist();
void grocery();
void cosmetics();
void bevarage();
int main()
{
    char name[50];
    ll phone_number;
    ll customer_id;
    printf("\033[0;37m");
    printf(COLOR_BOLD "                 MAYER DOA ONLINE SUPERSHOP                 " COLOR_OFF);
    printf("\033[0;34m"); // blue
    printf(COLOR_BOLD "\n                         LOG IN" COLOR_OFF);
    printf("\n\n\n\nEnter Number: ");
    scanf("%s", &phnum);
    char pass[6];
    printf("\nPassword: ");
    for (int i = 0; i < 6; i++)
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
        printf(COLOR_BOLD "\n\n\n\nIncorrect Password" COLOR_OFF);
        Sleep(5);
        exit(0);
    }
    while (true)
    {
        system("cls");
        switch (itemlist())
        {
        case 1:
            grocery();
            break;
        case 2:
            cosmetics();
            break;
        case 3:
            bevarage();
            break;
        default:
            system("cls");
            printf("\033[0;37m");
            printf(COLOR_BOLD "                 Invalid                 " COLOR_OFF);
            printf("\033[0;37m"); // white color
            printf(COLOR_BOLD "\nPress any key for to choose again" COLOR_OFF);
            getch();
            break;
        }
    }
}
int itemlist()
{
    system("cls");
    printf("\033[0;37m");
    printf(COLOR_BOLD "                 MAYER DOA ONLINE SUPERSHOP                 " COLOR_OFF);
    printf("\033[0;34m");
    printf(COLOR_BOLD "\n\n\n\n1. Grocery" COLOR_OFF);
    printf("\033[0;34m");
    printf(COLOR_BOLD "\n2.Cosmetics" COLOR_OFF);
    printf("\033[0;34m");
    printf(COLOR_BOLD "\n3. Beverage" COLOR_OFF);
    printf("\033[0;37m"); // white
    printf(COLOR_BOLD "\nEnter your choice: " COLOR_BOLD);
    scanf("%d", &ch);
    return (ch);
}
void grocery()
{
    int suger;
    int tea;
    int coffee;
    int rice;
    int wheat;
    int salt;
    int sauce;
    int chilli_powder;
    int cooking_oil;
    int tejpata;
    int dal;
    int milk;
    int suji;
    int tissue_paper;
    system("cls");
    printf("\033[0;37m");
    printf(COLOR_BOLD "                 MAYER DOA ONLINE SUPERSHOP                 " COLOR_OFF);
    printf("\n Product       Quantity");
    printf("\nSuger ( tk 100 ) : ");
    scanf("%d", &suger);
    printf("Tea ( tk 15 ) : ");
    scanf("%d", &tea);
    printf("Coffee ( tk 50 ) : ");
    scanf("%d", &coffee);
    printf("Rice ( tk 150 ) : ");
    scanf("%d", &rice);
    printf("Wheat ( tk 160 ) : ");
    scanf("%d", &wheat);
    printf("salt ( tk 30 )");
    scanf("%d", &salt);
    printf("Sauce ( tk 60 )");
    scanf("%d", &sauce);
    printf("Chilli Powder ( tk 220 )");
    scanf("%d", &chilli_powder);
    printf("Cooking Oil ( tk 200 )");
    scanf("%d", &cooking_oil);
    printf("Tejpata ( tk 110 )");
    scanf("%d", &tejpata);
    printf("Dal ( tk 120 )");
    scanf("%d", &dal);
    printf("Milk ( tk 100 )");
    scanf("%d", &milk);
    printf("Suji ( tk 45 )");
    scanf("%d", &suji);
    printf("Tissue paper ( tk 50 )");
    scanf("%d", &tissue_paper);
    int s;
    int t;
    int c;
    int r;
    int w;
    int sal;
    int sau;
    int chp;
    int co;
    int tej;
    int d;
    int mi;
    int su;
    int tip;

    s = 100 * suger;
    t = 15 * tea;
    c = 50 * coffee;
    r = 150 * rice;
    w = 160 * wheat;
    sal = 30 * salt;
    sau = 60 * sauce;
    chp = 220 * chilli_powder;
    co = 200 * cooking_oil;
    tej = 110 * tejpata;
    d = 120 * dal;
    mi = 100 * milk;
    su = 45 * suji;
    tip = 50 * tissue_paper;

    ll grocery_total = s + t + c + r + w + sal + sau + chp + co + tej + d + mi + su + tip;


    system("cls");
    printf("\033[0;37m");
    printf(COLOR_BOLD "                 MAYER DOA ONLINE SUPERSHOP                 " COLOR_OFF);
    printf("\nPlease pay tk %lld", grocery_total);
    printf("\nChoose Payment Method: ");
    printf("\n1.Online Payment.");
    printf("\n2.Cash On Delivery.");
    int n; scanf("%d",&n);
    if(n==1)
    {
        system("cls");
        printf("\033[0;37m");
        printf(COLOR_BOLD "                 MAYER DOA ONLINE SUPERSHOP                 " COLOR_OFF);
        printf("\n1.Card");
        printf("\n2.Bkash");
        printf("\n3.Rocket");
        printf("\n4.Nagad");
        printf("\nSelect One: ");
        int tem;scanf("%d",&tem);
        if(tem==1)
        {
            printf("\nEnter Card Number:");
            ll card;
            scanf("%lld",&card);
            printf("\nPassword: ");
            char pass[4];
            for (int i = 0; i < 4; i++)
            {
                ch = getch();
                pass[i] = ch;
                ch = '*';
                printf("%c", ch);
            }
            system("cls");
            printf("\033[0;37m");
            printf(COLOR_BOLD "                 MAYER DOA ONLINE SUPERSHOP                 " COLOR_OFF);

            printf("\nPayment Successful");
            Sleep(1000);
            printf("\nOrder Complete");
            Sleep(1000);
        }
        else
        {
            system("cls");
            printf("\033[0;37m");
            printf(COLOR_BOLD "                 MAYER DOA ONLINE SUPERSHOP                 " COLOR_OFF);
            printf("\nEnter Mobile Number: ");
            scanf("%s",&phnum);
            printf("\nPassword: ");
            char pass[4];
            for (int i = 0; i < 4; i++)
            {
                ch = getch();
                pass[i] = ch;
                ch = '*';
                printf("%c", ch);
            }
            system("cls");
            printf("\033[0;37m");
            printf(COLOR_BOLD "                 MAYER DOA ONLINE SUPERSHOP                 " COLOR_OFF);
            printf("\nPayment Successful");
            Sleep(1000);
            printf("\nOrder Complete");
            Sleep(1000);
        }
    }
    else
    {
        system("cls");
        printf("\033[0;37m");
        printf(COLOR_BOLD "                 MAYER DOA ONLINE SUPERSHOP                 " COLOR_OFF);
        printf("\nOrder Complete");
        Sleep(1000);
    }
}
void cosmetics()
{
    int body_soap;
    int hair_cream;
    int hair_spray;
    int body_spray;
    int oil;
    int lipstick;
    int shaving_foam;
    system("cls");
    printf("\033[0;37m");
    printf(COLOR_BOLD "                 MAYER DOA ONLINE SUPERSHOP                 " COLOR_OFF);
    printf("\n Product       Quantity");
    printf("\nBody Soap ( tk 10 ) : ");
    scanf("%d", &body_soap);
    printf("Hair Cream ( tk 25 ) : ");
    scanf("%d", &hair_cream);
    printf(" Body spray ( tk 50 ) : ");
    scanf("%d", &body_spray);
    printf(" Hair Spray ( tk 50 ) : ");
    scanf("%d", &hair_spray);
    printf("Oil ( tk 180 )");
    scanf("%d", &oil);
    printf("Lipstick ( tk 250 )");
    scanf("%d", &lipstick);
    printf("Shaving foam ( tk 150 )");
    scanf("%d", &shaving_foam);
    int boso;
    int hc;
    int hs;
    int bosp;
    int o;
    int lip;
    int shaf;

    boso = 10 * body_soap;
    hc = 25 * hair_cream;
    hs = 50 * hair_spray;
    bosp = 50 * body_spray;
    o = 180 * oil;
    lip = 250 * lipstick;
    shaf = 150 * shaving_foam;

    ll cosmetics_total = boso + hc + hs + bosp + o + lip + shaf;
    system("cls");
    printf("\033[0;37m");
    printf(COLOR_BOLD "                 MAYER DOA ONLINE SUPERSHOP                 " COLOR_OFF);
    printf("\nPlease pay tk %lld", cosmetics_total);
    printf("\nChoose Payment Method: ");
    printf("\n1.Online Payment.");
    printf("\n2.Cash On Delivery.");
    int n;
    scanf("%d", &n);
    if (n == 1)
    {
        system("cls");
        printf("\033[0;37m");
        printf(COLOR_BOLD "                 MAYER DOA ONLINE SUPERSHOP                 " COLOR_OFF);
        printf("\n1.Card");
        printf("\n2.Bkash");
        printf("\n3.Rocket");
        printf("\n4.Nagad");
        printf("\nSelect One: ");
        int tem;
        scanf("%d", &tem);
        if (tem == 1)
        {
            printf("\nEnter Card Number:");
            ll card;
            scanf("%lld", &card);
            printf("\nPassword: ");
            char pass[4];
            for (int i = 0; i < 4; i++)
            {
                ch = getch();
                pass[i] = ch;
                ch = '*';
                printf("%c", ch);
            }
            system("cls");
            printf("\033[0;37m");
            printf(COLOR_BOLD "                 MAYER DOA ONLINE SUPERSHOP                 " COLOR_OFF);

            printf("\nPayment Successful");
            Sleep(1000);
            printf("\nOrder Complete");
            Sleep(1000);
        }
        else
        {
            system("cls");
            printf("\033[0;37m");
            printf(COLOR_BOLD "                 MAYER DOA ONLINE SUPERSHOP                 " COLOR_OFF);
            printf("\nEnter Mobile Number: ");
            scanf("%s", &phnum);
            printf("\nPassword: ");
            char pass[4];
            for (int i = 0; i < 4; i++)
            {
                ch = getch();
                pass[i] = ch;
                ch = '*';
                printf("%c", ch);
            }
            system("cls");
            printf("\033[0;37m");
            printf(COLOR_BOLD "                 MAYER DOA ONLINE SUPERSHOP                 " COLOR_OFF);
            printf("\nPayment Successful");
            Sleep(1000);
            printf("\nOrder Complete");
            Sleep(1000);
        }
    }
    else
    {
        system("cls");
        printf("\033[0;37m");
        printf(COLOR_BOLD "                 MAYER DOA ONLINE SUPERSHOP                 " COLOR_OFF);
        printf("\nOrder Complete");
        Sleep(1000);
    }
}
void bevarage()
{
    int pepsi;
    int sprite;
    int coke;
    int mojitos;
    int thumbs_up;
    int fanta;
    int mojo;
    system("cls");
    printf("\033[0;37m");
    printf(COLOR_BOLD "                 MAYER DOA ONLINE SUPERSHOP                 " COLOR_OFF);
    printf("\n Product       Quantity");
    printf("\nPepsi ( tk 30  ) : ");
    scanf("%d", &pepsi);
    printf("Sprite ( tk 35 ) : ");
    scanf("%d", &sprite);
    printf("Coke ( tk 30 ) : ");
    scanf("%d", &coke);
    printf("Mojitos ( tk 25  ) : ");
    scanf("%d", &mojitos);
    printf("Thumbs Up ( tk 35  ) : ");
    scanf("%d", &thumbs_up);
    printf("Fanta ( tk 80 )");
    scanf("%d", &fanta);
    printf("Mojo ( tk 70 )");
    scanf("%d", &mojo);
    int pep;
    int spr;
    int cok;
    int moj;
    int thu;
    int f;
    int mo;

    pep = 30 * pepsi;
    spr = 35 * sprite;
    cok = 30 * coke;
    moj = 25 * mojitos;
    thu = 35 * thumbs_up;
    f = 80 * fanta;
    mo = 70 * mojo;
    ll beverage_total = pep + spr + cok + moj + thu + f + mo;
    system("cls");
    printf("\033[0;37m");
    printf(COLOR_BOLD "                 MAYER DOA ONLINE SUPERSHOP                 " COLOR_OFF);
    printf("\nPlease pay tk %lld", beverage_total);
    printf("\nChoose Payment Method: ");
    printf("\n1.Online Payment.");
    printf("\n2.Cash On Delivery.");
    int n;
    scanf("%d", &n);
    if (n == 1)
    {
        system("cls");
        printf("\033[0;37m");
        printf(COLOR_BOLD "                 MAYER DOA ONLINE SUPERSHOP                 " COLOR_OFF);
        printf("\n1.Card");
        printf("\n2.Bkash");
        printf("\n3.Rocket");
        printf("\n4.Nagad");
        printf("\nSelect One: ");
        int tem;
        scanf("%d", &tem);
        if (tem == 1)
        {
            printf("\nEnter Card Number:");
            ll card;
            scanf("%lld", &card);
            printf("\nPassword: ");
            char pass[4];
            for (int i = 0; i < 4; i++)
            {
                ch = getch();
                pass[i] = ch;
                ch = '*';
                printf("%c", ch);
            }
            system("cls");
            printf("\033[0;37m");
            printf(COLOR_BOLD "                 MAYER DOA ONLINE SUPERSHOP                 " COLOR_OFF);

            printf("\nPayment Successful");
            Sleep(1000);
            printf("\nOrder Complete");
            Sleep(1000);
        }
        else
        {
            system("cls");
            printf("\033[0;37m");
            printf(COLOR_BOLD "                 MAYER DOA ONLINE SUPERSHOP                 " COLOR_OFF);
            printf("\nEnter Mobile Number: ");
            scanf("%s", &phnum);
            printf("\nPassword: ");
            char pass[4];
            for (int i = 0; i < 4; i++)
            {
                ch = getch();
                pass[i] = ch;
                ch = '*';
                printf("%c", ch);
            }
            system("cls");
            printf("\033[0;37m");
            printf(COLOR_BOLD "                 MAYER DOA ONLINE SUPERSHOP                 " COLOR_OFF);
            printf("\nPayment Successful");
            Sleep(1000);
            printf("\nOrder Complete");
            Sleep(1000);
        }
    }
    else
    {
        system("cls");
        printf("\033[0;37m");
        printf(COLOR_BOLD "                 MAYER DOA ONLINE SUPERSHOP                 " COLOR_OFF);
        printf("\nOrder Complete");
        Sleep(1000);
    }
}
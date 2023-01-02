
#include "menu.c"
void login()
{
    char user[20];
    char pass[20];
    int flag = 0;
    do
    {
    system("cls");
        printf("\n____________________________ login to contnue ____________________________\n\n");
        printf("                          enter USERNAME > ");
        scanf("%s", user);
        printf("                          enter PASSWORD > ");
        scanf("%s", pass);

        if ((strcmp(user, "rajkiran") == 0) && (strcmp(pass, "1539") == 0))
        {
            printf("\n                             login successfull");
            Sleep(3000);
            mainmenu();
        }
        else
        {
            printf("                       INVALID username or password !!!");
            Sleep(2000);
            flag++;
        }
    } while (flag != 3);
    if (flag == 3)
    {
        system("cls");
        printf("                            LOGIN LIMIT EXCEEDED !!!! ");
        Sleep(2000);
        exit(0);
    }
}
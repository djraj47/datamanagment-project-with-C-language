#include "login.c"
int main()
{
    //system("cls");
    int option;
    char ch;
    do
    {
        printf("____________________________ WELCOME TO 24/7 HUB ____________________________\n\n");
        printf("                       press < 1 > to LOGIN \n");
       
        printf("                       press < 2 > to EXIT \n");
        printf("______________________________________________________________________________\n\n");
        printf("                       press < 1 - 2 > ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            login();
            break;

        case 2:
            exit(0);
            break;

        default:
            printf("                       INVALID INPUT !!!!!! \n");
            break;
        }
        printf("                       press ENTER to continue ");
        scanf("%c*c", &ch);
    } while (ch == '\n');
}

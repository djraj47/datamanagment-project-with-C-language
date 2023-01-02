#include "login.c"
int main()
{
    int option;
    char ch;
    do
    {
        system("cls");
        printf("\x1B[93m                   0000000   00    00         /   000000000    \033[0m\n");
        printf("\x1B[93m                        00   00    00        /          00     \033[0m\n");
        printf("\x1B[93m                        00   00    00       /          00      \033[0m\n");
        printf("\x1B[93m                   0000000   00000000      /          00       \033[0m\n");
        printf("\x1B[93m                   00              00     /          00        \033[0m\n");
        printf("\x1B[93m                   00              00    /          00         \033[0m\n");
        printf("\x1B[93m                   0000000         00   /          00          \033[0m\n\n\n");
        printf("____________________________ WELCOME TO 24/7 HUB ____________________________\n\n");
        printf("                           press < 1 > to LOGIN\n");

        printf("                           press < 2 > to EXIT \n");
        printf("______________________________________________________________________________\n\n");
        printf("                              press < 1 - 2 > ");
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
            printf("                           INVALID INPUT !!!!!! \n");
            Sleep(1000);
            break;
        }
        printf("\n                       press ENTER to continue ");
        scanf("%c0c", &ch);
    } while (ch == '\n');
}

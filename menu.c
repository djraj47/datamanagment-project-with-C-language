#include "add.c"
#include "edit.c"
#include "view.c"
#include "deletee.c"
#include"bill.c"

int main()
{
    int option;
    char ch;
    do
    {
        system("cls");
        printf("______________________________________________________________________________\n\n");
        printf("                       press < 1 > to ADD PRODUCT \n");
        printf("                       press < 2 > to EDIT PRODUCT \n");
        printf("                       press < 3 > to VIEW PRODUCT \n");
        printf("                       press < 4 > to DELETE PRODUCT \n");
        printf("                       press < 5 > to GENERATE BILL \n");
        printf("                       press < 6 > to EXIT \n\n");
        printf("______________________________________________________________________________\n\n");
        printf("                       press < 1 - 6 > ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            add();
            break;

        case 2:
            edit();
            break;

        case 3:
            view();
            break;

        case 4:
            deletee();
            break;

        case 5:
            bill();
            break;

        case 6:
            exit(0);
            

        default:
            printf("                       INVALID INPUT !!!!!! \n");
            break;
        }
        printf("                       press ENTER to continue ");
        scanf("%c*c", &ch);
    } while (ch == '\n');
}
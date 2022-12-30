
#include"menu.c"

void login()
{
    system("cls");
    char user[20];
    char pass[20];
    int flag = 0;

    do
    {
  
    printf("                              login to contnue\n\n");
    printf("                           enter USERNAME > ");
    scanf("%s", user);
    printf("                           enter PASSWORD > ");
    scanf("%s", pass);

    if ((strcmp(user , "rajkiran")==0) && (strcmp( pass, "1539")==0))
    {
    printf("\n                           login successfull");
    mainmenu();
   
    }
    else 
    {
    printf("                         INVALID username or password !!!");
    flag++;
    }
} while (flag != 3);
    if (flag == 3)
    {
        system("cls");
    printf("                            LOGIN LIMIT EXCEEDED !!!! ");
       
    }
}
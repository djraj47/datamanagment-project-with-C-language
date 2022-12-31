#include "headerfile.h"
void view()
{
    system("cls");
    FILE *fptr;
    item p1;
    int i = 1;
    fptr = fopen("storage.bin", "rb");
    
    printf("================================================================================================\n");
    printf("%-20s %-20s %-20s %-20s %-20s \n","S.NO","ID" , "NAME" , "PRICE" , "QUANTITY");
    printf("================================================================================================\n");
    while (fread(&p1, sizeof(item), 1, fptr))
    {
        printf("%-20d %-20d %-20s %-20d %-20d \n",i, p1.ID, p1.name, p1.PRICE, p1.QUANTITY);
        i++;
    }
    fclose(fptr);
    
}
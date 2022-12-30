#include "headerfile.h"
void edit()
{
    system("cls");
    FILE *fileptr;
    int id;
    item p1;
    fileptr = fopen("storge.bin", "rb+");
    printf("enter ITEM ID to change < ");
    scanf("%d", &id);
    while (fread(&p1, sizeof(item), 1, fileptr) == 1)
    {
        if (p1.ID == id)
        {
            printf("item found !!!\n\n");
            printf("\nitem ID < %d ", p1.ID);
            printf("\nitem NAME < %s ", p1.name);
            printf("\nitem PRICE < %d ", p1.PRICE);
            printf("\nitem QUNATITY < %d ", p1.QUANTITY);

            printf("enter new details \n\n");
            printf("item new ID < %d ", p1.ID);
            scanf("%d", &p1.ID);
            printf("item new NAME ");
            scanf("%[^\n]%*c", &p1.name);
            printf("item new PRICE ");
            scanf("%d", &p1.PRICE);
            printf("item new QUNATITY ");
            scanf("d", &p1.QUANTITY);
            fwrite(&p1, sizeof(item), 1, fileptr);
        }
        else
        {
            printf("\n no record found !!! ");
        }
    }
    printf("edit successfully !");
    fclose(fileptr);
}
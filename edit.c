#include "headerfile.h"
void edit()
{
    system("cls");
    FILE *fileptr;
    int id, flag = 0, size = sizeof(item);
    item p1;
    fileptr = fopen("storage.bin", "rb+");
    printf("enter ITEM ID to change < ");
    scanf("%d*c", &id);
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
            printf("enter item new ID < ");
            scanf("%d", &p1.ID);
            printf("enter item new NAME < ");
            scanf("%[^\n]%*c", &p1.name);
            printf("enter item new PRICE < ");
            scanf("%d", &p1.PRICE);
            printf("enter item new QUNATITY < ");
            scanf("%d", &p1.QUANTITY);
            fseek(fileptr, -size, SEEK_CUR);
            fwrite(&p1, sizeof(item), 1, fileptr);
            flag++;
            break;
        }
    }
        if (flag == 1)
        {
            printf("item edited successfully !!!");
        }
        else
        {
            printf("\n no record found !!! ");
        }
    fclose(fileptr);
    char ch;
    scanf("%c", &ch);
}
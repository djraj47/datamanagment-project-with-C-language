#include "headerfile.h"
void edit()
{
    system("cls");
    FILE *fileptr;
    int id, flag = 0, size = sizeof(item);
    item p1;
    fileptr = fopen("storage.bin", "rb+");
        printf("____________________________ EDIT ITEM ____________________________\n\n");

    printf("        enter ITEM ID to change < ");
    scanf("%d*c", &id);
    while (fread(&p1, sizeof(item), 1, fileptr) == 1)
    {
        if (p1.ID == id)
        {
            printf("                       item found !!!\n");
            printf("\n        item ID < %d ", p1.ID);
            printf("\n        item NAME < %s ", p1.name);
            printf("\n        item PRICE < %d ", p1.PRICE);
            printf("\n        item QUNATITY < %d ", p1.QUANTITY);
            printf("\n\n                       enter new details \n\n");
            printf("        enter item new ID < ");
            scanf("%d", &p1.ID);
            printf("        enter item new NAME < ");
            scanf("%s%*c", &p1.name);
            printf("        enter item new PRICE < ");
            scanf("%d", &p1.PRICE);
            printf("        enter item new QUNATITY < ");
            scanf("%d", &p1.QUANTITY);
            fseek(fileptr, -size, SEEK_CUR);
            fwrite(&p1, sizeof(item), 1, fileptr);
            flag++;
            break;
        }
    }
    if (flag == 1)
    {
        printf("                       item edited successfully !!!\n\n");
    }
    else
    {
        printf("                       no record found !!! \n\n");
    }
    fclose(fileptr);
    char ch;
    scanf("%c", &ch);
}
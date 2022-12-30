#include "headerfile.h"
void add()
{
    system("cls");
    printf("________________________ ADD NEW ITEM ________________________\n\n");
    item p1;
    FILE *fileptr;
    fileptr = fopen("storage.bin", "ab");
    printf("enter item ID > ");
    scanf("%d%*c", &p1.ID);
    printf("enter item NAME > ");
    scanf("%[^\n]%*c", &p1.name);
    printf("enter item PRICE > ");
    scanf("%d", &p1.PRICE);
    printf("enter item QUANTITY > ");
    scanf("%d", &p1.QUANTITY);

    fwrite(&p1, sizeof(item), 1, fileptr);
    fclose(fileptr);
    
    printf("added successfully !");
}
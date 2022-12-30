#include "headerfile.h"
void deletee()
{
    FILE *fileptr, *tempptr;
    char ch;
    fileptr = fopen("storage.bin", "rb+");
    item p1;
    tempptr = fopen("tempstorage.bin", "wb");
    int id, flag = 0;
    printf("enter item id which u want to delete :");
    scanf("%d", &id);

    while (fread(&p1, sizeof(item), 1, fileptr) == 1)
    {
        if (p1.ID != id)
        {
            fwrite(&p1, sizeof(item), 1, tempptr);
        }
        else
        {
            flag = 1;
        }
    }
    fclose(fileptr);
    fclose(tempptr);
    remove("storage.bin");
    rename("tempstorage.bin", "storage.bin");
    if (!flag)
    {
        printf("item not found !!\n");
    }
    else
    {
        printf("item deleted succesfully !\n");
    }
    scanf("%c", &ch);
}
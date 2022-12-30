#include "headerfile.h"

void bill()
{
    FILE *fileptr = fopen("storage.bin", "rb+");
    item p1;
    int i, id, quan, total = 0;
    char ch;
    int billamount = 0;

    while (fread(&p1, sizeof(item), 1, fileptr))
    {
    printf("enter ITEM ID ");
    scanf("%d", &id);
    
        if (p1.ID == id)
        {
            printf("enter quantity");
            scanf("%d", &quan);
            if (p1.QUANTITY >= quan)
            {
                printf("%-20d %-20d %-20s %-20d %-20d \n", i, p1.ID, p1.name, p1.PRICE, quan);
                p1.QUANTITY--;
                i++;
                total = total + (p1.PRICE * quan);
                fwrite(&p1, sizeof(item), 1, fileptr);
                rewind(fileptr);
            }
        }
    
    printf("            press T to generate bill  ");
        scanf("%c%*c", &ch);
        if(ch == 'T'){
            break;
        }    
    }
    
    fclose(fileptr);
    printf("total %d", total);
}
#include "headerfile.h"

void bill()
{
    FILE *fileptr = fopen("storage.bin", "rb+");
    item p1;
    int i, id, quan, total = 0;
    char ch;
    int billamount = 0;
    while (1)
    {

        printf("enter ITEM ID ");
        scanf("%d%*c", &id);
        rewind(fileptr);
        while (fread(&p1, sizeof(item), 1, fileptr))
        {
            if (p1.ID == id)
            {
                printf("enter quantity");
                scanf("%d%*c", &quan);
                if (p1.QUANTITY >= quan)
                {
                    printf("%-20d %-20d %-20s %-20d %-20d \n", i, p1.ID, p1.name, p1.PRICE, quan);
                    p1.QUANTITY = p1.QUANTITY - quan;
                    i++;
                    total = total + (p1.PRICE * quan);
                    fseek(fileptr, -sizeof(item), 1);
                    fwrite(&p1, sizeof(item), 1, fileptr);
                    break;
                }
                else
                {
                    printf("\nout of stock !!! \n");
                }
            }
        }
            printf("\n            press T to generate bill or any key to add more   ");
            scanf("%c", &ch);
            if (ch == 'T')
            {
                break;
            }
        
    }
        fclose(fileptr);
        printf("\ntotal amount  >  %d", total);
    }

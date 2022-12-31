#include <stdio.h>
#include <windows.h>
#ifndef __ITEM
#define __ITEM
typedef struct item
{
    int ID;
    char name[20];
    int QUANTITY;
    int PRICE;
} item;

typedef struct bil
{
    int ID;
    char name[20];
    int quantity;
    int price;
} bil;

#endif
#define _CRT_SECURE_NO_WARNINGS
#include"phone.h"
#include<stdio.h>
#include<malloc.h>
#include<string.h>
#include<stdlib.h>

next registerPhoneData(char* name, char* phone);
next makenode(next head, next cur);
next deleteByName(next head, char* name);
next searchByName(next head, char* name);
void printArray(next head);
void save(next head);
next sortPrint(next head);
int main()
{
    char Name[10];
    char PhoneNumber[13];
    next head = NULL;
    next cur;
    int service = 0;

    while (service != 6)
    {
        printf("============ Telephone Book Management ============");
        printf("\n <<<1. Register\t 2. Print All \t 3. Search by Name \t 4. Delete \t 5. Sort \t  6.Exit >>>\n");
        printf(" Please enter your service number (1-6)> ");
        scanf("%d", &service);
        fflush(stdin);
        switch (service)
        {
        case 1:
            cur = registerPhoneData(Name,PhoneNumber);
            head = makenode(head, cur);
            break;
        case 2:
            printArray(head);
            break;
        case 3:
            head = searchByName(head, Name);
            break;
        case 4:
            head = deleteByName(head, Name);
            break;
        case 5:
            sortPrint(head);
            break;
        case 6:
            save(head);
            break;
        default:
            printf("Enter a valid number\n");

        }
    }
    return 0;
}

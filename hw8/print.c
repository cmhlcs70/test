#define _CRT_SECURE_NO_WARNINGS
#include"phone.h"
#include<stdio.h>
#include<stdlib.h>
void printArray(next head)
{
    next nextnode = head;

    while (nextnode != NULL)
    {
        printf("\n");
        printf("\n%s", nextnode->Name);
        printf("        ");
        printf("  %s", nextnode->PhoneNumber);
        printf("\n");
        nextnode = nextnode->next;
    }
}


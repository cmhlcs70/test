#define _CRT_SECURE_NO_WARNINGS
#include"phone.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
next searchByName(next head, char* name)
{
    next temp = head;
    printf("Search by Name\n");
    printf("Enter a name to search");
    scanf("%s", name);
    if (head == NULL)
    {
        printf("There are no people in the phonebook\n");
        return head;
    }
    else
    {
        while (temp != NULL)
        {
            if (strcmp(temp->Name, name) == 0)
            {
                printf("\nName ");
                printf("\t    Number\n");
                printf("---------------------\n");
                printf("%s", temp->Name);
                printf("        ");
                printf("%s\n", temp->PhoneNumber);
                printf("\n");
                return head;
            }
            temp = temp->next;
        }
        return head;
    }
}
	

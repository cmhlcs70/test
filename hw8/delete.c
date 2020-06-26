#define _CRT_SECURE_NO_WARNINGS
#include"phone.h"
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<string.h>
next deleteByName(next head, char* name)
{
    next temp = head;
    next pre = temp;
    printf("Enter a name to delete : ");
    scanf("%s", name);
    while (temp != NULL)
    {
        if (strcmp(temp->Name, name) == 0)
        {
            if (head->next == NULL)
            {
                free( head);
                head = NULL;
                return head;
            }
            else if (temp == head)
            {
                head = temp->next;
                temp->next = NULL;
                free(temp);
                return head;
            }
            while (pre->next != temp)
            {
                pre = pre->next;
            }
            pre->next = temp->next;
            temp->next = NULL;
            free(temp);
            return head;
        }
        temp = temp->next;
    }
    return head;

}


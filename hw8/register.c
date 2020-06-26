#define _CRT_SECURE_NO_WARNINGS
#include"phone.h"
#include<stdio.h>
#include<malloc.h>
#include<string.h>
#include<stdlib.h>
next registerPhoneData(char* name, char* phone)
{
    next cur;
    cur = (node*)malloc(sizeof(node));
    if (cur == NULL)
    {
        printf("memory error\n");
        return NULL;
    }
    printf("New User Name : ");
    printf("\n");
    scanf("%s", name);
    printf("PhoneNumber : ");
    scanf("%s", phone);
    strcpy(cur->Name, name);
    strcpy(cur->PhoneNumber, phone);
    cur->next = NULL;
    printf("Registered...");
    return cur;
}
next makenode(next head, next cur)
{
    
    next nextnode = head;
    next tempnode;
    if (head == NULL)
    {
        head = cur;
        return head;
    }
    if (strcmp(cur->Name, head->Name) < 0)
    {
        cur->next = head;
        return cur;
    }
    tempnode = head;
    while (nextnode->next != NULL)
    {
        if (strcmp(cur->Name, nextnode->Name) >= 0)
        {
            tempnode = nextnode;
            nextnode = nextnode->next;
        }
        else
        {
            tempnode->next = cur;
            cur->next = nextnode;
           
        }
        return head;
    }
    if (strcmp(cur->Name, nextnode->Name) >= 0)
    {
        nextnode->next = cur;
    }
    else
    {
        tempnode->next = cur;
        cur->next = nextnode;
    }
    return head;
}


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include"phone.h"
#include<stdlib.h>
#include<malloc.h>



void sortprint(node* curr) {
   
    node* tmp;
    tmp = (node*)malloc(sizeof(node));
    char *a = tmp->Name;
    char *b = tmp->next->Name;
    printArray(tmp);
   

    while (tmp->next != NULL)
    {
        if (*a > *b)  
        {
            int rev = *a;
            *a = *b;
            *b= rev;

        }
        tmp = tmp->next;
    }
    printArray(tmp)
    

}

#include<stdio.h>
#include"phone.h"

void printArray(node *head) { 
    
    node* tmp;
    tmp = (node*)malloc(sizeof(node));
    tmp=head;
    
   for(; tmp != NULL; tmp = tmp->next) {
        printf("Addr vp:%p\t", tmp);
        printf("name:%s\t phone:%s\n", tmp->Name,tmp->PhoneNumber);
        tmp = tmp->next;
        printf("\n");
    }

}


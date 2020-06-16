#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"phone.h"
#include<string.h>
#include<malloc.h>

void deleteByName(node* curr) {
	node* tmp;
	node* tmp1;
	tmp = (node*)malloc(sizeof(node));
	tmp1 = (node*)malloc(sizeof(node));
	char nametmp[10];
	tmp = head;
	printf("Enter a name to delete : ");
	scanf("%s", nametmp);
	while (tmp->next!=NULL) {
		if (strcmp(tmp->Name, nametmp) == 0) {
			tmp = tmp->next;
			free(tmp);
			
		}
		tmp1 = tmp->next->next;
		free(tmp->next);
		tmp->next = tmp1;
		
	}
	if(tmp->next==NULL) {
			printf("Oops! %s is not in the PhoneBook.", &nametmp);
		}
	printf("Deletion is done\n");
}

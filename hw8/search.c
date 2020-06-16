#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"phone.h"
#include<string.h>

void searchByName(node* curr) {
	node* tmp;
	tmp = (node*)malloc(sizeof(node));
	char nametmp[10];
	printf("Search by Name\n");
	printf("Enter a name to search");
	scanf("%s", nametmp);
	
	while (tmp->next != NULL) {
		if (tmp->Name == nametmp) {  
			break; 
		}
			printf("이름 : %s", tmp->Name);
			printf("전화번호 : %s", tmp->PhoneNumber);
	}
	if(tmp->next==NULL) {
			printf("Oops! %s is not in the PhoneBook.", nametmp);
		}
}

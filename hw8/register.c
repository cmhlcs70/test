#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<malloc.h>
#include"phone.h"

node* registerPhoneData(node *curr) { //**curr
	int size = 0;
	node* head, * tail;
	head= (node*)malloc(sizeof(node));
	tail= (node*)malloc(sizeof(node));
	head->next = tail;
	node* new;
	new = (node*)malloc(sizeof(node));
	printf("Registration\n");
	if (size == 50) {
		printf("등록할 수 없음");
		return;
	}
	else {
		for (int i = 0; i < 5; i++) {  
			printf("New User Name : ");
			printf("\n");
			scanf("%s", new->Name);
			printf("PhoneNumber : ");
			scanf("%s", new->PhoneNumber);
			new->next = head->next;
			head->next = NULL;
			size++;
			printf("Registered...");
		}
	}
	return new;
}

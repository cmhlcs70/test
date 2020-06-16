#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "phone.h"
#include<malloc.h>
node* registerPhoneData(node* );
void printArray(node*);
void searchByName(node*);//
void deleteByName(node*);
void sortprint(node*);

extern char nametmp[10];

int main()
{

	int service=0;	
	node* list=NULL; 
	node* head=(node*)malloc(sizeof(node));
	while(service!=6)
	{
		printf("============ Telephone Book Management ============");
		printf("\n <<<1. Register\t 2. Print All \t 3. Search by Name \t 4. Delete \t 5. Sort \t  6.Exit >>>\n");
		printf(" Please enter your service number (1-5)> ");
		scanf("%d", &service);

		switch (service)
		{
		case 1: registerPhoneData(list); break;	// invoke find_ID
		case 2: printArray(head); break;
		case 3: searchByName(list); break;
		case 4: deleteByName(list); break;
		case 5: sortprint(list); break;
		}
	} 
	return 0;
}


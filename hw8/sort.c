#include"phone.h"
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
next sortPrint(next head) {
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


	next p, temp;
	p = head;
	while (p->next != NULL) {
		if (p->Name > p->next->Name) {
			temp = p->next;
			p->next = p->next->next;
			temp->next = head;
			head = p = temp;
		}
		p = p->next;
	}
	return head;

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

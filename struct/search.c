#include<stdio.h>
#include"phone.h"

void searchByName(struct Contact *PhoneBook)
{
	int i;
	char nametmp[10];
	printf("Search by Name\n");
	printf("Enter a name to search");
	scanf_s("%s",nametmp);
	for (i = 0; i < size-1; i++) {
		if (strcmp(PhoneBook[i].Name, nametmp)==0) {
			printf(PhoneBook[i].Name);
			printf(PhoneBook[i].PhoneNumber);
		}
		else{
		printf("Oops! %s is not in the PhoneBook.",nametmp);
		}
	}
}

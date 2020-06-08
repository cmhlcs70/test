#include<stdio.h>
#include"phone.h"
#include<string.h>
void searchByName(void* arr, int size)
{
	void* vp;
	vp = arr;
	int i;
	char nametmp[10];
	printf("Search by Name\n");
	printf("Enter a name to search");
	scanf("%s", nametmp);
	for (i = 0; i < size - 1; i++) {
		if (strcmp(((Contact*)vp + i)->Name, nametmp) == 0) {
			printf(((Contact*)vp + i)->Name);
			printf(((Contact*)vp + i)->PhoneNumber);
		}
		else {
			printf("Oops! %s is not in the PhoneBook.", nametmp);
		}
	}
}


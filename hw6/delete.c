#include<stdio.h>
#include"phone.h"
#include<string.h>
void deleteByName(void* arr,int size)
{
	void* vp;
	vp = arr;
	int i;
	char nametmp[10];
	printf("Enter a name to delete : ");
	scanf("%s", &nametmp);
	for (i = 0; i < size; i++) {
		if (strcmp(((Contact*)arr + i)->Name, nametmp) == 0) {
				*((Contact*)arr + i + 1)->Name=NULL;
		}
		else {
			printf("Oops! %s is not in the PhoneBook.", nametmp);
		}
	}
	printf("Deletion is done\n");
}



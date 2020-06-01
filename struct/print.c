#include<stdio.h>
#include"phone.h"
void printAll(struct Contact PhoneBook)
{
	printf("<<Display all contacts in the PhoneBook>>");
	for (int i = 0; i < size; i++) {
		printf( PhoneBook.Name, PhoneBook.PhoneNumber);
	}
}

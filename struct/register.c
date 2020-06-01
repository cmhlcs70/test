#include<stdio.h>
#include"phone.h"
void registerPhoneData(struct Contact *PhoneBook)
{
	int i;
	printf("Registration\n");
	printf("New User Name : ");
	if (size == 50) {
		printf("등록할 수 없음");
		return;
	}
	for (i = 0; i < size; i++) {
		scanf_s("%s",PhoneBook[i].Name);
		printf("PhoneNumber : ");
		scanf_s("%s",PhoneBook[i].PhoneNumber);
		size++;
		printf("Registered...");
	}
}

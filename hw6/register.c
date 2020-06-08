#include<stdio.h>
#include"phone.h"
void registerPhoneData(void* arr, int size)
{
	void* vp;
	vp = arr;
	int i;
	printf("Registration\n");
	printf("New User Name : ");
	if (size == 50) {
		printf("등록할 수 없음");
		return;
	}
	for (i = 0; i < size; i++) {
		scanf("%s", ((Contact*)arr + i)->Name);
		printf("PhoneNumber : ");
		scanf("%s", ((Contact*)arr + i)->PhoneNumber);
		size++;
		printf("Registered...");
	}
}


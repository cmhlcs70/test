#include <stdio.h>
#include "phone.h"

void registerPhoneData(struct Contact *PhoneBook);
void printAll(struct Contact PhoneBook);
void searchByName(struct Contact *PhoneBook);
void deleteByName(struct Contact *PhoneBook);

static int count_service = 0;	// Total number of service requests
//extern 다른클래스 변수 적기
extern int i,j=0;
extern char nametmp[10];

int main()
{
	int Stunum;
	int service;		// a variable for storing user's request
	do
	{
		printf("============ Telephone Book Management ============");
		printf("\n <<<1. Register\t 2. Print All \t 3. Search by ID \t 4. Delete \t 5. Exit >>>\n");
		printf(" Please enter your service number (1-5)> ");
		scanf_s("%d", &service);

		switch (service)
		{
		case 1: registerPhoneData(PhoneBook); break;	// invoke find_ID
		case 2: printAll(*PhoneBook); break;
		case 3: searchByName(PhoneBook); break;
		case 4: deleteByName(PhoneBook); break;
		}
	} while (service != 5);	// if Exit is not entered, the loop continues
	return 0;
}


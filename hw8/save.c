#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"phone.h"
#include<string.h>
#include<stdlib.h>
void save(next head) {
	FILE* file = fopen("phone.dat", "wt");
	next temp = head;

	int i;

	if (size == 0)

	{

		fprintf(file, "0");

		fclose(file);

		return;



	}

	else

	{

		fprintf(file, "%d\n", size);

		for (i = 0; i < 50; i++)

		{

			fprintf(file, "%s %s\n", temp->Name, temp->PhoneNumber);

			temp = temp->next;

		}





	}

	fclose(file);
}

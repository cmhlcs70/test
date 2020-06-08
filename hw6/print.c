#include<stdio.h>
#include"phone.h"
void printArray(void* vp ,int size)
{
    int i;
 
    for (i = 0; i < size; i++)
    {
        printf("Addr vp:%p\t", (Contact*)vp + i);
        printf("name:%s\t phone:%s\n", ((Contact*)vp + i)->Name, ((Contact*)vp + i)->PhoneNumber);
    }
    printf("\n");
}

void print(void* arr, int size)
{
    void* vp;
    vp = arr;
	printf("<<Display all contacts in the PA,honeBook>>");
    printArray(arr,size);
	
}



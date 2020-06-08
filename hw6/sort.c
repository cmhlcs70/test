#include<stdio.h>
#include<string.h>
#include"phone.h"
#include"print.c"
#include"hw6Main.c"



int contactSwap(void* arr, int i, int j)  //printarray보고 적절히 작성
{
    //int i, j;   //arr[i],arr[j] 각각 하나의 Name
    void* vp;
    vp = arr;
    for (i = 0; i < size; i++) {
        for (j = 1; j < size - 1; j++) {
            if (strcmp(*((int*)arr + i), *((int*)arr + j))) {
                int temp = *((int*)arr + i);
                *((int*)arr + i) = *((int*)arr + j);
                *((int*)arr + j) = temp;
            }
        }
    }
    // Goal: arr[i] <- arr[j], arr[j] <- arr[i]
    // calculate address for arr[i]:  ((int*)arr+i)
    // derefernce int: *((int*)arr+i))
    return 1;
}
int contactCmpr(void* arr, int i, int j)  //printarray보고 적절히 작성 strcmp사용가능
{
    //int i, j;
    void* vp;
    vp = arr;

    for (i = 0; i < size; i++) {
        for (j = 1; j < size - 1; j++) {
            if ((*((Contact*)arr + i)).Name < (*((Contact*)arr + j)).Name) {
                return 1;
            }
            else
                return 0;

        }
    }
    // Calculate address for arr[i]:  ((Contact*)arr+i)
    // derefernce structure Contact: *((Contact*)arr+i)).Name
    // for stucture we use ->: ((Contact*)arr+i)->Name
}

void sortPhoneBook(void* A, int size, cmp cfn, swap sfn)  //수정불가
{
    int i=0;
    int j = 0;
    extern int (*cmp)(const void*, int, int);
    extern int (*swap)(void*, int, int);
    cmp = contactCmpr(A,i,j);
    swap = contactSwap(A,i,j);
  
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (cfn(A, j, j + 1) > 0)
                sfn(A, j, j + 1);
        }
    }
}

void sort() {
    printf("Sort fuction is called\n");
    // This is test codes
    // Please modify
    Contact A[5] = {
        {"Roki", "12345678"},
        {"Thor", "33333333"},
        {"IronMan","3765898"},
        {"Hulk", "74561253"},
        {"Groot", "99999999"}
    };
    printf("Before sorting\n");
    printArray(A, 5);
    // calling actual bubble sort
    // modify this function with your arrays
    // if you implement contactCmpr() and contactSwap() well
    // this code works correctly
    sortPhoneBook(A, 5, contactCmpr, contactSwap);
    printf("After sorting\n");
    printArray(A, 5);
}



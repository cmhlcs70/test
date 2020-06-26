
#pragma once
# define MAX 50

int size;  
struct Node
{
    char Name[10];
    char PhoneNumber[13];
    struct Node* next;
};
typedef struct Node node;
typedef node* next;




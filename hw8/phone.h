#include<malloc.h>
# define MAX 50
int size; 
typedef struct node {
    char Name[10];
    char PhoneNumber[13];
    struct node* next;
}node;
node* head;

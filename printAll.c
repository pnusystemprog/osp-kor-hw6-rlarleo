#include <string.h>
#include "phone.h"
#include <stdio.h>

int size;
struct Contact PhoneBook[MAX];

void printAll()
{
    printf("Print all contants in the PhoneBook\n");
    int i;
    for(i = 0; i < size; i++){
    	printf("Name : %s ",PhoneBook[i].Name);
    	printf("PhoneNumber : %s\n",PhoneBook[i].PhoneNumber);
	}
}

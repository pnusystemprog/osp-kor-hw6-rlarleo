#include <stdio.h>
#include <string.h>
#include "phone.h"

int size;
struct Contact PhoneBook[MAX];
void searchByName()
{
	char name[10];
    printf("Search by Name\n");
    printf("Name : ");
    scanf("%s",name);
    int i;
	for(i = 0; i < size; i++){
		if(strcmp(name, PhoneBook[i].Name) == 0){
			printf("name : %s ",PhoneBook[i].Name);
    		printf("PhoneNumber : %s\n",PhoneBook[i].PhoneNumber);
		}

	}
}

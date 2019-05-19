#include <stdio.h>
#include <string.h>
#include "phone.h"

int size;
struct Contact PhoneBook[MAX];

void deleteByName()
{
	char name[10];
    printf("Delete by Name\n");
    printf("Name : ");
    scanf("%s",name);
    int i;
	int j;
    for(i = 0; i < size+1; i++){
 
		if(strcmp(name, PhoneBook[i].Name) == 0){
			for(j=i; j<size+1; j++){
			strcpy(PhoneBook[j].PhoneNumber,PhoneBook[j+1].PhoneNumber);
			strcpy(PhoneBook[j].Name,PhoneBook[j+1].Name);
			}
			size--;
		}
}
}

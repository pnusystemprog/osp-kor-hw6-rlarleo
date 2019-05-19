#include <stdio.h>
#include <string.h>
#include "phone.h"


int size = 0;
struct Contact PhoneBook[MAX];

void registerPhoneData()
{
	
	printf("Registration\n");
	printf("name : ");
	scanf("%s",PhoneBook[size].Name);
	printf("number : ");
	scanf("%s",PhoneBook[size].PhoneNumber);
	size++;
}

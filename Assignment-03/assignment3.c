#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

int main(void) {
	char firstName[30];
	char lastName[30];

	printf("Enter your First Name: ");

	scanf("%s", firstName);

	printf("Enter your Last Name: ");
	scanf("%s", lastName); 

	printf("Hello %s %s !\n", firstName, lastName);
}


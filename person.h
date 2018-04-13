#ifndef _PERSON_H
#define _PERSON_H
typedef struct person {
	int id;
	char username[20];
	char password[20];
	float balance;
} person,*pperson;
#endif

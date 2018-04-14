#ifndef _PERSON_H
#define _PERSON_H
typedef struct person {
	int id;
	char username[20];
	char password[20];
	float balance;
} person;
person array[100];
void function(int i, int len);
void do_deposit(int i, int len);
void do_withdraw(int i, int len);
void do_transfer(int i, int len);
#endif

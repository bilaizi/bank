#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menu.h"
#include "person.h"

void function(int i, int len) {
	printf("1 deposit：\n");
        printf("2 withdraw：\n");
        printf("3 transfer：\n");
        int select;
        printf("please input the select：\n");
        scanf("d%",&select);
        switch(select) {
                case 1 :
                        do_deposit(i, len);
			function(i, len);
                        break;
                case 2 : 
                        do_withdraw(i, len);
			function(i, len);
			break;
                case 3 :
                        do_transfer(i, len);
			function(i, len);
                        break;
		case 4:
                        exit(0);
                        break;
                default :
                        printf("error input\n");
                        break;  
        }
	return;
}

void do_deposit(int i, int len){
	float money;
	printf("please input the money：\n");
	scanf("f%", &money);
	array[i].balance += money;
	write_file(len)
}

void do_withdraw(int i, int len){
	float money;
	printf("please input the money：\n");
	scanf("f%", &money);
	if(money > array[i].balance){
		printf("your balance is not enough：\n");
		return;
	}
	array[i].balance -= money;
	write_file(len);
	return;
}

void do_transfer(int i, int len){
	float money;
	printf("please input the money：\n");
	scanf("f%", &money);
	if(money > array[i].balance){
		printf("your balance is not enough：\n");
		return;
	}
	array[i].balance -= money;
	int rid;
	printf("please input the receriver id：\n");
	scanf("d%",&rid);
	array[i].balance -= money;
	write_file(len);
	return;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menu.h"
#include "person.h"

void function(int i, int len) {
	system("clear");
	printf("*************************\n");
	printf("*1	deposit		*\n");
	printf("*2 	withdraw	*\n");
	printf("*3 	transfer	*\n");
	printf("*4 	show		*\n");
	printf("*5 	exit		*\n");
	printf("*************************\n");
        int select;
        printf("please input the select：\n");
        scanf("%d",&select);
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
	scanf("%f", &money);
	array[i].balance += money;
	write_file(len)
}

void do_withdraw(int i, int len){
	float money;
	printf("please input the money：\n");
	scanf("%f", &money);
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
	scanf("%f", &money);
	if(money > array[i].balance){
		printf("your balance is not enough：\n");
		return;
	}
	array[i].balance -= money;
	printf("please input transfer receiver id:\n");
        int rid;
	scanf("s%", &rid);
	for (int j = 0; j < len; j++) {
                if (rid ==array[j].id){
                        array[j].balance += money;
			write_file(len);
			return; 
                }  
	}
	if(len == j){
		printf("your input transfer id is invalid\n");
		array[i].balance += money;
		return;
	}
}

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
                        int len = do_register(len);
                        write_file(len);
                        break;
                case 3 :
                        exit(0);
                        break;
		case 4:
                        exit(0);
                        break;
                default :
                        printf("请输入你的选择：\n");
                        break;  
        }
	return;
}

void do_deposit(int i, int len){
	float money;
	printf("please input the money：\n");
	scanf("d%",&money);
	array[i].balance += money;
	write_file(len)
}

void do_withdraw(int i, int len){
	float money;
	printf("please input the money：\n");
	scanf("d%",&money);
	if(money > array[i].balance){
		printf("your balance is not enough：\n");
		return;
	}
	array[i].balance -= money;
	write_file(len);
	return;
}

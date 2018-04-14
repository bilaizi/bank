#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menu.h"
#include "person.h"

void menu() {
        printf("*************************\n");
	printf("*1	login		*\n");
	printf("*2 	register   	*\n");
	printf("*3 	exit		*\n");
	printf("*************************\n");
        int select;
        printf("please input the select：\n");
        scanf("d%",&select);
        switch(select) {
                case 1 :
                        do_login(int len);
                        break;
                case 2 : 
                        int len = do_register(len);
                        write_file(len);
                        break;
                case 3 :
                        exit(0);
                        break;
                default :
                        printf("error input\n");
                        break;  
        }
        return;
}

void do_login(int len) {
        printf("please input your id:\n");
        int id;
        scanf("%s", &id);
        printf("please input your password:\n");
        char  password[20];
        scanf("%s", &password);
        for (int i = 0; i < len; i++) {
                if (id ==array[i].id && strcmp(password, array[i].password) == 0){
                        printf("Welcom %s to login\n", array[i].username);
                        return; 
                }  
        }
        printf("you id or password error\n");
        return;
}

int do_register(int len) {
        if (0 == len)
                array[len].id =10001;
        else
                array[len].id = array[len].id + 1;
        printf("please input your username:\n");
        scanf("%s", &array[len].username);
        printf("please input your password:\n");
        scanf("%s", &array[len].password);
        array[len++].balance = 0;
        return len;
}

void write_file(int len) {
        FILE *fp = fopen("person.txt", "w");
        if (NuLL == fp){
                printf("open failed \n");
                return;
        }
        fwrite(array, sizeof(person), len, fp);
        fclose(fp);
        return;
}

int read_file() {
        FILE *fp = fopen("person.txt", "r");
        if (NuLL == fp){
                printf("open failed \n");
                return 0;
        }
        int len = 0;
        while(fread(array, sizeof(person), len, fp) > 0){
                len++;
        }
        return len;
}

void show(int len) {
        printf("id\tusername\tpassword\n");
        for(int i = 0; i < len; i++)
                printf("%d\t%s\t%s\t%.2f\n", array[i].id, array[i].username, array[i].password, array[i].balance);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menu.h"
#include "person.h"

void menu() {
        printf("1 用户注册：\n");
        printf("2 用户登录：\n");
        printf("3 用户退出：\n");
        int select;
        printf("请输入你的选择：\n");
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
                        printf("请输入你的选择：\n");
                        break;  
        }
        return;
}

void do_login() {
        if (0 == len)
                array[len].id =10001;
        else
                array[len].id = array[len].id + 1;
        printf("please input your username:\n");
        scanf("s%", &array[len].username);
        printf("please input your password:\n");
        scanf("s%", &array[len].password);
        array[len++].balance = 0;
        return len;
}

int do_register(int len) {
        if (0 == len)
                array[len].id =10001;
        else
                array[len].id = array[len].id + 1;
        printf("please input your username:\n");
        scanf("s%", &array[len].username);
        printf("please input your password:\n");
        scanf("s%", &array[len].password);
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
        while(fwrite(array, sizeof(person), len, fp) > 0){
                len++;
        }
        return len;
}

void show(int len) {
        printf("id\tusername\tpassword\n");
        for(int i = 0; i < len; i++)
                printf("%d\t%s\t%s\t%.2f\n",array[len].id, array[len].username, array[len].password, array[len].balance);
}

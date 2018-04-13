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
                case 1:;
                case 2: do_register(int len);
                case 3:
                   
        }
        return;
}

void do_login(int len) {
        if (0 == len)
                array[len].id =10001;
        else
                array[len].id = array[len].id + 1;
        printf("please input your username:\n");
        scanf("s%",&array[len].username);
        printf("please input your password:\n");
        scanf("s%",&array[len].password);
        array[len++].balance = 0;
        return len;
}

void do_register(int len) {
        if (0 == len)
                array[len].id =10001;
        else
                array[len].id = array[len].id + 1;
        printf("please input your username:\n");
        scanf("s%",&array[len].username);
        printf("please input your password:\n");
        scanf("s%",&array[len].password);
        array[len++].balance = 0;
        return len;
}

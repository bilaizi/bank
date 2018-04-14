#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menu.h"
#include "person.h"

int main(){
    int len = read_file();
    menu(len);
    return 0;
}

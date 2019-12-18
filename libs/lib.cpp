#include <iostream>
#include "lib.h"

using namespace std;

char* ReadString(FILE* file){
    char *str = new char [200];
    *str = {'\0'};
    while(!feof (file)) {
        fgets(str, 200, file);
    }
    return str;
}

int TurnOver(char* str, FILE* dir){
    if (*str == '\0'){
        return 0;
    }
    else{
        int i = 0;
        while (str[i]!='\0') i++;
        int number_of_digits = i;
        fputc('\n', dir);
        while (--i>=0) {
            fputc(str[i], dir);
        }
        return number_of_digits;
    }
}

bool Pal(char* in_s, int counter){
    int check = 0;
    for (int i = 0; i < counter/2; i++){
        if (in_s[i] == in_s[counter-i-1]){
            check++;
        }
    }
    bool res = (check == counter / 2);
    return res;
}

bool Pal(const char* in_s, int counter){
    int check = 0;
    for (int i = 0; i < counter/2; i++){
        if (in_s[i] == in_s[counter-i-1]){
            check++;
        }
    }
    bool res = (check == counter / 2);
    return res;
}
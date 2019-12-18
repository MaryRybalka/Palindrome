#include <iostream>
#include "lib.h"
#include <locale.h>
#include <windows.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    FILE *f = fopen("../Source.txt", "r+");
    if (f == nullptr) {
        cout << "File does not exist or you have not allow.";
        exit(1);
    }
    else{
        char* input = ReadString(f);
        cout << input << endl;
        int n_of_digits = TurnOver(input, f);
        if (n_of_digits == 0) {
            cout << "File is empty.";
            exit(2);
        }
        (Pal(input, n_of_digits)) ? cout << "Word in the file is a Palindrome.":
                                    cout << "Word in the file is not a Palindrome.";
    }
    fclose(f);
    return 0;
}

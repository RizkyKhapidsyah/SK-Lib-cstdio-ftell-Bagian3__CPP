#pragma warning(disable:4996)

#include <iostream>
#include <cstdio>
#include <conio.h>

/*
    Source by Programiz (https://www.programiz.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

using namespace std;

int main() {
    int pos;
    char c;
    FILE* fp;

    fp = fopen("file.txt", "r");
    
    if (fp) {
        while ((c = getc(fp)) != EOF) {
            pos = ftell(fp);
            cout << "At position " << pos << ", character is " << c << endl;
        }
    } else {
        perror("Error reading file");
    }

    fclose(fp);

    _getch();
    return 0;
}
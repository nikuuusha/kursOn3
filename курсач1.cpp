#include <iostream>
#include <conio.h>
#include <iomanip>
#include "C:\Users\nikab\OneDrive\Desktop\лабы прога\pr1\pr1.cpp"
#include "C:\Users\nikab\OneDrive\Desktop\лабы прога\pract2\pract2.cpp"
#include "C:\Users\nikab\OneDrive\Desktop\лабы прога\pr3prob\pr3prob.cpp""


using namespace std;

int main(int pic) {
    cout << "Main Window (Kurs)\nCin Desired lab (1-3) or 'X' for exit:\n";
    int menupick = 0;
    while (true) {
        menupick = _getch();
        switch (menupick) {
        case('1'):
            main1();
            break;
        case('2'):
            main2();
            break;
        case('3'):
            main3();
            break;
        case('x'):
        case('X'):
            exit(0);
        }

        cout << "Main Window (Lab 5)\nCin Desired lab (1-4) or 'X' for exit:\n";
        menupick = 0;
    }
    return 0;
}

#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

int main() {
    string buffer;
    long double a = 0, b = 0;
    char operation = ' ';

    while (true) 
    {
        cout << "Input math expression: ";
        cin >> buffer;
        stringstream buffer_stream(buffer);
        buffer_stream >> a >> operation >> b;

        switch (operation)
        {
            case '+':     //сложение
                cout << a + b;
                break;
            case '-':     //вычитание
                cout << a - b;
                break;
            case '/':     //деление
                cout << a / b;
                break;
            case '*':     //умножение
                cout << a * b;
                break;
            case '^':     //степень
                cout << pow(a, b);
                break;
            case 's':     //корень
                cout << pow(a, 1 / b);
                break;
            case 'l':     //логарифм
                cout << log(a) / log(b);
                break;
            case '%':     //остаток от деления
                cout << (int)a % (int)b;
                break;
            case '\\':    //целочисленное деление
                cout << (int)(a / b);
                break;
            default:
                cerr << "Incorrect operation!";
                break;
        }
        cout << "\n";
    }
}
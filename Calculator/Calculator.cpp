#include <iostream>
#include <sstream>

using namespace std;

int main() {
    string buffer;
    double a = 0, b = 0;
    char operation = ' ';

    while (true) 
    {
        cout << "Input math expression: ";
        cin >> buffer;
        stringstream buffer_stream(buffer);
        buffer_stream >> a >> operation >> b;

        switch (operation)
        {
            case '+':
                cout << a + b;
                break;
            case '-':
                cout << a - b;
                break;
            case '/':
                cout << a / b;
                break;
            case '*':
                cout << a * b;
                break;
            default:
                cerr << "Incorrect operation!";
                break;
        }
        cout << "\n";
    }
}
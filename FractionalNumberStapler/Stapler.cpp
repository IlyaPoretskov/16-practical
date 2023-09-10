#include <iostream>
#include <string>

using namespace std;

double stapler(int integer, int fractional) 
{
    char str_integer[6], str_fractional[6];
    
    sprintf(str_integer, "%d", integer);
    sprintf(str_fractional, "%d", fractional);

    string str_result = str_integer;
    str_result += ".";
    str_result += str_fractional;

    return stod(str_result);
}


int main() {
    int integer_part, fractional_part;
    
    cout << "Input integer part: ";
    cin >> integer_part;

    cout << "Input fractional part: ";
    cin >> fractional_part;

    cout << "Result: " << stapler(integer_part, fractional_part) << "\n";

    system("pause");
}
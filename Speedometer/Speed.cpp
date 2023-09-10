#include <iostream>

using namespace std;

int main() {

    float speed_value = 0.0f, delta = 0.0f;
    char speed_str[5];

    do {
        cout << "Speed delta: ";
        cin >> delta;

        speed_value += delta;

        if (speed_value > 150.0f) 
        {
            speed_value = 150.0f;
        }

        if (speed_value < 0.0f)
        {
            speed_value = 0.0f;
        }

        sprintf(speed_str, "%.1f", speed_value);
        cout << "Speed: " << speed_str << "\n";

    } while (delta >= 0.1f);

    system("pause");
}
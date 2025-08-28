#include <iostream>
using namespace std;

const double PI = 3.14159;

double calculateArea(const double radius) {
    return PI * (radius * radius);
}

double calculateArea(const double length, const double width) {
    return width * length;
}

double calculatePerimeter(const double radius) {
    return 2 * (PI * radius);
}

double calculatePerimeter(const double length, const double width) {
    return 2 * (length + width);
}

void PrintMenu() {
    cout << "----------------------" << endl;
    cout << "1. Area of a Circle" << endl;
    cout << "2. Perimeter of a Circle" << endl;
    cout << "3. Area of a Rectangle" << endl;
    cout << "4. Perimeter of a Rectangle" << endl;
    cout << "5. Quit" << endl;
}


int main() {
    int input;
    do {
        PrintMenu();
        cout << "What do you want to do: ";
        cin >> input;
        switch (input) {
            case 1:
                cout << "Area of a Circle - Input Radius: ";
                double radius;
                cin >> radius;
                if (radius < 0) {
                    cout << "Input must be greater than 0" << endl;
                    break;
                }
                cout << "Radius is: " << calculateArea(radius) << endl;
                break;
            case 2:
                cout << "Perimeter of a Circle - Input Radius: ";
                cin >> radius;
                if (radius < 0) {
                    cout << "Input must be greater than 0" << endl;
                    break;
                }
                cout << "Length is: " << calculatePerimeter(radius) << endl;
                break;
            case 3:
                cout << "Area of a Rectangle - Input Length and Width: ";
                double length;
                double width;
                cin >> length >> width;
                if (length < 0 or width < 0) {
                    cout << "Input must be greater than 0" << endl;
                    break;
                }
                cout << calculateArea(length, width) << endl;
                break;
            case 4:
                cout << "Perimeter of a Rectangle - Input Length and Width: ";
                cin >> length >> width;
                if (length < 0 or width < 0) {
                    cout << "Input must be greater than 0" << endl;
                    break;
                }
                cout << calculatePerimeter(length, width) << endl;
                break;
            case 5:
                cout << "Quit" << endl;
                break;
            default:
                cout << "Enter a valid input" << endl;
        }
    } while (input != 5);

    return 0;
}
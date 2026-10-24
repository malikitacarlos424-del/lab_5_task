#include <iostream>
using namespace std;

float triangle(float base, float height) {
    return (0.5 * base) * height;
}

int rectangle(int length, int width) {
    return length * width;
}

float square(float length, float width) {
    return length * width;
}

int main() {
    int input;

    while (true) {
        cout << "Please select the area of the shape to calculate\n";
        cout << "1: Square" << endl;
        cout << "2: Rectangle" << endl;
        cout << "3: Triangle" << endl;
        cout << "4: Quit" << endl;

        cout << "Enter selection: ";
        cin >> input;

        if (input < 1 || input > 4) {
            cout << "Please choose a valid input." << endl;
        }
        else if (input == 1) {
            cout << "Enter the length and width of the square: ";
            float length, width;
            cin >> length >> width;

            float area = square(length, width);
            cout << "The area of the square is " << area << endl;
        }
        else if (input == 2) {
            cout << "Enter the length and width of the rectangle: ";
            int length, width;
            cin >> length >> width;

            int area = rectangle(length, width);
            cout << "The area of the rectangle is " << area << endl;
        }
        else if (input == 3) {
            cout << "Enter the base and height of the triangle: ";
            float base, height;
            cin >> base >> height;

            float area = triangle(base, height);
            cout << "The area of the triangle is " << area << endl;
        }
        else if (input == 4) {
            cout << "The program has terminated." << endl;
            break;
        }
    }

    return 0;
}
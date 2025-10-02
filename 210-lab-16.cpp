// COMSC-210 | Lab 16 | Mamadou Sissoko
// IDE used: Visual Studio Code
// Color class with RGB values, adding default, parameter, and partial constructors

#include <iostream>
#include <iomanip>
using namespace std;

const int WIDTH = 3; // Field width for printing

class Color {
private:
    int red;    
    int green;  
    int blue;   

public:
    // Default constructor
    Color() {
        setRed(0);
        setGreen(0);
        setBlue(0);
    }

    // Full parameter constructor
    Color(int r, int g, int b) {
        setRed(r);
        setGreen(g);
        setBlue(b);
    }

    // Partial one-color constructor (red only)
    Color(int r) {
        setRed(r);
        setGreen(0);
        setBlue(0);
    }

    // Partial two-color constructor (red + green)
    Color(int r, int g) {
        setRed(r);
        setGreen(g);
        setBlue(0);
    }

    // Getters
    int getRed() const { return red; }
    int getGreen() const { return green; }
    int getBlue() const { return blue; }

    // Setters with validation
    void setRed(int r) { red = (r >= 0 && r <= 255) ? r : 0; }
    void setGreen(int g) { green = (g >= 0 && g <= 255) ? g : 0; }
    void setBlue(int b) { blue = (b >= 0 && b <= 255) ? b : 0; }

    // Print method
    void print() const {
        cout << setw(WIDTH) << red << "   "
             << setw(WIDTH) << green << "   "
             << setw(WIDTH) << blue << endl;
    }
};

int main() {
    Color defaultColor;               // Default constructor
    Color redColor(255, 0, 0);        // Full parameter constructor
    Color greenColor(0, 255, 0);      // Full parameter constructor
    Color blueColor(0, 0, 255);       // Full parameter constructor
    Color grayColor(128, 128, 128);   // Full parameter constructor (gray)

    cout << "Color                       Red   Green   Blue\n";
    cout << "-----------------------------------------------\n";

    cout << "Default Color                "; defaultColor.print();
    cout << "Red                          "; redColor.print();
    cout << "Green                        "; greenColor.print();
    cout << "Blue                         "; blueColor.print();

    cout << "-----------------------------------------------\n";
    cout << "Gray                          "; grayColor.print();
    cout << "-----------------------------------------------\n";

    return 0;
}

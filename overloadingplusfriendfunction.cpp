#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    // Friend function to overload +
    friend Complex operator+(const Complex& c1, const Complex& c2);

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

// Overloading + using a friend function
Complex operator+(const Complex& c1, const Complex& c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

int main() {
    Complex c1(3, 4), c2(2, 5);
    Complex sum = c1 + c2;
    sum.display();  // Output: 5 + 9i
    return 0;
}

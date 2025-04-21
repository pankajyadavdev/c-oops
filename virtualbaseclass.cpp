#include <iostream>
using namespace std;

// Base class (virtual base class)
class Base {
public:
    int data;
    Base() { data = 100; }
};

// Derived class 1 (inherits Base virtually)
class Derived1 : virtual public Base {
public:
    void showDerived1() {
        cout << "Derived1 class data: " << data << endl;
    }
};

// Derived class 2 (inherits Base virtually)
class Derived2 : virtual public Base {
public:
    void showDerived2() {
        cout << "Derived2 class data: " << data << endl;
    }
};

// Multiple Inheritance (Hybrid Inheritance)
class FinalDerived : public Derived1, public Derived2 {
public:
    void showFinal() {
        cout << "FinalDerived class accessing Base class data: " << data << endl;
    }
};

// Main function
int main() {
    FinalDerived obj;
    
    obj.showDerived1(); // Accessing Base class data through Derived1
    obj.showDerived2(); // Accessing Base class data through Derived2
    obj.showFinal();    // Accessing Base class data in FinalDerived

    return 0;
}

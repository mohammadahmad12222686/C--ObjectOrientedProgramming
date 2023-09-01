#include <iostream>
using namespace std;

class Operation {
private:
    int a, b;

public:
    void get() {
        cin >> a >> b;
    }

    int sum() {
        return a + b;
    }

    int difference() {
        return a - b;
    }

    int product() {
        return a * b;
    }

    void division() {
        if (b == 0) {
            cout << "Division by zero not possible" << endl;
        } else {
            cout << "Division of two numbers: " << static_cast<double>(a) / b << endl;
        }
    }

    void modulus() {
        if (b == 0) {
            cout << "Division by zero not possible" << endl;
        } else {
            cout << "Modulus of two numbers: " << a % b << endl;
        }
    }
};

int main() {
    Operation obj;
    obj.get();
    cout << "Addition of two numbers: " << obj.sum() << endl;
    cout << "Difference of two numbers: " << obj.difference() << endl;
    cout << "Product of two numbers: " << obj.product() << endl;
    obj.division();
    obj.modulus();

    return 0;
}

/*static_cast<double>(a): This part converts the integer variable a into a double data type. 
It's using a C++ type casting technique called static_cast to explicitly convert a to a 
floating-point number (i.e., a double). This is done to ensure that the division operation 
produces a floating-point result.*/
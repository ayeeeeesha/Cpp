// #include <iostream>
// using namespace std;

// // Function Declaration
// int add(int, int);

// int main() {
//     int a, b, result;
//     cout << "Enter two numbers: ";
//     cin >> a >> b;

//     result = add(a, b); // Function Call
//     cout << "Sum = " << result << endl;
//     return 0;
// }

// // Function Definition
// int add(int x, int y) {
//     return x + y;
// }


// #include <iostream>
// using namespace std;

// void greet(); // Function Declaration

// int main() {
//     greet(); // Function Call
//     return 0;
// }

// // Function Definition
// void greet() {
//     cout << "Hello! Welcome to the C++ Function Lab." << endl;
// }

// #include <iostream>
// using namespace std;

// int maxNumber(int, int); // Function Declaration

// int main() {
//     int a, b;
//     cout << "Enter two numbers: ";
//     cin >> a >> b;

//     cout << "Maximum number is: " << maxNumber(a, b) << endl;
//     return 0;
// }

// // Function Definition
// int maxNumber(int x, int y) {
//     if (x > y)
//         return x;
//     else
//         return y;
// }


#include <iostream>
using namespace std;

float area(); // Function Declaration

int main() {
    float result = area(); // Function Call
    cout << "Area of rectangle = " << result << endl;
    return 0;
}

// Function Definition
float area() {
    float length, width;
    cout << "Enter length and width: ";
    cin >> length >> width;
    return length * width;
}


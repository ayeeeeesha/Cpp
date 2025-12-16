// #include <iostream>
// using namespace std;

// void display(int a = 10, int b = 20) {
//     cout << "a = " << a << ", b = " << b << endl;
// }

// int main() {
//     display();          // no arguments
//     display(50);        // one argument
//     display(100, 200);  // two arguments
//     return 0;
// }


// #include <iostream>
// using namespace std;

// void square(int x) {
//     x = x * x;
//     cout << "Inside function: " << x << endl;
// }

// int main() {
//     int num = 5;
//     cout << "Before function call: " << num << endl;
//     square(num);
//     cout << "After function call: " << num << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void square(int &x) {  // pass by reference
//     x = x * x;
// }

// int main() {
//     int num = 5;
//     cout << "Before function call: " << num << endl;
//     square(num);
//     cout << "After function call: " << num << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void demo() {
//     int localVar = 10;
//     cout << "Local variable inside function: " << localVar << endl;
// }

// int main() {
//     demo();
//     // cout << localVar; // Uncommenting will cause error
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int globalVar = 100; // global variable

// void display() {
//     cout << "Global variable inside function: " << globalVar << endl;
// }

// int main() {
//     cout << "Global variable in main: " << globalVar << endl;
//     display();
//     return 0;
// }


// #include <iostream>
// using namespace std;

// void counter() {
//     static int count = 0;  // static variable dont reset
//     count++;
//     cout << "Count = " << count << endl;
// }

// int main() {
//     counter();
//     counter();
//     counter();
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int num = 10; // global variable

// void demo() {
//     int num = 50; // local variable
//     cout << "Local num = " << num << endl;
//     cout << "Global num = " << ::num << endl; // scope resolution operator
// }

// int main() {
//     demo();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void display(int a) {
//     cout << "Integer: " << a << endl;
// }

// void display(double b) {
//     cout << "Double: " << b << endl;
// }

// void display(string c) {
//     cout << "String: " << c << endl;
// }

// int main() {
//     display(10);
//     display(10.5);
//     display("Hello C++");
//     return 0;
// }


// #include <iostream>
// using namespace std;

// void sum(int a, int b) {
//     int result = a + b;
//     cout << "Sum = " << result << endl;
// }

// int main() {
//     sum(5, 7);
//     sum(10, 20);
//     return 0;
// }

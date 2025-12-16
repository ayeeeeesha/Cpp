#include <iostream>
using namespace std;

/////////////////////////////////////////
// 1️⃣ Simple Greet Function
/////////////////////////////////////////
/*
void greet(){
    cout << "Good Morning" << endl;
    cout << "How are you?" << endl;
}

int main(){
    greet();
    cout << "Heyyy" << endl;
    greet();
}
*/

/////////////////////////////////////////
// 2️⃣ Sum of Two Numbers Using Function
/////////////////////////////////////////
/*
int sum(int a, int b){
    return a + b;
}

int main(){
    cout << "Sum = " << sum(7, 87);
}
*/

/////////////////////////////////////////
// 3️⃣ Cube Using Call by Reference
/////////////////////////////////////////
/*
void cube(int &number) {
    number = number * number * number;
    cout << "Inside function: " << number << endl;
}

int main() {
    int number = 5;
    cube(number);
    cout << "After function call: " << number << endl;
    return 0;
}
*/

/////////////////////////////////////////
// 4️⃣ Function with Default Arguments
/////////////////////////////////////////
/*
int number_sum(int num1 = 30, int num2) {
    return num1 + num2;
}

int main() {
    int sum = number_sum(20); // num2 missing? C++ requires rightmost defaults
    cout << sum;
    return 0;
}
*/

/////////////////////////////////////////
// 5️⃣ Function Prototype Example
/////////////////////////////////////////
/*
int add(int, int); // Function Declaration

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int result = add(a, b);
    cout << "Sum = " << result << endl;
    return 0;
}

int add(int x, int y){ // Function Definition
    return x + y;
}
*/

/////////////////////////////////////////
// 6️⃣ Greet Using Function (Separate Definition)
/////////////////////////////////////////
/*
void greet();

int main() {
    greet(); // Function Call
    return 0;
}

void greet() {
    cout << "Hello! Welcome to the C++ Function Lab." << endl;
}
*/

/////////////////////////////////////////
// 7️⃣ Maximum of Two Numbers Using Function
/////////////////////////////////////////
/*
int maxNumber(int x, int y);

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Maximum number is: " << maxNumber(a, b) << endl;
    return 0;
}

int maxNumber(int x, int y){
    return (x > y) ? x : y;
}
*/

/////////////////////////////////////////
// 8️⃣ Area of Rectangle Using Function
/////////////////////////////////////////
/*
float area() {
    float length, width;
    cout << "Enter length and width: ";
    cin >> length >> width;
    return length * width;
}

int main() {
    float result = area();
    cout << "Area of rectangle = " << result << endl;
    return 0;
}
*/

/////////////////////////////////////////
// 9️⃣ Function with Default Parameters
/////////////////////////////////////////
/*
void display(int a = 10, int b = 20) {
    cout << "a = " << a << "\nb = " << b << endl;
}

int main() {
    display();
    display(50);
    display(100, 200);
    return 0;
}
*/

/////////////////////////////////////////
// 🔟 Square Function Call by Value
/////////////////////////////////////////
/*
void square(int x) {
    x = x * x;
    cout << "Inside function: " << x << endl;
}

int main() {
    int num = 5;
    cout << "Before function call: " << num << endl;
    square(num);
    cout << "After function call: " << num << endl;
    return 0;
}
*/

/////////////////////////////////////////
// 1️⃣1️⃣ Square Function Call by Reference
/////////////////////////////////////////
/*
void square(int &x) {
    x = x * x;
    cout << "Inside function: " << x << endl;
}

int main() {
    int num = 5;
    cout << "Before function call: " << num << endl;
    square(num);
    cout << "After function call: " << num << endl;
    return 0;
}
*/

/////////////////////////////////////////
// 1️⃣2️⃣ Static Variable Example
/////////////////////////////////////////
/*
void counter() {
    static int count = 0;
    count++;
    cout << "Count = " << count << endl;
}

int main() {
    counter();
    counter();
    counter();
    return 0;
}
*/

/////////////////////////////////////////
// 1️⃣3️⃣ Local vs Global Variables
/////////////////////////////////////////
/*
int num = 10; // global variable

void demo() {
    int num = 50; // local variable
    cout << "Local num = " << num << endl;
    cout << "Global num = " << ::num << endl; // :: accesses global variable
}

int main() {
    demo();
    return 0;
}
*/

/////////////////////////////////////////
// 1️⃣4️⃣ Function Arguments Example
/////////////////////////////////////////
/*
void sum(int a, int b) {
    int result = a + b;
    cout << "Sum = " << result << endl;
}

int main() {
    sum(5, 7);
    sum(10, 20);
    return 0;
}
*/

/////////////////////////////////////////
// 5️⃣ Health Club Membership Program
/////////////////////////////////////////
/*
void showMenu() {
    cout << "\n--- Health Club Membership Menu ---\n";
    cout << "1. Adult Membership\n";
    cout << "2. Child Membership\n";
    cout << "3. Senior Citizen Membership\n";
    cout << "4. Quit\n";
    cout << "Enter your choice: ";
}

void showFees(double rate, int months) {
    cout << "Total charges: $" << rate * months << endl;
}

int main() {
    int choice, months;

    // Membership rates
    const double ADULT = 40.0;
    const double CHILD = 20.0;
    const double SENIOR = 30.0;

    do {
        showMenu();       // Show the menu
        cin >> choice;    // Get user choice

        while (choice < 1 || choice > 4) {
            cout << "Please enter a valid choice (1-4): ";
            cin >> choice;
        }

        if (choice != 4) { // If not quitting
            cout << "For how many months? ";
            cin >> months;

            if (choice == 1) showFees(ADULT, months);
            else if (choice == 2) showFees(CHILD, months);
            else if (choice == 3) showFees(SENIOR, months);
        }

    } while (choice != 4);

    cout << "Thank you for using our program!" << endl;
    return 0;
}
*/

/////////////////////////////////////////
// 1️⃣ Rectangle Area Using Functions
/////////////////////////////////////////
/*
double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);

int main() {
    double length = getLength();
    double width = getWidth();
    double area = getArea(length, width);
    displayData(length, width, area);
    return 0;
}

double getLength() {
    double length;
    cout << "Enter rectangle length: ";
    cin >> length;
    return length;
}

double getWidth() {
    double width;
    cout << "Enter rectangle width: ";
    cin >> width;
    return width;
}

double getArea(double length, double width) {
    return length * width;
}

void displayData(double length, double width, double area) {
    cout << "Length: " << length << ", Width: " << width << ", Area: " << area << endl;
}
*/


/////////////////////////////////////////
// 2️⃣ Falling Distance Calculation
/////////////////////////////////////////
/*
double fallingDistance(double time) {
    const double g = 9.8;
    return 0.5 * g * time * time;
}

int main() {
    for (int t = 1; t <= 10; t++) {
        cout << "Time: " << t << " seconds, Distance: " 
             << fallingDistance(t) << " meters" << endl;
    }
    return 0;
}
*/

/////////////////////////////////////////
// 3️⃣ Coin Toss Simulation
/////////////////////////////////////////
/*
int main() {
    int n;
    cout << "How many times to toss the coin? ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0)
            cout << "Tails" << endl;
        else
            cout << "Heads" << endl;
    }
    return 0;
}
*/

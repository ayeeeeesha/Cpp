// #include <iostream>
// using namespace std;

// static int limit = 0; // global variable (optional, not used in your code)

// void counter(int n) {
//     static int callCount = 0; // static local variable
//     callCount++; 
//     cout << "Call " << callCount << " for n = " << n << endl;
    
//     if (n > 1)
//         counter(n - 1); // recursive call
// }

// int main() {
//     int num;
//     cout << "Enter recursion depth: ";
//     cin >> num;
//     counter(num);
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int factorial(int n) {
//     if (n == 0)          // Base case
//         return 1;
//     else
//         return n * factorial(n - 1); // Recursive call
// }

// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     cout << "Factorial of " << num << " = " << factorial(num) << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void printNumbers(int n) {
//     if (n == 0)
//         return;          // Base case
//     printNumbers(n - 1);  // Recursive call before printing
//     cout << n << " ";     // Prints numbers from 1 to n
// }

// int main() {
//     int limit;
//     cout << "Enter limit: ";
//     cin >> limit;
//     cout << "Numbers from 1 to " << limit << ": ";
//     printNumbers(limit);
//     return 0;
// }

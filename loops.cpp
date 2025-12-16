// #include <iostream>
// using namespace std;

// int main() {

//     // 1️⃣ Print numbers from 45 to 176
//     cout << "1️⃣ Numbers from 45 to 176:\n";
//     for (int i = 45; i <= 176; i++) {
//         cout << i << " ";
//     }
//     cout << "\n\n";


//     // 2️⃣ Print odd numbers from 1 to 100
//     cout << "2️⃣ Odd numbers from 1 to 100:\n";
//     for (int i = 1; i <= 100; i++) {
//         if (i % 2 != 0)
//             cout << i << " ";
//     }
//     cout << "\n\n";


//     // 3️⃣ While loop example (even numbers)
//     cout << "3️⃣ Even numbers using while loop:\n";
//     int num, i = 1;
//     cout << "Enter a number: ";
//     cin >> num;
//     while (i <= num) {
//         if (i % 2 == 0)
//             cout << i << " ";
//         i++;
//     }
//     cout << "\n\n";


//     // 4️⃣ Nested loop - star square pattern
//     cout << "4️⃣ 4x4 Star Pattern:\n";
//     for (int row = 1; row <= 4; row++) {
//         for (int col = 1; col <= 4; col++) {
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     cout << "\n";


//     // 5️⃣ Nested loop - number square pattern
//     cout << "5️⃣ 5x5 Number Pattern:\n";
//     for (int i = 0; i < 5; i++) {
//         for (int j = 0; j < 5; j++) {
//             cout << j + 1;
//         }
//         cout << endl;
//     }
//     cout << "\n";


//     // 6️⃣ Triangle pattern with single quotes
//     cout << "6️⃣ Triangle Pattern:\n";
//     for (int i = 0; i <= 10; i++) {
//         for (int j = 0; j <= 10 - i; j++) cout << " ";
//         for (int j = 0; j <= i; j++) cout << "' ";
//         cout << endl;
//     }
//     cout << "\n";


//     // 7️⃣ Alphabet Pyramid Pattern
//     cout << "7️⃣ Alphabet Pyramid Pattern:\n";
//     int rows = 7; // can change for bigger pattern
//     for (int i = 0; i < rows; i++) {

//         // LEFT SIDE (A to ...)
//         for (int j = 0; j < rows - i; j++)
//             cout << char('A' + j);

//         // SPACES in the middle
//         for (int s = 0; s < i * 2; s++)
//             cout << " ";

//         // RIGHT SIDE (backwards)
//         for (int j = rows - i - 1; j >= 0; j--)
//             cout << char('A' + j);

//         cout << endl;
//     }

//     return 0;
// }

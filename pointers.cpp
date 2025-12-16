// #include <iostream>
// using namespace std;

// /////////////////////////////////////////
// // 1️⃣ Basic Pointer Example
// /////////////////////////////////////////
// int main() {
//     int num = 10;         // Normal integer variable
//     int *ptr = &num;      // Pointer storing address of num

//     cout << "num = " << num << endl;                  // prints value of num
//     cout << "Address of num (&num) = " << &num << endl; // prints memory address of num
//     cout << "ptr (address stored) = " << ptr << endl;   // prints address stored in pointer
//     cout << "Value at ptr (*ptr) = " << *ptr << endl;   // prints value at pointer (dereferencing)

//     return 0;
// }


// | Symbol      | Meaning                                 | Example                 | Output Example                      |
// | ----------- | --------------------------------------- | ----------------------- | ----------------------------------- |
// | `&`         | “Address of” a variable                 | `&num`                  | Memory address like `0x61ff08`      |
// | `*`         | “Value at” the address (dereference)    | `*ptr`                  | Value stored at address, e.g., `10` |
// | `int *ptr;` | Pointer that can hold address of an int | `int *ptr; ptr = &num;` | Stores address of `num`             |
// | `ptr = &x`  | Store address of `x` in `ptr`           | `ptr = &num;`           | `ptr` now points to `num`           |
// | `*ptr`      | Access value stored at that address     | `cout << *ptr;`         | Prints `10`                         |



// Modifying Value Through Pointer
// int a = 5;
// int *p = &a;
// cout << "Before: a = " << a << endl;
// *p = 20;  // changing value via pointer
// cout << "After: a = " << a << endl;


// Pointer to Pointer
// int x = 100;
// int *ptr = &x;
// int **ptr2 = &ptr;  // pointer to pointer
// cout << "x = " << x << endl;
// cout << "Value via ptr = " << *ptr << endl;
// cout << "Value via ptr2 = " << **ptr2 << endl;



/////////////////////////////////////////
// 8️⃣ Dynamic Memory Allocation (Pointer)
/////////////////////////////////////////
/*
int main() {
    int *ptr = nullptr;
    ptr = new int; // allocate memory
    *ptr = 50;

    cout << "Value: " << *ptr << endl;

    delete ptr; // free memory
    return 0;
}
*/

/////////////////////////////////////////
// 9️⃣ Local vs Global Variable
/////////////////////////////////////////
// int num = 100; // global variable

// int main() {
//     int num = 50; // local variable
//     cout << "Local num: " << num << endl;
//     cout << "Global num: " << ::num << endl; // access global using ::
//     return 0;
// }



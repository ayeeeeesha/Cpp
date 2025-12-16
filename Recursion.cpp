// #include <iostream>
// using namespace std;

/////////////////////////////////////////
// 1️⃣ Print Numbers from n to 1 (Recursion)
/////////////////////////////////////////
/*
void print(int n){
    if(n==0) return;   // Base case: stop recursion when n is 0
    cout << n << endl;
    print(n-1);        // Recursive call
}

int main(){
    print(10);         // Print numbers 10 to 1
}
*/

/////////////////////////////////////////
// 2️⃣ Sum of First n Natural Numbers (Recursion)
/////////////////////////////////////////
/*
int sum(int n){
    if(n==0) return 0;  // Base case: sum of 0 is 0
    return n + sum(n-1); // Recursive sum
}

int main(){
    cout << sum(6);    // Sum of 1+2+3+4+5+6
}
*/

/////////////////////////////////////////
// 3️⃣ Factorial of n (Recursion)
/////////////////////////////////////////
/*
int fact(int n){
    if(n==0 || n==1) return 1;  // Base case: 0! = 1! = 1
    return n * fact(n-1);       // Recursive factorial
}

int main(){
    cout << fact(6);  // 6! = 720
}
*/

/////////////////////////////////////////
// 4️⃣ Power Calculation a^b (Recursion)
/////////////////////////////////////////
/*
int pow(int a, int b){
    if(b==0) return 1;          // Base case: any number^0 = 1
    return a * pow(a, b-1);     // Recursive multiplication
}

int main(){
    int a, b;
    cout << "Enter base: ";
    cin >> a;
    cout << "Enter exponent: ";
    cin >> b;
    cout << pow(a, b);
}
*/

/////////////////////////////////////////
// 5️⃣ Fibonacci Sequence (Recursion)
/////////////////////////////////////////
/*
int fibo(int n){
    if(n==0 || n==1) return 1;      // Base case: fib(0) = 1, fib(1) = 1
    return fibo(n-1) + fibo(n-2);   // Recursive sum of previous two terms
}

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << fibo(n);
}
*/



/////////////////////////////////////////
// 1️⃣ Sum of Array Elements Using Recursion
/////////////////////////////////////////
/*
int sumArray(int arr[], int n) {
    if(n == 0) return 0;  // base case
    return arr[0] + sumArray(arr + 1, n - 1);  // first element + sum of rest
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Sum of array elements: " << sumArray(arr, 5) << endl;
    return 0;
}
*/

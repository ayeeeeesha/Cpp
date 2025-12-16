// #include <iostream>
// #include <string>
// using namespace std;

/////////////////////////////////////////
// 1️⃣ Sum of Array Elements
/////////////////////////////////////////
/*
📌 Calculates the sum of all elements in an integer array.

int main_sumArray() {
    int arr[] = {12, 2, 5, 6, 7, 8, 78};
    int n = sizeof(arr) / sizeof(arr[0]); // correct size calculation
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    cout << "Sum of array elements = " << sum << endl;
    return 0;
}
*/

/////////////////////////////////////////
// 2️⃣ Product of Array Elements
/////////////////////////////////////////
/*
📌 Finds the product of all elements in an array.
*/
/*
int main_productArray() {
    int arr[5] = {2, 3, 4, 5, 6};
    int product = 1;

    for (int i = 0; i < 5; i++) {
        product *= arr[i];
    }
    cout << "Product = " << product << endl;
    return 0;
}
*/

/////////////////////////////////////////
// 3️⃣ Natural Numbers Using Array
/////////////////////////////////////////
/*
📌 Stores natural numbers up to n in an array and displays them.
*/
/*
int main_naturalArray() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int arr[n];
    cout << "Natural numbers till " << n << ": ";
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1; // corrected formula
        cout << arr[i] << " ";
    }
    cout << "\nTotal elements: " << n << endl;
    return 0;
}
*/

/////////////////////////////////////////
// 4️⃣ Squares of Natural Numbers
/////////////////////////////////////////
/*
📌 Stores and prints squares of natural numbers up to n.
*/
/*
int main_squaresArray() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int squares[n];
    for (int i = 1; i <= n; i++) {
        squares[i - 1] = i * i;
    }

    cout << "Squares of natural numbers till " << n << ": ";
    for (int i = 0; i < n; i++) {
        cout << squares[i] << " ";
    }
    cout << endl;
    return 0;
}
*/

/////////////////////////////////////////
// 5️⃣ Modify Array Elements (Double Values)
/////////////////////////////////////////
/*
📌 Doubles each element of the array.
*/
/*
int main_doubleArray() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        arr[i] *= 2;
    }

    cout << "Modified array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
*/

/////////////////////////////////////////
// 6️⃣ Count Elements Greater Than X
/////////////////////////////////////////
/*
📌 Counts how many elements in the array are greater than a given number x.
*/
/*
int main_countGreater() {
    int n, x, count = 0;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the number x: ";
    cin >> x;

    for (int i = 0; i < n; i++) {
        if (arr[i] > x) count++;
    }

    cout << "Number of elements greater than " << x << " = " << count << endl;
    return 0;
}
*/

/////////////////////////////////////////
// 7️⃣ Reverse Array Using Extra Array
/////////////////////////////////////////
/*
📌 Reverses an array using another array.
*/
/*
int main_reverseArray() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n], rev[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 0; i < n; i++) rev[i] = arr[n - 1 - i];

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) cout << rev[i] << " ";
    cout << endl;
    return 0;
}
*/

/////////////////////////////////////////
// 8️⃣ Input Age and Name
/////////////////////////////////////////
/*
📌 Takes age and name as input using cin and getline.
*/
/*
int main_ageName() {
    int age;
    string name;

    cout << "Enter your age: ";
    cin >> age;
    cin.ignore(); // ignore leftover newline
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Age: " << age << ", Name: " << name << endl;
    return 0;
}
*/

/////////////////////////////////////////
// 9️⃣ Transpose of 2D Array
/////////////////////////////////////////
/*
📌 Displays the transpose of a 3×5 matrix.
*/
/*
int main_transpose() {
    int arr[3][5] = {
        {5, 10, 15, 20, 25},
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10}
    };

    cout << "Original 3x5 Matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) cout << arr[i][j] << " ";
        cout << endl;
    }

    cout << "\nTranspose 5x3 Matrix:\n";
    for (int j = 0; j < 5; j++) {
        for (int i = 0; i < 3; i++) cout << arr[i][j] << " ";
        cout << endl;
    }

    return 0;
}
*/


/////////////////////////////////////////
// 1️⃣ Find Maximum in 3 Numbers
/////////////////////////////////////////
/*
int main() {
    int arr[3];
    
    cout << "Enter 3 numbers: ";
    for(int i = 0; i < 3; i++) {
        cin >> arr[i];
    }

    int max = arr[0];  // Initialize max with first element

    for(int i = 1; i < 3; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "Maximum number is = " << max;
    return 0;
}
*/


/////////////////////////////////////////
// 2️⃣ Reverse 20 Float Numbers
/////////////////////////////////////////
/*
int main() {
    float arr[20];

    cout << "Enter 20 float numbers:\n";
    for (int i = 0; i < 20; i++) {
        cin >> arr[i];
    }

    // Reverse array
    for (int i = 0; i < 10; i++) {
        float temp = arr[i];
        arr[i] = arr[19 - i];
        arr[19 - i] = temp;
    }

    cout << "Reversed array:\n";
    for (int i = 0; i < 20; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
*/

/////////////////////////////////////////
// 3️⃣ Column-wise Print of 2x3 Matrix
/////////////////////////////////////////
/*
int main(){
    int arr[2][3] = {
        {6, 1, 2},
        {4, 3, 5}
    };

    for(int j=0; j<3; j++){       // column loop
        for(int i=0; i<2; i++){   // row loop
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
*/


/////////////////////////////////////////
// 4️⃣ Transpose of 4x5 Matrix
/////////////////////////////////////////
/*
int main() {
    int arr[4][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20}
    };

    cout << "Original 4x5 Matrix:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nTranspose 5x4 Matrix:\n";
    for (int j = 0; j < 5; j++) {        // column loop
        for (int i = 0; i < 4; i++) {    // row loop
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
*/


/////////////////////////////////////////
// 5️⃣ Transpose of 3x5 Matrix
/////////////////////////////////////////
/*
int main() {
    int arr[3][5] = {
        {5, 10, 15, 20, 25},
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10}
    };

    cout << "Original 3x5 Matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nTranspose 5x3 Matrix:\n";
    for (int j = 0; j < 5; j++) {        // column loop
        for (int i = 0; i < 3; i++) {    // row loop
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
*/


/////////////////////////////////////////
// 2️⃣ Display Characters from Array
/////////////////////////////////////////
/*
int main(){
    char grades[] = {'A','B','C','D'};
    for(int i = 0; i < sizeof(grades)/sizeof(char); i++){
        cout << grades[i] << endl;
    }
}
*/

/////////////////////////////////////////
// 3️⃣ Calculate Average of Marks
/////////////////////////////////////////
/*
float average(int marks[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += marks[i]; // add all marks
    }
    return float(sum)/size; // divide sum by number of students
}

int main() {
    int marks[] = {80, 90, 75, 85, 95};
    int size = 5;
    cout << "Average marks: " << average(marks, size);
}
*/

/////////////////////////////////////////
// 4️⃣ Sum of Main Diagonal in a Matrix
/////////////////////////////////////////
/*
int add_diagonal(int arr[][3], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i][i]; // row = column
    }
    return sum;
}

int main() {
    int arr[3][3] = {{100, 134, 234}, {34, 189, 221}, {109, 139, 56}};
    cout << "Sum of main diagonal: " << add_diagonal(arr, 3);
}
*/

// int main(){
//     char grades[] = {'A','B','C','d'};
//     for(int i=0; i<sizeof(grades)/sizeof(char); i++){
//         cout<<grades[i]<<endl;
//     }
// }

/////////////////////////////////////////
// 4️⃣ User-Defined Array Input
/////////////////////////////////////////
/*
int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size]; // Variable length array (VLA)

    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }

    cout << "Array elements with their indexes:\n";
    for (int i = 0; i < size; i++) {
        cout << "Index " << i << ": " << arr[i] << endl;
    }

    return 0;
}
*/

/////////////////////////////////////////
// 5️⃣ Search Element in Array
/////////////////////////////////////////
/*
int main() {
    int arr[] = {1, 2, 3, 4};
    int size = 4;
    int target;

    cout << "Array elements are: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    cout << "Enter the number you want to find: ";
    cin >> target;

    int i;
    for (i = 0; i < size; i++) {
        if (arr[i] == target) {
            cout << "Number " << target << " is at index " << i << endl;
            break;
        }
    }

    if (i == size)
        cout << "Number not found in the array." << endl;

    return 0;
}
*/

/////////////////////////////////////////
// 6️⃣ 3x3 Grid Input and Sum
/////////////////////////////////////////
/*
int main() {
    int grid[3][3];
    int sum = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Enter number for cell [" << i << "][" << j << "]: ";
            cin >> grid[i][j];
            sum += grid[i][j];
        }
    }

    cout << "\nYour 3x3 grid:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Sum of all numbers: " << sum << endl;

    return 0;
}
*/

/////////////////////////////////////////
// 7️⃣ 5x5 Multiplication Table
/////////////////////////////////////////
/*
int main() {
    int table[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            table[i][j] = (i + 1) * (j + 1);
        }
    }

    cout << "5x5 Multiplication Table:\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << table[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
*/


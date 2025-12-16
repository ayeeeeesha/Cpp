
#include<iostream>
using namespace std;

int main() {
    //LAB-3

    /* int marks = 100;

    marks -= 10; 
    cout << "After -=10: " << marks << endl;
    marks += 5; 
    cout << "After +=5: " << marks << endl;
    marks *= 2; 
    cout << "After *=2: " << marks << endl;
    return 0; */

    /* int s1, s2;
    cout << "Enter marks of Student 1: ";
    cin >> s1;
    cout << "Enter marks of Student 2: ";
    cin >> s2;
    if (s1 > s2)
        cout << "Student 1 has higher marks" << endl;
    else if (s2 > s1)
        cout << "Student 2 has higher marks" << endl;
    else
        cout << "Both have equal marks" << endl;
    return 0; */

    /* int marks, attendance;
    cout << "Enter marks: ";
    cin >> marks;
    cout << "Enter attendance percentage: ";
    cin >> attendance;
    if (marks >= 50 && attendance >= 75)
        cout << "Student Passed " << endl;
    else
        cout << "Student Failed " << endl;
    return 0; */

   
   /*  cout << 4 - 8 + 10 * 3 << endl;      
    cout << (4 - 8 + 10) * 3 << endl;    
    return 0; */


   /*  int totalSeconds;
    cout << "Enter total seconds: ";
    cin >> totalSeconds;
    int hours = totalSeconds / 3600;
    int minutes = (totalSeconds % 3600) / 60;
    int seconds = totalSeconds % 60;
    cout << hours << " hour " << minutes << " minute " << seconds << " second" << endl;
    return 0; */

    /* char ch;
    cout << "Enter a character: ";
    cin >> ch;
    char prev = ch - 1;
    cout << "Previous character: " << prev << endl;
    return 0; */

  
    /* float r;
    cout << "Enter radius of sphere: ";
    cin >> r;

    float area = 4 * 3.14 * r * r;
    cout << "Surface Area = " << area << endl;

    return 0; */

//PRACTICE QUESTIONSS

/* 
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a >= b && a >= c)
        cout << "Largest: " << a << endl;
    else if (b >= a && b >= c)
        cout << "Largest: " << b << endl;
    else
        cout << "Largest: " << c << endl;

    return 0; */

 /*    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0 && num > 0)
        cout << "Number is Even AND Positive" << endl;
    else
        cout << "Condition not satisfied" << endl;

    return 0; */

    /* int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After swapping: a=" << a << " b=" << b << endl;
    return 0; */
 /* 
    int bill;
    char member;
    cout << "Enter bill amount: ";
    cin >> bill;
    cout << "Are you a regular member? (y/n): ";
    cin >> member;

    if (bill > 5000 || member == 'y' || member == 'Y')
        cout << "10% Discount applied " << endl;
    else
        cout << "No discount " << endl;
    return 0; */


   /*  int m1, m2, m3, m4, m5;
    cout << "Enter marks of 5 subjects: ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;
    float avg = (m1 + m2 + m3 + m4 + m5) / 5.0;
    cout << "Average = " << avg << endl;
    if (avg >= 50)
        cout << "Pass " << endl;
    else
        cout << "Fail " << endl;
    return 0;
  */


    //LAB-4

   /* int n;
    cout << "Input a number = ";
    cin >> n;

    if (n >= 0)
        cout << "The number is positive";
    else
        cout << "The number is negative";

    return 0;*/

   /* int marks;

    cout << "Enter student's marks (0-100): ";
    cin >> marks;

    if (marks >= 50) {
        cout << "Pass" << endl;
    } else {
        cout << "Fail" << endl;
    }g

    return 0;*/

  /*   int n;
    cout << "Input a number = ";
    cin >> n;

    if (n%2==0)
        cout << "The number is even";
    else
        cout << "The number is odd";

    return 0; */

   /*   int age;
    cout << "Input your age = ";
    cin >>age;

    if (age>=18)
        cout << "Eligible to vote";
    else
        cout << "Not eligible to vote";

    return 0; */

/* 
    int marks;
    cout << "Enter marks (0-100): ";
    cin >> marks;

    if (marks >= 90 && marks <= 100) {
        cout << "Grade: A" << endl;
    } else if (marks >= 80) {
        cout << "Grade: B" << endl;
    } else if (marks >= 70) {
        cout << "Grade: C" << endl;
    } else if (marks >= 60) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Fail" << endl;
    }

    return 0; */
/* 
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a >= b && a >= c) {
        cout << "Largest number is: " << a << endl;
    } else if (b >= a && b >= c) {
        cout << "Largest number is: " << b << endl;
    } else {
        cout << "Largest number is: " << c << endl;
    }

    return 0; */

    /* int day;
    cout << "Enter a number (1-7): ";
    cin >> day;

    switch (day) {
        case 1: cout << "Monday" << endl; break;
        case 2: cout << "Tuesday" << endl; break;
        case 3: cout << "Wednesday" << endl; break;
        case 4: cout << "Thursday" << endl; break;
        case 5: cout << "Friday" << endl; break;
        case 6: cout << "Saturday" << endl; break;
        case 7: cout << "Sunday" << endl; break;
        default: cout << "Invalid number! Enter 1-7." << endl;
    }

    return 0; */

  /* double num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

    switch (op) {
        case '+': 
        cout << "Result: " << num1 + num2 << endl; break;
        case '-': 
        cout << "Result: " << num1 - num2 << endl; break;
        case '*': 
        cout << "Result: " << num1 * num2 << endl; break;
        case '/':
            if (num2 != 0)
                cout << "Result: " << num1 / num2 << endl;
            else
                cout << "Error: Division by zero!" << endl;
            break;
             default: cout << "Invalid operator!" << endl;
       
    }
    return 0;  */
/* 
    int num;
    cout << "Enter a number: ";
    cin >> num;

    (num % 2 == 0) ? cout << num << " is Even" : cout << num << " is Odd";

    return 0; */

/* 
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    (a > b) ? cout << a << " is greater" : cout << b << " is greater";

    return 0; */
}








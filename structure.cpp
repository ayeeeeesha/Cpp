// #include <iostream>
// using namespace std;

/////////////////////////////////////////
// 1️⃣ Employee Payroll (Single Employee)
/////////////////////////////////////////
/*
struct Employee {
    string name;
    int number;
    double hours;
    double payRate;
    double grossPay;
};

int main() {
    Employee emp;

    cout << "Enter employee name: ";
    cin >> emp.name;
    cout << "Enter employee number: ";
    cin >> emp.number;
    cout << "Enter hours worked: ";
    cin >> emp.hours;
    cout << "Enter hourly pay rate: ";
    cin >> emp.payRate;

    emp.grossPay = emp.hours * emp.payRate;

    cout << "\n--- Payroll Data ---\n";
    cout << "Name: " << emp.name << endl;
    cout << "Number: " << emp.number << endl;
    cout << "Hours worked: " << emp.hours << endl;
    cout << "Hourly PayRate: " << emp.payRate << endl;
    cout << "Gross Pay: $" << emp.grossPay << endl;

    return 0;
}
*/

/////////////////////////////////////////
// 2️⃣ Circle Calculations (Diameter, Radius, Area)
/////////////////////////////////////////
/*
struct Circle {
    double diameter;
    double radius;
    double area;
};

int main() {
    Circle c;

    cout << "Enter diameter: ";
    cin >> c.diameter;

    c.radius = c.diameter / 2.0;
    c.area = 3.14 * c.radius * c.radius;

    cout << "Diameter: " << c.diameter << endl;
    cout << "Radius: " << c.radius << endl;
    cout << "Area: " << c.area << endl;

    return 0;
}
*/

/////////////////////////////////////////
// 3️⃣ Multiple Employee Payroll
/////////////////////////////////////////
/*
struct EmployeePay {
    string name;
    int empNum;
    double payRate;
    double hours;
    double grossPay;
};

int main() {
    EmployeePay employee1 = {"Betty Ross", 141, 18.75};
    EmployeePay employee2 = {"Jill Sandburg", 142, 17.50};

    cout << "Name: " << employee1.name << endl;
    cout << "Employee Number: " << employee1.empNum << endl;
    cout << "Enter hours worked: ";
    cin >> employee1.hours;
    employee1.grossPay = employee1.hours * employee1.payRate;
    cout << "Gross Pay: $" << employee1.grossPay << endl << endl;

    cout << "Name: " << employee2.name << endl;
    cout << "Employee Number: " << employee2.empNum << endl;
    cout << "Enter hours worked: ";
    cin >> employee2.hours;
    employee2.grossPay = employee2.hours * employee2.payRate;
    cout << "Gross Pay: $" << employee2.grossPay << endl;

    return 0;
}
*/

/////////////////////////////////////////
// 4️⃣ Movie Details (Struct Input/Output)
/////////////////////////////////////////
/*
struct Movie {
    string movieName;
    string director;
    string producer;
    int year;
};

int main() {
    Movie m;

    cout << "Enter movie name: ";
    cin >> m.movieName;
    cout << "Enter director name: ";
    cin >> m.director;
    cout << "Enter producer name: ";
    cin >> m.producer;
    cout << "Enter release year: ";
    cin >> m.year;

    cout << "\n--- Movie Details ---\n";
    cout << "Movie: " << m.movieName << endl;
    cout << "Director: " << m.director << endl;
    cout << "Producer: " << m.producer << endl;
    cout << "Year: " << m.year << endl;

    return 0;
}
*/

/////////////////////////////////////////
// 5️⃣ Student Fee Records (Array of Structs)
/////////////////////////////////////////
/*
struct Student {
    string name;
    int fee;
};

int main() {
    Student students[3];

    for(int i = 0; i < 3; i++) {
        cout << "Enter student name: ";
        cin >> students[i].name;
        cout << "Enter student fee: ";
        cin >> students[i].fee;
    }

    cout << "\n--- Student Fees ---\n";
    for(int i = 0; i < 3; i++) {
        cout << students[i].name << " - $" << students[i].fee << endl;
    }

    return 0;
}
*/

/////////////////////////////////////////
// 6️⃣ Passing Struct to Function
/////////////////////////////////////////
/*
struct Student {
    string name;
    int roll;
    double marks;
};

// Function to display student info
void displayStudent(Student s) {
    cout << "Name: " << s.name << endl;
    cout << "Roll No: " << s.roll << endl;
    cout << "Marks: " << s.marks << endl;
}

int main() {
    Student s1 = {"Ayesha", 101, 95.5};
    displayStudent(s1);

    return 0;
}
*/

// #include <iostream>
// using namespace std;

// class Student {
// private:
//     string name;
//     int rollNumber;
//     double marks;

// public:
//     Student(string n, int r, double m) {
//         name = n;
//         rollNumber = r;
//         marks = m;
//     }
//     string getName() { return name; }
//     int getRollNumber() { return rollNumber; }
//     double getMarks() { return marks; }

// };

// int main() {
//     string name;
//     int roll;
//     double marks;

//     cout << "Enter name: ";
//     getline(cin, name);
//     cout << "Enter roll number: ";
//     cin >> roll;
//     cout << "Enter marks: ";
//     cin >> marks;

//     // Creating object and displaying details
//     Student s(name, roll, marks);
//     cout << "Name"<<s.getName()<<endl;
//     cout<<"rollnumb"<<s.getRollNumber()<<endl;
//     cout<<"marks"<<s.getMarks()<<endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Rectangle{
//     private:
//     int length;
//     int breadth;
//     public:
//     Rectangle(int l,int b){
//         length=l;
//         breadth=b;
//     }
//     int calculatArea(){
//         return length*breadth;
//     }

// };

// int main() {
//     int l,b;
//     cout<<"enter l and b";
//     cin>>l>>b;

//     Rectangle r(l,b);
//     cout<<"Area"<<r.calculatArea()<<endl;
// }

// #include <iostream>
// using namespace std;
// class Bank
// {
// public:
//     string ahn;
//     int aN;
//     int b;

//     void deposit(int amt)
//     {
//         b += amt;
//         cout << amt;
//     }
//     void withdraw(int amt)
//     {
//         if (amt > b)
//         {
//             b -= amt;
//             cout << amt;
//         }
//         else:
//             {
//                 cout << "balance insufficient";
//             }
//     }
//     void display()
// {
//     cout << "acoountholdername" << ahn;
//     cout << "accountnum" << aN;
//     cout << "balance" << b;
// };
// }
// int main()
// {
//     string name;
//     int accountnumb;
//     int balance;
//     int amt;
//     int d;
//     int w;

//     getline(cin, name);
//     cin >> accountnumb;
//     cin >> balance;

//     Bank a(name, accountnumb, balance)
//     {
//         a.display();
//         cin >> d;
//         a.deposit();
//         a.display();

//         cin >> w;
//         a.withdraw();
//         a.display();
//     }
// }

// #include <iostream>
// using namespace std;

// class Bank {
// private:
//     string accountName;
//     int accountNumb;
//     double balance;

// public:
//     Bank(string n, int num, double bal) {
//         accountName = n;
//         accountNumb = num;
//         balance = bal;
//     }

//     void deposit(double amount) {
//         balance += amount;
//         cout<< amount << endl;
//     }

//     void withdraw(double amount) {
//         if (amount > balance) {
//             cout << "Insufficient balance" << endl;
//         } else {
//             balance -= amount;
//             cout << amount << endl;
//         }
//     }

//     void display() {
//         cout << "Account Holder: " << accountName << endl;
//         cout << "Account Number: " << accountNumb << endl;
//         cout << "Balance: " << balance << endl;
//     }
// };

// int main() {
//     string name;
//     int accNum;
//     double Balance, deposit, withdraw;

//     // Getting user input
//     cout << "Enter Account Holder Name: ";
//     cin >> name;
//     cout << "Enter Account Number: ";
//     cin >> accNum;
//     cout << "Enter Initial Balance: ";
//     cin >> Balance;

//     Bank a(name, accNum, Balance);

//     a.display();

//     cout << "Enter amount to deposit: ";
//     cin >> deposit;
//     a.deposit(deposit);
//     a.display();

//     cout << "\nEnter amount to withdraw: ";
//     cin >> withdraw;
//     a.withdraw(withdraw);
//     a.display();

//     return 0;
// }
// #include <iostream>
// using namespace std;

// class Employee{
//     private:
//     string name;
//     int id;
//     int salary;
//     public:
//     Employee(string n,int Id,int s){
//         name=n;
//         id=Id;
//         salary=s;
//     }
//     void displayEmployeeDetails(){
//         cout<<name;
//         cout<<id;
//         cout<<salary;
//     }
// };
// int main(){

//         string name;
//         int id;
//         int salary;    
//         getline(cin,name);
//         cin>>id;
//         cin>>salary;


//         Employee e( name, id,salary);


//         e.displayEmployeeDetails();
//     }






















// #include <iostream>
// using namespace std;

// class Employee {
// private:
//     string name;
//     int id;
//     double salary;

// public:

//     Employee(string eN, int eI,double S) {
//         name = eN;
//         id = eI;
//         salary = S;
//     }

//     void displayEmployeeDetails() {
//         cout << "Employee Details:" << endl;
//         cout << "Name: " << name << endl;
//         cout << "ID: " << id << endl;
//         cout << "Salary: " << salary << endl;
//     }
// };

// int main() {
//     string name;
//     int id;
//     double salary;

//     cout << "Enter Employee Name: ";
//     cin >> name;
//     cout << "Enter Employee ID: ";
//     cin >> id;
//     cout << "Enter Salary: ";
//     cin >> salary;

//     Employee emp(name, id, salary);

//     emp.displayEmployeeDetails();

//     return 0;
// }
// #include <iostream>
// using namespace std;

// class Book{
//     private:
//     string title;
//     string author;
//     double price;
//     public:
//     Book(string t,string a,double p){
//         title=t;
//         author=a;
//         price=p;
//     }

//     void displaydetails(){
//         cout<<title;
//         cout<<author;
//         cout<<price;
//     }


// };
// int main(){
//     string name;
//     string an;
//     double p;

//     getline(cin,name);
//     getline(cin,an);
//     cin>>p;

//     Book b(name,an,p);
//     b.displaydetails();
// }


// #include <iostream>
// using namespace std;

// class Calculator {
// private:
//     double num1, num2;

// public:
//     Calculator(double n1, double n2) {
//         num1 = n1;
//         num2 = n2;
//     }

//     double add() {
//         return num1 + num2;
//     }

//     double subtract() {
//         return num1 - num2;
//     }

//     double multiply() {
//         return num1 * num2;
//     }

//     double divide() {

//             return num1 / num2;
//     }

// };

// int main() {
//     double n1, n2;
//     char o;

//     cout << "Enter f no ";
//     cin >> n1;
//     cout << "Enter s no";
//     cin >> n2;
//     cout << "Enter (+, -, *, /): ";
//     cin >> o;

//     Calculator c(n1, n2);

//     switch (o) {
//         case '+':
//             cout << "Result: " << c.add() << endl;
//             break;
//         case '-':
//             cout << "Result: " << c.subtract() << endl;
//             break;
//         case '*':
//             cout << "Result: " << c.multiply() << endl;
//             break;
//         case '/':
//             cout << "Result: " << c.divide() << endl;
//             break;

//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// class calculator{
//     public:
//     int n1;int n2;
//     calculator(int num1,int num2){
//         n1=num1;
//         n2=num2;
//     }
//     int add(){
//         return n1+n2;
//     }
//     int sub(){
//         return n1-n2;
//     }
//     int mul(){
//         return n1*n2;
//     }
//     int div(){
//         return n1/n2;
//     }
// };
// int main(){
//     int n1;int n2;
//     char o;
//     cin>>n1;
//     cin>>n2;
//     cin>>o;
//     calculator c(n1,n2);
//     switch (o){
//         case '+':
//         cout<<c.add();
//         break;
//         case '-':
//         cout<<c.sub();
//         break;
//         case '*':
//         cout<<c.mul();
//         break;
//         case '/':
//         cout<<c.div();
//         break;
//     }
// }

// class Book {

// public:
//     Book(string t, string a, int p, float pr) {
//         string title, author;
//         int pages;
//         float price;
//         title = t;
//         author = a;
//         pages = p;
//         price = pr;
//     }

//     void printDetails() {
//         cout << "Title: " << title << endl;
//         cout << "Author: " << author << endl;
//         cout << "Pages: " << pages << endl;
//         cout << "Price: $" << price << endl;
//         cout <<"          "<<endl;
//     }
// };

// int main() {
//     Book b1("physics", "Ira", 400, 599.99);
//     Book b2("The junglebook", "Rudyard kipling", 197, 299.50);
//     Book b3("Wings of Fire", "A.P.J Abdul Kalam", 180, 399.00);
//     Book b4("Its ends with us", "Colleen Hover", 218, 199.75);
//     Book b5("maths", "Goyal", 328, 349.99);

//     cout << "Book Details:\n";
//     b1.printDetails();
//     b2.printDetails();
//     b3.printDetails();
//     b4.printDetails();
//     b5.printDetails();

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Dis {
// private:
//     double meters;

// public:
//     Dis(double m) {
//         meters = m;
//     }

//     double toK() {
//         return meters / 1000;
//     }

//     double toC() {
//         return meters * 100;
//     }
// };

// int main() {
//     double meters;

//     cout << "Enter distance in meters: ";
//     cin >> meters;

//     Dis d(meters);

//     cout << "Distance in Kilometers: " << d.toK() << " km" << endl;
//     cout << "Distance in Centimeters: " << d.toC() << " cm" << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Circle {
// private:
//     double radius;

// public:
//     Circle(double r) {
//         radius = r;
//     }

//     double area() {
//         return 3.14 * radius * radius;
//     }

//     double circumference() {
//         return 2 * 3.14 * radius;
//     }

//     void display() {
//         cout << "Radius: " << radius << endl;
//         cout << "Area: " << area() << endl;
//         cout << "Circumference: " << circumference() << endl;
//     }
// };

// int main() {
//     double r;
//     cout << "Enter the radius of the circle: ";
//     cin >> r;

//     Circle c(r);

//     c.display();

//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// class Movie {
// private:
//     string title;
//     double duration;
//     double ticketPrice;

// public:
//     Movie(string t, double d, double price) {
//         title = t;
//         duration = d;
//         ticketPrice = price;
//     }

//     double calR(int tickets) {
//         return tickets * ticketPrice;
//     }

//     void display() {
//         cout << "Movie Title: " << title << endl;
//         cout << "Duration: " << duration << " hours" << endl;
//         cout << "Ticket Price: $" << ticketPrice << endl;
//     }
// };

// int main() {
//     string title;
//     double duration, price;
//     int tickets;

//     cout << "Enter movie title: ";
//     getline(cin, title);
//     cout << "Enter movie duration (in hours): ";
//     cin >> duration;
//     cout << "Enter ticket price: ";
//     cin >> price;

//     Movie m(title, duration, price);

//     m.display();

//     cout << "\nEnter number of tickets to book: ";
//     cin >> tickets;

//     // Calculate and display total revenue
//     cout << "Total Revenue: " << m.calR(tickets) << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
//  class Car{
//     private:
//     string carN;
//     int carNu;
//     double rentperDay;
//     public:
//     Car(string cN,int cNu,int r){
//         carN=cN;
//         carNu=cNu;
//         rentperDay=r;
//     }
//     double rent(int days){
//         return days*rentperDay;
//     }
//     void display() {
//         cout << "Car Name: " << carN << endl;
//         cout << "Car Number: " << carNu << endl;
//         cout << "Rent per Day: $" << rentperDay << endl;
//     }
//  };

// int main() {
//     string name, number;
//     double rent;
//     int days;

//     cout << "Enter Car Name: ";
//     getline(cin, name);
//     cout << "Enter Car Number: ";
//     cin >> number;
//     cout << "Enter Rent per Day: ";
//     cin >> rent;

//     Car c(name, number, rent);

//     c.display();

//     cout << "\nEnter number of days to rent: ";
//     cin >> days;

//     cout << "Total Rent:" << c.rent(days) << endl;
// }

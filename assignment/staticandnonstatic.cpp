// #include <iostream>
// using namespace std;

// class Counter {
// private:
//     static int count; 
//     int id;           

// public:
//     Counter() {
//         count++;
//         id = count;
//     }

//     void display() {
//         cout << "Object ID: " << id << ", Total Objects: " << count << endl;
//     }

//     static int getTotalObjects() {
//         return count;
//     }
// };


// int Counter::count = 0;

// int main() {
//     Counter obj1, obj2, obj3;
    
//     obj1.display();
//     obj2.display();
//     obj3.display();

//     return 0;
// }


// #include <iostream>
// using namespace std;
// class Bank{
//     public:
//     static int iR;
//     int balance;
//     Bank(double b){
//         balance=b;
//     }
//     void deposit(double a){
//         balance+=amount;
//     }
//     static void interestrate(double r){
//          iR=r;
//     }
//     void show(){
//         cout<<balance;
//         cout<<iR;
//     }
// };
// int main(){

// }





// #include <iostream>
// using namespace std;

// class Bank {
// private:
//     double balance;  
//     static double interestRate;  

// public:
//     Bank(double b) {
//         balance = b;
//     }

//     void deposit(double amount) {
//         balance += amount;
//     }

//     static void setInterestRate(double rate) {
//         interestRate = rate;
//     }

//     void showBalance() {
//         double interest = (balance * interestRate) / 100;
//         cout << "Balance: " << balance << ", Interest: " << interest << endl;
//     }
// };

// double Bank::interestRate = 0.0;

// int main() {
//     Bank a1(1000);  
//     Bank a2(2000);  

//     a1.deposit(500);  
//     a2.deposit(1000);

//     Bank::setInterestRate(5.0); 

//     a1.showBalance();  
//     a2.showBalance();  

//     return 0;
// }


// #include <iostream>
// using namespace std;

// class Student{
//     private:
//     int marks;
//     static int passingMarks;
//     public:
//     Student(int m){
//         marks=m;
//     }
//     static void passing(int p)
//     {
//         passingMarks=p;
//     }
//     void checkPass() {
//         if (marks >= passingMarks)
//             cout << "Pass";
//         else
//             cout << "Fail";
//     }
//     void showMarks(){
//         cout<<"Marks"<<marks;
//     }
// };
// int Student::passingMarks=0;
// int main(){
//     Student s1(85);
//     Student s2(40);
//     Student::passing(50);
//     s1.showMarks();
//     s2.showMarks();
//     s1.checkPass();
//     s2.checkPass();
// }






// #include <iostream>
// using namespace std;
// class Student{
//     public:
//     static int passingMarks;
//     int marks;
//     Student(int m){
//     marks=m;
//     }
//     static void setpassingMarks(int p){
//         passingMarks=p;
//     }
//     void checkPass(){

//         if (passingMarks>marks){
//             cout<<"pass";
//         }
//         else{
//             cout<<"fail";
//         }
//     }
//     void showmarks(){
//         cout<<marks;
//     }

// };
// int Student::passingMarks = 0;
// int main(){
// Student s1(85);
// Student s2(40);
// Student::setpassingMarks(50);
// s1.checkPass();
// s2.checkPass();
// }




// #include <iostream>
// using namespace std;
// class Student{
//     public:
//     string name;
//     int rollno;
//     static int totalStudents;
//     Student(string n,int r){
//         name=n;
//         rollno=r;
//         totalStudents++;
//     }
//     static int getTotalStudents(){
//         return totalStudents;
//     }
//     void display() const{
//         cout<<name;
//         cout<<rollno;
//     }
// };
// int Student::totalStudents=0;

// int main() {
//     Student s1("Alice", 101);
//     Student s2("Bob", 102);
//     Student s3("Charlie", 103);

//     s1.display();
//     s2.display();
//     s3.display();

//     cout << "Total Students: " << Student::getTotalStudents() << endl;
// }

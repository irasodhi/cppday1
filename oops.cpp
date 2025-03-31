//create a class book 
//datamember
//group title author name no of pages and price
//fumction members
//print detail
//note1 make sure to create at least 5  book 


// #include<iostream>
// #include<string>
// using namespace std;

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

// class A{
//     public:
//     //data member
//     static int value;
//     int age;

//     //function member
//     static int getValue(){
//        return value;
//     }
// };

// int main() {
    
    //to access non static member of class A, what will you do? - need to create the object of the class A

    //without creating object
    //cout << value << endl;

    // A a1; // created a1 object of class A
    // cout << a1.value << endl;
    // cout << a1.getValue() << endl;

    // A a2;
    // a2.value=45;
    // cout<<a2.value<<endl;
    // cout<<a2.getValue()<<endl;
    

//     cout<<A::value<<endl;
//     A a1,a2,a3,a4,a5;
//     cout<<a1.value<<"---------"<<a1.age<<endl;
//     cout<<a2.value<<"---------"<<a2.age<<endl;
//     cout<<a3.value<<"---------"<<a3.age<<endl;
//     cout<<a4.value<<"---------"<<a4.age<<endl;
//     cout<<a5.value<<"---------"<<a5.age<<endl;

// }


// #include <iostream>
// using namespace std;

// class Company {
// public:
//     static int employeeCount; 

//     Company() {
//         employeeCount++; 
//     }

//     static void showTotalEmployees() {
//         cout << "Total Employees: " << employeeCount << endl;
//     }
// };

// int Company::employeeCount = 0;

// int main() {
//     Company c1; 
//     Company c2; 
//     Company c3;

//     Company::showTotalEmployees(); 

// }

// #include <iostream>
// using namespace std;

// class Company {
// public:
//     static int interestRate; 

//     static void setInterestRate() {
//         cin >> interestRate;
//     }

//     static void getInterest(){
//         cout << interestRate;
//     }
// };

// int Company::interestRate = 0;
// int main() {


//     Company::setInterestRate(); 
//     Company::getInterest(); 

// }


// #include <iostream>
// using namespace std;

// class Student{
// public:
//     static int studentcount;
//     static int courseEnrolledCount;
//     string name;
//     int rollNo;
//     string city;
//     Student(string n,int r,string c){

//     name =n;
//     rollNo=r;
//     city=c;
//     }

//     string enrollIntoCourse(){
//         courseEnrolledCount++;
//         return "enrolled into course successfully";

//     }



// };
// int Student::studentcount;
// int Student::courseEnrolledCount;
// int main(){
//     Student s1=Student("Student1",45,"noida");
//     Student s2=Student("Student2",85,"delhi");
//     Student s3=Student("Student3",15,"mumbai");

//     cout<<Student::studentcount<<endl;
//     cout<<Student::courseEnrolledCount<<endl;

//     s1.enrollIntoCourse();
//     s2.enrollIntoCourse();
//     s3.enrollIntoCourse();
//     cout<<"registered enrolled in course"<<endl;

// }


// #include <iostream>
// using namespace std;
// //constant data member:
// class A{
//     public:
//     const int value=45;
//     string name;
//     A(int v,string n):value(v),name(n){

//     }
// };
// class B{
//     public:
//     int value:
//     int getValue(){}
// };
// int main() {
   
// }



// class Rectangle{
//     int length;
//     int width;
//     int area=length*width;

//     const int getArea(){
        
//     }
// }




//access modifier/specifier
//  #include <iostream>
//  using namespace std;
//  class A{
//     private:
//     string name ="Chaman";
//     string getName(){
//         return name;
//     }
//     protected:
//     int age=45;

//     public:
//     string city="Noida";
//     friend void show(A a);
//  };
 
//  void show(A a){
//     cout<<a.name<<endl;
//     cout<<a.age<<endl;
//     cout<<a.city<<endl;
//  }
//  int main() {
//     // A a;
//     // cout<<a.city<<endl;
//     // cout<<a.age<<endl;
//     A a;
//     show(a);


// }

//  #include <iostream>
//  using namespace std;
//  class A{
//     private:
//     string name ="Chaman";
//     string getName(){
//         return name;
//     }
//     protected:
//     int age=45;

//     public:
//     string city="Noida";

//     void Dost show(A a);

    
//  };
//  class Dost{
//     public:
//     void getdetails (A a);
//     cout<<a.name<<endl;
//     cout<<a.age<<endl;
//     cout<<a.city<<endl;

//  };
//  int main(){
//     A a;
//     Dost d;
//     d.getdetails;
//  }
// #include <iostream>
// using namespace std;
// class B;
// class A{
//     private:
//     string name="ira";

//     public:
//     friend void show(A a,B b);

// };
// class B{
//     private:
//     int age=45;
    
//     public:
//     friend void show(A a,B b);
// };
// void show(A a,B b){
//     cout<<a.name;
//     cout<<endl;
//     cout <<b.age;   
// }

// int main() {
//   A a;
//   B b;
//   show(a,b);
// }

// #include <iostream>
// using namespace std;

// class A{
//     private:
//     int age = 45;
//     public:
//     friend class Dost;
    
// };

// class B{
//     private:
//     string city = "Delhi";
//     public:
//     friend class Dost;
// };

// class Dost{
//     public:
//     void show(A a, B b){
//         cout << a.age << endl;
//         cout << b.city << endl;
//     }
// };

// int main() {
//     A a;
//     B b;
//     Dost d;

//     d.show(a,b);
// }


// #include <iostream>
// using namespace std;
//  class A{
//     public:
//     string name;
//     int age;
//     A(){

//     }
//     A(string name){
//         this->name=name;
//     }
//     A(int age){
//         this->age=age;
//     }
//     ~A(){
//         cout<<"inside destrustor";
//     }
//  };
// int main() {
//    A a1;
//    A a2(45);
//    A a3("Rakesh");


// }

// #include <iostream>
// using namespace std;
// class Student{
//     public:
//     int rollno;
//     string name;
//     int m;
//     int c;
//     int g;
    
//     void input() {
//         cout << "Enter Roll No: ";
//         cin >> rollno;
//         cin.ignore(); // To ignore newline left in the input buffer
        
//         cout << "Enter Name: ";
//         getline(cin, name);
        
//         cout << "Enter Marks in Math: ";
//         cin >> m;
//         cout << "Enter Marks in Chemistry: ";
//         cin >> c;
//         cout << "Enter Marks in Physics: ";
//         cin >> g;
//     };

//     int total(){

//     return m+c+g;
//     }
//     char grade(){
//         float average=total()/3;
//         if (average>60)
//         return 'A';
//        else if (average>=40&& average<60)
//         return 'B';
//         else
//         return 'C';

//     };
//     void display(){
//         cout<<rollno<<endl;
//         cout<<name<<endl;
//         cout<<total()<<endl;
//         cout<<grade()<<endl;
//     }

// };


// int main() {
//     Student s1;
//     s1.input();
//     s1.display();

//     Student s2;
//     s2.input();
//     s2.display();

   
// }
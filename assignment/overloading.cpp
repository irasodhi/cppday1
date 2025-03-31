// #include <iostream>
// using namespace std;

// class Geometry {
// public:
//     double calculateArea(int side) {
//         return side * side;
//     }

//     double calculateArea(int length, int breadth) {
//         return length * breadth;
//     }

//     double calculateArea(double radius) {
//         return 3.14 * radius * radius;
//     }
// };

// int main() {
//     Geometry o;
    
//     cout << " square: " << o.calculateArea(5) << endl;
//     cout << " rectangle: " << o.calculateArea(4, 6) << endl;
//     cout << " of circle: " << o.calculateArea(3.5) << endl;
    
//     return 0;
// }


// #include <iostream>
// using namespace std;

// class Volume{
//     public:
//     int c(int s){
//         return s*s*s;
//     }
//     int c(int l,int b,int h){
//         return l*b*h;
//     }
//     double c(double r,double h){
//         return 3.14*r*r*h;
//     }

// };

// int main() {
//    Volume o;
//    cout<<o.c(4);
//    cout<<o.c(5,6,7);
//    cout<<o.c(8,6,);
// }

//  


// #include <iostream>
// #include <string>
// using namespace std;

// class Bank {
// private:
//     int accN;
//     double b;
//     string aH;

// public:
//     Bank() {
//         accN = 0;
//         b = 0.0;
//         aH = "Unknown";
//     }

//     Bank(int a, string h) {
//         accN = a;
//         b = 0.0;
//         aH = h;
//     }

//     Bank(int a, string h, double bal) {
//         accN = a;
//         aH = h;
//         b = bal;
//     }

//     void display() {
//         cout << "Account Number: " << accN<< endl;
//         cout << "Account Holder: " << aH << endl;
//         cout << "Balance: " << b << endl;
//     }
// };

// int main() {
//     Bank acc1;
//     Bank acc2(12345, "ira");
//     Bank acc3(67890, "jiya", 5000.75);

//     acc1.display();
//     acc2.display();
//     acc3.display();

//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// class Student {
// private:
//     string name;
//     int rollNo;
//     char grade;

// public:
//     Student() {
//         name = "Unknown";
//         rollNo = 0;
//         grade = 'k';
//     }

//     Student(string n, int r) {
//         name = n;
//         rollNo = r;
//         grade = 'k';
//     }

//     Student(string n, int r, char g) {
//         name = n;
//         rollNo = r;
//         grade = g;
//     }

//     void display() {
//         cout << "Name: " << name << endl;
//         cout << "Roll Number: " << rollNo << endl;
//         cout << "Grade: " << grade << endl;
//     }
// };

// int main() {
//     Student s1;
//     Student s2("ira", 100);
//     Student s3("jiya", 102, 'A');

//     s1.display();
//     s2.display();
//     s3.display();

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Complex{
//     private:
//     int real , imag;

//     public:
//     Complex(){
//         real = 0;
//         imag = 0;
//     }

//     Complex(int r , int i){
//         real = r;
//         imag = i;
//     }
//     void print(){
//         cout << real << " + " << imag << " i " << endl;
//     }




//     Complex operator +(Complex &c){
//         Complex temp; 
//         temp.real = real + c.real; 
//         temp.imag = imag + c.imag;
//         return temp;

//     }
// };

// int main() {
//     Complex c1(4,5);
//     Complex c2(3,4);
//     Complex c3;
//     c3 = c1 + c2; 
//     c3.print(); 
// }


#include <iostream>
using namespace std;

class Counter{
    public:
    int count;

    Counter(int c){
        count = c;
    }

    // pre-increment
    Counter operator ++(){
        ++count;
        return *this;
    }

    //post increment
    Counter operator ++(int){
        Counter temp = *this; // 11
        count++;
        return temp;
    }

};

int main() {
    Counter c1(10);
    ++c1; // 11
    c1++;
    cout << c1.count << endl; //12
}
//                     Assignment 15 : 


#include <iostream>
using namespace std;

const int SIZE = 3;

class Matrix{
    private:
    int mat[SIZE][SIZE];

    public:
    
    // default constructor 
    Matrix(){
        for(int i=0;i<SIZE;i++){
            for(int j=0;j<SIZE;j++){
                mat[i][j]=0;
            }
        }
    }

    void inputMatrix(){
        for(int i=0;i<SIZE;i++){
            for(int j=0;j<SIZE;j++){
                cin >> mat[i][j];
            }
        }
    }

    Matrix operator +(const Matrix& m){
        Matrix result;
        for(int i=0;i<SIZE;i++){
            for(int j=0;j<SIZE;j++){
                result.mat[i][j] = this->mat[i][j] + m.mat[i][j];
            }
        }
        return result;
    }

    Matrix operator -(const Matrix& m){
        Matrix result;
        for(int i=0;i<SIZE;i++){
            for(int j=0;j<SIZE;j++){
                result.mat[i][j] = this->mat[i][j] - m.mat[i][j];
            }
        }
        return result;
    }

    void display() const {
        for(int i=0;i<SIZE;i++){
            for(int j=0;j<SIZE;j++){
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Matrix A, B, C;

    cout << "Matrix A:" << endl;
    A.inputMatrix();
    cout << "Matrix B:" << endl;
    B.inputMatrix();

    C = A + B;
    cout << "Matrix Addition (A+B) : " << endl;
    C.display();

    C=A-B;
    cout << "Matrix Subtaction (A-B) : " << endl;
    C.display();

    return 0;
}

// #include <iostream>
// using namespace std;

// class Complex{
//     int real;
//     int img;
//     public:
//     Complex(int r=0,int i=0){
//         real=r;
//         img=i;
//     }
//     Complex operator+(const Complex &obj ){
//         int r=real+obj.real;
//         int i=img+obj.img;
//         return Complex(r,i);
//     }
//     void display(){
//         cout<<real<<"+"<<img<<"i"<<endl;
//     }
// };

// int main() {
//     int r1;
//     int r2;
//     int i1;
//     int i2;
//     cin>>r1>>r2>>i1>>i2;
//     Complex c1(r1,i1);
//     Complex c2(r2,i2);
//     Complex c3=c1+c2;
//     c3.display();
// }

// #include <iostream>
// using namespace std;

// class Complex
// {
//     int real;
//     int img;

// public:
//     Complex(int r, int i)
//     {
//         real = r;
//         img = i;
//     }
//     bool operator==(const Complex &obj)
//     {
//         return (real == obj.real && img == obj.img);
//     }
//     void display()
//     {
//         cout << real << "+" << img << "i" << endl;
//     }
// };
// int main()
// {
//     int r1, r2, i1, i2, r3, i3;
//     cin >> r1 >> r2 >> r3 >> i1 >> i2 >> i3;

//     Complex c1(r1, i1);
//     Complex c2(r2, i2);
//     Complex c3(r3, i3);

//     if (c1 == c2)
//         cout << "c1 is equal to c2" << endl;
//     else
//         cout << "c1 is not equal to c2" << endl;

//     if (c1 == c3)
//         cout << "c1 is equal to c3" << endl;
//     else
//         cout << "c1 is not equal to c3" << endl;
// }

// #include <iostream>
// using namespace std;

// class Complex{
//     int real;
//     int img;
//     public:
//     Complex(int r,int i){
//         real=r;
//         img=i;
//     }
//     Complex& operator++(){
//         ++real;
//         ++img;
//         return *this;
//     }
//     void display() {
//         cout << real << "+" << img << "i" << endl;
//     }
// };
// int main() {
//    int r1;
//    int i1;
//    cin>>r1>>i1
//    Complex c1(r1,r1);
//    ++c1;
//    c1.display();
// }

// #include <iostream>
// using namespace std;

// int gcd(int a, int b) {
//     int smaller;
//     int gcd=1;

//    if(a>b){
//     smaller=b;
//    }
//    else{
//     smaller=a;
//    }
//    for(int i=1;i<smaller;i++){
//     if(a%i==0&&b%i==0){
//         gcd=i;
//     }
//    }
// }
// class fraction{
//     int num;
//     int den;
//     void simplify(){
//         int g=gcd(abs(num),abs(den));
//         num/=g;
//         den/=g;
//     }

//     public:
//     fraction(int n=0,int d=1){
//         num=n;
//         den=d;
//         simplify();
//     }
//     fraction operator+(const fraction &obj){
//         int n=num*obj.den+obj.num*den;
//         int d=den*obj.den;
//         return fraction(n,d);
//     }
// // }
// #include <iostream>
// #include <vector>
// using namespace std;

// class Matrix {
//     vector<vector<int>> mat;
//     int rows;
//     int cols;

// public:
//     Matrix(int r, int c) {
//         rows = r;
//         cols = c;
//         mat = vector<vector<int>>(rows, vector<int>(cols));
//     }

//     void input() {
//         for (int i = 0; i < rows; ++i)
//             for (int j = 0; j < cols; ++j)
//                 cin >> mat[i][j];
//     }

//     Matrix operator+(const Matrix &obj) {
//         Matrix result(rows, cols);
//         for (int i = 0; i < rows; i++)
//             for (int j = 0; j < cols; j++)
//                 result.mat[i][j] = mat[i][j] + obj.mat[i][j];
//         return result;
//     }

//     Matrix operator-(const Matrix &obj) {
//         Matrix result(rows, cols);
//         for (int i = 0; i < rows; i++)
//             for (int j = 0; j < cols; j++)
//                 result.mat[i][j] = mat[i][j] - obj.mat[i][j];
//         return result;
//     }

//     Matrix operator*(const Matrix &obj) {
//         Matrix result(rows, obj.cols);
//         for (int i = 0; i < rows; i++)
//             for (int j = 0; j < obj.cols; j++)
//                 for (int k = 0; k < cols; k++)
//                     result.mat[i][j] += mat[i][k] * obj.mat[k][j];
//         return result;
//     }

//     void display() {
//         for (int i = 0; i < mat.size(); ++i) {
//             for (int j = 0; j < mat[0].size(); ++j)
//                 cout << mat[i][j] << " ";
//             cout << endl;
//         }
//     }
// };

// int main() {
//     int r1, c1, r2, c2;

//     cout << "Enter rows and columns of first matrix: ";
//     cin >> r1 >> c1;
//     Matrix m1(r1, c1);
//     cout << "Enter elements of first matrix:\n";
//     m1.input();

//     cout << "Enter rows and columns of second matrix: ";
//     cin >> r2 >> c2;
//     Matrix m2(r2, c2);
//     cout << "Enter elements of second matrix:\n";
//     m2.input();

//     if (r1 == r2 && c1 == c2) {
//         cout << "\nSum of matrices:\n";
//         Matrix sum = m1 + m2;
//         sum.display();

//         cout << "\nDifference of matrices:\n";
//         Matrix diff = m1 - m2;
//         diff.display();
//     } else {
//         cout << "\nMatrices cannot be added or subtracted due to dimension mismatch.\n";
//     }

//     if (c1 == r2) {
//         cout << "\nProduct of matrices:\n";
//         Matrix product = m1 * m2;
//         product.display();
//     } else {
//         cout << "\nMatrices cannot be multiplied due to dimension mismatch.\n";
//     }

//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

class Matrix
{
    int rows;
    int cols;
    vector<vector<int>> mat;

public:
    Matrix(int r, int c)
    {
        rows = r;
        cols = c;
        mat = vector<vector<int>>(rows, vector<int>(cols));
    }
    Matrix operator+(const Matrix &obj)
    {
        Matrix result(rows, cols);
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                result.mat[i][j] = mat[i][j] + obj.mat[i][j];
            }
        }
        return result;
    }
    Matrix operator-(const Matrix &obj)
    {
        Matrix result(rows, cols);
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                result.mat[i][j] = mat[i][j] - obj.mat[i][j];
            }
        }
        return result;
    }
    Matrix operator*(const Matrix &obj)
    {
        Matrix result(rows, obj.cols);

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < obj.cols; j++)
            {
                for (int k = 0; k < cols; k++)
                {
                    result.mat[i][j] += mat[i][k] * obj.mat[k][j];
                }
            }
            
        }
        return result;
    }
        void input()
        {
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols; j++)
                {
                    cin >> mat[i][j]<<"\t";
                }
                cout<<endl;
            }
        }
        void display() const
        {
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols; j++)
                {
                    cout << mat[i][j] << " ";
                }
            }
        }
    
};
int main()
{
    int r1, c1;
    cin >> r1 >> c1;
    Matrix A(r1, c1);
    A.input();
    int r2;
    int c2;
    cin >> r2 >> c2;
    Matrix B(r2, c2);
    B.input();
    A.display();
    B.display();
    if (r1 ==  r2 &&c1==c2)
    {
        Matrix sum = A + B;
        sum.display();
        Matrix diff = A - B;
        diff.display();
    }
    else
    {
        cout << "not possible";
    }
    if (c1 == r2)
    {
        Matrix pro = A * B;
        pro.display();
    }
    else
    {
        cout << "not possible";
    }
}
#include <iostream>
#include <string>
using namespace std;

class Calculator {
    public:
        int add(int a , int b){
            return a+b;
        }
        double add(double a , double b){
            return a + b;
        }
        int add(int a,int b,int c){
            return a+b+c;
        }
        string add(string str1, string str2){
        return str1+str2;}
};

int main() {
    Calculator c;
    cout << c.add(5,3) << endl; 
    cout << c.add(5.5,3.3) << endl; 
    cout<<c.add(7,5,6)<<endl; 
    cout<<c.add("Hello, ", "World!");
}

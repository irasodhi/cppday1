// #include <iostream>
// using namespace std;
// int main(){
//     //ex1
//     // short num=45;
//     // int num1=num;

//     // cout <<typeid(num).name()<<endl;
//     // cout <<typeid(num1).name();
//     //ex2
//     // int personcount=45323;
//     // long personcountIncreased=personcount;
//     // cout<<typeid(personcount).name();

//     //ex3
//     // int num=45323;
//     // short num1=(short)num;
//     // cout <<num<<endl;
//     // cout <<num1;

//     //ex4
//     // char c='a';
//     // int charValue=(char)c;
//     // cout<<charValue;




// }

// #include <iostream>
// using namespace std;
// int main(){
//     float a=2.3;
//     int b=3;
//     cout<<a<<endl;
//     cout<<b<<endl;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int a=23;
//     int b=56;
//     float avg=(a+b)/2;
//     cout<<avg<<endl;

// }
// #include <iostream>
// using namespace std;
// int main(){int a=1.5;
// int b=0.75;
// int c=2;
// int app;
// cin>>app;
// int ban;
// cin>>ban;
// int ora;
// cin>>ora;
// int cost=(app*a+ban*b+c*ora);
// int tax=0.05*(app*a+ban*b+c*ora);
// float total=cost+tax;
// cout <<"total cost before tax"<<cost<<endl;
// cout<<"sales tax"<<tax<<endl;
// cout<<"final bill"<<total<<endl;

// }
// #include <iostream>
// using namespace std;
// int main(){
//     int age1=25;
//     int age2=30;
//     cout <<"true" << (age1>age2) <<endl;
//     cout <<"true" << (age1<age2)<<endl;
//     cout <<"true" << (age1==age2)<<endl;
//     cout<<"false"<<  (age1!=age2)<<endl;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int age=20;
//     int disqualified=false;
//     cout<<(age>18 && disqualified)<<endl;
//     cout<<(age<18 ||disqualified )<<endl;

// }
// #include <iostream>
// using namespace std;
// int main(){
//     int num=10;
//     cout<<num++<<endl;
//     cout<<++num<<endl;
//     cout<<num--<<endl;
//     cout<<--num<<endl;

// }
// #include <iostream>
// using namespace std;
// int main(){
//     int marks=92;
//     if(marks>90){
//         cout<<"grade A"<<endl;
//     }
//     if (marks>=75 && marks<90){
//         cout<<"grade B"<<endl;
//     }
//     if (marks>=50 && marks<75){
//         cout<<"grade C"<<endl;
//     }
//     if (marks<50){
//         cout<<"fail"<<endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int num=16;
//     if (num%2==0){
//         if (num%4==0){
//             cout<<"even and divisible by 4"<<endl;
//         }
//         else{cout<<"even but not divisible"<<endl;

//         }

//     }
//     else{
//             cout<<"odd num"<<endl;
//         }
    
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int year=12;
//     int salary=50000;
//     if(year>10){
//         cout<<0.02*salary<<endl;
//     }
//     else if(year>5){
//         cout<<0.01*salary<<endl;
//     }
//     else {
//         cout<<0.05*salary<<endl;
//     }

// }

// #include <iostream>
// using namespace std;
// int main(){
//     int marks=90;
//     int salary=150000;
//     if(marks>=85){
//         if (salary<200000){
//             cout<<"100 scholarship"<<endl;
//         }
//         else{
//             cout<<"50 scholarship"<<endl;
//         }

//     }
//     else{
//         cout<<"not eligible"<<endl;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int choice;
//     cin>>choice;
//     switch(choice){
//         case 1: cout<<"You selected Tea";
//              break;
//         case 2: cout<<"You selected Coffee";
//              break;
//         case 3: cout<<"You selected Juice";
//              break; 
//         default: cout<<"Exit";
                    
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cin>>a;
//     cin>>b;
//     cin>>c;
//     if (a==b && b==c){
//         cout<<"all are equal"<<endl;      
//     }
//     else if(a==b||b==c||a==c){
//         cout<<"two are equal"<<endl;
//     }
//     else{
//         int largest;
//         if(a>b&&a>c){
//             largest=a;
//         }
//         else if(b>c){
//             largest=b;
//         }
//         else{
//             largest=c;
//         }
//         cout<<"the largest numb is"<<largest<<endl;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cin>>a;
//     cin>>b;
//     cin>>c;
//     if(a==b && b==c) {
//         cout<<"equilateral triangle"<<endl;

//     }
//     else if (a==b||b==c||a==c){
//         cout<<"isosceles triangle"<<endl;
//     }
//     else{
//         cout<<"scalene"<<endl;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int bill ,disc1,disc2;
//     cin>>bill;
//     disc1=0.2*bill;
//     disc2=0.1*bill;

    
//     if(bill>5000){
//         cout<<"discount"<<disc1<<endl;
//         cout<<"final amount"<<bill-disc1<<endl;
//     }
//     else if (bill<5000&&bill>3000){
//         cout<<"discount"<<disc2<<endl;
//         cout<<"final amount"<<bill-disc2<<endl;

//     }
//     else{
//         cout<<"no discount"<<bill<<endl;
//     }

// }
// #include <iostream>

// using namespace std;

// int main() {
//     int num;

   
//     cout << "Enter a number: ";
//     cin >> num;

//     if (num > 0) {
//         cout << " positive" ;
//     } else if (num < 0) {
//         cout << " negative" ;
//     } else {
//         cout << "  zero" ;
//     }

//     if (num % 2 == 0) {
//         cout << " even" << endl;
//     } else {
//         cout << " odd" << endl;
//     }

//     if (num % 3 == 0 && num % 5 == 0) {
//         cout << " divisible by both 3 and 5" << endl;
//     } else if (num % 3 == 0) {
//         cout << " divisible by 3" << endl;
//     } else if (num % 5 == 0) {
//         cout << " divisible by 5" << endl;
//     } else {
//         cout << "The number is not divisible by 3 or 5" << endl;
//     }

//     return 0;
// }

// #include <iostream>

// using namespace std;

// int main() {
//     int a,b,c;
//     cin>>a;
//     cin>>b;
//     cin>>c;
//     int d=((b*b)-4*a*c);
//     if (d>0){
//         cout<<"real and distict roots"<<endl;
//     }
//     else{
//         cout<<"imaginary roots"<<endl;
//     }

// }
// #include <iostream>

// using namespace std;

// int main() {
//     int age,bmi;
//     cin>>age;
//     cin>>bmi;
//     if(age<18){
//         cout<<"teen plan"<<endl;
//     }
//     if (age>=18&&bmi<25){
//         cout<<"standard plan"<<endl;
//     }
//     if(bmi>=25){
//         cout<<"weight losss plan"<<endl;
//     }
// }

// #include <iostream>

// using namespace std;

// int main() {
//     int theory,practical;
//     cin>>theory;
//     cin>>practical;
//     if(theory>=40&&practical>=50){
//         cout<<"passed"<<endl;
//     }
//     else{
//         cout<<"failed"<<endl;
//     }
// }
// #include <iostream>
// using namespace std;

// int main() {
//     int units,bill;
//     int charge=250;
    

//     cout << "Enter the number of units consumed: ";
//     cin >> units;

//     if (units <= 100) {
//          cout<< (units * 5);
//     } else if (units >= 100 && units<=300) {
//         cout<< (units*8);
//     } else {
//         cout<< (units*10);
       
//     }



    
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int year;
//     cin>>year;
//     if (year%100==0){
//         cout<<"century year";
    
//     }
//     else{
//         cout<<"not century year";
//     }
//     if((year%4==0&year%100!=0)||(year%400==0))
//     {cout<<"leap year"<<endl;
//     }
//     else{
//         cout<<"not a leap year"<<endl;
//     }

// }

// #include <iostream>
// using namespace std;
// int main(){
//     char word;
//     cin>>word;
//     if (isdigit(word))
//     {
//         cout<<"digit"<<endl;
//     }
//     else if (isupper(word))
//     {
//        cout<<"upper character"<<endl;
//     }
//     else if (islower(word))
//     {
//         cout<<"lower character"<<endl;
//     }
//     else if (word="!"||"@"||"#"||"$"||"%"||"^"||"&"||"*")
//     {
//         cout<<"speacial character"<<endl;
//     }
//     else{
//         cout<<"nothing"<<endl;
//     }
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int year,salary;
//     cin>>salary;
//     cin>>year;
//     if (year>10 && salary>50000){
//         cout<<(salary+(0.05*salary));}
//     else if (year > 10) {
//         cout << (salary + 0.1 * salary) << endl;
//     }
//     else if (salary > 50000) {
//         cout << (salary - 0.05 * salary) << endl;
//     }
//     else {
//         cout << "no discount" << endl;
//     }
    
    
    
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int bmi,weight,height;
//     cin>>weight;
//     cin>>height;
//     bmi=weight/height*height;
//     if(bmi<18.5){
//         cout<<"underweight"<<endl;
//     }
//     else if(18.5<=bmi&&bmi<=24.9){
//         cout<<"normal weight"<<endl;
//     }
//     else if (25<=bmi<29.9){
//         cout<<"overweight"<<endl;
//     }
//     else{
//         cout<<"obese"<<endl;
//     }
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int distance;
//     cin>>distance;
//     if(distance<=10){
//         cout<<distance*8;
//     }
//     else if(distance>10 && distance<51){
//         cout<<distance*6;
    

//     }
//     else{
//         cout<<distance*5;
//     }
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int cash;
//     cin>>cash;
//     if (cash<500 && cash%100==0){
//         cout<<"deduct the amount";
//     }
//     else{
//         cout<<"error";
//     }
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int marks,attendance;
//     cin>>marks;
//     cin>>attendance;
//     if(marks>=90 && attendance>=75){
//         cout<<"A";

//     }
//     else if(marks>=75&& attendance>=60){
//         cout<<"b";
//     }
//     else if(marks>=50 && attendance>=50){
//         cout<<"c";
//     }
//     else{
//         cout<<"fail";
//     }
// }

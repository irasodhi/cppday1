// #include <iostream>
// using namespace std;

// class Device{
//     public:
//     virtual void turnOn()=0;
//     virtual void turnOff()=0;
// };

// class Light:public Device{
//     void turnOn() override{
//         cout<<"LIGHT IS NOW TURN ON"<<endl;
//     }
//     void turnOff() override{
//         cout<<"LIGHT IS NOW TURN OFF";
//     }
// };
// class Fan:public Device{
//     void turnOn() override{
//         cout<<"FAN IS NOW ROTATING "<<endl;

//     }
//     void turnOff() override{
//         cout<<"FAN IS NOW OFF";
//     }
// };
// class AC:public Device{
//     void turnOn() override{
//         cout<<"AC IS NOW COOLING"<<endl;
//     }
//     void turnOff()override{
//         cout<<"AC IS NOW OFF";
//     }
// };


// int main() {
// Device* d1=new Light();
// Device*d2=new Fan();
// Device *d3=new AC();

// d1->turnOn();
// d2->turnOn();
// d3->turnOn();
// }

// #include <iostream>
// using namespace std;

// class PaymentMethod{
//     public:
//     virtual void processPayment(double amount)=0; 
// };
// class Creditcard:public PaymentMethod{
//     void processPayment( double amount) override{
//         cout<<"processing credit card payment"<<amount;
//     }
// };
// class Paypal:public PaymentMethod{
//     void processPayment(double amount) override{
//         cout<<"processing paypal"<<amount;
//     }
// };
// class UPI:public PaymentMethod{
//     void processPayment(double amount) override{
//         cout<<"processing credit card payment"<<amount;
//     }
// };
// int main(){
//     PaymentMethod* p1=new Creditcard();
//     p1->processPayment(500);

// }


// #include <iostream>
// using namespace std;
// #include <iostream>
// using namespace std;

// class Employee {
// public:
//     virtual void pay() = 0;
//     virtual ~Employee() {}  
// };

// class FullTimeemployee : public Employee {
// private:
//     double salary;
// public:
//     FullTimeemployee(double a) : salary(a) {}

//     void pay() override {
//         cout << "Full-time employee salary: " << salary << endl;
//     }
// };

// class parttime : public Employee { 
// private:
//     double hoursWorked, hourlyRate;
// public:
//     parttime(double hours, double rate) : hoursWorked(hours), hourlyRate(rate) {}

//     void pay() override {
//         cout << "Part-time employee salary: " << (hoursWorked * hourlyRate) << endl;
//     }
// };

// class freelancer : public Employee { 
// private:
//     double projectsCompleted, payPerProject;
// public:
//     freelancer(double projects, double payPerProj) : projectsCompleted(projects), payPerProject(payPerProj) {}

//     void pay() override {
//         cout << "Freelancer salary: " << (projectsCompleted * payPerProject) << endl;
//     }
// };

// int main() {
//     Employee* e1 = new FullTimeemployee(5000);
//     Employee* e2 = new parttime(40, 20);
//     Employee* e3 = new freelancer(3, 2000);

//     e1->pay();
//     e2->pay();
//     e3->pay();

   

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Course {
// public:
//     virtual void showCourseDetails() = 0;
//     virtual ~Course() {}  
// };

// class VideoCourse : public Course {
// private:
//     string title;
//     int duration;
// public:
//     VideoCourse(string t, int d) : title(t), duration(d) {}

//     void showCourseDetails() override {
//         cout << "Video Course: " << title << ", Duration: " << duration << " hours" << endl;
//     }
// };

// class LiveClass : public Course {
// private:
//     string title;
//     string timing;
// public:
//     LiveClass(string t, string time) : title(t), timing(time) {}

//     void showCourseDetails() override {
//         cout << "Live Class: " << title << ", Timing: " << timing << endl;
//     }
// };

// class QuizCourse : public Course {
// private:
//     string title;
// public:
//     QuizCourse(string t) : title(t) {}

//     void showCourseDetails() override {
//         cout << "Quiz Course: " << title << ", Interactive Quiz Available" << endl;
//     }
// };

// int main() {
//     Course* c1 = new VideoCourse("C++ Basics", 3);
//     Course* c2 = new LiveClass("DSA", "10 AM - 12 PM");
//     Course* c3 = new QuizCourse("OOP Concepts");

//     c1->showCourseDetails();
//     c2->showCourseDetails();
//     c3->showCourseDetails();

   
//     return 0;
// }


// #include <iostream>
// using namespace std;

// class Vehicle{
//     public:
//     virtual void rentVehicle(int rent)=0;
// };
// class Car:public Vehicle{
//     public:
//     void rentVehicle(int rent)override{
//         cout<<rent*50<<endl;
//     }
// };
// class Bike:public Vehicle{
//     public:
//     void rentVehicle(int rent)override{
//         cout<<rent*30;
//     }
// };
// int main(){
//     Vehicle* v1=new Car();
//     Vehicle* v2=new Bike();
//     v1->rentVehicle(5);
//     v2->rentVehicle(3);
// }

// #include <iostream>
// using namespace std;

// class Seat {
// public:
//     virtual void calculateFare(double baseFare) = 0; 
// };

// class EconomyClass : public Seat {
// public:
//     void calculateFare(double baseFare) override {
//         cout << "Economy Class Fare: $" << baseFare << endl;
//     }
// };

// class BusinessClass : public Seat {
// public:
//     void calculateFare(double baseFare) override {
//         cout << "Business Class Fare: $" << baseFare * 1.5 << endl;
//     }
// };

// class FirstClass : public Seat {
// public:
//     void calculateFare(double baseFare) override {
//         cout << "First Class Fare: $" << baseFare * 2 << endl;
//     }
// };

// int main() {
//     Seat* s1 = new EconomyClass();
//     Seat* s2 = new BusinessClass();
//     Seat* s3 = new FirstClass();

//     s1->calculateFare(500);
//     s2->calculateFare(500);
//     s3->calculateFare(500);


//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Parkingspot{
//     public:
//     virtual void calculateFee(int cost)=0;
// };
// class Car:public Parkingspot{
//     void calculateFee(int cost)override{
//         cout<<cost*10;
//     }
// };
// class Bike:public Parkingspot{
//     void calculateFee(int cost)override{
//         cout<<cost*5;
//     }
// };

// class Truck:public Parkingspot{
//     void calculateFee(int cost)override{
//         cout<<cost*2;
//     }
// };

// int main(){
//     Parkingspot* p1=new Car();
//     p1->calculateFee(3);
// }

// #include <iostream>
// using namespace std;

// class Loan {
// public:
//     virtual void calculateRepayment(double principal, int tenure) = 0; // Pure virtual function
// };

// // Derived class for Home Loan
// class HomeLoan : public Loan {
// public:
//     void calculateRepayment(double principal, int tenure) override {
//         double interestRate = 0.04; 
//         double totalRepayment = principal + (principal * interestRate * tenure);
//         cout << "Home Loan Repayment: $" << totalRepayment << endl;
//     }
// };

// class CarLoan : public Loan {
// public:
//     void calculateRepayment(double principal, int tenure) override {
//         double interestRate = 0.06; 
//         double totalRepayment = principal + (principal * interestRate * tenure);
//         cout << "Car Loan Repayment: $" << totalRepayment << endl;
//     }
// };

// class PersonalLoan : public Loan {
// public:
//     void calculateRepayment(double principal, int tenure) override {
//         double interestRate = 0.08;
//         double totalRepayment = principal + (principal * interestRate * tenure);
//         cout << "Personal Loan Repayment: $" << totalRepayment << endl;
//     }
// };

// int main() {
//     Loan* l1 = new HomeLoan();
//     l1->calculateRepayment(100000, 5);

//     Loan* l2 = new CarLoan();
//     l2->calculateRepayment(50000, 3);

//     Loan* l3 = new PersonalLoan();
//     l3->calculateRepayment(30000, 2);


//     return 0;
// }


// #include <iostream>
// using namespace std;

// class Evaluation {
// public:
//     virtual void calculateGrade(int score) = 0; // Pure virtual function
// };

// class TheoryExam : public Evaluation {
// public:
    
//         void calculateGrade(int score) override {
//             char grade;
            
//             if (score >= 90) {
//                 grade = 'A';
//             } else if (score >= 75) {
//                 grade = 'B';
//             } else if (score >= 60) {
//                 grade = 'C';
//             } else if (score >= 40) {
//                 grade = 'D';
//             } else {
//                 grade = 'F';
//             }
        
//             cout << "Theory Exam Grade: " << grade << endl;
//         }
        
// };

// // Derived class for Practical Exams
// class PracticalExam : public Evaluation {
// public:
// void calculateGrade(int score) override {
//     char grade;

//     if (score >= 85) {
//         grade = 'A';
//     } else if (score >= 70) {
//         grade = 'B';
//     } else if (score >= 55) {
//         grade = 'C';
//     } else if (score >= 35) {
//         grade = 'D';
//     } else {
//         grade = 'F';
//     }

//     cout << "Practical Exam Grade: " << grade << endl;
// }

// };

// class ProjectWork : public Evaluation {
// public:
// void calculateGrade(int score) override {
//     char grade;

//     if (score >= 80) {
//         grade = 'A';
//     } else if (score >= 65) {
//         grade = 'B';
//     } else if (score >= 50) {
//         grade = 'C';
//     } else if (score >= 30) {
//         grade = 'D';
//     } else {
//         grade = 'F';
//     }

//     cout << "Project Work Grade: " << grade << endl;
// }

// };

// int main() {
//     Evaluation* e1 = new TheoryExam();
//     e1->calculateGrade(85); 

//     Evaluation* e2 = new PracticalExam();
//     e2->calculateGrade(70);

//     Evaluation* e3 = new ProjectWork();
//     e3->calculateGrade(50);

  
//     return 0;
// }


// #include <iostream>
// using namespace std;

// class Discount {
// public:
//     virtual void applyDiscount(double price) = 0; 
// };

// class FestiveDiscount : public Discount {
// public:
//     void applyDiscount(double price) override {
//         double discountedPrice = price - (price * 0.20);
//         cout << "Final Price after Festive Discount: $" << discountedPrice << endl;
//     }
// };

// class LoyaltyDiscount : public Discount {
// public:
//     void applyDiscount(double price) override {
//         double discountedPrice = price - (price * 0.15); 
//         cout << "Final Price after Loyalty Discount: $" << discountedPrice << endl;
//     }
// };

// class BulkPurchaseDiscount : public Discount {
// public:
//     void applyDiscount(double price) override {
//         double discountedPrice = price - (price * 0.10); 
//         cout << "Final Price after Bulk Purchase Discount: $" << discountedPrice << endl;
//     }
// };

// int main() {
//     Discount* d1 = new FestiveDiscount();
//     d1->applyDiscount(1000);

//     Discount* d2 = new LoyaltyDiscount();
//     d2->applyDiscount(1000);

//     Discount* d3 = new BulkPurchaseDiscount();
//     d3->applyDiscount(1000);

//     delete d1;
//     delete d2;
//     delete d3;

//     return 0;
// }



// #include <iostream>
// using namespace std;

// int findhighest(int arr[],int n){
   
//     int max=arr[0];

//     for(int i=0;i<n;i++){
//         if(max<arr[i]){
//             max=arr[i];
//         }
//     }
//     return max;
// };
// int calculateaveg(int arr[],int n){
//     int sum=0;
    
//     for(int i=0;i<n;i++){
//       sum+=arr[i];
//     }
//     int tot=sum/n;
//     return tot;

// };


// int main() {
//    int N;
//    cin>>N;
//    for(int i=0;i<N;i++){
//     int n1;
//     cin>>n1;
//     int arr1[n1];
      
//     int n2;
//      cin>>n2;
//     int arr2[n2];
     
//     int n3;
//     cin>>n3;
//     int arr3[n3];
    
//     for(int j=0;j<n1;j++){
//         cin>>arr1[j];
//     }
 
//     for(int j=0;j<n2;j++){
//         cin>>arr2[j];

//     }
   
//     for(int j=0;j<n3;j++){
//         cin>>arr3[j];
//     }
//     cout<<"Highest Score"<<findhighest(arr1,n1)<<","<<"Average Score"<<calculateaveg(arr1,n1);
//     cout<<"Highest Score"<<findhighest(arr2,n2)<<","<<"Average Score"<<calculateaveg(arr2,n2);
//     cout<<"Highest Score"<<findhighest(arr3,n3)<<","<<"Average Score"<<calculateaveg(arr3,n3);

//    }

// }


#include <iostream>
using namespace std;

class SmartD{
    protected:
    int deviceid;
    public:
    SmartD(int d){
        deviceid=d;
    }
    virtual void display()=0;
    virtual ~SmartD(){}

};
class Smartb:public SmartD{
    private:
    int brightness;
    public:
    Smartb(int d,int b):SmartD(d),brightness(b){}
    void display() override{
        cout<<deviceid;
        cout<<brightness;
    }
};
class Smartl:public SmartD{
    private:
    int status;
    public:
    Smartl(int d,int s):SmartD(d),status(s){}
    void display() override{
        cout<<deviceid;
        cout<<status;
    }
};
class Smartt:public SmartD{
    private:
    int temp;
    public:
    Smartt(int d,int t):SmartD(d),temp(t){}
    void display() override{
        cout<<deviceid;
        cout<<temp;
    }
};

int main() {
    int N;
    cin>>N;
    SmartD** dev=new SmartD*[N];
   
        for (int i = 0; i < N; i++) {
        string type, id;
        cin >> type >> id;

        if (type == "Light") {
            int brightness;
            cin >> brightness;
            dev[i] = new Smartb(d, b);
        } else if (type == "Lock") {
            string status;
            cin >> status;
            dev[i] = new Smartl(d, s);
        } else if (type == "Thermostat") {
            int temp;
            cin >> temp;
            dev[i] = new Smartt(d, t);
        }
    }
    }



}

// #include <iostream>
// #include <string>
// using namespace std;

// class Calculator {
//     public:
//         int add(int a , int b){
//             return a+b;
//         }
//         double add(double a , double b){
//             return a + b;
//         }
//         int add(int a,int b,int c){
//             return a+b+c;
//         }
//         string add(string str1, string str2){
//         return str1+str2;}
// };

// int main() {
//     Calculator c;
//     cout << c.add(5,3) << endl; 
//     cout << c.add(5.5,3.3) << endl; 
//     cout<<c.add(7,5,6)<<endl; 
//     cout<<c.add("Hello, ", "World!");
// }


// #include <iostream>
// using namespace std;

// class Employee{
//   private:
//   string name;
//   int salary;
//   public:
//   Employee(){
//     cout<<"default"<<endl;
//   }
//   Employee(string name,int salary){
//     cout<<name<<salary<<endl;
//     this-> name=name;
//     this-> salary=salary;

//   }  
//   Employee(const Employee &e){
//     cout<<"copy constructor";
//     this->name=e.name;
//     this->salary=e.salary;
//   }
//   void details() {
//     cout << "Name: " << name << ", Salary: " << salary << endl;
// }
// };

// int main() {
//    Employee e1;
//    Employee e2("john",5000);
//    Employee e3 = e2;              

//    e3.details(); 

// }

// #include <iostream>
// using namespace std;

// class Complex {
//     public:
//     int real , imag;
//     Complex(int r,int i){
//          real=r;
//          imag=i;
//}

//     Complex operator + (Complex const &obj){
//         return Complex(real + obj.real, imag + obj.imag);
//     }


//     void display(){
//         cout << real << "+" << imag << "i" << endl;
//     }

// };

// int main() {
//     Complex c1(3,4) , c2(1,2);
//     Complex c3 = c1 + c2;
//     c3.display();
// }



// #include <iostream>
// using namespace std;
// class Complex{
//     public:
//     int real;
//     int img;
//     Complex(int r=0,int i=0){
//         real=r;
//         img=i;
//     }
//     Complex operator +( const Complex  &obj){
//         return (real+obj.real,img+obj.img);
//     }
//     void display(){
//         cout<<real<<"+"<<img<<"i";
//     }
// };
// int main(){
//     Complex c1(9,8),c2(8,7);
//     Complex c3=c1+c2;
//     c3.display();
// }


// #include <iostream>
// using namespace std;
// class Complex{
//     public:
//     int real;
//     int img;
//     Complex(int r=0;int i=0){
//         real=r;
//         img=i;
//     }
//     Complex operator *(const Complex &obj){
//         int r=(real*obj.real)-(img*obj.img);
//         int i=(real*obj.img)+(img*obj.real);
//     }
//     void display(){
//         cout<<real;
//         if(img=>0) cout<<"+"<<img<"i"<<endl;
//     }
// };
// int main(){
//     int t;
//     cout<<"enter num of test cases";
//     cin>>t;
//     while(t--){
//         int r1,i1,r2,i2;
//         cin>>r1>>i1;
//         cin>>r2>>i2;
//         Complex c1(r1,i1),c2(r2,i2);
//             Complex result=c1*c2;
//             cout<<result.display();
        
    
// }
// }
// #include <iostream>
// using namespace std;

// class Complex{
//     public:
//     int real;
//     int imag;

//     Complex(int r,int i){
//         real=r;
//         imag=i;
//     }

//     Complex operator +(Complex const &obj){
//         return(real+obj.real,imag+obj.imag);
//     }
//     Complex operator *(Complex const &obj){
//         int r=real*real.obj-imag*imag.obj;
//         int i=real*imag.obj+imag*real.obj;
//         return Complex(r,i);
//     }
//     void display(){
//         cout<<real<<"+"<<imag<<"i";
//     }

// };

// int main() {
//     Complex c1(3, 4), c2(1, 2);
//     Complex c3 = c1 + c2;
//     cout << "Addition: ";
//     c3.display();

//     Complex c4 = c1 * c2;
//     cout << "Multiplication: ";
//     c4.display();

// }


// #include <iostream>
// using namespace std;

// class Product {
// protected:
//     double price;
// public:
//     Product(double price) {
//         this->price = price;
//     }

//     virtual double getDiscount() = 0;

//     void showFinalPrice() {
//         double discount = getDiscount();
//         double finalPrice = price - discount;
//         cout << "Original Price: $" << price << endl;
//         cout << "Discount Applied: $" << discount << endl;
//         cout << "Final Price: $" << finalPrice << endl;
//     }

//     virtual ~Product() {} // Virtual destructor
// };

// class Electronics : public Product {
// public:
//     Electronics(double price) : Product(price) {}

//     double getDiscount() override {
//         return price * 0.10; // 10% discount
//     }
// };


// class Clothing : public Product {
// public:
//     Clothing(double price) : Product(price) {}

//     double getDiscount() override {
//         return price * 0.20; // 20% discount
//     }
// };


// class Grocery : public Product {
// public:
//     Grocery(double price) : Product(price) {}

//     double getDiscount() override {
//         return price * 0.05; // 5% discount
//     }
// };

// int main() {
//     double price;
//     int choice;

//     cout << "Enter the price of the product: ";
//     cin >> price;

//     cout << "Select Product Category:\n";
//     cout << "1. Electronics\n2. Clothing\n3. Grocery\n";
//     cout << "Enter your choice: ";
//     cin >> choice;

//     Product* product = nullptr;

//     switch (choice) {
//         case 1:
//             product = new Electronics(price);
//             break;
//         case 2:
//             product = new Clothing(price);
//             break;
//         case 3:
//             product = new Grocery(price);
//             break;
//         default:
//             cout << "Invalid choice!" << endl;
//             return 0;
//     }

//     product->showFinalPrice();

//     return 0;
// }


// #include <iostream>
// using namespace std;

// class Appliance {
// public:
//     virtual void turnOn(int level) {
//         cout << "Appliance is turning on with level " << level << endl;
//     }

//     virtual ~Appliance() {}
// };

// class Fan : public Appliance {
// public:
//     void turnOn(int speed) override {
//         cout << "Fan is running at speed " << speed << endl;
//     }
// };

// class Light : public Appliance {
// public:
//     void turnOn(int brightness) override {
//         cout << "Light is glowing at brightness level " << brightness << endl;
//     }
// };

// class TV : public Appliance {
// public:
//     void turnOn(int volume) override {
//         cout << "TV is playing at volume " << volume << endl;
//     }
// };


// int main() {
//     int choice, level;
//     Appliance* appliance = nullptr;

//     cout << "Choose an appliance to turn on:\n1. Fan\n2. Light\n3. TV\nEnter choice: ";
//     cin >> choice;
    
//     cout << "Enter level (Speed/Brightness/Volume): ";
//     cin >> level;

//     switch (choice) {
//         case 1:
//             appliance = new Fan();
//             break;
//         case 2:
//             appliance = new Light();
//             break;
//         case 3:
//             appliance = new TV();
//             break;
//         default:
//             cout << "Invalid choice!" << endl;
//             return 0;
//     }

//     appliance->turnOn(level); 
    
//     return 0;
// }



// #include <iostream>
// using namespace std;

// class SmartDevice{
//     private:
//     int deviceid;
//     public:
//     SmartDevice(string d){
//         deviceid=d;
//     }
//     virtual void displayinfo() const=0
// };
// class SmartLight:public SmartDevice{
//     public:
//     int br;
//     SmartLight(string deviceid;int b):SmartDevice(deviceid),br(b){};
    
//     void displayinfo() override{
//         cout<<"device details"<<endl;
//         cout<<"brightness level"<<b<<endl;
//         cout<<"device id"<<deviceid;
//     }
// };
// class SmartLock:public Smartdevice{
//     public:
    
//     SmartLock(string deviceid;string status):SmartDevice(deviceid){
//         if (status==)
//     }
// };
// class SmartThermostat:public SmartDevice{
//     public:
//     int temp;
//     SmartThermostat(string deviceid,int t):SmartDevice(deviceid),temp(t)
//     void displayinfo() override{
//         cout<<"current temp"<<endl;
//     }
// };


// int main() {
//    int n;
//    cin>>n;
//    SmartDevice *devices[n];
//    for(int i=1;i<=n;i++){
//     string devicet,deviceid;
//     if(devicet=="Light"){
//         int bri;
//         cin>>bri;
//         devices[i]=new SmartLight(deviceid,bri);

//     }
//    }
// }

// #include <iostream>
// using namespace std;
// class Robot{
//     public:
//     string model;
//     int weight;
//     Robot(string m,int w){
//         model=m;
//         weight=w;
//     }
//     virtual void robotinfo() const{
//         cout<<model;
//         cout<<weight;
//     }
// };
// class Functionality:virtual public Robot{
//     public:
//     string tasktype;
//     Functionality(string m,int w,string t):Robot(m,w),tasktype(t){}
//         void robotinfo() const override{
//         Robot::robotinfo();
//         cout<<tasktype;
//     }
// };
// class Energysource:virtual public Robot{
//     public:
//     string energytype;
//     energytype(string m,int w,string e):Robot(m,w),energytype(e){}
//     void robotinfo() const override{
//         Robot::robotinfo();
//         cout<<energytype;
//     }
// };
// class Smartrobot:virtual public Robot{
//     public:
    



// }



























// #include <iostream>
// using namespace std;

// // Abstract base class
// class SmartDevice {
// protected:
//     string deviceid;

// public:
//     SmartDevice(string id) : deviceid(id) {}

//     virtual void displayinfo() const = 0;

//     virtual ~SmartDevice() {}  // Virtual destructor
// };

// // Derived class: SmartLight
// class SmartLight : public SmartDevice {
// private:
//     int brightness;

// public:
//     SmartLight(string id, int b) : SmartDevice(id), brightness(b) {}

//     void displayinfo() const override {
//         cout << "Device Type: SmartLight\n";
//         cout << "Device ID: " << deviceid << "\n";
//         cout << "Brightness Level: " << brightness << "%" << "\n\n";
//     }
// };

// // Derived class: SmartLock
// class SmartLock : public SmartDevice {
// private:
//     string lockStatus;  // "locked" or "unlocked"

// public:
//     SmartLock(string id, string status) : SmartDevice(id) {
//         if (status == "locked" || status == "unlocked") {
//             lockStatus = status;
//         } else {
//             cerr << "Invalid lock status. Defaulting to 'locked'.\n";
//             lockStatus = "locked";
//         }
//     }

//     void displayinfo() const override {
//         cout << "Device Type: SmartLock\n";
//         cout << "Device ID: " << deviceid << "\n";
//         cout << "Status: " << lockStatus << "\n\n";
//     }
// };

// // Derived class: SmartThermostat
// class SmartThermostat : public SmartDevice {
// private:
//     int temperature;

// public:
//     SmartThermostat(string id, int t) : SmartDevice(id), temperature(t) {}

//     void displayinfo() const override {
//         cout << "Device Type: SmartThermostat\n";
//         cout << "Device ID: " << deviceid << "\n";
//         cout << "Current Temperature: " << temperature << "°C\n\n";
//     }
// };

// // Main program
// int main() {
//     int n;
//     cin >> n;

//     SmartDevice* devices[n];

//     for (int i = 0; i < n; ++i) {
//         string devicetype, deviceid;
//         cin >> devicetype >> deviceid;

//         if (devicetype == "Light") {
//             int brightness;
//             cin >> brightness;
//             devices[i] = new SmartLight(deviceid, brightness);
//         } else if (devicetype == "Lock") {
//             string status;
//             cin >> status;  
//             devices[i] = new SmartLock(deviceid, status);
//         } else if (devicetype == "Thermostat") {
//             int temp;
//             cin >> temp;
//             devices[i] = new SmartThermostat(deviceid, temp);
//         } else {
//             cout << "Unknown device type: " << devicetype << "\n";
//             devices[i] = nullptr;
//         }
//     }

//     cout << "\n--- Device Info ---\n";
//     for (int i = 0; i < n; ++i) {
//         if (devices[i])
//             devices[i]->display

// #include <iostream>
// using namespace std;
// class Teacher{
//     public:
//     void show(){
//         cout<<"showing data from teacher class method"<<endl;
//     }
// };
// class A:virtual public Teacher{};
// class B:virtual public 



// int main() {
//     cout << "Hello, World!" << endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;
// class Complex{
//     private:
//     int real;
//     int img;
//     public:
//     Complex(){
//         real=0;
//         img=0;
//     }
//     Complex(int r,int i){
//         real=r;
//         img=i;
//     }
//     friend Complex operator +(Complex &c1,Complex &c2);

//     void print(){
//         cout<<real<<"+"<<img<<"i";
//     }
// };
// Complex operator +(Complex &c1,Complex &c2){
//     Complex temp;
//     temp.real=c1.real+c2.real;
//     temp.img=c1.img+c2.img;
//     return temp;
// }
// int main(){
//     Complex c1(4, 5);
//     Complex c2(4, 7);
//     Complex c3;
//     c3 = c1 + c2;
//     c3.print();
//     return 0;
// }










// #include <iostream>

// using namespace std;

// class Food {

// public:
   

//     virtual int Bill(int quantity) {
//         return 0;
//     }
//     virtual ~Food(){}
// };
// class Pizza:public Food{
//     public:
//     int Bill(int quantity)override{
//         return 250*quantity;
//     }
// };
// class Burger:public Food{
//     public:
//     int Bill(int quantity)override{
//         return 150*quantity;
//     }
// };
// class Pasta:public Food{
//     public:
//     int Bill(int quantity) override{
//         return 200*quantity;
//     }
// };
// Food* createFooditem(const string& fc){
// if(fc=="pizza") return new Pizza();
// if(fc=="burger") return new Burger();
// if(fc=="pasta")return new Pasta();
// return nullptr;
// }

// int main(){
//     string fc;
//     int quantity;
//     cin>>fc;
//     cin>>quantity;
//     for(char &c:fc){
//         c=tolower(c);
       
//     }
//     Food* food=createFooditem(fc); 
//     int totalBill = food->Bill(quantity);
//     cout<<"Total bill"<<totalBill;
// }


// #include <iostream>
// using namespace std;

// class Vehicle{
//     public:
//     virtual int ride(int cost){
//         return 0;
//     }
//     virtual ~Vehicle(){};
// };
// class Bike:public Vehicle{
    
//     int ride(int cost) override{
//         return 5*cost;
//     }
// };
// class Car:public Vehicle{
    
//     int ride(int cost) override{
//         return 10*cost;
//     }
// };
// class Auto: public Vehicle{
//     public:
//     int ride(int cost) override{
//         return 7*cost;
//     }
// };
// Vehicle* createRide(const string& V){
//     if (V=="car")return new Car();
//     if(V=="bike") return new Bike();
//     if(V=="auto") return new Auto();
//     return nullptr;

// } 
// int main(){
//     string V;
//     int cost;
//     cin>>V;
//     cin>>cost;
    
//     Vehicle* ve=createRide(V);
//     int totalcost=ve->ride(cost);
//     cout<<totalcost;
// }

// #include <iostream>
// using namespace std;
// class Vehicle{
//     public:
//     virtual int ride(int cost){
//         return 0;
//     }
//     virtual ~Vehicle(){}
// };
// class Bike:public Vehicle{
//     int ride(int cost) override{
//         return 5*cost;
//     }


// };
// class Car:public Vehicle{
//     int ride(int cost) override{
//         return 10*cost;
//     }
// };
// class Auto:public Vehicle{
//     int ride (int cost) override{
//         return 7*cost;
//     }
// };
// Vehicle* createride(const string& V){
//     if (V=="car") return new Car();
//     if(V=="bike") return new Bike();
//     if(V=="auto") return new Auto();

// }
// int main(){
//     string V;
//     cin>>V;
//     int cost;
//     cin>>cost;
//     Vehicle *ve=createride(V);
//     if (ve){
//     int totalcost=ve->ride(cost);
//     cout<<totalcost;
//     }else{
//         cout<<"inavalid data type";
//     }
//     delete ve;
// }

// #include <iostream>
// using namespace std;
// class bank{
//     public:
//     int cost;
//     virtual int saving(int cost){
//         return 0;
//     }
//     virtual ~bank(){};
// };
// class SA:public bank{
//     public:
//     int saving(int cost) override{
//         return 0.4*cost;
//     }

// };
// class FDA:public bank{
//     public:
//     int saving(int cost) override{
//        return 0.6*cost;
//     }
// };
// class recurring:public bank{
//     public:
//     int saving(int cost)override{
//         return 0.5*cost;
//     }
// };

// bank* interest( const string& i){
//     if(i=="SA") return new SA();
//     if(i=="FDA") return new FDA();
//     if(i=="rda") return new recurring();
// }
// int main(){
//     bank i;
//     cin>>i;
//     int cost;
//     cin>>cost;
//     bank *ba=interest(i);
//     totalinterest=ba->saving(int cost);
//     cout<<totalinterest;

// }






























// #include <iostream>
// using namespace std;

// class Bank{
//     public:
//     virtual int Acc(int cost,int time)=0;

//     virtual ~Bank(){};

// };
// class SA:public Bank{
//     int Acc(int cost,int time) override{
//         return cost*time*0.4;
//     }
// };
// class FDA:public Bank{
//     int Acc(int cost,int time) override{
//         return cost*time*0.6;
//     }
// };
// class RDA:public Bank{
//     int Acc(int cost,int time)override{
//         return cost*time*0.5;
//     }
// };

// Bank* createAcc( const string& B){
//     if (B=="savingacoount") return new SA();
//     if(B=="fixedddepositaccount") return new FDA();
//     if (B=="recurring deposit account") return new RDA();
//     return nullptr;
// }
// int main(){
//     string B;
//     int cost;
//     int time;

//     cin>>B;
//     cin>>cost;
//     cin>>time;

//     Bank* ba=createAcc(B);
//     int interest=ba->Acc(cost,time);
//     cout<<interest;
// }

// #include <iostream>
// using namespace std;
// class B;
// class A{
//     int a;
//     public:
//     A( int a1){
//         a=a1;
//     }
//     void display(){
//         cout<<a;
//     }
//     friend void swapValues(A &a2,B&b2);
// };
// class B{
//     int b;
//     public:
//     B( int b1){
//         b=b1;
//     }
//     void display(){
//         cout<<b;
//     }
//     friend void swapValues(A &a2,B&b2);
// }
//  void swapvalues(A &a2,B&b2){
//     int temp=a2.a;
//     a2.a=b2.b;
//     b2.b=temp;

//  }



// #include <iostream>
// using namespace std;
// class Number{
//     private:
//     int n1;
//     int n2;
//     public:
//     Number(int n3,int n4){
//         n1=n3;
//         n2=n4;
//     }
//     friend void calculate(Number c1 );
// };
// void calculate(Number c1 ) {
// cout<<c1.n1+c1.n2;
// cout<<c1.n1-c1.n2;
// cout<<c1.n1*c1.n2;
// cout<<c1.n1/c1.n2;
// };
// int main() {
//     Number obj(10, 2);  // Create object with two numbers
//     calculate(obj);     // Call the friend function
//     return 0;
// }

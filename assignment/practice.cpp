// #include <iostream>
// using namespace std;

// class SmartDevice
// {
// protected:
//     string deviceid;

// public:
//     SmartDevice(string d)
//     {
//         deviceid = d;
//     }
//     virtual void displayinfo() = 0;
// };
// class Smartlight : public SmartDevice
// {
// public:
//     int brightness;
//     Smartlight(string deviceid, int b) : SmartDevice(deviceid), brightness(b) {};
//     void displayinfo()
//     {
//         cout << deviceid;
//         cout << brightness;
//     }
// };
// class Smartlock : public SmartDevice
// {
// public:
//     string status;
//     Smartlock(string deviceid, string s) : SmartDevice(deviceid), status(s) {};
//     void displayinfo()
//     {
//         cout << deviceid;
//         cout << status;
//     }
// };
// class Thermostat : public SmartDevice
// {
// public:
//     int temp;
//     Thermostat(string deviceid, int t) : SmartDevice(deviceid), temp(t) {};
//     void displayinfo()
//     {
//         cout << deviceid;
//         cout << temp;
//     }
// };
// int main()
// {
//     int n;
//     cin >> n;

//     SmartDevice *devices[n];
//     for (int i = 0; i < n; i++)
//     {
//         string device_type, deviceId;
//         cin >> device_type >> deviceId;

//         if (device_type == "Light")
//         {
//             int brightness;
//             cin >> brightness;
//             devices[i] = new Smartlight(deviceId, brightness);
//         }
//         else if (device_type == "Lock")
//         {
//             string status;
//             cin >> status;
//             devices[i] = new Smartlock(deviceId, status);
//         }
//         else
//         {
//             int temp;
//             cin >> temp;
//             devices[i] = new Thermostat(deviceId, temp);
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         devices[i]->displayinfo();
//     }
// }



// #include <iostream>
// using namespace std;
// class gadgets{
//     protected:
//     string model;
//     public:
//     gadgets(int m){
//         model=m;
//     }
//     virtual void displayinfo()=0;

// };
// class laptop:public gadgets{
//     public:
//     int ramsize;
//     int storagesize;
//     int batterybackup;
//     laptop(string model,int r,int s,int b):gadgets(m),ramsize(r),storagesize(s),batterybackup(b){};
//     void displayinfo(){
//         cout<<ramsize;
//         cout<<storagesize;
//         cout<<batterybackup;
//     }
// };
// class smartphone:public gadgets{
//     public:
//     int cameram;
//     int screensize;
//     int batterycap;
//     smartphone(string model,int c,int s,int bc):gadgets(m),cameram(c),screensize(s),batterycap(bc){};
//     void displayinfo(){
//         cout<<cameram;
//         cout<<screensize;
//         cout<<batterycap;
//     }

// };


// int main() {
//     int n;
//     cin>>n;
//     gadgets *g[n];
//     for(int i=0,i<n;i++){
//        string devt,model ;
//        cin>>devt>>model;
//        if(devt=="laptop")
//     }
// #include <iostream>
// using namespace std;

// class Complex{
//     public:
//     int real;
//     int img;
//     Complex (int r,int i){
//         real=r;
//         img=i;
//     }
//     Complex operator+(const Complex &obj){
//         int r=real+obj.real;
//         int i=img+obj.img;
//         return Complex(r,i);
//     }
//     void display(){
//         cout<<real;
//         if(img>=0) cout<<"+"<<img<<"i";
//     }
// };
// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//     int r1,r2,i1,i2;
//     cin>>r1>>r2>>i1>>i2;
//     Complex c1(r1,i1),c2(r2,i2);
//     Complex c3=c1+c2;
//     c3.display();

// }
// }

// #include <iostream>
// using namespace std;

// double celsiusToFahrenheit(double celsius) {
//     return (celsius * 9/5) + 32;
// }

// double celsiusToKelvin(double celsius) {
//     return celsius + 273.15;
// }

// double fahrenheitToCelsius(double fahrenheit) {
//     return (fahrenheit - 32) * 5/9;
// }

// double fahrenheitToKelvin(double fahrenheit) {
//     return (fahrenheit - 32) * 5/9 + 273.15;
// }

// double kelvinToCelsius(double kelvin) {
//     return kelvin - 273.15;
// }

// double kelvinToFahrenheit(double kelvin) {
//     return (kelvin - 273.15) * 9/5 + 32;
// }

// int main() {
//     int choice;
//     double temp;
    
//     while (true) {
//         cout << "\nTemperature Converter" << endl;
//         cout << "1. Celsius to Fahrenheit" << endl;
//         cout << "2. Celsius to Kelvin" << endl;
//         cout << "3. Fahrenheit to Celsius" << endl;
//         cout << "4. Fahrenheit to Kelvin" << endl;
//         cout << "5. Kelvin to Celsius" << endl;
//         cout << "6. Kelvin to Fahrenheit" << endl;
//         cout << "7. Exit" << endl;
        
//         cout << "Select an option (1-7): ";
//         cin >> choice;
        
//         if (choice == 7) {
//             cout << "Exiting the program." << endl;
//             break;
//         }
        
//         cout << "Enter the temperature: ";
//         cin >> temp;
        
//         switch (choice) {
//             case 1:
//                 cout << temp << "°C is " << celsiusToFahrenheit(temp) << "°F" << endl;
//                 break;
//             case 2:
//                 cout << temp << "°C is " << celsiusToKelvin(temp) << "K" << endl;
//                 break;
//             case 3:
//                 cout << temp << "°F is " << fahrenheitToCelsius(temp) << "°C" << endl;
//                 break;
//             case 4:
//                 cout << temp << "°F is " << fahrenheitToKelvin(temp) << "K" << endl;
//                 break;
//             case 5:
//                 cout << temp << "K is " << kelvinToCelsius(temp) << "°C" << endl;
//                 break;
//             case 6:
//                 cout << temp << "K is " << kelvinToFahrenheit(temp) << "°F" << endl;
//                 break;
//             default:
//                 cout << "Invalid option, please try again." << endl;
//         }
//     }
    
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[5];
//     double sum = 0;
//     for (int i = 0; i < 5; i++)
//     {
//         cout << "Enter marks in subject " << i + 1 << "(out of 100): ";
//         cin >> arr[i];
//         sum += arr[i];
//     }
//     int perc = (sum / 500) * 100;
//     if (perc >= 80)
//     {
//         cout << "Your grade is: O";
//     }
//     else if (perc >= 70 && perc < 80)
//     {
//         cout << "Your grade is: A+";
//     }
//     else if (perc >= 60 && perc < 70)
//     {
//         cout << "Your grade is: A";
//     }
//     else if (perc >= 50 && perc < 60)
//     {
//         cout << "Your grade is: B";
//     }
//     else
//     {
//         cout << "Your grade is: PASS";
//     }

//     return 0;
// }




// #include <iostream>
// #include <string>
// #include <vector>
// #include <algorithm>
// #include <cctype>
// using namespace std;

// int main()
// {
//     string input;
//     cout << "Enter a string: ";
//     getline(cin, input);

//     vector<char> letters;
//     for (char c : input)
//     {
//         if (isalpha(c))
//         {
//             letters.push_back(c);
//         }
//     }

//     // sort letters ignoring case differences
//     sort(letters.begin(), letters.end(), [](char a, char b)
//          { return tolower(a) < tolower(b); });

//     cout << "Sorted characters: ";
//     for (char c : letters)
//     {
//         cout << c << " ";
//     }
//     cout << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     int sum=0;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         sum+=i;
//     }
//     cout<<sum;
// }




// #include <iostream>
// using namespace std;


// class Complex{
//     public:
//     int real;
//     int img;
//     Complex(int r,int i){
//         real=r;
//         img=i;
//     }
//     Complex operator+ (const Complex &obj){
//         int r=real+obj.real;
//         int i=img+obj.img;
//         return Complex(r,i);
//     }
//     void display(){
//         cout<<real;
//         if(img>=0) cout<<"+"<<img<<"i"; 
//     }
   
// };

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         int r1,r2,i1,i2;
//         cin>>r1>>r2>>i1>>i2;
//         Complex c1(r1,i1),c2(r2,i2);
//         Complex c3=c1+c2;
//         c3.display();


//     }
    
// }

// #include <iostream>
// #include <string>
// using namespace std;

// class ParkingSpot {
// public:
//     virtual void calculateFee(int hours) = 0;
//     virtual ~ParkingSpot() {}
// };

// class Car : public ParkingSpot {
// public:
//     void calculateFee(int hours) override {
//         cout << "Car Parking Fee: " << hours * 10 << " units" << endl;
//     }
// };

// class Bike : public ParkingSpot {
// public:
//     void calculateFee(int hours) override {
//         cout << "Bike Parking Fee: " << hours * 5 << " units" << endl;
//     }
// };

// class Truck : public ParkingSpot {
// public:
//     void calculateFee(int hours) override {
//         cout << "Truck Parking Fee: " << hours * 2 << " units" << endl;
//     }
// };

// int main() {
//     int n;
//     cin>>n;
//     string vehicleType;
//     int hours[n];
      
//     ParkingSpot* spot[n];
//     for(int i=0;i<n;i++){

//     cout << "Enter vehicle type (car/bike/truck): ";
//     cin >> vehicleType;

//     cout << "Enter number of hours parked: ";
//     cin >> hours[i];
  

//     if (vehicleType == "car" || vehicleType == "Car") {
//         spot[i] = new Car();
//     } else if (vehicleType == "bike" || vehicleType == "Bike") {2
//     } else if (vehicleType == "truck" || vehicleType == "Truck") {
//         spot[i] = new Truck();
//     } else {
//         cout << "Invalid vehicle type!" << endl;
//         return 1; // Exit program
//     }
// }
// for(int i=0;i<n;i++){
//     spot[i]->calculateFee(hours[i]);

    
//     delete spot[i];
// }

//     return 0;

// }

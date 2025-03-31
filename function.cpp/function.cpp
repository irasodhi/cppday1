// #include <iostream>
// using namespace std;
// int add(int a,int b)
// {return a+b;}
// int sub(int a,int b)
// {return a-b;}
// int mul(int a,int b)
// {return a*b;}
// int divi(int a,int b)
// {return a/b;}
// int rem(int a,int b){
//     return a%b;
// }
// int main(){
//     int a,b,choice;
//   cout << "Enter two numbers: ";
//         cin >> a >> b;

//         cout << "Choose an operation: \n";
//         cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Remainder\n6. Exit\n";
//         cin >> choice;

//         if (choice == 1) {
//             cout << "Result: " << add(a, b) << endl;
//         }
//         else if (choice == 2) {
//             cout << "Result: " << sub(a, b) << endl;
//         }
//         else if (choice == 3) {
//             cout << "Result: " << mul(a, b) << endl;
//         }
//         else if (choice == 4) {
//             cout << "Result: " << divi(a, b) << endl;
//         }
//         else if (choice == 5) {
//             cout << "Result: " << rem(a, b) << endl;
//         }
//         else if (choice == 6) {
//             cout << "Exiting the program." << endl;
//             exit(0);
//         }
//         else {
//             cout << "Invalid choice!" << endl;
//         }
//     }

// #include <iostream>
// using namespace std;
// int percentage(int a,int b,int c,int d,int e)
// {return(a+b+c+d+e)/5;}
// void grade(int percent) {
//     if (percent >= 90) {
//         cout << "Grade: A+" << endl;
//     } else if (percent >= 80) {
//         cout << "Grade: A" << endl;
//     } else if (percent >= 70) {
//         cout << "Grade: B" << endl;
//     } else if (percent >= 60) {
//         cout << "Grade: C" << endl;
//     } else if (percent >= 50) {
//         cout << "Grade: D" << endl;
//     } else {
//         cout << "Grade: F" << endl;
//     }
// }
// int main(){
//     int a,b,c,d,e;
//     cin>>a>>b>>c>>d>>e;
//     int percent=percentage(a,b,c,d,e);
//     cout<<"percentage"<<percent<<"%"<<endl;
//     grade(percent);
// }

// #include <iostream>
// using namespace std;
// float ctof(float c){
// return (9/5*c)+32;
// }
// float ftoc(float f){
// return (f-32)*5/9;
// }
// float ctok(float c){
//     return c+273.15;
// }
// int main(){
//     int choice;
//     float temp,result;
//  cout << "\nTemperature Conversion Menu:" << endl;
//         cout << "1. Celsius to Fahrenheit" << endl;
//         cout << "2. Fahrenheit to Celsius" << endl;
//         cout << "3. Celsius to Kelvin" << endl;
//         cout << "4. Exit" << endl;
//         cout << "Enter your choice (1-4): ";
//         cin >> choice;

//         if (choice == 1) {
//             cout << "Enter temperature in Celsius: ";
//             cin >> temp;
//             result = ctof(temp);
//             cout << temp << " Celsius is " << result << " Fahrenheit." << endl;
//         }
//         else if (choice == 2) {
//             cout << "Enter temperature in Fahrenheit: ";
//             cin >> temp;
//             result = ftoc(temp);
//             cout << temp << " Fahrenheit is " << result << " Celsius." << endl;
//         }
//         else if (choice == 3) {
//             cout << "Enter temperature in Celsius: ";
//             cin >> temp;
//             result = ctok(temp);
//             cout << temp << " Celsius is " << result << " Kelvin." << endl;
//         }
//         else if (choice == 4) {
//             cout << "Exiting program." << endl;
//         }
//         else {
//             cout << "Invalid choice! Please try again." << endl;
//         }
// }

// #include <iostream>
// using namespace std;

// void balance(int amount){
//     cout<<"the amount is "<<amount<<endl;
// }
// int deposit(int mdeposit,int &amount){
//     amount+=mdeposit;
//     cout<<"deposit succesful new balance "<<amount<<endl;
//     return amount;

// }
// int withdraw(int mwithdraw,int &amount){
//     if (mwithdraw > 0 && mwithdraw <= amount) {
//         amount -= mwithdraw;
//         cout << "Withdrawal successful! New balance: " << amount << endl;
//     } else {
//         cout << "Invalid transaction! Check amount." << endl;
//     }
//     return amount;
// }
// int main(){
//     int choice,amount=0,mdeposit,mwithdraw;
//    do{ cout<<"1 check balance"<<endl;
//     cout<<"2 deposit money"<<endl;
//     cout<<"3 withdraw money"<<endl;
//     cout <<"4 exit"<<endl;
//     cout<<"enter choice";
//     cin>>choice;
//     if (choice==1){
//        balance(amount);

//     }

//     else if (choice==2){
//     cout << "Enter amount to deposit: ";
//     cin >> mdeposit;
//     deposit(mdeposit, amount);

//     }
//     else if (choice==3){
//         cout<<"enter withdraw amount";
//          cin >> mwithdraw;
//                withdraw(amount, mwithdraw);
//     }
//     else if (choice==4){
//         cout << "Exiting..." << endl;
//     }
//    }while (choice != 4);

//     return 0;

// }

// #include <iostream>
// using namespace std;
// int prime(int num)
// { if (num<2)
// return 0;
// for(int i=2;i*i<=num;i++){
//     if (num%i==0)
//     return 0;

// }
// return 1;
// }
// void primes_in_range(int start, int end) {
//     cout << "Prime numbers between " << start << " and " << end << ": ";
//     for (int num = start; num <= end; num++) {
//         if (prime(num)) {
//             cout << num << " ";
//         }
//     }
//     cout << endl;
// }
// int main() {
//     int choice;
//     cout<<"enter choice";
//     cin>>choice;
//     if (choice==1){
//     int num;
//     cout << "Enter a number to check if it's prime: ";
//     cin >> num;
//     if (prime(num))
//         cout << num << " is a prime number." << endl;
//     else
//         cout << num << " is not a prime number." << endl;
//     }
//     else if (choice==2){
//     int start, end;
//     cout << "Enter the start of the range: ";
//     cin >> start;
//     cout << "Enter the end of the range: ";
//     cin >> end;

//     primes_in_range(start, end);
//     }
// }

// #include <iostream>
// #include <cmath>
// using namespace std;
// int armstrong(int num){

// int originalNum = num, sum=0,digits = 0;
//     int temp = num;
//     while(temp>0){
//         temp /= 10;
//         digits++;
//     }
//     temp=num;
//     while(temp > 0){
//         int digit = temp%10;
//         sum += pow(digit, digits);
//         temp /= 10;
//     }

//     return sum == originalNum;

// }

// int main()
// {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     if (armstrong(num))
//     {
//         cout << num << " is an Armstrong number!" << endl;
//     }
//     else
//     {
//         cout << num << " is not an Armstrong number." << endl;
//     }
// }

// #include <iostream>
// using namespace std;
// const int MAX = 10;
// int main() {
//     int row1, col1, row2, col2;
//     int A[MAX][MAX], B[MAX][MAX], result[MAX][MAX];

//     cout << "Enter rows and columns for first matrix: ";
//     cin >> row1 >> col1;
//     cout << "Enter rows and columns for second matrix: ";
//     cin >> row2 >> col2;
//      cout << "Enter elements of first matrix:\n";
//     inputMatrix(A, row1, col1);

//     cout << "Enter elements of second matrix:\n";
//     inputMatrix(B, row2, col2);

//     cout << "\nFirst Matrix:\n";
//     displayMatrix(A, row1, col1);
//     cout << "\nSecond Matrix:\n";
//     displayMatrix(B, row2, col2);

//     if (row1 == row2 && col1 == col2) {
//         addmat(A, B, result, row1, col1);
//         cout << "\nMatrix Addition:\n";
//         displayMatrix(result, row1, col1);
//     } else {
//         cout << "\nMatrix addition is not possible (dimension mismatch).\n";
//     }

//     if (row1 == row2 && col1 == col2) {
//         submat(A, B, result, row1, col1);
//         cout << "\nMatrix Subtraction:\n";
//         displayMatrix(result, row1, col1);
//     } else {
//         cout << "\nMatrix subtraction is not possible (dimension mismatch).\n";
//     }

//     if (col1 == row2) {
//         multiplymat(A, B, result, row1, col1, row2, col2);
//         cout << "\nMatrix Multiplication:\n";
//         displayMatrix(result, row1, col2);
//     }

// }

// void inputMatrix(int matrix[MAX][MAX], int row, int col) {
//     for (int i = 0; i < row; i++)
//         for (int j = 0; j < col; j++)
//             cin >> matrix[i][j];
// }

// void displayMatrix(int matrix[MAX][MAX], int row, int col) {
//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < col; j++)
//             cout << matrix[i][j] << " ";
//         cout << endl;
//     }
// }
// void addmat(int A[MAX][MAX], int B[MAX][MAX], int result[MAX][MAX], int row, int col) {
//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < col; j++)
//        result[i][j] = A[i][j] + B[i][j];
//     }
// }
// void submat(int A[MAX][MAX], int B[MAX][MAX], int result[MAX][MAX], int row, int col) {
//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < col; j++)
//        result[i][j] = A[i][j] - B[i][j];
//     }
// }
// void multiplymat(int A[MAX][MAX], int B[MAX][MAX], int result[MAX][MAX], int row1, int col1, int row2, int col2) {
//     for (int i = 0; i < row1; i++)
//         for (int j = 0; j < col2; j++)
//             result[i][j] = 0;

//     for (int i = 0; i < row1; i++) {
//         for (int j = 0; j < col2; j++) {
//             for (int k = 0; k < col1; k++) {
//                 result[i][j] += A[i][k] * B[k][j];
//             }
//         }
//     }

// }

// #include <iostream>
// using namespace std;
// void factorial(int num)
// {

//     int factorial = 1;
//     for (int i = 1; i < num; i++)
//         {factorial *= i;}
//     cout<<factorial;

// }
// void fabonacci(int num)
// {
//     int a=0,b=1,c;
//     for (int i = 0; i < num; i++)
//        {
//         cout<<a;
//         c = a + b;
//         a= b;
//         b = c;}
//         cout<<endl;
// }
// int main()
// {
//     cout << "1.find factorial" << endl;
//     cout << "2.find fabonacci" << endl;
//     int choice;
//     cin >> choice;

//     if (choice == 1)
//     {
//         int num;
//         cout << "enter num";
//         cin >> num;
//         factorial(num);
//     }
//     if (choice == 2)
//     {
//         int num;
//         cout << "enter num";
//         cin >> num;
//         if (num < 1)
//             cout << "Number of terms should be at least 1." << endl;
//         else
//             fabonacci(num);
//     }
// }

// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;

// int findLength(const string &str)

// {
//     return str.length();
// }
// string toUpperCase(string str)
// {
//     transform(str.begin(), str.end(), str.begin(),::toupper);
//     return str;
// }
// string toLowerCase(string str)
// {transform(str.begin(),str.end(),str.begin(),::tolower);
// return str;}

// string reverseString(string str){
//     reverse(str.begin(),str.end());
//     return str;
// }
// int main(){
// string input;

//     cout << "Enter a string: ";
//     getline(cin, input);

//     int length = findLength(input);
//     string upper = toUpperCase(input);
//     string lower = toLowerCase(input);
//     string reversed = reverseString(input);

//     cout << "Original String: " << input << endl;
//     cout << "Length: " << length << endl;
//     cout << "Uppercase: " << upper << endl;
//     cout << "Lowercase: " << lower << endl;
//     cout << "Reversed: " << reversed << endl;

//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// vector<int> creteArray(int size){
//     int nums[size];
//     int*arr=nums;
//     for(int i=0;i<size;i++){
//         arr[i]=i+1;
//     }
//     return arr;

// }

// int main(){

//     // pointer : its a variable which store address of other variable

//     // task : create an array of numbers of user's choice , take input for the same , and perform following operation using pointer and also take input using pointer.
//     //1. print the array elements in reverse manner
//     //3. find out total sum of all elements
//     //4. find out the prime number in the array as well;

//     // int size;
//     // cout << "Enter the size for the array: ";
//     // cin >> size;

//     // int nums[size];

//     // int *ptr = nums;

//     // // to add numbers to above array using pointers
//     // for(int i=0;i<size;i++){
//     //     cout << "Enter the number for index " << i << " : ";
//     //     cin >> *(ptr + i);
//     // }

//     // for(int i=0;i<size;i++){
//     //     cout << *(ptr + i) << " ";
//     // }
    
//     // int sum =0;
//     // for(int i=0;i<size;i++){
//     //     sum += *(ptr + i);
//     // }

//     // cout << "Sum is: " << sum << endl;

//     // ptr = nums + size - 1;
//     // for(int i=0;i<size;i++){
//     //     cout << *(ptr - i) << " ";
//     // }
//     int size=10;
//     vector<int> nums=createArray(size);
//     int* ptr=&nums[0];
//     cout<<*ptr<<endl;

// }


//student: create a function which accept two parameters first int type refrence/address of a number array and
// second its size, and ypur task is to return vector of even numb only.

// #include <iostream>
// #include <vector>
// using namespace std;
// vector<int> filterEvenNumbers(int*arr,int size){
//     vector<int> evenNums;
//     for (int i=0;i<size;i++){
//         if(*(arr+i)%2==0){
//             evenNums.push_back(*(arr+i));

//         }
//     }
//     return evenNums;
// }

// #include <iostream>
// #include <vector>
// int name(){
//     // // string name="Chintu";
//     // char names[]="chintu";
//     // char* ptr=&names[0];
    
//     // cout<<ptr<<endl;
//     // cout<<*ptr<<endl;
//     int num=10;
//     void* ptr=&num;
//     cout<<ptr<<endl;
//     cout<<(int*)ptr<<endl;
    

// }


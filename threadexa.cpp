// #include <iostream>
// #include <thread>
// using namespace std;

// void thread1(){
//     cout<<"hello threa1"<<endl;
// }
// void thread2(){
//     cout<<"hello thread2"<<endl;
// }
// int main() {
//     thread t1(thread1);
//     thread t2(thread2);
//     t1.join();
//     t2.join();
//     cout<<"all threads have completed";
// }


// //synchronuzeation-one thread can access onemresource at a time.

// #include <iostream>
// #include <thread>

// using namespace std;

// const int MAX=100;
// int A[MAX][MAX],B[MAX][MAX],C[MAX][MAX];
// int r,c;
// void addrow(int r){
//     for(int j=0;j<c;j++){
//         C[r][j]=A[r][j]+B[r][j];
//     }
// }

// int main() {
//     cin>>r>>c;
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             cin>>A[i][j];
//         }
//     }
//     for (int i = 0; i < r; ++i)
//         for (int j = 0; j < c; ++j)
//             cin >> B[i][j];
//     thread t1[MAX];
//     for(int i=0;i<r;i++){
//         t1[i]=thread(addrow,i);

//     }
//     for(int i=0;i<r;i++){
//         t1[i].join();
//     }
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             cout<<C[i][j]<<" ";
//         }
//     }
// }

// #include <iostream>
// #include <thread>
// using namespace std;

// const int MAX = 100;

// int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
// int rowsA, colsA, rowsB, colsB;

// void multiplyRow(int row) {
//     for (int j = 0; j < colsB; ++j) {
//         C[row][j] = 0;
//         for (int k = 0; k < colsA; ++k) {
//             C[row][j] += A[row][k] * B[k][j];
//         }
//     }
// }

// void printMatrix(int matrix[MAX][MAX], int rows, int cols) {
//     for (int i = 0; i < rows; ++i) {
//         for (int j = 0; j < cols; ++j)
//             cout << matrix[i][j] << " ";
//         cout << endl;
//     }
// }

// int main() {
//     cout << "Enter rows and columns for Matrix A: ";
//     cin >> rowsA >> colsA;

//     cout << "Enter rows and columns for Matrix B: ";
//     cin >> rowsB >> colsB;

//     if (colsA != rowsB) {
//         cout << "Matrix multiplication not possible. Columns of A must equal rows of B." << endl;
//         return 1;
//     }

//     cout << "Enter elements of Matrix A:" << endl;
//     for (int i = 0; i < rowsA; ++i)
//         for (int j = 0; j < colsA; ++j)
//             cin >> A[i][j];

//     cout << "Enter elements of Matrix B:" << endl;
//     for (int i = 0; i < rowsB; ++i)
//         for (int j = 0; j < colsB; ++j)
//             cin >> B[i][j];

//     // Create one thread per row
//     thread threads[MAX];

//     for (int i = 0; i < rowsA; ++i) {
//         threads[i] = thread(multiplyRow, i);
//     }

//     for (int i = 0; i < rowsA; ++i) {
//         threads[i].join();
//     }

//     cout << "Resultant Matrix C (A x B):" << endl;
//     printMatrix(C, rowsA, colsB);

//     return 0;
// }

// #include <iostream>
// #include <thread>
// using namespace std;

// void fact(int n){
//     long f=1;
//     for(int i=2;i<=n;i++){
//         f*=i;
//     }
//     cout<<f;
// }
// int main(){
//     int num;
//     cin>>num;
//     thread t1(fact,num);
//     t1.join();
//     cout<<"main thread completed";
// }

// #include <iostream>
// #include <thread>
// #include <cmath>
// using namespace std;
// void arm(int n){
//     int ori=n;
//     int sum=0;
//     int digits=0;
//     int temp=n;
//     while(temp>0){
//         digits++;
//         temp/=10;

//     }
//      temp=n;
//     while(temp>0){
//         int digit=temp%10;
//         sum+=pow(digit,digits);
//         temp/=10;
//     }
//     if(sum==ori){
//         cout<<"arm";
//     }
//     else{
//         cout<<"not a armstrong";
//     }
// }
// int main(){

//       int num;
//     cin>>num;
//     thread t1(arm,num);
//     t1.join();
//     cout<<"main thread completed";

// }

// #include <iostream>
// #include <string>
// using namespace std;
// int main() {
//     string str;
//     cin>>str;
//     int count=0;
//     int n=str.length();
//     for(int i=0;i<n;i++){
//       for(int j=i;j<n;j++){
//         if(str[i]==str[j]){
//         count++;
//         }
//       }

//     }
//     cout<<count;

// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n][n];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     int max1 = 0;
//     int max2 = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (i == j)
//             {
//                 max1 += arr[i][j];
//             }
//         }

//         for (int j = n - 1; j >= 0; j--)
//         {
//             if (i == j)
//             {
//                 max2 += arr[i][j];
//             }
//         }
//     }

//     int total = max1 - max2;
//     cout << total;
// }

// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     sort(arr,arr+n);
//     for(int i=0;i<n;i++){
//         cout << arr[i];
//     }
// }

#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

int countt = 0;
mutex m;

void increment1(){
    for(int i=1;i<=100000;i++){
        m.lock();
        countt++;
        m.unlock();
    }
}

void increment2(){
    for(int i=1;i<=100000;i++){
        m.lock();
        countt++;
        m.unlock();
    }
}

int main() {
    thread t1(increment1);
    thread t2(increment2);

    t1.join();
    t2.join();
    cout<<countt;

}

// #include <iostream>
// #include <thread>
// #include <mutex>
// using namespace std;

// const int MAX = 1000;
// int arr[MAX];
// int n;

// int sum1 = 0;
// int sum2 = 0;
// mutex m;

// void sumFirstHalf() {
//     int temp = 0;
//     for (int i = 0; i < n / 2; ++i) {
//         temp += arr[i];
//     }
//     m.lock();
//     sum1 = temp;
//     m.unlock();
// }

// void sumSecondHalf() {
//     int temp = 0;
//     for (int i = n / 2; i < n; ++i) {
//         temp += arr[i];
//     }
//     m.lock();
//     sum2 = temp;
//     m.unlock();
// }

// int main() {
//     cout << "Enter size of array: ";
//     cin >> n;

//     if (n <= 0 || n > MAX) {
//         cout << "Invalid array size." << endl;
//         return 1;
//     }

//     cout << "Enter " << n << " elements:" << endl;
//     for (int i = 0; i < n; ++i) {
//         cin >> arr[i];
//     }

//     thread t1(sumFirstHalf);
//     thread t2(sumSecondHalf);

//     t1.join();
//     t2.join();

//     int total = sum1 + sum2;
//     cout << "Total sum: " << total << endl;

//     return 0;
// }



// #include <iostream>
// #include <thread>
// #include <mutex>
// using namespace std;
// int balance;
// mutex m;
//  void deposit(int amount){
//     m.lock();
//     cout<<"depositing"<<amount;
//     balance+=amount;
//     cout<<balance;
//     m.unlock();
//  }

// void withdraw(int amount){
//     m.lock();
//     if(balance>=amount){
//         cout<<amount;
//         balance-=amount;
//         cout<<balance;
//     }
//     else{
//         cout<<"insufficient";
//     }
//     m.unlock();
// }
// int main(){
//     int balance;
//     int withdrawamt;
//     int depositamt;
//     cin>>balance;
//     cin>>depositamt;
//     cin>>withdrawamt;
//     thread t1(deposit,depositamt);
//     thread t2(withdraw,withdrawamt);
//     t1.join();
//     t2.join();
// }

// #include <iostream>
// #include <thread>
// #include <mutex>

// using namespace std;


// int count=0;
// mutex m;
// bool isprime(int num){
// if(num<2) return false;
// for(int i=2;i*i<=num;i++){
//     if(num%i==0){
//         return false;
//     }
//     return true;
// }
// void countprime(int s,int e,int id){
//     int localcou=0;
//     for(int num=s;num<=end;num++){
//         if (isprime(num)){
//             cout<<num;
//             localcou++;
//         }
//     }
//     cout<<endl;
//     m.lock();
//     count+=localcou;
//     m.unlock();
// }
// int main() {
//    nt start, end;
//     cout << "Enter start and end: ";
//     cin >> start >> end;

//     if (start > end) {
//         cout << "Invalid range!" << endl;
//         return 1;
//     }

//     int mid = (start + end) / 2;

//     thread t1(countPrimesInRange, start, mid);
//     thread t2(countPrimesInRange, mid + 1, end);

//     t1.join();
//     t2.join();

//     cout << "Total prime numbers found: " << countPrimes << endl;
//     return 0;
// }


// #include <iostream>
// #include <thread>
// #include<mutex>
// using namespace std;
// mutex m;
// int count=0;
// void increament1(){
//     for(int i=1;i<=10000;i++){
//         m.lock();
//         count++;
//         m.unlock();
//     }
// }
// void increament2(){
//     for(int i=1;i<=10000;i++){
//         m.lock();
//         count++;
//         m.unlock();
//     }
// }
// int main() {
//     thread t1(increament1);
//     thread t2(increament2);
//     t1.join();
//     t2.join();
//     cout<<"all threads have completed";
//     cout << "Final count: " << count << endl;
// }


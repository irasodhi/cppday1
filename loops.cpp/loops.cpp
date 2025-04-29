// // #include <iostream>;
// // using namespace std;
// // int main(){
// // int sp=1;
// // while(sp<=10){
// // cout<<"hello"<<endl;
// // }
// // }
// // #include <iostream>
// // using namespace std;
// // int main(){
// //     int num=12345;
// //     // int lastDigit1=num%10;
// //     // cout<<lastDigit1<<endl;//5
// //     // num=num/10;
// //     // int lastDigit2=num%10;
// //     // cout<<lastDigit2<<endl;//4
// //     // num=num/10;
// //     // int lastDigit3=num%10;
// //     // cout<<lastDigit3<<endl;//3
// //     // num=num/10;
// //     // int lastDigit4=num%10;
// //     // cout<<lastDigit4<<endl;//2
// //     // num=num/10;
// //     //  int lastDigit5=num%10;
// //     // cout<<lastDigit5<<endl;//1
// //     // num=num/10;
// //     while(num!=0){
// //         int lastDigits5=num%10;
// //         cout<<lastDigits5<<" ";
// //         num=num/10;
// //     }
// // }
// // #include <iostream>
// // using namespace std;
// // int main(){
// //     int n=2483;
// //     int count=0;

// //     while(n!=0){
// //          count+=n;
    

// //     }

// // }
// // #include <iostream>
// // using namespace std;
// // int main(){
// //     int sp=1;
// //     do{
// //         cout<<sp<<" ";
// //         sp++;
// //     }
// //     while(sp<10);

// // }
// // #include <iostream>
// // using namespace std;
// // int main(){
// //     for (int i=1;i<=5;i++){
// //         for (int j=1;j<=i;j++){
// //             cout<<j<<" ";
// //         }
// //      cout<<endl;
// //     }
// }
// #include <iostream>
// using namespace std;
// int main(){
//     for (int i=1;i<=10;i++){
//         for (int j=1;j<=10;j++){
//             if (i==1||i==10||j==1||j==10){
//                 cout<<"* ";

//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main(){
//     for(int i =5;i<=1;i--){
//         for (int j=5;j=i-1;j--){
//             cout<<i;
//         }
//     }
// }


// // #include <iostream>
// // using namespace std;
// // int main(){
// //     for (int i=1; i<=4;i++){
                    
// //     }
// // }
// #include <iostream>
// using namespace std;
// int main(){
//     int i=1;
//     while(i<=5){
//         cout<<i<< " ";
//         i++;
//     }
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int input,num,digitcount=0,sumofdigits=0;
//     cout<<"enter a num";
//     cin>>input;
//     num=input;
//     while(num>0){
//         int digit=num%10;
//         sumofdigits+=digit;
//         digitcount++;
//         num/=10;
//     }
//     cout<<digitcount<<endl;
//     cout<<sumofdigits<<endl;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for (int i =1; i<=n; i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }

// // }
// #include <iostream>
// using namespace std;

// int main() {
//     int N;

//     cout << "Enter the number N for the multiplication table: ";
//     cin >> N;

//     cout << "Multiplication Table for N = " << N;

//     for (int i = 1; i <= N; i++) {
//         for (int j = 1; j <= N; j++) {
//             cout << i * j ; 
//         }
//         cout << endl; 
//     }

//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main() {
//     int n,reverse=0,rem;
//     cin>>n; 
//     while(n!=0){
//         rem=n%10;
//         reverse=reverse*10+rem;
//         n/=10;
//     }
//     cout<<reverse<<endl;

// // }
// #include <iostream>
// using namespace std;
// int main(){int n,sum;
// cin>>n;
// while(n>=10){
//     sum=0;
//     while (n!=0)
//     {
//         sum+=n%10;
//         n/=10;
//     }
    
// n=sum;
// }
// cout<<n;
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n,sum;
//     cin>>n;
//     int sum=0;
//     for (int i=1;i<=n;i++){
//         sum+=i;
//     }
//     cout<<sum;
// }
// #include <iostream>
// using namespace std;
// int main(){  int n;
//     cout << "Enter a positive integer: ";
//     cin >> n;
//    int factorial=1;
//     for (int i = 1; i <= n; i++) {
//         factorial *= i; // Multiply each number to get the factorial
//     }

//     cout << "The factorial of " << n << " is: " << factorial << endl;
// }
// #include <iostream>
// using namespace std;
// int main(){  int n,rev=0,rem;
// cin>>n;
// while(n!=0){
//     rem=n%10;
//     rev=rev*10+rem;
//     n/=10;

// }
// cout<<rev;
// }


// #include <iostream>
// using namespace std;
// int main(){ int n,count=0;
// cin>>n;
// while(n!=0){ n/=10;//remove last digit
//  count++;
// }
// cout<<count;}
// #include <iostream>
// using namespace std;
// int main(){int n;
// cin>>n;  for(int i =1;i<=10;i++){cout<<n<<"x"<<i<<"="<<n*i;}}
// #include <iostream>
// using namespace std;
// int main(){int n,i;

//     cin>>n;
//   for(i=2;i<=n;i++){
//     if (n%i==0){
//         cout<<"prime no";
//     }
//     else{
//         cout<<"not a prime no";
     
//     }
//   }}

// #include <iostream>
// using namespace std;
// int main(){int n,sum;
// cin>>n;

//     while (n!=0)
//     {
//         sum+=n%10;
//         n/=10;
//     }
    
// n=sum;

// cout<<n;
// }
// #include <iostream>
// using namespace std;
// int main(){int x,y;
// int smaller;
// int gcd=1;
// cin>>x,y;
// if(x>y){
//     smaller=y;
// }
// else if(y>x){
//     smaller=x;
// }
// for(int i=1;i<=smaller;i++){
//     if (x%i && y%i){
//         gcd=i;
//     } 
//     cout<<gcd;
// }
//     }
// #include <iostream>
// using namespace std;
// int main(){int first=0; int second=1;
// int next=0; int count=0;
// int n;
// cin>>n;
// while(count<n){
//     if(count<=1){
//         next=count;

//     }
//     else{
//         next=first+second;
//         first=second;
//         second=next;
//     }
//     cout<<next;
//     count++;

// }
// }
// #include <iostream>
// using namespace std;
// int main(){ int n,reverse,orignal,rem;
// cin>>n;
// orignal=n;

//     while(n!=0){
//         rem=n%10;
//         reverse=reverse*10+rem;
//         n/=10;}
// if(orignal==reverse){
//     cout<<"numb is palindrome";
// }
// else{
//     cout<<"not a palindrome";
// }
//     }
// #include <iostream>
// using namespace std;
// int main(){ int n;
// cin>>n;
// for (int i =2;i<=n;i+=2){
//     if (n%2==0){
//         cout<<i<<" ";
       
//     }

// }}
// #include <iostream>
// using namespace std;
// int main(){
//     string str;
//     int vowelcount=0;
//     cout<<"enter the str ir";
//     getline(cin,str);
//     for(int i=0;i<=str.length();i++){
//         char c=str[i];
    
//     if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
//     c=='A'||c=='E'||c=='I'||c=='o'||c=='u'){
// vowelcount++;
//     }}
//     cout<<vowelcount;
// }
// #include <iostream>
// using namespace std;

// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     int largestDigit = -1; 
//     while (num > 0) {
//         int digit = num % 10; 
//         if (digit > largestDigit) {
//             largestDigit = digit; 
//         }
//         num /= 10; 
//     }

//     cout << "The largest digit is: " << largestDigit << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int num,temp,rem,digits,sum=0;
//     cout << "Enter a number: ";
//     cin >> num;
//     temp=num;
//     while(temp!=0){
//         temp/=10;
//         digits++;


//     }
//     while(temp!=10){
//         rem=temp%10;
//         int pow=1;
//         for ( int i=1;i<=digits;i++ ) {pow *=rem;}{
//             sum+=pow;
//             temp/=10;
//         }  }if (sum == num) {
//         cout << num << " is an Armstrong number." << endl;
//     } else {
//         cout << num << " is not an Armstrong number." << endl;
//     }
// }
// #include <iostream>
// using namespace std;

// int main() {
//     int num, sum = 0;

//     cout << "Enter the limit: ";
//     cin >> num;

//     for (int i = 1; i <= num; i++) {
//         if (i % 2 != 0) {  
//             sum += i;
//         }
//     }

//     cout << "The sum of odd numbers from 1 to " << num << " is: " << sum << endl;

//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){int x,y;
// int larger;

// cin>>x>>y;
// if(x>y){
//     larger=x;
// }
// else if(y>x){
//     larger=y;
// }
// int lcm=larger;

//     while (lcm % x!=0 || lcm%y!=0){
//         lcm++;
//     } 
//     cout<<lcm;
// }

// #include <iostream>
// using namespace std;
// int main(){int x,count=0;
// cout<<"enter a numb";
// cin>>x;
// for (int i=1;i<=x;i++){
//    if (x%i==0){
//     count++;
//    }

// }
// cout<<count;
// }


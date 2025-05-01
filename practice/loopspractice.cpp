
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     int rev;
//     int rem=0;
    
//     cin>>n;
//     while(n>0){
//         rem=n%10;
//         rev=rev*10+rem;
//         n/=10;

//     }
//     cout<<rev;
// }





// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
    
//     int count=0;

//     while(n>0){
//         n=n/10;
//         count++;
//     }
//     cout<<count;

// }


// #include <iostream>
// using namespace std;




// int main() {
  
//     int n;
//     cin>>n;
//     int even=0;
//     while(n>0){
//         int digit=n%10;
//         if (digit%2==0){
//             even++;
//         }
//         n/=10;
        
//     }
//     cout<<even;



// }


// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     bool isprime=true;
//     if(n<2){
//         cout<<"not a prime";
//     }
//     for(int i=2;i*i<=n;i++){
//         if(n%i==0){
//         isprime=false;
//         break;
//     }
// }
//     if (isprime){
//         cout<<"prime no";
//     }
//     else{
//         cout<<"not a prime no";
//     }
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     int f=1;
//     for(int i=1;i<=n;i++){
//         f*=i;
//     }
//     cout<<f;
// }


// #include <iostream>
// using namespace std;

// int main() {
//    int n;
//    cin>>n;
//    int a=0;
//    int b=1;
//    int c;
//    if(n>=1){
//     cout<<a;
//    }
//     if(n>=2){
//     cout<<b;
    
//    }
   
//    for(int i=2;i<=n;i++){
//     c=a+b;
//     cout<<c<<" ";
//     a=b;
//     b=c;

//    }
  
// }


// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//    int n;
//    cin>>n;
//    int sum=0;
//    int temp;
//    int count=0;
//    temp=n;
//    while(temp!=0){
//       temp/=10;
//       count++;

//    }
//    temp=n;
   
//       while(temp!=0){
//          int digit=temp%10;
//          sum+=pow(digit,count);
//          temp/=10;
//       }
//       cout<<sum;
//       if(sum==n){
//          cout<<"armst5rong no";

//       }
//       else{
//          cout<<"noet armstrong no";
//       }
//    }

 

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     for(int i=0;i<=n;i++){
//       for(int j=0;j<=n-i-1;j++){
//          cout<<"*";
//       }
//       cout<<endl;
//     }
    
// }


// #include <iostream>
// using namespace std;

// int main() {
//    int n;
//    cin>>n;
//    for(int i=0;i<=n;i++){
//       for(int j=i;j<=n;j++){
//          cout<<" ";
//       }
//       for(int j=1;j<=i;j++){
//          cout<<j;
//       }
//       for(int j=i-1;j>=1;j--){
//          cout<<j;
//       }
//       cout<<endl;
//    }
//    for (int i = n; i >= 0; i--) {
//       for (int j = n; j > i-1; j--) {
//           cout << " ";
//       }

//       for (int j = 1; j <= i; j++) {
//           cout << j;
//       }

//       for (int j = i - 1; j >= 1; j--) {
//           cout <<j;
//       }
//       cout<<endl;

   
   
// }
// }

// #include <iostream>
// using namespace std;

// int main() {
//    int n;
//    cin>>n;
//    for(int i=1;i<n;i++){
//       for(int j=1;j<i;j++){
//          cout<<"*";
//       }
//       for(int j=1;j<=(2*(n-i));j++){
//          cout<<" ";
//        }
//        for(int j=1;j<i;j++){
//          cout<<"*";
//        }
//        cout<<endl;
//    }
//    for(int i=n;i>=1;i--){
//       for(int j=1;j<i;j++){
//          cout<<"*";
//       }
//       for(int j=1;j<=(2dddddde43*(n-i));j++){
//          cout<<" ";
//        }
//        for(int j=1;j<i;j++){
//          cout<<"*";
//        }
//        cout<<endl;
//    }
  
// }

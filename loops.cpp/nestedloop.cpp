// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for (int j=1;j<=n;j++){
//             cout<<i*j<<" ";
//         }
//         cout<<endl;
// //     }
// // }

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for (int j=i;j<n;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<j;
//         }
//         for(int j=i-1;j>=1;j--){
//             cout<<j;
//         }
// cout<<endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for (int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout <<endl;
//     }
// }


//chessboard pattern

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for (int j=1;j<=n;j++){
// if((i+j)%2==0)
// cout<<"*";
// else
// cout<<" ";
//         }
//     cout<<endl;
//     }
// }


//5?

// #include <iostream>
// using namespace std;
// int main(){
//     int start;
//     int end;
//     cin>>start>>end;
//     for(int num=start;num<=end;num++){
//        cout<<"divisor of "<<num <<" are:";
    
//     for(int i=1;i<=num;i++){
    
//         if (num%i==0){
//            cout<<i;
//         }
//             }
//             cout<<endl;
// }
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for (int j=1;j<n;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for (int j=1;j<=i;j++){
//             cout<<i*j<<" ";}
//             cout<<endl;
//     }
// }

//9?


// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for (int j=1;j<=i;j++){
//             cout<<j;}
//             cout<<endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main(){int size;
// cin>>size;
// int nums[size];
//  for (int i=0;i<size;i++){
//     cout<<nums[i]<<" ";
// }}
// #include <iostream>
// using namespace std;
// int main(){
// int size;
//     cout<<"enter the size: ";
//     cin>>size;
//     int sum=0;
//     int nums[size];

//     for(int i=0; i<size; i++){
//         cout<<"enter index : "<<nums;

//     }
//     for (int i=0; i<size; i++)
//     {
//         sum+=i;
//     }
//     cout<<sum;

// // }
// #include<iostream>
// using namespace std;
// int main(){
//      int size;
//     cout<<"Enter the size for array: ";
//     cin>>size;
//     int nums[size];

//     for(int i=0;i<size;i++){
//         cout<<"Enter Number for index "<<i<<" ";
//         cin>>nums[i];
//     }

//     cout<<"Entered Numbers by Users: ";
    
//     // printing the data
//     int sum=0;
//     int even=0;
//     int odd=0;
//     int div=0;
//     int count=0;
//     for(int i=0;i<size;i++){
//         cout<<nums[i]<<endl;
//         sum=sum+nums[i];
//         if(nums[i]%2==0){
//             even=even+nums[i];
//             count=count+1;
//         }
//         if(nums[i]%2!=0){
//             odd=odd+nums[i];
//         }
//         if(nums[i]%5==0){
//             div=div+nums[i];
//         }
        


//     }
//     cout<<"Sum of elements: "<<sum<<endl;
//     cout<<"Sum of even elements: "<<even<<endl;
//     cout<<"Sum of odd elements: "<<odd<<endl;
//     cout<<"Sum of numbers divisible by 5: "<<div<<endl;
//     cout<<"Average of even numbers"<<even/count;

    

// }


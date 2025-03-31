// #include <iostream>
// using namespace std;
// int main(){
//     int nums[3][3]={
//         {1,2,3},
//         {4,5,6},
//         {7,8,9}
//     };
//     cout<<nums[2][1]<<endl;
//     cout<<nums[1][2]<<endl;



// int rows=sizeof(nums)/sizeof(nums[0]);
// // cout<<rows<endl;

// int columns=sizeof(nums[0])/sizeof(nums[0][0]);
// for(int row=0;row<rows;row++){
//     cout<<nums[rows][columns]<<" ";
// }
// cout<<endl;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int nums[3][3]={
//         {1,2,3},
//         {4,5,6},
//         {7,8,9}
//     };
//     int rows=sizeof(nums)/sizeof(nums[0]);
//     int columns=sizeof(nums[0])/sizeof(nums[0][0]);
//     int sum=0;
//     for(int row=0;row<rows;row++){
//         int evensum=0;
//         for(int column=0;column<columns;column++){
//             sum+=nums[row][column];
//             if(nums[row][column]%2==0){
//                 evensum+=nums[row][column];
//             }
//         }
//         if(evensum==0){
//             cout<<"no even";
//         }
//         else{
//             cout<<evensum;
        
//     }
// }
// #include <iostream>
// #include <array>
// #include <vector>
// using namespace std;
// int main(){
    // array <int,5> nums={1,2,3,4,5};
    // cout<<nums[0]<<endl;
    // cout<<nums.at(2)<<endl;
    // cout<<nums.size()<<endl;
    // cout<<nums.front()<<endl;
    // cout<<nums.back()<<endl;
    // cout<<nums.empty()<<endl;
    // array<int,5>numbers;
    // numbers.fill(10); 
    // for(int i=0;i<numbers.size();i++)
    // {
    //     cout<<numbers.at(i)<<" ";
    // }
//     vector<int> nums;
//     nums.push_back(10);
//     nums.push_back(11);
//     nums.push_back(12);
//     nums.push_back(13);
//     // cout<<nums.size()<<endl;
//     // cout<<nums.capacity()<<endl;
//     for (int pablo:nums){
//         cout<<pablo<<" ";

//     }
//     nums.pop_back();
//     cout<<"-------------------"<<endl;
//     for(int pablo:nums){
//         cout<<pablo<<" ";
//     }
//     cout<<nums.at(1)<<endl;
//     nums.insert(nums.begin()+1,100);
// }


// #include <iostream>
// using namespace std;
// int main(){
// int size = sizeof(A) / sizeof(A[0]);  
//     int A[10],n=10;

//     int key;   
//     for(int i=0;i<n;i++){
//         cin>>A[i];

//     }
//     cout<<"enter key";
//     cin>>key;
//     for ( int i=0;i<n;i++){
//         if (key==A[i]){
//             cout<<"found at"<<i;
//         }
       
//     }

//---------------------array ASSIGNMENT--------------

// #include <iostream>
// using namespace std;
// int main(){
//     int A[]={1,2,3,4,5};
// int size = sizeof(A) / sizeof(A[0]);
// for(int i=0;i<size;i++){
//        cout<<A[i];
//     }    } 





// #include <iostream>
// using namespace std;
// int main(){
//     int A[]={10,20,30};
// int size = sizeof(A) / sizeof(A[0]);  

//     int sum=0;
//     for(int i=0;i<size;i++){
//         sum=sum+A[i];
//     }
//     cout<<"sum is"<<sum;

// }

// #include <iostream>
// using namespace std;
// int main(){
  
//     int A[]={4,8,1,7};
//     int size = sizeof(A) / sizeof(A[0]);
//     int max;
//     max=A[0];
//     for ( int i=1;i<size;i++){
//         if(A[i]>max){
//             max=A[i];
//         }
        
//     }
//     cout<<"largest element "<<max;
// }


   
    
        
    
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int A[]={4,5,6,2,1,3,7};
// int size = sizeof(A) / sizeof(A[0]);  
//     int min;
//     min=A[0];
//     for ( int i=1;i<zsize;i++){
//         if(A[i]<min){
//             min=A[i];
//         }
        
//     }
//     cout<<min;
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int A[]={5,10,15,20};
// int size = sizeof(A) / sizeof(A[0]); 
// int count=0;
// int value;
// cin>>value;
// for ( int i=0;i<size;i++){
//         if(A[i]>value){
//             count+=1;
            
//         }
// }
// cout<<count;
// }

// #include <iostream>
// using namespace std;
// int main(){
// int A[]={1,2,3,4,5,6};
// int size = sizeof(A) / sizeof(A[0]); 
// for ( int i=0;i<size;i++) {
//     if(A[i]%2==0){
//         cout<<A[i]<<" ";
//     }
// }  }

// #include <iostream>
// using namespace std;
// int main(){
// int A[]={1,2,3,4,5,6};
// int size = sizeof(A) / sizeof(A[0]); 
// for ( int i=0;i<size;i++) {
//     if(A[i]%2!=0){
//         cout<<A[i]<<" ";
//     }
// }  }

// #include <iostream>
// using namespace std;
// int main(){
// int A[]={2,4,6};
// int size = sizeof(A) / sizeof(A[0]); 
// for ( int i=0;i<size;i++) {
// cout<<A[i]*2<<" ";
// }
// }

// #include <iostream>
// using namespace std;
// int main(){
// int A[]={3,7,9,2};
// int size = sizeof(A) / sizeof(A[0]); 
// int key;
// cin>>key;
// for ( int i=0;i<size;i++) {
// if(A[i]==key){
//     cout<<"true";
// }

// }
// #include <iostream>
// using namespace std;
// int main(){
// int A[]={5,10,15,20,25};
// int size = sizeof(A) / sizeof(A[0]);
//  for ( int i=0;i<size;i++) {
//     cout<<"first element "<<A[0]<<endl;
//     cout<<"last element "<<A[size-1]<<endl;
//     break;

// }
// }
          
// #include <iostream>
// using namespace std;
// int main(){
// int A[]={1,2,3,4,5};
// int size = sizeof(A) / sizeof(A[0]);
//  for ( int i=0;i<size/2;i++) {
//     int temp=A[i];
//     A[i]=A[size-1-i];
//     A[size-1-i]=temp;
//  }
//  for (int i = 0; i < size; i++) {
//         cout << A[i] << " ";
//     }
// }


// }
// #include <iostream>
// using namespace std;
// int main(){
// int A[]={5,10,15,20,25};
// int size = sizeof(A) / sizeof(A[0]);
// int evencount=0;
// int oddcount=0;
//  for ( int i=0;i<size;i++) {
//     if (A[i]%2==0){
//         evencount++;
        
//     }
//     else {
//         oddcount++;
//     }

//  }
//  cout<<"evencount "<<evencount<<endl;
// cout<<"oddcount "<<oddcount;}

// #include <iostream>
// using namespace std;
// int main(){
// int A[]={1,2,3,4,5};
// int size = sizeof(A) / sizeof(A[0]);

//  for ( int i=0;i<size;i++) {
//     if (A[i] > A[i + 1]) {
//             cout << "The array is not sorted." << endl;
//              
//         }
//     }


//     cout << "The array is sorted." << endl;
//  }


// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {3, 1, 2, 2, 3, 4};
//     int n = sizeof(arr) / sizeof(arr[0]);  

//     int freq[100] = {0};  

//     for (int i = 0; i < n; i++) {
//         freq[arr[i]]++;
//     }

//     cout << "Element Frequencies: \n";
//     for (int i = 0; i < 100; i++) {
//         if (freq[i] > 0) {
//             cout << "Element: " << i << " Frequency: " << freq[i] << endl;
//         }
//     }

// }





// #include <iostream>
// using namespace std;
// int main(){
//     string str="hello";
//     int n=str.length();
// for(int i=0;i<n/2;i++){
//     char temp=str[i];
//     str[i]=str[n -i-1];
//     str[n-i-1]=temp;
// }
// cout<<str<<endl;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     string str="racecar";
//     int n=str.length();
// for(int i=0;i<n/2;i++){
// if(str[i]!=str[n-i-1])
// {cout<<"not a palindom";
// return 0;}
// }
// cout<<"palindrom";
// }

// #include <iostream>
// using namespace std;
// int main(){
//     string str="OpenAI ChatGPT";
//     int n=str.length();
//     int vowelcount=0;
//     int consonantcount=0;
// for(int i=0;i<n;i++){
//       char ch = str[i];

//         if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
//             if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
//                 ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
//                 vowelcount++;
//             } else {
//                 consonantcount++;
//             }
//         }
//     }

// cout<<"vowelcount"<<vowelcount<<endl;
// cout<<"consonatcount"<<consonantcount;
//}


// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
// string str;
//     cout << "Enter a string: ";
//     getline(cin, str);
//    int maxCount = 0;
// int mostFrequentChar=' ';

//     for (int i = 0; i < str.length(); i++) {
//         int count = 0;

//         for (int j = 0; j < str.length(); j++) {
//             if (str[i] == str[j] && str[i] != ' ') {
//                 count++;
//             }
//         }

//         if (count > maxCount) {
//             maxCount = count;
//             mostFrequentChar = str[i];
//         }
//     }

//     cout << "The most frequent character is: " << mostFrequentChar << endl;
//     cout << "Frequency: " << maxCount << endl;

//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string str;
//     cout << "Enter a string: ";
//     getline(cin, str);

//     string result = "";  

//     for (int i = 0; i < str.length(); i++) {
//         int j = 0;
//         while (j < result.length() && str[i] != result[j]) {
//             j++;
//         }

//         if (j == result.length()) {
//             result += str[i];
//         }
//     }

//     cout << "String without duplicates: " << result << endl;

//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string str;
//     cout << "Enter a string: ";
//     getline(cin, str);

//     for (int i = 0; i < str.length(); i++) {
//         int count = 0;  
//         for (int j = 0; j < str.length(); j++) {
//             if (str[i] == str[j]) {
//                 count++;
//             }
//         }

//         if (count == 1) {
//             cout << "The first non-repeating character is: " << str[i] << endl;
//             return 0;  
//         }
//     }

//     cout << "No non-repeating character found." << endl;
//     return 0;
// }



// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string str;
//     cout << "Enter a string: ";
//     getline(cin, str);  
//     if (str.length() > 0) {
//         str[0] = toupper(str[0]);
//     }
//     for (int i = 1; i < str.length(); i++) {
//         if (str[i - 1] == ' ' && str[i] != ' ') {
//             str[i] = toupper(str[i]);
//         }
//     }

//     cout<<str<<endl;
// }


// #include <iostream>
// #include <cctype>
// using namespace std;
// int main(){
// string str="12345";
// int i=0;
// while (i < str.length() && isdigit(str[i])) {
//         i++;
// }
// if(i==str.length()){
//     cout<<"str contain daigits";
// }
// else{
//         cout<<"it contains non digit charactee";
//     }
// }

// #include <iostream>
// #include<string>
// using namespace std;
// int main(){
//     string sentence="helloworld";
//     string newword="everyone";
//     string oldworld="world";
//     string result=" ";
//     string temp="";
    

// }


// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
// string sentence="I love programming";
// string longest="";
// string current="";
// int i=0;
// while(i<=sentence.length()){
//     if(i<sentence.length()&& sentence[i]!=' '){
//         current+=sentence[i];
//     }
//     else{
//         if(current.length()>longest.length()){
//         longest=current;
//         }
//         current="";
//     }
   

//     i++;
// }
// cout<<longest;
// }      

#include <iostream>
using namespace std;

int main() {
    int num;
    cin>>num;
    int sum=0;
    for (int i=2;i<num;i++){
        int prime=1;
        for( int j=2;j*j<num;j++){
            if(i%j==0){
                int prime=0;
                break;
            }
        }
        if(prime==1){
        sum+=i;
        }
        
    }
    cout<<sum;
}




// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
    

// }
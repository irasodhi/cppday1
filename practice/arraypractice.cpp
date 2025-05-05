// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     int max;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     max=arr[0];
//     for(int i=1;i<n;i++){
//     if (max<arr[i]){
//         max=arr[i];
//     }
// }
//     cout<<max;

// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=n-1;i>=0;i--){
//         cout<<arr[i];
// }
   

// }


// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     int sum=0;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
        
// }
// cout<<sum;
   

// }


// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     bool ispal=true;
//     for(int i=0;i<n/2;i++){
//         if(arr[i]!=arr[n-1-i]){
//             ispal=false;
//             break;
//         }
// }
// if (ispal) {
//     cout << "The array is a palindrome.";
// } else {
//     cout << "The array is not a palindrome.";
// }
   

// }



// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     int t;
//     cin>>t;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     bool found=false;
//     for(int i=0;i<n;i++){
//     if(arr[i]==t){
//         cout<<arr[i];
//         found=true;
//         break;
//     }
// }
//    if(!found){
//     cout<<"elementnot available";
//    }
   
        
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     int arr[n];
//     int secondl;

//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int largest=arr[0];
//     for(int i=0;i<n;i++){
//         if(arr[i]>largest){
//             largest=arr[i];
//         }
//     }
//     for(int i=0;i<n;i++){
//         if(arr[i]!=largest && arr[i]>secondl){
//             secondl=arr[i];
//         }

//     }
//     cout<<secondl;

// }





//remove duplicate element 

// #include <iostream>
// using namespace std;

// int main() {
//    int n;
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++){
//     cin>>arr[i];
//    }
//    int j=0;
//    for(int i=0;i<n;i++){
//     bool isdupl=false;
//     for(int k=0;k<j;k++){
//         if(arr[i]==arr[k]){
//             isdupl=true;
//             break;
//         }
//     }
//     if(!isdupl){
//         arr[j]=arr[i];
//         j++;
//     }
//    }
//    cout << "Array after removing duplicates: ";
//     for (int i = 0; i < j; i++) {
//         cout << arr[i] << " ";
//     }
// }



// #include <iostream>
// using namespace std;

// int main() {
//    int n;
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++){
//     cin>>arr[i]; 
//    }
//    int temp=arr[0];
//    for(int i=0;i<n-1;i++){
//     arr[i]=arr[i+1];
//    }
//    arr[n-1]=temp;
//    for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";


// }
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//        cin>>n;
//        int arr[n];
//     for(int i=0;i<n;i++){
//             cin>>arr[i]; 
//            }
//            int index=0;
//     for(int i=0;i<n-1;i++){
//         if (arr[i] !=0){
//             arr[index++]=arr[i];
//         }
//     }
//     while (index < n) {
//         arr[index++] = 0;
//     }
//     for(int i=0;i<n;i++){
//             cout<<arr[i]<<" ";
// }
// }


// #include <iostream>
// using namespace std;

// int main() {
//    int n;
//    cout<<"enter n";
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n-1;i++){
//     cin>>arr[i];
//    }
//    int total=n*(n+1)/2;
//    int sum=0;
//    for(int i=0;i<=n-1;i++){
//     sum+=arr[i];

//    }
//    int mis=total-sum;
//    cout<<"missing no"<<mis;
// }

// #include <iostream>
// using namespace std;

// int main() {
//    int n;
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++){
//     cin>>arr[i];
//    }
//    int freq[n+1]={0};
//    for(int i=0;i<n;i++){
//     if(arr[i]>=1 && arr[i]<=n){
//         freq[arr[i]]++;
//     }
//    }
//    for (int i = 1; i <= n; i++) {
//     cout << i << " -> " << freq[i] << endl;
// }
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++){
//     cin>>arr[i];
//    }
//    int k;
//    cin>>k;
//    for(int i=0;i<n;i++){
//     for(int j=i+1;j<n;j++){
//         if(arr[i]+arr[j]==k){
//             cout<<arr[i]<<" "<<arr[j]<<endl;
//         }
//     }
//    }
// }
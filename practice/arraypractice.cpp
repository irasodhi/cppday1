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

// remove duplicate element

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

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int j = 0;
//     for (int i = 0; i < n; i++)
//     {
//         bool isduplicate = false;
//         for (int k = 0; k < j; k++)
//         {
//             if (arr[i] == arr[k]){
                
//             isduplicate = true;
//             break;
//         }
//     }
//     if (!isduplicate)
//     {
//         arr[j] = arr[i];
//         j++;
//     }
//     cout << "Array after removing duplicates: ";
//     for (int i = 0; i < j; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
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




// swap an array
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n/2;i++){
//         swap(arr[i],arr[n-i-1]);
//     }
//     for(int i=0;i<n;i++){
//     cout<<arr[i];
// }
// }

// min and max
//  #include <iostream>
//  using namespace std;

// int main() {
//     int n;
//         cin>>n;
//         int arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         int min=arr[0];
//         for(int i=0;i<n;i++){
//             if(min>arr[i]){
//                 min=arr[i];
//             }

// }
// cout<<min;
// // }




// find the missing element
//  #include <iostream>
//  using namespace std;

// int main() {
//     int n;
//         cin>>n;
//         int arr[n];
//        int sum=0;
//         for(int i=0;i<n-1;i++){
//             cin>>arr[i];
//         }
//         int total=n*(n+1)/2;
//         for(int i=0;i<n;i++){
//             sum+=arr[i];
//         }
//         int ans=total-sum;
//         cout<<ans;
//     }





// merging two sorted array
// #include <iostream>
// using namespace std;
// void merge(int arr1[],int arr2[],int n1,int n2,int arr3[]){
//     int i=0;int j=0;int k=0;
//     while(i<n1 && j<n2){
//         if(arr1[i]<arr2[j]){
//             arr3[k++]=arr1[i++];
//         }
//         else{
//             arr3[k++]=arr2[j++];
//         }
//     }
//     while(i<n1){
//         arr3[k++]=arr1[i++];
//     }
//     while(j<n2){
//         arr3[k++]=arr2[j++];
//     }
// }
// int main() {
//     int n1;
//     int n2;
//     cin>>n1;
//     cin>>n2;
//     int arr1[n1];
//     int arr2[n2];

//     for(int i=0;i<n1;i++){
//         cin>>arr1[i];
//     }
//     for(int j=0;j<n2;j++){
//         cin>>arr2[j];
//     }
//     int arr3[n1+n2];
//     merge(arr1,arr2,n1,n2,arr3);
//     for(int i=0;i<n1+n2;i++){
//         cout<<arr3[i]<<" ";
//     }

// }

// #include <iostream>
// using namespace std;
// void merge(int arr1[],int arr2[],int n1,int n2,int arr3[]){
//     int i=0,j=0,k=0;
//     while(i<n1 && j<n2){
//         if (arr1[i]<arr2[j]){
//             arr3[k++]=arr1[i++];
//         }
//         else{
//             arr3[k++]=arr2[j++];
//         }
//     }
//     while(i<n1){
//         arr3[k++]=arr1[i++]; 
//     }
//     while(j<n2){
//         arr3[k++]=arr2[j++];
//     }
// }
// int main() {
//     int n1;
//         int n2;
//         cin>>n1;
//         cin>>n2;
//         int arr1[n1];
//         int arr2[n2];

//         for(int i=0;i<n1;i++){
//             cin>>arr1[i];
//         }
//         for(int j=0;j<n2;j++){
//             cin>>arr2[j];
//         }
//         int arr3[n1+n2];
//         merge(arr1,arr2,n1,n2,arr3);

//         for(int i = 0; i < n1 + n2; i++) {
//             cout << arr3[i] << " ";
//         }

// }




// sort 0 1 2
//  #include <iostream>
//  using namespace std;
//  void sort(int arr[],int n){
//      int low=0,mid=0,high=n-1;
//      while(low<=high){
//          if (arr[mid]==0){
//              swap(arr[low++],arr[mid++]);
//          }
//          else if(arr[mid]==1){
//              mid++;
//          }
//          else{
//              swap(arr[mid],arr[high--]);
//          }
//      }
//  }
//  int main() {
//      int n;
//      cin>>n;
//      int arr[n];
//      for(int i=0;i<n;i++){
//          cin>>arr[i];

//     }
//     sort(arr,n);
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

// }



void sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}


 


// if arr an subset
// #include <iostream>
// using namespace std;

// void sort(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-i-1;j++){
//             if (arr[j]>arr[j+1]){
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
// }
// void subset(int arr1[],int n1,int n2,int arr2[]){
//     sort(arr1,n1);
//     sort(arr2,n2);
//     int i=0,j=0;
//     while(i<n1 && j<n2){
//         if (arr1[i]==arr2[j]){
//             i++;
//             j++;
//         }
//         else if(arr1[i]>arr2[j]){
//             j++;
//         }
//         else{
//             cout<<"not a subset";
//             return;
//         }
//     }
//     if (i==n1){
//         cout<<"arr1 is a subset";

//     }
//     else{
//         cout<<"arr is not subst";
//     }
// }
// int main() {
//     int n1;
//     int n2;
//     cin>>n1;
//     cin>>n2;
//     int arr1[n1];
//     int arr2[n2];

//    for(int i=0;i<n1;i++){
//     cin>>arr1[i];
//    }
//    for(int i=0;i<n2;i++){
//     cin>>arr2[i];
//    }
//    subset(arr1, n1,n2,arr2);

// }



// merge two arr without gap
//  #include <iostream>
//  using namespace std;
//  void sort(int arr[],int n){
//      for(int i=0;i<n-1;i++){
//          for(int j=0;j<n-i-1;j++){
//              if(arr[j]>arr[j+1]){
//              int temp=arr[j];
//              arr[j]=arr[j+1];
//              arr[j+1]=temp;
//          }
//      }
//  }
//  }
//  void merge(int arr1[],int n1,int n2,int arr2[]){

//     int i=n1-1;
//     int j=0;
//     while(i>=0 && j<n2 &&arr1[i]>arr2[j]){
//         int temp=arr1[i];
//         arr1[i]=arr2[j];
//         arr2[j]=temp;
//         i--;
//         j++;
//     }

//     sort(arr1,n1);
//     sort(arr2,n2);

// }
// int main() {
//     int n1;
//         int n2;
//         cin>>n1;
//         cin>>n2;
//         int arr1[n1];
//         int arr2[n2];

//        for(int i=0;i<n1;i++){
//         cin>>arr1[i];
//        }
//        for(int i=0;i<n2;i++){
//         cin>>arr2[i];
//        }
//        merge(arr1, n1, n2, arr2);
//        for(int i=0;i<n1;i++){
//         cout<<arr1[i];d
//        }
//        for(int i=0;i<n2;i++){
//         cout<<arr2[i];
//        }
// }

// find pairs
//  #include <iostream>
//  using namespace std;
//  void sort(int arr[], int n)
//  {
//      for (int i = 0; i < n - 1; i++)
//      {
//          for (int j = 0; j < n - i - 1; j++)
//          {
//              if (arr[j] > arr[j + 1])
//              {
//                  int temp = arr[j];
//                  arr[j] = arr[j + 1];
//                  arr[j + 1] = temp;
//              }
//          }
//      }
//  }
//  int psum(int arr[], int n1, int sum)
//  {
//      int right = n1 - 1;
//      int left = 0;
//      int count = 0;
//      while (left < right)
//      {
//          int curentsum = arr[left] + arr[right];

//         if (curentsum == sum)
//         {
//             count++;
//             left++;
//             right--;
//         }
//         else if (curentsum < sum)
//         {
//             left++; // Increase sum by moving left pointer
//         }
//         else
//         {
//             right--; // Decrease sum by moving right pointer
//         }
//     }
//     return count;
// }

// int main()
// {
//     int n, sum;
//     cout << "Enter the size of the array: ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter the elements of the array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     cout << "Enter the sum to find pairs for: ";
//     cin >> sum;

//     cout << "Number of pairs with the given sum: " << psum(arr, n, sum) << endl;

//     return 0;
// }

// //union of two array
// #include <iostream>
// using namespace std;
// void sort(int arr[],int n){
//     for(int i=0;i<=n-1;i++){
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
// }
// int removeduplicate(int arr[],int n){
//     if(n==0||n==1){
//         return n;
//     }
//     int j=0;
//     for(int i = 1; i < n; i++) {
//     if(arr[i]!=arr[j]){
//         j++;
//         arr[j]=arr[i];
//     }
// }
// return j+1;
// }

// int merge(int arr1[],int n1,int n2,int arr2[],int merged[]){
//     for(int i=0;i<n1;i++){
//         merged[i]=arr1[i];
//     }
//     for(int i=0;i<n2;i++){
//         merged[n1+i]=arr2[i];
//     }
//     return n1+n2;
// }

// int main(){
//     int n1, n2;
//     cin >> n1 >> n2;

//     int arr1[n1], arr2[n2];

//     for(int i = 0; i < n1; i++) cin >> arr1[i];
//     for(int i = 0; i < n2; i++) cin >> arr2[i];

//     int merged[n1 + n2];

//     int totalSize = merge(arr1, n1, arr2, n2, merged);
//     sort(merged, totalSize);
//     int uniqueSize = removeduplicate(merged, totalSize);

//     cout << "Union of arrays: ";
//     for(int i = 0; i < uniqueSize; i++){
//         cout << merged[i] << " ";
//     }

//     return 0;
// }

// intersection

// #include <iostream>
// using namespace std;

// void inter(int arr1[], int n1, int arr2[], int n2)
// {
//     int i = 0;
//     int j = 0;
//     while (i < n1 && j < n2)
//     {
//         if (arr1[i] < arr2[j])
//         {
//             i++;
//         }
//         else if (arr1[i] > arr2[j])
//         {
//             j++;
//         }
//         else{
//             cout<<arr1[i]<<" ";
//             i++;
//             j++;
//         }

//     }
// }
// int main()
// {
//     int n1, n2;
//     cout << "Enter sizes of two arrays: ";
//     cin >> n1 >> n2;

//     int arr1[n1], arr2[n2];

//     cout << "Enter elements of first sorted array:\n";
//     for (int i = 0; i < n1; i++) cin >> arr1[i];

//     cout << "Enter elements of second sorted array:\n";
//     for (int i = 0; i < n2; i++) cin >> arr2[i];

//     inter(arr1, n1, arr2, n2);

// }



    
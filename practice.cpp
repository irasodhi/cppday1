// #include <iostream>
// using namespace std;

// int main() {
//     int factorial=1;
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         factorial*=i;
//     }
//     cout<<factorial;

// }
// #include <iostream>
// using namespace std;

// int main() {
//     int n;int rem;int rev=0;
//     cin>>n;
//     while(n>0){
//     rem=n%10;
//     rev=rev*10+rem;
//     n/=10;
// }
// cout<<rev;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;int count=0;
//     cin>>n;
//     while(n!=0){
//         n/=10;
//         count++;

//     }
//     cout<<count;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         cout<<n<<"*"<<i<<"="<<n*i<<endl;
//     }
// }

// #include <iostream>
// using namespace std;

// int main() {
//   int n;
//   cin>>n;
//   if(n<=1){
//     cout<<"not a prime no";

//   }
//   else{
//     bool isprime=true;
//     for (int i=2;i*i<=n;i++){
//         if(n%i==0){
//             isprime=false;
//             break;
//         }
//     }
//     if (isprime=true){
//         cout<<n<<" is prime no";
//     }
//     else{
//         cout<<n<<"is not a prime no";
//     }
//   }

// }

// #include <iostream>
// using namespace std;

// int main() {
//    int n;
//    cin>>n;
//    if (n<0){
//     cout<<"negative no";
//    }
//    while(n>0){
//     int sum=0;
//     while(n!=0){
//         sum+=n%10;
//         n/=10;
//     }
//     cout<<sum;
//    }
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int x,y;
//     cin>>x>>y;
//     int gcd=1;
//     int smaller;
//     if(x>y){
//         smaller=y;
//     }
//     else if(x<y){
//         smaller=x;
//     }
//     for(int i=1;i<smaller;i++)
//     if (x%i==0 && y%i==0){
//         gcd=i;
//     }
//     cout<<gcd;

// }

// #include <iostream>
// using namespace std;

// int main() {
//     int a=0;
//     int b=1;
//     int c=0;
//     int n;
//     cin>>n;
//     if (n == 1) {
//         cout << a;
//     } else if (n == 2) {
//         cout << b;
//     }
//     else{
//     for(int i=2;i<n;i++){
//         c=a+b;
//         a=b;
//         b=c;

//     }
//     cout<<c;
// }
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     int ori=n;
//     int rem;
//     int rev=0;
//     while(n!=0){
//         rem=n%10;
//         rev=rev*10+rem;
//         n/=10;
//     }
//     cout<<rev<<endl;
//     if(rev==ori){
//         cout<<"no is palandrome";

//     }
//     else{
//         cout<<"not a palandrome";
//     }
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int a=0;
//     int b=1;
//     int c=0;
//     int n;
//     cin>>n;
//     for(int i=2;i<n;i++){
//         c=a+b;
//         a=b;

//         b=c;

//     }
//     cout<<c;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     int rem;
//     int rev=0;
//     int ori=n;
//     while(n>0){
//     rem=n%10;
//     rev=rev*10+rem;
//     n/=10;
//     }
//     cout<<rev;
//     if(ori==rev){
//         cout<<"no is palandrome";

//     }
//     else{
//         cout<<"not a palindrome";
//     }

// }

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {

//     string name;
//     cin>>name;
//     int vowelcount=0;
//     for(int i=0;i<name.length();i++){
//         char c=tolower(name[i]);
//         if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
//             vowelcount++;
//         }

//     }
//     cout<<vowelcount;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     int lar=0;
//     while( n>0){
//        int digit= n%10;
//        if(digit>lar){
//         lar=digit;
//        }
//        n/=10;
//     }
//     cout<<lar;
// }

// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//    int n;
//    int count=0;
//    cin>>n;
//    int sum=0;
//    int temp=n;
//    while(temp>0){
//     count++;
//     temp/=10;
//    }
//    temp=n;
//    while(temp>0){
//     int digit=temp%10;
//     sum+=pow(digit,count);
//     temp/=10;
//    }
//    cout<<sum;
//    if(sum==n){
//     cout<<"armstrong no";
//    }
//     else{
//         cout<<"not a armstrong no";
//     }

// }

// #include <iostream>
// #include <cmath>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int count = 0;
//     int sum = 0;
//     int temp = n;
//     while (temp > 0)
//     {
//         count++;
//         temp /= 10;
//     }
//     temp = n;
//     while (temp > 0)
//     {
//         int digit = temp % 10;
//         sum += pow(digit, count);
//         temp /= 10;
//     }
//     if (sum == n)
//     {
//         cout << "armstrong no";
//     }
//     else
//     {
//         cout << "not a armstrong no";
//     }
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int x;
//     int y;
//     int large;
//     cin>>x>>y;
//     if(x<y){
//         large=y;
//     }
//     else{
//         large=x;
//     }
//     int lcm=large;
//     while(lcm%x!=0 || lcm%y!=0){
//         lcm++;
//     }
//     cout<<lcm;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<j*i;
//         }
//         cout<<endl;
//     }
// // }
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j < n-i; j++)
//         {
//             cout << " ";
//         }

//         for (int j = 1; j <=i; j++)
//         {
//             cout << j;
//         }
//         for (int j = i - 1; j >= 1; j--)
//         {
//             cout << j;
//         }
//         cout << endl;
//     }
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//    for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//         if((i+j)%2==0){
//             cout<<"*";
//         }
//         else{
//             cout<<" ";
//         }
//     }
//     cout<<endl;
//    }
// }

// #include <iostream>
// using namespace std;

// int main() {
//    int s;int e;
//    cin>>s>>e;
//    for(int num=s;num<=e;num++){
//     for(int i=1;i<=num;i++){
//         if(num%i==0){
//             cout<<i;
//         }
//     }
//     cout<<endl;
//    }
// }

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

// int main() {
//     int s;int e;
//     cin>>s>>e;
//     for(int num=s;num<=e;num++){
//         bool isprime=true;
//         if(num<2){
//             isprime=false;
//             break;

//         }
//         else{
//             for(int i=2;i<num;i++){
//                 if(num%i==0){
//                     isprime=false;
//                     break;
//                 }
//         }
//         }
//         if(isprime){
//             cout<<num<<" ";
//         }
//     }

// // }
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(j*i){
//                 cout<<"*";
//             }
//         }
//         cout<<endl;
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

//     cout << "array elements are ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     int sum=0;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//     }
//     cout<<sum;

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
//     int largest=arr[0];
//     for(int i=1;i<n;i++){
//         if(arr[i]>largest){
//             largest=arr[i];
//         }
//     }
//     cout<<largest;
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
//     int smallest=arr[0];
//     for(int i=0;i<n;i++){
//         if(arr[i]<smallest){
//             smallest=arr[i];
//         }

//     }
//     cout<<smallest;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     int num;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int count=0;

//     cin>>num;
//     for (int i = 0; i < n; i++) {
//         if(arr[i]>num){
//             count++;
//         }
//     }
//     cout<<count;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     int num;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     cin>>num;
//     bool found=false;
//     for (int i = 0; i < n; i++) {
//         if(arr[i]==num){

//             cout<<"num found:true";
//             found=true;
//             break;
//         }

//     }
//     if(!found){
//         cout<<"num found :false";
//     }

// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;  // Input the number of elements in the array
//     int arr[n];  // Declare the array of size n

//     // Input elements into the array
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];  // Take input for each element of the array
//     }

//     cout << "Element frequencies:" << endl;

//     // Traverse each element of the array
//     for (int i = 0; i < n; i++) {
//         bool found = false;

//         // Check if this element has already been counted
//         for (int j = 0; j < i; j++) {
//             if (arr[i] == arr[j]) {
//                 found = true;  // Element is already counted
//                 break;
//             }
//         }

//         // If not found, count the frequency of arr[i]
//         if (!found) {
//             int count = 1;  // Start with 1 (first occurrence)
//             for (int j = i + 1; j < n; j++) {
//                 if (arr[i] == arr[j]) {
//                     count++;  // Increment the count if the element is found
//                 }
//             }
//             cout << arr[i] << " appears " << count << " times" << endl;
//         }
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int m, n;
//     cin >> m >> n; // Input number of rows and columns

//     int arr[m][n]; // Declare the 2D array with dimensions m x n

//     // Input elements into the array
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }

//     int top = 0, bottom = m - 1, left = 0, right = n - 1;
//     while (top <= bottom && left <= right)
//     {

//         if (left % 2 == 0)
//         {
//             for (int i = top; i <= bottom; i++)
//             {
//                 cout << arr[i][left] << " ";
//             }

//         }
//         else
//             {
//                 for (int i = bottom; i >= top; i--)
//                 {
//                     cout << arr[i][left] << " ";
//                 }
//             }
//             left++;
//         }

//     }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     int arr[n][n];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[0][i]<<" ";
//     }
//     for(int i=1;i<n;i++){
//         cout<<arr[i][n-1]<<" ";
//     }
//     for(int i=n-2;i>=0;i--){
//         cout<<arr[n-1][i]<<" ";
//     }
//     for(int i=n-2;i>=1;i--){
//         cout<<arr[i][0]<<" ";
//     }

// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     int arr[n][n];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[0][i];
//     }
//     for(int i=0;i<n-1;i++){
//         cout<<arr[i][n-i-1];
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[n-1][i];
//     }
// }

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string s;
//     cin>>s;
//     string orig=s;
//     int n=s.length();
//     for(int i=0;i<n/2;i++){
//         swap(s[i],s[n-i-1]);
//     }
//     if(orig==s){
//         cout<<"palindrome";
//     }
//     else{
//         cout<<"not a palindrome";
//     }
// }

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string s;
//     getline(cin,s);
//     int vow=0;
//     int conso=0;
//     for(int i=0;i<s.length();i++){
//         char ch=s[i];
//         if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
//             ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
//             vow++;
//         }
//         else if(isalpha(ch)){
//             conso++;
//         }

//     }
//     cout<<vow;
//     cout<<conso;

// }

// #include <iostream>
// using namespace std;
// int main(){
//     string s;
//     getline(cin,s);
//     int n=s.length();
//     for(int i=0;i<n/2;i++){
//         swap(s[i],s[n-i-1]);
//     }
//     cout<<s;
// }
// #include <iostream>
// using namespace std;

// int main()
// {
//     int vow=0;
//     int conso=0;
//     string s;
//     getline(cin, s);
//     int n = s.length();
//     for (int i = 0; i < n; i++)
//     {
//         char ch = s[i];
//         if (ch >= 'a'&& ch <= 'z')
//         {
//             if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
//                 ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
//             {
//                 vow++;
//             }
//             else if (isalpha(ch))
//             {
//                 conso++;
//             }
//         }
       
//     }
//     cout << vow;
//     cout << conso;
// }

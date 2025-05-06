
// #include <iostream>
// #include <pthread.h>
// using namespace std;
// // void* kisi bhi type ke data ka adress leta hai
// pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;
// void *fabonacciseries(void *args)
// {
//     int n = *(int *)args;
//     pthread_mutex_lock(&lock);

//     int a = 0;
//     int b = 1;

//     for (int i = 0; i <= n; i++)
//     {
//         cout << a << " ";
//         int c = a + b;
//         a = b;
//         b = c;
//     }

//     cout << "----------";
//     pthread_mutex_unlock(&lock);
//     return nullptr;
// }

// int main()
// {
//     pthread_t t1;
//     int n = 10;
//     pthread_create(&t1, NULL, fabonacciseries, &n); // function ko thread bnane ka kaam krta hai
//     pthread_join(t1, NULL);
//     cout << "all thread have completed" << endl;
// }



// #include <iostream>
// #include <pthread.h>
// using namespace std;
// // void* kisi bhi type ke data ka adress leta hai
// pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;
// void *primeno(void *args)
// {
//     int n = *(int *)args;
//     pthread_mutex_lock(&lock);
//     for(int num=2;num<=n;num++){
//     int a = 0;
//     int b = 1;
//     bool isprime=true;
//     for (int i = 2; i*i <= num; i++)
//     {   
//         if (num%i==0){
//             isprime=false;
//             break;
//         }
//     }
//     if(isprime){
//         cout<<num<<" ";
//     }
// }


//     cout << "----------";
//     pthread_mutex_unlock(&lock);
//     return nullptr;
// }

// int main()
// {
//     pthread_t t1;
//     int n = 50;
//     pthread_create(&t1, NULL, primeno, &n); // function ko thread bnane ka kaam krta hai
//     pthread_join(t1, NULL);
//     cout << "all thread have completed" << endl;
// }



// #include <iostream>
// #include <pthread.h>
// using namespace std;
// //void* kisi bhi type ke data ka adress leta hai
// pthread_mutex_t lock=PTHREAD_MUTEX_INITIALIZER;
// int n=20;
// void* printevenno(void* args){
//     pthread_mutex_lock(&lock);
//     for(int i=1;i<=n;i++){
//         if(i%2==0){
//             cout<<i<<" ";
//         }
//     }
//     cout<<"----------";
//     pthread_mutex_unlock(&lock);
//     return nullptr;
// }
// void* printoddno(void* args){
//     pthread_mutex_lock(&lock);

//     for(int i=1;i<=n;i++){
//         if(i%2!=0){
//             cout<<i<<" ";
//         }
//     }
//     cout<<"----------";
//     pthread_mutex_unlock(&lock);
//     return nullptr;
// }
// int main() {
//    pthread_t t1,t2;
//    pthread_create(&t1,NULL,printevenno,&n);//function ko thread bnane ka kaam krta hai
//    pthread_create(&t2,NULL,printoddno,&n);
//    pthread_join(t1,NULL);
//    pthread_join(t2,NULL);//jab tak dono thread ka message complete nhi hogya ya termiate i hoga tab tak neeche vla msg print nhi hogaa
//    cout<<"all thread have completed"<<endl;
// }


// #include <iostream>
// #include <pthread.h>
// using namespace std;
// // void* kisi bhi type ke data ka adress leta hai
// pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;
// void *factorial(void *args)
// {
//     int n = *(int *)args;
//     pthread_mutex_lock(&lock);

//     int f=1;
//     for (int i = 1; i <= n; i++)
//     {
//         f*=i;
//     }
//     cout<<f;
//     cout << "----------";
//     pthread_mutex_unlock(&lock);
//     return nullptr;
// }

// int main()
// {
//     pthread_t t1;
//     int n ;
//     cin>>n;
//     pthread_create(&t1, NULL, factorial, &n); // function ko thread bnane ka kaam krta hai
//     pthread_join(t1, NULL);
//     cout << "all thread have completed" << endl;
// }

// #include <iostream>
// #include <pthread.h>
// using namespace std;
// //void* kisi bhi type ke data ka adress leta hai
// pthread_mutex_lock=PTHREAD_MUTEX_INITIALIZER;
// void* tableof2(void* args){
//     pthread_mutex_lock(&lock);
//     for(int i=1;i<=10;i++){
//         cout<<i*2<<endl;
//     }
//     cout<<"----------";
//     pthread_mutex_unlock(&lock);
//     return nullptr;
// }
// void* squareoffirst10naturalnum(void* args){
//     pthread_mutex_lock(&lock);

//     for(int i=1;i<=10;i++){
//         cout<<i*i<<endl;
//     }
//     cout<<"----------";

//     return nullptr;
// }
// int main() {
//    pthread_t t1,t2;
//    pthread_create(&t1,NULL,tableof2,NULL);//function ko thread bnane ka kaam krta hai
//    pthread_create(&t2,NULL,squareoffirst10naturalnum,NULL);
//    pthread_join(t1,NULL);
//    pthread_join(t2,NULL);//jab tak dono thread ka message complete nhi hogya ya termiate i hoga tab tak neeche vla msg print nhi hogaa
//    cout<<"all thread have completed"<<endl;
// }


// #include <iostream>
// #include <pthread.h>
// using namespace std;
// //void* kisi bhi type ke data ka adress leta hai

// void* tableof2(void* args){
//     for(int i=1;i<=10;i++){
//         cout<<i*2<<endl;
//     }
//     cout<<"----------";
//     return nullptr;
// }
// void* squareoffirst10naturalnum(void* args){
//     for(int i=1;i<=10;i++){
//         cout<<i*i<<endl;
//     }
//     cout<<"----------";
//     return nullptr;
// }
// int main() {
//    pthread_t t1,t2;
//    pthread_create(&t1,NULL,tableof2,NULL);//function ko thread bnane ka kaam krta hai
//    pthread_create(&t2,NULL,squareoffirst10naturalnum,NULL);
//    pthread_join(t1,NULL);
//    pthread_join(t2,NULL);//jab tak dono thread ka message complete nhi hogya ya termiate i hoga tab tak neeche vla msg print nhi hogaa
//    cout<<"all thread have completed"<<endl;
// }






// #include <iostream>
// #include <pthread.h>
// using namespace std;
// //void* kisi bhi type ke data ka adress leta hai
// pthread_mutex_t lock=PTHREAD_MUTEX_INITIALIZER;

// int arr[100];
// int sum1=0;
// int sum2=0;
// void* firstarr(void* args){
//     pthread_mutex_lock(&lock);
//     for(int i=0;i<=50;i++){
//         sum1+=arr[i];
//     }
//     cout<<sum1;
//     cout<<"----------";
//     pthread_mutex_unlock(&lock);
//     return nullptr;
// }
// void* secondarr(void* args){
//     pthread_mutex_lock(&lock);

//     for(int i=51;i<100;i++){
//         sum2+=arr[i];
//     }
//     cout<<sum2;
//     cout<<"----------";
//     pthread_mutex_unlock(&lock);
//     return nullptr;
// }
// int main() {
//      // Initialize array with values from 1 to 100
//      for (int i = 0; i < 100; i++) {
//         arr[i] = i + 1;
//     }
//    pthread_t t1,t2;
//    pthread_create(&t1,NULL,firstarr,NULL);//function ko thread bnane ka kaam krta hai
//    pthread_create(&t2,NULL,secondarr,NULL);
//    pthread_join(t1,NULL);
//    pthread_join(t2,NULL);//jab tak dono thread ka message complete nhi hogya ya termiate i hoga tab tak neeche vla msg print nhi hogaa
//    cout<<"all thread have completed"<<sum1+sum2<<endl;
// }





// #include <iostream>
// #include <pthread.h>
// using namespace std;
// // void* kisi bhi type ke data ka adress leta hai
// const int n=100;
// int arr[n];
// int n1;
// int maxelement;
// pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;
// void *max(void *args)
// {

//     pthread_mutex_lock(&lock);

//     maxelement=arr[0];
//     for (int i = 1; i <= n1; i++)
//     if (arr[i]>maxelement){
//         maxelement=arr[i];
//     }
//     cout<<maxelement;
//     cout << "----------";
//     pthread_mutex_unlock(&lock);
//     return nullptr;
// }

// int main()
// {
//     pthread_t t1;
//     cout << "Enter number of elements: ";
//     cin >> n1;
//     cout << "Enter elements: ";
//     for (int i = 0; i < n1; i++) {
//         cin >> arr[i];
//     }
//     pthread_create(&t1, NULL, max, NULL); // function ko thread bnane ka kaam krta hai
//     pthread_join(t1, NULL);
//     cout << "all thread have completed" << endl;
// }




// #include <iostream>
// #include <pthread.h>
// using namespace std;

// pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER; // Mutex for synchronized output

// void* tableOf2(void* arg) {
//     pthread_mutex_lock(&lock);
//     cout << "Table of 2:\n";
//     for (int i = 1; i <= 10; i++) {
//         cout  << 2 * i << endl;
//     }
//     cout << "------------------------" << endl;
//     pthread_mutex_unlock(&lock);
//     return nullptr;
// }

// // Function to print table of 5
// void* tableOf5(void* arg) {
//     pthread_mutex_lock(&lock);
//     cout << "Table of 5:\n";
//     for (int i = 1; i <= 10; i++) {
//         cout << 5 * i << endl;
//     }
//     cout << "------------------------" << endl;
//     pthread_mutex_unlock(&lock);
//     return nullptr;
// }

// // Function to print table of 10
// void* tableOf10(void* arg) {
//     pthread_mutex_lock(&lock);
//     cout << "Table of 10:\n";
//     for (int i = 1; i <= 10; i++) {
//         cout << 10 * i << endl;
//     }
//     cout << "------------------------" << endl;
//     pthread_mutex_unlock(&lock);
//     return nullptr;
// }

// int main() {
//     pthread_t t1, t2, t3;

//     pthread_create(&t1, nullptr, tableOf2, nullptr);
//     pthread_create(&t2, nullptr, tableOf5, nullptr);
//     pthread_create(&t3, nullptr, tableOf10, nullptr);

//     pthread_join(t1, nullptr);
//     pthread_join(t2, nullptr);
//     pthread_join(t3, nullptr);

//     cout << "All tables have been printed." << endl;

//     return 0;
// }




// #include <iostream>
// #include<mutex>
// #include <pthread.h>
// using namespace std;
// mutex m;

// int arr[10];
// int pro1=1;
// int pro2=1;
// void* firstarr(void* args){
//     m.lock();
//     for(int i=0;i<=5;i++){
//         pro1*=arr[i];
//     }
//     cout<<pro1;
//     cout<<"----------";
//     m.unlock();
//     return nullptr;
// }
// void* secondarr(void* args){
//     m.lock();

//     for(int i=6;i<10;i++){
//         pro2*=arr[i];
//     }
//     cout<<pro2;
//     cout<<"----------";
//     m.unlock();
//     return nullptr;
// }
// int main() {
//      for (int i = 0; i < 10; i++) {
//         arr[i] = i + 1;
//     }
//    pthread_t t1,t2;
//    pthread_create(&t1,NULL,firstarr,NULL);
//    pthread_create(&t2,NULL,secondarr,NULL);
//    pthread_join(t1,NULL);
//    pthread_join(t2,NULL);
//    cout<<"all thread have completed.TOTAL"<<pro1+pro2<<endl;
// }

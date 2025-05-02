
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


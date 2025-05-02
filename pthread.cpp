
// //cstyle multithreading
// #include <iostream>
// #include <pthread.h>
// using namespace std;
// //void* kisi bhi type ke data ka adress leta hai

// void* thread1(void* args){
//     cout<<"hello from thread1"<<endl;
//     return nullptr;
// }
// void* thread2(void* args){
//     cout<<"hello from thread2"<<endl;
//     return nullptr;
// }

// //main thread

// int main() {
//    pthread_t t1,t2;
//    pthread_create(&t1,NULL,thread1,NULL);//function ko thread bnane ka kaam krta hai
//    pthread_create(&t2,NULL,thread2,NULL);
//    pthread_join(t1,NULL);
//    pthread_join(t2,NULL);//jab tak dono thread ka message complete nhi hogya ya termiate i hoga tab tak neeche vla msg print nhi hogaa
//    cout<<"all thread have completed"<<endl;
// }
// //raise condition- when many multithread are running so that we get undefined behaviour

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
// int count=0;
// void* increment1(void* args){
//     for(int i=1;i<=10000;i++){
//         count++;
//     }
//     cout<<"----------";
//     return nullptr;
// }
// void* increament2(void* args){
//     for(int i=1;i<=10000;i++){
//         count++;
//     }
//     cout<<"----------";
//     return nullptr;
// }
// int main() {
//    pthread_t t1,t2;
//    pthread_create(&t1,NULL,increment1,NULL);//function ko thread bnane ka kaam krta hai
//    pthread_create(&t2,NULL,increament2,NULL);
//    pthread_join(t1,NULL);
//    pthread_join(t2,NULL);//jab tak dono thread ka message complete nhi hogya ya termiate i hoga tab tak neeche vla msg print nhi hogaa
//    cout<<"count is"<<count;
//    cout<<"all thread have completed"<<endl;
// }

/*to prevent above race cond:
when two or more threads are trying to access particular resource at a same time there will be high chances of undefined behaviour the situation is known as race cond in multithread program*

to prevent these cond we need to sychronize our code
*/

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


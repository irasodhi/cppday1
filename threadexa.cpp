// #include <iostream>
// #include <thread>
// using namespace std;

// void thread1(){
//     cout<<"hello threa1"<<endl;
// }
// void thread2(){
//     cout<<"hello thread2"<<endl;
// }
// int main() {
//     thread t1(thread1);
//     thread t2(thread2);
//     t1.join();
//     t2.join();
//     cout<<"all threads have completed";
// }

// #include <iostream>
// #include <thread>
// #include<mutex>
// using namespace std;
// mutex m;
// int count=0;
// void increament1(){
//     for(int i=1;i<=10000;i++){
//         m.lock();
//         count++;
//         m.unlock();
//     }
// }
// void increament2(){
//     for(int i=1;i<=10000;i++){
//         m.lock();
//         count++;
//         m.unlock();
//     }
// }
// int main() {
//     thread t1(increament1);
//     thread t2(increament2);
//     t1.join();
//     t2.join();
//     cout<<"all threads have completed";
// }

// //synchronuzeation-one thread can access onemresource at a time.




// #include <iostream>
// using namespace std;
// class Counter{
//     private:
//     static int count;
//     public:
//     Counter(){
//         count++;
//     }
//     static void showcount(){
//         cout<<count<<endl;

//     }
// };
// int Counter::count=0;
// int main() {
//   Counter c1,c2;
//   Counter::showcount();

//     Counter c3;
//   Counter::showcount();
//   Counter c4;
//   Counter::showcount();
//   Counter c5;
//   Counter::showcount();

// }


// #include <iostream>
// using namespace std;
// class Math{
//     public:
//     static int square(int x){
//         return x*x;
//     };
  

// };

// int main() {
// cout<<Math::square(5)<<endl;
// cout<<Math::square(10)<<endl;
// }




// #include <iostream>
// using namespace std;

// class binary{
//     public:
//     string s;

//     void read(void);
//     void checkbin(void);
//     void onecomp(void);
//     void display(void);


// };
// void binary ::read(void){
//     cin>>s;
// }
// void binary::checkbin(void){
//     for(int i=0;i<s.length();i++){
//         if(s.at(i)!='0' && s.at(i)!='1'){
//             cout<<"not a binary";
//             exit(0);
//         }
//     }
// }

// void binary::onecomp(void){
//     for(int i=0;i<s.length();i++){
//         if( s.at(i)=='0') {
//             s.at(i)='1';
//         }
//         else{
//                 s.at(i)='0';
//             }
//         } 
// }
// void binary::display(void){
//   for(int i=0;i<s.length();i++){
//     cout<<s.at(i);
//   }
// }

// int main() {
//    binary b;
//    b.read();
//    b.checkbin();
//    b.display();
//    b.onecomp();
//    b.display();
// }

// #include <iostream>
// using namespace std;

// class Shop{
//     public:
//     int itemId[100];
//     int itemPrice[100];
//     int counter=0;
//     void initcounter(void){counter=0;}
//     void setdata(void);
//     void getdata(void);


// };
// void Shop::setdata(void){
//     cout<<"enter id";
//     cin>>itemId[counter];
//     cout<<"enter price";
//     cin>>itemPrice[counter];
//     counter++;
// }
// void Shop::getdata(void){
//     for(int i=0;i<counter;i++){
//         cout<<itemId[i]<<endl<<itemPrice[i]<<endl;
//     }
// }

// int main() {
//    Shop d;
//    d.initcounter();
//    d.setdata();
//    d.setdata();
//    d.setdata();
//    d.getdata();
//}


#include <iostream>
using namespace std;

class E{
    int id;
    static int count;
    public:
    void setdata(void){
        cout<<"enterid";
        cin>>id;
        count++;
    }
    void getdata(void){
        cout<<"id"<<id<<"count"<<count;
    }

};
int E::count=0;

int main() {
    E h,r,l;
    h.setdata();
    h.getdata();
    r.setdata();
    r.getdata();
    l.setdata();
    l.getdata();
}
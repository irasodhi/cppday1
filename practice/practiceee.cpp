// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         string s;
//         cin >> s;
//         string v = "";
//         string cons = "";
//         for (char c : s)
//         {
//             char low = tolower(c);
//             if (isalpha(c))
//             {
//                 if (low == 'a' || low == 'e' || low == 'i' ||
//                     low == 'o' || low == 'u')
//                 {
//                     v += c;
//                 }
            
//             else
//             {
//                 cons += c;
//             }
//             }
//             else{
//                 cons+=c;
//             }
//         }
//         cout << v << endl;
//         cout << cons;
//     }
// }


// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         string s;
//         cin >> s;
//         string rev=s;

// reverse(rev.begin(),rev.end());
// if(rev==s){
//     cout<<"yes";
// }
// else{
//     cout<<"no";
// }
//     }
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     int mid=0;
   
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];

//     }
//    for(int i=0;i<n;i++){
//     if(arr[i]!=0){
//         arr[mid++]=arr[i];
//     }
    
//    }
//    while(mid<n){
//     arr[mid++]=0;
//    }
//    for(int i=0;i<n;i++){
//     cout<<arr[i];
//    }
// }



// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     int arr[n];
//     int k;
//     cin>>k;
//     for(int i=0 ;i<n;i++){
//         cin>>arr[i];
//     }

//    for(int i=0;i<n;i++){
//     for(int j=0;j<n-i-1;j++){
//         if (arr[j]>arr[j+1]){
//             int temp=arr[j];
//             arr[j]=arr[j+1];
//             arr[j+1]=temp;
//         }
//     }
//    }
//    if(k>0&&k<=n){
//     cout<<arr[k-1];
//    }
//    else{
//     cout<<"invalid k";
//    }
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     int max;
//     int arr[n];
   
//     for(int i=0 ;i<n;i++){
//         cin>>arr[i];
//     }
//     max=arr[0];
//     for(int i=1;i<n;i++){
        

//     if(max<arr[i]){
//         max=arr[i];
//     }
   

// }
//  cout<<max;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     string s;
//     cin>>s;
//     string re="";
//     for(int i=0;i<n;i+=2){
//         string p=s.substr(i,2);
//         if(p=="00"){
//             re+="A";
//         }
//         else if(p=="01"){re+="T";}
//          else if(p=="10"){re+="C";}

//         else if(p=="11"){re+="G";}
        
        
//     }
//     cout<<re;

// }



// #include <iostream>
// using namespace std;

// int main() {
//   int n;
//     cin>>n;
//   string s,g;
//   cin>>s>>g;
//   string m="";
//   for (int i = 0; i < n; i++) {
//             if (S[i] == guess[i]) {
//                 M += 'G';
//             } else {
//                 M += 'B';
//             }
//         }
//         cout << M << "\n";
//     }


// }



// #include <iostream>
// using namespace std;

// int main() {
//     int n,x,y;
//     cin>>n>>x>>y;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int sum=0;
//     int sum2=0;
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//     }
//     for(int i=0;i<n;i++){
//     int ne=arr[i]-y;
//     if(ne>0){
//         sum2+=ne;
//     }
//     }
//     int tot=sum2+x;
//     if(tot<sum){
//         cout<<"coupon";

//     }
//     else{
//         cout<<"no coupon";
//     }


// }


// #include <iostream>
// using namespace std;

// class SmartD{
//     protected:
//     int deviceid;
//     public:
//     SmartD(int d){
//         deviceid=d;
//     }
//     virtual void display()=0;
//     virtual ~SmartD(){}

// };
// class Smartb:public SmartD{
//     private:
//     int brightness;
//     public:
//     Smartb(int d,int b):SmartD(d),brightness(b){}
//     void display() override{
//         cout<<deviceid;
//         cout<<brightness;
//     }
// };
// class Smartl:public SmartD{
//     private:
//     int status;
//     public:
//     Smartl(int d,int s):SmartD(d),status(s){}
//     void display() override{
//         cout<<deviceid;
//         cout<<status;
//     }
// };
// class Smartt:public SmartD{
//     private:
//     int temp;
//     public:
//     Smartt(int d,int t):SmartD(d),temp(t){}
//     void display() override{
//         cout<<deviceid;
//         cout<<temp;
//     }
// };

// int main() {
//     int N;
//     cin>>N;
//     SmartD** dev=new SmartD*[N];
   
//         for (int i = 0; i < N; i++) {
//         string type;
//         int id;
//         cin >> type >> id;

//         if (type == "Light") {
//             int brightness;
//             cin >> brightness;
//             dev[i] = new Smartb(id, brightness);
//         } else if (type == "Lock") {
//             int status;
//             cin >> status;
//             dev[i] = new Smartl(id, status);
//         } else if (type == "Thermostat") {
//             int temp;
//             cin >> temp;
//             dev[i] = new Smartt(id, temp);
//         }
//         else{
//             cout<<"unknown device type";
//         }
//     }
//     for(int i=0;i<N;i++){
//         if(dev[i])
//         {
//             dev[i]->display();
//         }
//     }
//     }

// #include <iostream>
// using namespace std;



// class Robot{
//     protected:
//     string modeln;
//     int weight;
//     public:
//     Robot(string m,int w){
//         modeln=m;
//         weight=w;
//     }
//     virtual void display()=0;
//     virtual ~Robot(){};


// };
// class fun:public Robot{
//     private:
//     string type;
//     public:
//     fun(string m,int w,int t):Robot(m,w),type(t){};
//     void display() override{
//         cout<<modeln;
//         cout<<weight;
//         cout<<type;
//     }


// };
// class ene:public Robot{
//     private:
//     string etype;
//     public:
//     ene(string m,int w,int et):Robot(m,w),etype(et){};
//     void display() override{
//         cout<<modeln;
//         cout<<weight;
//         cout<<etype;
//     }
// };
// int main() {
//   int N;
//   cin>>N;
//   Robot** re=new Robot*[N];
//   int 
//   for(int i=0;i<N;i++){

//   }
// }


#include <iostream>
#include <vector>
using namespace std;

class Vehicle{
    protected:
    string modn;
    public:
    Vehicle(string m){
        modn=m;
    }
    virtual void display()=0;
    virtual ~Vehicle(){};
    
};
class Car:public Vehicle{
    private:
    int fuel;
    int seating;
    public:
    Car(string m,int f,int s):Vehicle(m),fuel(f),seating(s){};
    void display() override{
        cout<<fuel;
        cout<<seating;
    }
};
class Bike:public Vehicle{
    private:
    int engi;
    int type;
    public:
    Bike(string m,int e,int t):Vehicle(m),engi(e),type(t){};
    void display() override{
        cout<<engi;
        cout<<type;
    }
};
int main() {
    int n;
    cin>>n;
    vector <Vehicle*> ve;
    for(int i=0;i<n;i++){
        int choice,fuel,seating,engi,type;
        string modn;
        cin>>choice;
        cin>>modn;
        if(choice==1){
            cin>>fuel>>seating;
            ve.push_back(new Car(modn,fuel,seating));

        }
        else if(choice==2){
            cin>>engi>>type;
            ve.push_back(new Bike(modn,engi,type));
        }
        else{
            ve.push_back(nullptr);
        }
       

    }
    cout<<"Device details"<<endl;
        for(auto v:ve){
            if (v)v->display();
        }
    
    for(auto v:ve){
        delete v;
    }
}
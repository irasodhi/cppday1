#include <iostream>
using namespace std;

class Shape{
    public:
  
    string color;
    virtual int area()=0;
    virtual void print()=0;
    
};
    
class Rectangle:public Shape{
    public:
    int height;
    int widhth;
    string color;
    Rectangle(int h,int w,const string& c){
        height=h;
        widhth=w;
        color=c;
       
    }
    int area() override{
        return height*widhth;
    }
    void print() override{
        cout<<color;
        cout<<height;
        cout<<widhth;
        cout<<area();
    }
    
};
class Circle:public Shape{
    public:
    int radius;
    Circle(int r,const string& c){
        radius=r;
        color=c;
    }
    int area() override{
        return 3.141*radius*radius;
    }
    void print () override{
        cout<<color;
        cout<<radius;
        cout<<"area"<<fixed<<setprecision(3)<<area();
    }

};



int main() {
    int n;
    cin>>n;
    Shape* display[n];

    for(int i=0;i<n;i++){
        string t;
        cin>>t;

    if(t=="rectangle"){
        int w;int h;
        string color;
        cin>>h>>w>>color;
        display[i]=new Rectangle(w,h,color);

    }
    else if(t=="circle"){
        int r;
        string color;
        cin>>r>>color;
        display[i]=new Circle(r,color);
    }
    }
    for (int i = 0; i < n; ++i) {
        display[i]->print();
        cout << endl;
        delete display[i]; // clean up
    }
}
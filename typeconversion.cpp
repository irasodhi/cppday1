// #include <iostream>
// #include <vector>
// using namespace std;

// class Animal
// {
// public:
//     void sound()
//     {
//         cout << "animal sounds" << endl;
//     };
// };
// class Dog : public Animal
// {
// public:
//     void sound()
//     {
//         cout << "dog barks" << endl;
//     };
//     void fetch()
//     {
//         cout << "dog is fetching something" << endl;
//     };
// };
// class Cat : public Animal
// {
// public:
//     void sound()
//     {
//         cout << "cat meows" << endl;
//     };
//     void fetch()
//     {
//         cout << "cat is fetching something" << endl;
//         return;
//     }
//     cout << "unknown animal";
// }

// void
// identifyAnimal(Animal *animal)
// {
//     Dog *dog = static_cast<cat *>(animal);
//     if (cat)
//     {
//         cout << "this is cat" << endl;
//         cat->sound();
//         cat->fetch();
//     }
// }
// int main()
// {
//     // basic type(primitive) conversion example
//     //    char ch;
//     //    cout<<"enter character";
//     //    cin>>ch;

//     //    int asciiValue=(int)ch;//c style casting
//     //    int asciiValue=int(ch)//function style casting
//     //    int asciivalue=static_cast<int>(ch);//c++ style casting
//     //    cout<<asciiValue<<endl;

//     // Animal *animal;
//     // Dog *dog=new Dog();
//     // animal=static_cast <Animal*>(dog);
//     // animal->sound();

//     // dog->fetch();
//     // dog->sound();

//     // // Animal *animal=new Animal();
//     // // Dog *dog=static_cast<Dog*>(animal);
//     // // static cast gives undefined behaviour at run time

//     // Animal *animal=new Animal();
//     // Dog *dog=dynamic_cast<Dog*>(animal);

//     // if(!dog){
//     //     cout<<"this is not dog object"<<endl;
//     //     return 0;
//     // }
//     // dog->fetch();
//     // dog->sound();

//     vector<Animal *> animals = {new Dog(), new Cat(), new Animal()};
//     for (Animal *animal : animals)
//     {
//         identifyAnimal(animal);
//     }
// }

// #include <iostream>
// using namespace std;
// void modifyvalue(const int *p){
//     int *ptr=const_cast<int*>(p);
//     *ptr=56;
// }

// int main() {
//     int num=45;//truely const variable

//     int *ptr=const_cast<int*>(&num);
    
//     modifyvalue(&num);
//     cout<<num;
    
// }


// #include <iostream>
// using namespace std;

// class Student{
//     int value;
//     public:
//     student(int v){
//         this->value=v;
//     }
//     void setValue(int v)
//     {
//         this->value=v;
//     }
//     void display() const{
//         cout<<value<<endl;
//     }
// }
// int main() {
//    const Student s(45);
//    s.display();

//    Student *str=const_cast <Student*>(&s);
//    str->setValue(78);
//    s.display();  
// }

#include <iostream>
using namespace std;

class Complex{
    public:
    int real;
    int imag;

    Complex(int r,int i){
        real=r;
        imag=i;
    }

    Complex operator +(Complex const &obj){
        return Complex(real+obj.real,imag+obj.imag);
    }
    Complex operator *(Complex const &obj){
        int r=real*obj.real-imag*obj.imag;
        int i=real*obj.imag+imag*obj.real;
        return Complex(r,i);
    }
    void display(){
        cout<<real<<"+"<<imag<<"i";
    }

};

int main() {
    Complex c1(3, 4), c2(1, 2);
    Complex c3 = c1 + c2;
    cout << "Addition: ";
    c3.display();

    Complex c4 = c1 * c2;
    cout << "Multiplication: ";
    c4.display();

}

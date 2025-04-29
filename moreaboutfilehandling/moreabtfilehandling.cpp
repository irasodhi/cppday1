// // // stream = flow of data
// // // iostream= flow of input and output data

// // // child class of istream and ostream is iostream means in iostream we can
// // // implement both input and output

// // // file handling : the process to work with file(reading and writing the file )

// // #include <iostream>
// // #include <fstream>
// // using namespace std;

// // int main() {

// //     // writing the file
// //     // ofstream fout("data.txt",ios::app);  //opened the file for writing
// //     // fout<<"Hello World";
// //     // fout<<"\nHello World";
// //     // fout<<"\nHello World";
// //     // fout<<"\nHello World"; // writing  hello world to the data.txt file
// //     // fout.close();

// //     // /reading the file

// //     ifstream fin("data.txt");
// //     string data1;
// //     string data2;
// //     // fin>>data;

// //     // getline(fin,data1);
// //     // getline(fin,data2);

// //     // cout<<data1<<endl;
// //     // cout<<data2<<endl;

// //     while(!fin.eof()){
// //         string data;
// //         getline(fin,data);
// //         cout<<data<<endl;
// //     }
// //     fin.close();
// // }

// // #include <iostream>
// // #include <fstream>
// // using namespace std;

// // int main() {

// //     ofstream fout("user.txt",ios::app);
// //     string name;
// //     cout<<"Enter your name: ";
// //     cin>>name;
// //     fout<<"\nYour name is : "<<name;
// //     fout.close();

// // }

// /*student task
// create a file named student.txt and add some student detailss like(rollno,name,city)
// make sure to take input for each student from user
// 1 add student
// 2 get student by roll numb
// 3 exit

// enter your choice:1
// enter student roll numb 45
// enter student name pankaj kunmar
// enter student city delhi

// student add successfully
// 1 add student
// 2 get student by roll numb
// 3 exit
// choice 3
// thank you for using
// student.txt file data format
// 342323,pankaj,noida
// 342323,pankaj,noida
// 342323,pankaj,noida
// 342323,pankaj,noida

// */
// // student task

// #include <iostream>
// #include <fstream>
// using namespace std;
// string addstudent()
// {
//     ofstream fout("student.txt", ios::app);
//     int rollNum;
//     string name;
//     string city;
//     cout << "Enter Student Roll Number: ";
//     cin >> rollNum;
//     cin.ignore();
//     cout << "Enter Student Name: ";
//     getline(cin, name);
//     cout << "Enter Student city: ";
//     getline(cin, city);

//     fout << rollNum << " ," << name << " ," << city << endl;
//     fout.close();
//     return "Student add successfully";
// }
// void getStudentbyid()
// {
//     int rollnumb;
//     cout << "enter student roll num";
//     cin >> rollnumb;
//     ifstream file("student.txt");
//     string line;
//     bool found = false;

//     while (getline(file, line))
//     {
//         int pos = line.find(",");
//         string sRollnumb = line.substr(0, pos);
//         if (stoi(sRollnumb) == rollnumb)
//         {
//             found = true;
//         }
//     return found;
//     }

//     file.close();

// }
// int main()
// {
//     bool isAppRunning = true;
//     while (isAppRunning)
//     {
//         cout << "1 add student" << endl;
//         cout << "2 get student by id" << endl;
//         cout << "3 Exit" << endl;
//         cout << "Enter Your Choice ";

//         int choice;
//         cin >> choice;

//         switch (choice)
//         case 1:
//         {
//             addstudent();
//             break;

//         case 2:
//             getStudentbyid();
//             break;
//         case 3:
//             cout << "do you want to exit(y/n)";
//             char res;
//             cin >> res;
//             if (res == 'y')
//                 isAppRunning = false;
//             cout << "thankyou";
//         default:
//             cout << "Invalid choice";
//             break;
//         }
//     }
// }

/*
1 add new bppk
2 search by book id
3 get all books
4 update book by id
5 delete book by id
6 exit

*/

// #include <iostream>
// #include <fstream>
// #include <sstream>
// using namespace std;

// string addStudent(){

//         int rollNumber;
//         string name, city;

//         cout <<"Enter Student Roll Number: ";
//         cin >>rollNumber;

//         cin.ignore();
//         cout <<"Enter Student Name: ";
//         getline(cin,name);

//         cout <<"Enter Student City: ";
//         getline(cin,city);

//         ofstream file("student.txt", ios::app); //opened for writing
//         file <<rollNumber<<","<<name<<","<<city<<"\n";
//         file.close();
//         return "Student Added successfully.";
// }

// void getStudentById(){
//         int rollNumber;
//         cout <<"Enter Student Roll Number: ";
//         cin >>rollNumber;

//         ifstream file("student.txt"); //opened for reading
//         string line;
//         bool found = false;

//         while(getline(file, line)){

//             //Approach 1:
//             stringstream ss(line);
//             string r;

//             string name, city;
//             getline(ss, r, ',');
//             getline(ss, name, ',');
//             getline(ss, city, ',');

//             if(stoi(r)==rollNumber){
//                 found = true;
//                 cout <<"--------------------------------------------------------"<<endl;
//                 cout <<"Roll Number: "<<r<<" Name: "<<name<<" City: "<<city<<endl;
//                 cout <<"--------------------------------------------------------"<<endl;
//             }

//             //Approach 2:
//             // int r;
//             // string name, city;
//             //data in each line - 45434,Rakesh,Noida
//             // int pos1 = line.find(",");
//             // int pos2 = line.rfind(",");

//             // r = stoi(line.substr(0, pos1));

//             // if(r==rollNumber){
//             //     found = true;
//             //     name = line.substr(pos1+1,pos2);
//             //     city = line.substr(pos2+1);

//             //     cout <<"--------------------------------------------------------"<<endl;
//             //     cout <<"Roll Number: "<<r<<" Name: "<<name<<" City: "<<city<<endl;
//             //     cout <<"--------------------------------------------------------"<<endl;
//             // }

//         }
//         if(!found){
//             cout <<"--------------------------------------------------------"<<endl;
//             cout <<"Invalid Roll Number"<<endl;
//             cout <<"--------------------------------------------------------"<<endl;
//         }
//         file.close();
// }

// void showMenu(){
//         cout <<"1. Add Student"<<endl;
//         cout <<"2. Get Student By Id"<<endl;
//         cout <<"3. Exit"<<endl;
//         cout <<"Enter Your Choice: ";
// }

// int main(){

//         bool isAppRunning = true;
//     while(isAppRunning){

//         showMenu();

//         int choice;
//         cin >> choice;

//         switch(choice){
//         case 1:
//             cout <<addStudent()<<endl;
//             break;
//         case 2:
//             getStudentById();
//             break;
//         case 3:
//             cout <<"Do you want to exit(y/n)?: ";
//             char res;
//             cin >>res;
//             if(res=='y' || res=='Y')
//                 isAppRunning = false;
//             cout <<"Thank you for using the applicaiton!";
//             break;
//         default:
//             cout <<"Invalid Choice, Please try again!";
//             break;
//         }

//     }

// }

// #include <iostream>
// #include <fstream>
// #include <sstream>
// using namespace std;
// void showmenu(){
//     cout << " 1 add new bppk" << endl;
//     cout << "2 search by book id" << endl;
//     cout << "3 get all books" << endl;
//     cout << "4 update book by id" << endl;
//     cout << "5 delete book by id" << endl;
//     cout << "6 exit"<<endl;
//     cout<<"enter your choice"<<endl;
// }
// int main()
// {
//     bool Apprunning = true;
//     while (Apprunning)
//     {
//         showmenu();
//         int choice;
//         cin>>choice;
//         switch(choice){
//             case1:
//             St
//         }
//     }
// }
#include <iostream>
#include <fstream>
using namespace std;

void addStudent()
{
    int id;
    string name,city;
    cout << "enter unique id";
    cin >> id;

    cin.ignore();
    cout << "enter student name";
    getline(cin, name);

    cout << "enter student city";
    getline(cin, city);

    ofstream file("student.txt", ios::app);
    file <<rollNumber<<","<<name<<","<<city<<"\n";
            file.close();
            return "Student Added successfully.";
}
void getstudentbyid(){
    int id;
    cout<<"enter student id";
    cin>>id;

    ifstream file("student.txt";
    string line;
while(getline(file,line)){
    stringstream ss(line);
    string studentid ,studentname,studentcity;
    getline(ss,studentid,',');

    if (stoi(studentId)==id)
}
}
int main()
{
    bool isRunning = true;
    while (true)
    {
        cout << "1 add student" << endl;
        cout << "2 get student by id" << endl;
        cout << "3 update student by id" << endl;
        cout << "4 delete student by id" << endl;
        cout << "enter choice";
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            addStudent();
            break;
        case 2:
            getStudentByid();
            break;
        case 3:
            updateStudentbyid();
            break;
        case 4:
            deletestudentbyid();
            break;
        case 5:
            cout << "Do you want to exit(y/n)?: ";
            char res;
            cin >> res;
            if (res == 'y' || res == 'Y')
                isAppRunning = false;
            cout << "Thank you for using the applicaiton!";
            break;
        default:
            cout << "Invalid Choice, Please try again!";
            break;
        }
    }
}
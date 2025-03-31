// // #include <iostream>
// // using namespace std;
// // struct student{
// //     int rollnumb;
// //     string name;
// //     float marks;
// // };
// // int main(){
// //     //struct:it stands for structure it is used to store diff type of data in a single variable.
// //     // syntax:
// //     // struct structname{
// //     //     data_type member1,
// //     //
// //     // struct Student stu1;
// //     student stu1;
// //     stu1.rollnumb=87;
// //     stu1.name="champak";
// //     stu1.marks=456.56;

// //     cout<<stu1.name<<endl;
// //     cout<<stu1.rollnumb<<endl;
// //     cout<<stu1.marks<<endl;
// //     }
// #include <iostream>
// #include <vector>
// using namespace std;

// /*
//     Student: Create an Employee struct with fields: employeeName, employeeSalary, employeeDepartment, employeeAddress, and perform the following operations:

//     1. Add 10 different employee object to vector<Employee>, its better if you can take input for employee from the user.
//     2. Find Print the Name of employees who belong to Delhi
//     3. Find out the total salary given to the IT deparment.
// */

// struct Employee{
//     string employeeName;
//     double employeeSalary;
//     string employeeDepartment;
//     string employeeAddress;
// };


// vector<Employee> employeeList;

// string addEmployee(){
//     Employee employee;
//     cin.ignore();
//     cout <<"Enter Name: ";
//     getline(cin, employee.employeeName);

//     cout <<"Enter Salary: ";
//     cin>>employee.employeeSalary;

//     cout <<"Enter Departement: ";
//     cin>>employee.employeeDepartment;

//     cin.ignore();
//     cout <<"Enter Address: ";
//     getline(cin, employee.employeeAddress);

//     employeeList.push_back(employee);
//     return "Employee has added successfully";
// }

// void getAllEmployees(){
//     for(Employee emp: employeeList){
//         cout <<"-------------------------------------"<<endl;
//         cout <<"Employee Name: "<<emp.employeeName<<endl;
//         cout <<"Employee Salary: "<<emp.employeeSalary<<endl;
//         cout <<"Employee Department: "<<emp.employeeDepartment<<endl;
//         cout <<"Employee Address: "<<emp.employeeAddress<<endl;
//         cout <<"-------------------------------------"<<endl;
//     }
// }

// void menu(){
//     cout <<"1. Add Employee"<<endl;
//     cout <<"2. Get All Employees"<<endl;
//     cout <<"3. Exit"<<endl;
//     cout <<"Enter Your Choice: ";
// }

// int main(){

//     bool flag = true;

//     while(flag){
//         menu();
//         int choice;
//         cin>>choice;

//         switch (choice)
//         {
//         case 1:
//             addEmployee();
//             break;
//         case 2: 
//             getAllEmployees();
//             break;
//         case 3:
//             flag = false;
//             break;
//         default:
//             cout <<"Invalid Choice, Please Enter Again"<<endl;
//             break;
//         }
//     }

// }
// #include <iostream>
// using namespace std;

// class Student{
//     public:
//     int rollNo;
//     string name;
//     double marks;
//     void printDetails(){
//         cout<<"\nStudent Name: "+name+"\nStudentMarks:"+to_string(marks)+"\nStudentNumber RollNumber:"+to_string(rollNo)<<endl;
//     }
// };
// int main() {
//     Student student1;
//     student1.name="Champak";
//     student1.marks=45.45;
//     student1.rollNo=45;

//     student1.printDetails();
//     cout<<"---------------------------"<<end;
//}








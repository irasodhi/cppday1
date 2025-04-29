
// #include <iostream>
// #include <fstream>
// #include <sstream>

// using namespace std;

// class Book{
//     private:
//     int bookId;
//     string bookName;
//     string authorName;
//     string status = "Available";

//     public:
//     Book(){

//     }
//     Book(int id, string bName, string aName){
//         this->bookId = id;
//         this->bookName = bName;
//         this->authorName = aName;
//     }
//     //getter methods
//     int getBookId(){
//         return this->bookId;
//     }
//     string getBookName(){
//         return this->bookName;
//     }
//     string getAuthorName(){
//         return this->authorName;
//     }
//     string getStatus(){
//         return this->status;
//     }
//     //setter methods
//     void setBookId(int id){
//         this->bookId = id;
//     }
//     void setBookName(string name){
//         this->bookName = name;
//     }
//     void setAuthorName(string name){
//         this->authorName = name;
//     }
//     void setStatus(string status){
//         this->status = status;
//     }

//     string toString(){
//         //342323,Book1,Author1,Available
//         return to_string(this->bookId) + "," +this->bookName+", "+this->authorName + "," + this->status;
//     }
// };

// //abstract class
// class BookService{
//     public:
//     virtual string addBook(Book& book) = 0;
//     virtual Book getBookById(int bookId) = 0;
//     virtual void getAllBooks() = 0;
//     virtual string updateBookById(Book& book) = 0;
//     virtual string deleteBookById(int bookId) = 0;
// };

// class BookServiceImpl: public BookService{
//     public:
//     string addBook(Book& book) override{

//         ofstream file("library.txt", ios::app);
//         if(!file.is_open()){
//             return "Error While Opening the File";
//         }
//         file << book.toString()<<"\n";
//         file.close();
//         return "New Book has added successfully!";
        
//     }
//     Book getBookById(int bookId)override{
        
//         ifstream file("library.txt");
//         if(!file.is_open()){
//             cout <<"Error While Opening the File"<<endl;
//         }
//         string line;
//         Book book;
//         while(getline(file, line)){
//             stringstream ss(line);

//             string id;
//             string title, author, status;
//             getline(ss, id, ',');
//             getline(ss, title, ',');
//             getline(ss, author, ',');
//             getline(ss, status, ',');

//             if(stoi(id)==bookId){
//                 book.setBookId(stoi(id));
//                 book.setBookName(title);
//                 book.setBookName(title);
//                 book.setAuthorName(author);
//                 book.setStatus(status);
//             }
//         }
//         return book;
//     }
   
//     void getAllBooks()override{

//     }
//     string updateBookById(Book& book)override{
//         return "";
//     }
//     string deleteBookById(int bookId)override{
//         return "";
//     }

// };

// class BookUI{
//     public:

//     static void showMenu(){
//         cout <<"1. Add Book"<<endl;
//         cout <<"2. Search Book By Id"<<endl;
//         cout <<"3. Get All Books"<<endl;
//         cout <<"4. Update Book By Id"<<endl;
//         cout <<"5. Delete Book By Id"<<endl;
//         cout <<"6. Exit"<<endl;
//         cout <<"Enter Your Choice: ";
//     }

//     static void addNewBook(){
//         int id;
        
//         string title, author;
        
//         cout <<"Enter Unique Book Id: ";
//         cin >> id;
        
//         cout <<"Enter Book Title: ";
//         cin.ignore();
//         getline(cin, title);

//         cout <<"Enter Book Author Name: ";
//         getline(cin, author);

//         cout <<"Id is: "<<id<<endl;
//         Book newBook = Book(id, title, author);

//         BookService *bookService = new BookServiceImpl();
//         cout <<"--------------------------------------------"<<endl;
//         cout <<bookService->addBook(newBook)<<endl;
//         cout <<"--------------------------------------------"<<endl;
//     }

//     static void bookById(){
//         int id;
        
//         cout <<"Enter Book Id: ";
//         cin >> id;

//         BookService *bookService = new BookServiceImpl();

//         Book book = bookService->getBookById(id);
//         if(book.getBookId()!=id){
//             cout <<"======================================"<<endl;
//             cout <<"Invalid Book Id"<<endl;
//             cout <<"======================================"<<endl;
//             return;
//         }

//         cout <<"--------------------------------------------"<<endl;
//         cout <<"Id: "<<book.getBookId()<<" Name: "<<book.getAuthorName()<<" Author: "<<book.getAuthorName()<<" Available: "<<book.getStatus()<<endl;
//         cout <<"--------------------------------------------"<<endl;
//     }
// };



// int main(){

//     cout <<"Welcome to Library Management System!"<<endl;
//     bool isAppRunning = true;

//     while(isAppRunning){
//         BookUI::showMenu();
//         int choice;
        
//         cin >>choice;

//         switch (choice)
//         {
//         case 1:
//             BookUI::addNewBook();
//             break;
//         case 2:
//             BookUI::bookById();
//             break;
//         case 3:
//             //get All Books
//             break;
//         case 4:
//             //update book by id
//             break;
//         case 5:
//             //delete book by id
//             break;
//         case 6:
//             cout <<"Do you want to exit(y/n)?: ";
//             char res;
//             cin>>res;
//             if(res=='Y' || res=='y'){
//                 isAppRunning = false;
//                 cout <<"Thank for you using the applicaiton!"<<endl;
//             }
//             break;
//         default:
//             cout <<"Invalid Choice, Please Enter Again"<<endl;
//             break;
//         }
//     }



// }

//----------------------------------------------------------------

// #include <iostream>
// #include <fstream>
// #include <sstream>
// #include <vector>

// using namespace std;

// class Book{
//     private:
//     int bookId;
//     string bookName;
//     string authorName;
//     string status = "Available";

//     public:
//     Book(){

//     }
//     Book(int id, string bName, string aName){
//         this->bookId = id;
//         this->bookName = bName;
//         this->authorName = aName;
//     }
//     //getter methods
//     int getBookId(){
//         return this->bookId;
//     }
//     string getBookName(){
//         return this->bookName;
//     }
//     string getAuthorName(){
//         return this->authorName;
//     }
//     string getStatus(){
//         return this->status;
//     }
//     //setter methods
//     void setBookId(int id){
//         this->bookId = id;
//     }
//     void setBookName(string name){
//         this->bookName = name;
//     }
//     void setAuthorName(string name){
//         this->authorName = name;
//     }
//     void setStatus(string status){
//         this->status = status;
//     }

//     string toString(){
//         //342323,Book1,Author1,Available
//         return to_string(this->bookId) + "," +this->bookName+", "+this->authorName + "," + this->status;
//     }
// };

// //abstract class
// class BookService{
//     public:
//     virtual string addBook(Book& book) = 0;
//     virtual Book getBookById(int bookId) = 0;
//     virtual void getAllBooks() = 0;
//     virtual string updateBookById(Book& book) = 0;
//     virtual string deleteBookById(int bookId) = 0;
// };

// class BookServiceImpl: public BookService{
//     public:
//     string addBook(Book& book) override{

//         ofstream file("library.txt", ios::app);
//         if(!file.is_open()){
//             return "Error While Opening the File";
//         }
//         file << book.toString()<<"\n";
//         file.close();
//         return "New Book has added successfully!";
        
//     }
//     Book getBookById(int bookId)override{
        
//         ifstream file("library.txt");
//         if(!file.is_open()){
//             cout <<"Error While Opening the File"<<endl;
//         }
//         string line;
//         Book book;
//         while(getline(file, line)){
//             stringstream ss(line);

//             string id;
//             string title, author, status;
//             getline(ss, id, ',');
//             getline(ss, title, ',');
//             getline(ss, author, ',');
//             getline(ss, status, ',');

//             if(stoi(id)==bookId){
//                 book.setBookId(stoi(id));
//                 book.setBookName(title);
//                 book.setBookName(title);
//                 book.setAuthorName(author);
//                 book.setStatus(status);
//             }
//         }
//         return book;
//     }
   
//     void getAllBooks()override{

//     }
//     string updateBookById(Book &book) override {
//         ifstream file("library.txt");
//         if (!file.is_open()) {
//             return "Error: Unable to open file!";
//         }

//         vector<Book> books;
//         string line;
//         bool found = false;

//         while (getline(file, line)) {
//             stringstream ss(line);
//             string idStr, bName, aName;

//             getline(ss, idStr, ',');
//             getline(ss, bName, ',');
//             getline(ss, aName, ',');

//             int id = stoi(idStr);

//             if (id == book.id) {
//                 books.emplace_back(book.id, book.bookName, book.authorName);
//                 found = true;
//             } else {
//                 books.emplace_back(id, bName, aName);
//             }
//         }
//         file.close();

//         if (!found) {
//             return "Error: Book ID not found!";
//         }

//         ofstream outFile("library.txt", ios::trunc);
//         if (!outFile.is_open()) {
//             return "Error: Unable to write to file!";
//         }

//         for (const auto &b : books) {
//             outFile << b.toString() << endl;
//         }
//         outFile.close();

//         return "Book updated successfully!";
//     }
// };
//     string deleteBookById(int bookId)override{
//         return "";
//     }

// };

// class BookUI{
//     public:

//     static void showMenu(){
//         cout <<"1. Add Book"<<endl;
//         cout <<"2. Search Book By Id"<<endl;
//         cout <<"3. Get All Books"<<endl;
//         cout <<"4. Update Book By Id"<<endl;
//         cout <<"5. Delete Book By Id"<<endl;
//         cout <<"6. Exit"<<endl;
//         cout <<"Enter Your Choice: ";
//     }

//     static void addNewBook(){
//         int id;
        
//         string title, author;
        
//         cout <<"Enter Unique Book Id: ";
//         cin >> id;
        
//         cout <<"Enter Book Title: ";
//         cin.ignore();
//         getline(cin, title);

//         cout <<"Enter Book Author Name: ";
//         getline(cin, author);

//         cout <<"Id is: "<<id<<endl;
//         Book newBook = Book(id, title, author);

//         BookService *bookService = new BookServiceImpl();
//         cout <<"--------------------------------------------"<<endl;
//         cout <<bookService->addBook(newBook)<<endl;
//         cout <<"--------------------------------------------"<<endl;
//     }

//     static void bookById(){
//         int id;
        
//         cout <<"Enter Book Id: ";
//         cin >> id;

//         BookService *bookService = new BookServiceImpl();

//         Book book = bookService->getBookById(id);
//         if(book.getBookId()!=id){
//             cout <<"======================================"<<endl;
//             cout <<"Invalid Book Id"<<endl;
//             cout <<"======================================"<<endl;
//             return;
//         }

//         cout <<"--------------------------------------------"<<endl;
//         cout <<"Id: "<<book.getBookId()<<" Name: "<<book.getAuthorName()<<" Author: "<<book.getAuthorName()<<" Available: "<<book.getStatus()<<endl;
//         cout <<"--------------------------------------------"<<endl;
//     }
// };



// int main(){

//     cout <<"Welcome to Library Management System!"<<endl;
//     bool isAppRunning = true;

//     while(isAppRunning){
//         BookUI::showMenu();
//         int choice;
        
//         cin >>choice;

//         switch (choice)
//         {
//         case 1:
//             BookUI::addNewBook();
//             break;
//         case 2:
//             BookUI::bookById();
//             break;
//         case 3:
//             //get All Books
//             break;
//         case 4:
//         LibraryManager lib;
//         int bookId;
//         string newBookName, newAuthor;
    
//         cout << "Enter Book ID to update: ";
//         cin >> bookId;
//         cin.ignore();  /
//         cout << "Enter new book name: ";
//         getline(cin, newBookName);
    
//         cout << "Enter new author name: ";
//         getline(cin, newAuthor);
    
//         string result = lib.updateBookById(bookId, newBookName, newAuthor);
//         cout << result << endl;
    
//         return 0;
//             break;
//         case 5:
//             //delete book by id
//             break;
//         case 6:
//             cout <<"Do you want to exit(y/n)?: ";
//             char res;
//             cin>>res;
//             if(res=='Y' || res=='y'){
//                 isAppRunning = false;
//                 cout <<"Thank for you using the applicaiton!"<<endl;
//             }
//             break;
//         default:
//             cout <<"Invalid Choice, Please Enter Again"<<endl;
//             break;
//         }
//     }



// }

//-------------------------------------------------------------------------------------

// #include <iostream>
// #include <fstream>
// #include <sstream>

// using namespace std;

// class Book{
//     private:
//     int bookId;
//     string bookName;
//     string authorName;
//     string status = "Available";

//     public:
//     Book(){

//     }
//     Book(int id, string bName, string aName){
//         this->bookId = id;
//         this->bookName = bName;
//         this->authorName = aName;
//     }
//     //getter methods
//     int getBookId(){
//         return this->bookId;
//     }
//     string getBookName(){
//         return this->bookName;
//     }
//     string getAuthorName(){
//         return this->authorName;
//     }
//     string getStatus(){
//         return this->status;
//     }
//     //setter methods
//     void setBookId(int id){
//         this->bookId = id;
//     }
//     void setBookName(string name){
//         this->bookName = name;
//     }
//     void setAuthorName(string name){
//         this->authorName = name;
//     }
//     void setStatus(string status){
//         this->status = status;
//     }

//     string toString(){
//         //342323,Book1,Author1,Available
//         return to_string(this->bookId) + "," +this->bookName+", "+this->authorName + "," + this->status;
//     }
// };

// //abstract class
// class BookService{
//     public:
//     virtual string addBook(Book& book) = 0;
//     virtual Book getBookById(int bookId) = 0;
//     virtual void getAllBooks() = 0;
//     virtual string updateBookById(Book& book) = 0;
//     virtual string deleteBookById(int bookId) = 0;
// };

// class BookServiceImpl: public BookService{
//     public:
//     string addBook(Book& book) override{

//         ofstream file("library.txt", ios::app);
//         if(!file.is_open()){
//             return "Error While Opening the File";
//         }
//         file << book.toString()<<"\n";
//         file.close();
//         return "New Book has added successfully!";
        
//     }
//     Book getBookById(int bookId)override{
        
//         ifstream file("library.txt");
//         if(!file.is_open()){
//             cout <<"Error While Opening the File"<<endl;
//         }
//         string line;
//         Book book;
//         while(getline(file, line)){
//             stringstream ss(line);

//             string id;
//             string title, author, status;
//             getline(ss, id, ',');
//             getline(ss, title, ',');
//             getline(ss, author, ',');
//             getline(ss, status, ',');

//             if(stoi(id)==bookId){
//                 book.setBookId(stoi(id));
//                 book.setBookName(title);
//                 book.setBookName(title);
//                 book.setAuthorName(author);
//                 book.setStatus(status);
//             }
//         }
//         return book;
//     }
   
//     void getAllBooks()override{

//     }
//     string updateBookById(Book& book)override{
//         return "";
//     }
//     string deleteBookById(int bookId)override{
//         return "";
//     }

// };

// class BookUI{
//     public:

//     static void showMenu(){
//         cout <<"1. Add Book"<<endl;
//         cout <<"2. Search Book By Id"<<endl;
//         cout <<"3. Get All Books"<<endl;
//         cout <<"4. Update Book By Id"<<endl;
//         cout <<"5. Delete Book By Id"<<endl;
//         cout <<"6. Exit"<<endl;
//         cout <<"Enter Your Choice: ";
//     }

//     static void addNewBook(){
//         int id;
        
//         string title, author;
        
//         cout <<"Enter Unique Book Id: ";
//         cin >> id;
        
//         cout <<"Enter Book Title: ";
//         cin.ignore();
//         getline(cin, title);

//         cout <<"Enter Book Author Name: ";
//         getline(cin, author);

//         cout <<"Id is: "<<id<<endl;
//         Book newBook = Book(id, title, author);

//         BookService *bookService = new BookServiceImpl();
//         cout <<"--------------------------------------------"<<endl;
//         cout <<bookService->addBook(newBook)<<endl;
//         cout <<"--------------------------------------------"<<endl;
//     }

//     static void bookById(){
//         int id;
        
//         cout <<"Enter Book Id: ";
//         cin >> id;

//         BookService *bookService = new BookServiceImpl();

//         Book book = bookService->getBookById(id);
//         if(book.getBookId()!=id){
//             cout <<"======================================"<<endl;
//             cout <<"Invalid Book Id"<<endl;
//             cout <<"======================================"<<endl;
//             return;
//         }

//         cout <<"--------------------------------------------"<<endl;
//         cout <<"Id: "<<book.getBookId()<<" Name: "<<book.getAuthorName()<<" Author: "<<book.getAuthorName()<<" Available: "<<book.getStatus()<<endl;
//         cout <<"--------------------------------------------"<<endl;
//     }
// };



// int main(){

//     cout <<"Welcome to Library Management System!"<<endl;
//     bool isAppRunning = true;

//     while(isAppRunning){
//         BookUI::showMenu();
//         int choice;
        
//         cin >>choice;

//         switch (choice)
//         {
//         case 1:
//             BookUI::addNewBook();
//             break;
//         case 2:
//             BookUI::bookById();
//             break;
//         case 3:
//             //get All Books
//             break;
//         case 4:
//             //update book by id
//             break;
//         case 5:
//             //delete book by id
//             break;
//         case 6:
//             cout <<"Do you want to exit(y/n)?: ";
//             char res;
//             cin>>res;
//             if(res=='Y' || res=='y'){
//                 isAppRunning = false;
//                 cout <<"Thank for you using the applicaiton!"<<endl;
//             }
//             break;
//         default:
//             cout <<"Invalid Choice, Please Enter Again"<<endl;
//             break;
//         }
//     }



// }




// #include <iostream>
// #include <fstream>
// #include <sstream>

// using namespace std;

// class Employee {
// private:
//     int empId;
//     string name;
//     string department;
//     double salary;

// public:
//     Employee() {}
//     Employee(int id, string empName, string dept, double sal) {
//         this->empId = id;
//         this->name = empName;
//         this->department = dept;
//         this->salary = sal;
//     }
//     int getEmpId() { return this->empId; }
//     string getName() { return this->name; }
//     string getDepartment() { return this->department; }
//     double getSalary() { return this->salary; }

//     void setEmpId(int id) { this->empId = id; }
//     void setName(string empName) { this->name = empName; }
//     void setDepartment(string dept) { this->department = dept; }
//     void setSalary(double sal) { this->salary = sal; }

//     string toString() {
//         return to_string(this->empId) + "," + this->name + "," + this->department + "," + to_string(this->salary);
//     }
// };

// class EmployeeService {
// public:
//     virtual string addEmployee(Employee& emp) = 0;
//     virtual Employee getEmployeeById(int empId) = 0;
//     virtual void getAllEmployees() = 0;
//     virtual string updateEmployeeById(Employee& emp) = 0;
//     virtual string deleteEmployeeById(int empId) = 0;
// };

// class EmployeeServiceImpl : public EmployeeService {
// public:
//     string addEmployee(Employee& emp) override {
//         ofstream file("employees.txt", ios::app);
//         if (!file.is_open()) {
//             return "Error while opening the file";
//         }
//         file << emp.toString() << "\n";
//         file.close();
//         return "Employee added successfully!";
//     }

//     Employee getEmployeeById(int empId) override {
//         ifstream file("employees.txt");
//         if (!file.is_open()) {
//             cout << "Error while opening the file" << endl;
//         }
//         string line;
//         Employee emp;
//         while (getline(file, line)) {
//             stringstream ss(line);
//             string id, name, dept, salary;
//             getline(ss, id, ',');
//             getline(ss, name, ',');
//             getline(ss, dept, ',');
//             getline(ss, salary, ',');
//             if (stoi(id) == empId) {
//                 emp.setEmpId(stoi(id));
//                 emp.setName(name);
//                 emp.setDepartment(dept);
//                 emp.setSalary(stod(salary));
//             }
//         }
//         return emp;
//     }

//     void getAllEmployees() override {
//         ifstream file("employees.txt");
//         if (!file.is_open()) {
//             cout << "Error while opening the file" << endl;
//             return;
//         }
//         string line;
//         cout << "\nList of Employees:" << endl;
//         while (getline(file, line)) {
//             cout << line << endl;
//         }
//         file.close();
//     }

//     string updateEmployeeById(Employee& emp) override {
//         return "Feature under development";
//     }

//     string deleteEmployeeById(int empId) override {
//         return "Feature under development";
//     }
// };

// class EmployeeUI {
// public:
//     static void showMenu() {
//         cout << "1. Add Employee" << endl;
//         cout << "2. Search Employee by ID" << endl;
//         cout << "3. Get All Employees" << endl;
//         cout << "4. Update Employee by ID" << endl;
//         cout << "5. Delete Employee by ID" << endl;
//         cout << "6. Exit" << endl;
//         cout << "Enter Your Choice: ";
//     }

//     static void addNewEmployee() {
//         int id;
//         string name, department;
//         double salary;
//         cout << "Enter Employee ID: ";
//         cin >> id;
//         cin.ignore();
//         cout << "Enter Employee Name: ";
//         getline(cin, name);
//         cout << "Enter Department: ";
//         getline(cin, department);
//         cout << "Enter Salary: ";
//         cin >> salary;

//         Employee newEmp(id, name, department, salary);
//         EmployeeService* empService = new EmployeeServiceImpl();
//         cout << empService->addEmployee(newEmp) << endl;
//     }

//     static void employeeById() {
//         int id;
//         cout << "Enter Employee ID: ";
//         cin >> id;
//         EmployeeService* empService = new EmployeeServiceImpl();
//         Employee emp = empService->getEmployeeById(id);
//         if (emp.getEmpId() != id) {
//             cout << "Employee not found!" << endl;
//             return;
//         }
//         cout << "\nEmployee Details:\n";
//         cout << "ID: " << emp.getEmpId() << " Name: " << emp.getName() << " Department: " << emp.getDepartment() << " Salary: " << emp.getSalary() << endl;
//     }
// };

// int main() {
//     cout << "Welcome to Employee Management System!" << endl;
//     bool isAppRunning = true;
//     while (isAppRunning) {
//         EmployeeUI::showMenu();
//         int choice;
//         cin >> choice;
//         switch (choice) {
//         case 1:
//             EmployeeUI::addNewEmployee();
//             break;
//         case 2:
//             EmployeeUI::employeeById();
//             break;
//         case 3:
//             EmployeeService* empService = new EmployeeServiceImpl();
//             empService->getAllEmployees();
//             break;
//         case 4:
//             cout << "Update feature not implemented yet!" << endl;
//             break;
//         case 5:
//             cout << "Delete feature not implemented yet!" << endl;
//             break;
//         case 6:
//             isAppRunning = false;
//             cout << "Thank you for using the Employee Management System!" << endl;
//             break;
//         default:
//             cout << "Invalid Choice, Please Try Again!" << endl;
//             break;
//         }
//     }
// }



// #include <iostream>
// #include <fstream>
// #include <sstream>
// #include <vector>

// using namespace std;

// class Order {
// private:
//     int orderID;
//     string customerName;
//     string productName;
//     double price;

// public:
//     Order() {}
//     Order(int id, string customer, string product, double cost) {
//         this->orderID = id;
//         this->customerName = customer;
//         this->productName = product;
//         this->price = cost;
//     }
//     int getOrderID() { return orderID; }
//     string getCustomerName() { return customerName; }
//     string getProductName() { return productName; }
//     double getPrice() { return price; }
//     string toString() {
//         return to_string(orderID) + "," + customerName + "," + productName + "," + to_string(price);
//     }
// };

// class OrderService {
// public:
//     virtual string addOrder(Order &order) = 0;
//     virtual void displayOrders() = 0;
//     virtual double calculateTotalSales() = 0;
//     virtual string updateOrder(int id, string newProduct, double newPrice) = 0;
//     virtual string deleteOrder(int id) = 0;
// };

// class OrderServiceImpl : public OrderService {
// public:
//     string addOrder(Order &order) override {
//         ofstream file("orders.txt", ios::app);
//         if (!file.is_open()) return "Error opening file";
//         file << order.toString() << endl;
//         file.close();
//         return "Order added successfully!";
//     }

//     void displayOrders() override {
//         ifstream file("orders.txt");
//         if (!file.is_open()) {
//             cout << "Error opening file" << endl;
//             return;
//         }
//         string line;
//         cout << "\nCurrent Orders:" << endl;
//         while (getline(file, line)) {
//             cout << line << endl;
//         }
//         file.close();
//     }

//     double calculateTotalSales() override {
//         ifstream file("orders.txt");
//         if (!file.is_open()) return 0;
//         string line;
//         double total = 0;
//         while (getline(file, line)) {
//             stringstream ss(line);
//             string id, customer, product, priceStr;
//             getline(ss, id, ','); getline(ss, customer, ','); getline(ss, product, ','); getline(ss, priceStr, ',');
//             total += stod(priceStr);
//         }
//         file.close();
//         return total;
//     }

//     string updateOrder(int id, string newProduct, double newPrice) override {
//         ifstream file("orders.txt");
//         vector<Order> orders;
//         string line;
//         while (getline(file, line)) {
//             stringstream ss(line);
//             string orderID, customer, product, priceStr;
//             getline(ss, orderID, ','); getline(ss, customer, ','); getline(ss, product, ','); getline(ss, priceStr, ',');
//             if (stoi(orderID) == id) {
//                 orders.emplace_back(id, customer, newProduct, newPrice);
//             } else {
//                 orders.emplace_back(stoi(orderID), customer, product, stod(priceStr));
//             }
//         }
//         file.close();
//         ofstream outFile("orders.txt", ios::trunc);
//         for (const auto &o : orders) {
//             outFile << o.toString() << endl;
//         }
//         outFile.close();
//         return "Order updated successfully!";
//     }

//     string deleteOrder(int id) override {
//         ifstream file("orders.txt");
//         vector<Order> orders;
//         string line;
//         while (getline(file, line)) {
//             stringstream ss(line);
//             string orderID, customer, product, priceStr;
//             getline(ss, orderID, ','); getline(ss, customer, ','); getline(ss, product, ','); getline(ss, priceStr, ',');
//             if (stoi(orderID) != id) {
//                 orders.emplace_back(stoi(orderID), customer, product, stod(priceStr));
//             }
//         }
//         file.close();
//         ofstream outFile("orders.txt", ios::trunc);
//         for (const auto &o : orders) {
//             outFile << o.toString() << endl;
//         }
//         outFile.close();
//         return "Order deleted successfully!";
//     }
// };

// class OrderUI {
// public:
//     static void showMenu() {
//         cout << "\n1. Add Order\n2. Display Orders\n3. Calculate Total Sales\n4. Update Order\n5. Delete Order\n6. Exit\nEnter choice: ";
//     }
// };

// int main() {
//     OrderService *orderService = new OrderServiceImpl();
//     bool isRunning = true;
//     while (isRunning) {
//         OrderUI::showMenu();
//         int choice;
//         cin >> choice;
//         switch (choice) {
//             case 1: {
//                 int id;
//                 string customer, product;
//                 double price;
//                 cout << "Enter Order ID, Customer Name, Product, Price: ";
//                 cin >> id >> customer >> product >> price;
//                 Order newOrder(id, customer, product, price);
//                 cout << orderService->addOrder(newOrder) << endl;
//                 break;
//             }
//             case 2:
//                 orderService->displayOrders();
//                 break;
//             case 3:
//                 cout << "Total Sales: " << orderService->calculateTotalSales() << endl;
//                 break;
//             case 4: {
//                 int id;
//                 string newProduct;
//                 double newPrice;
//                 cout << "Enter Order ID to update, New Product, New Price: ";
//                 cin >> id >> newProduct >> newPrice;
//                 cout << orderService->updateOrder(id, newProduct, newPrice) << endl;
//                 break;
//             }
//             case 5: {
//                 int id;
//                 cout << "Enter Order ID to delete: ";
//                 cin >> id;
//                 cout << orderService->deleteOrder(id) << endl;
//                 break;
//             }
//             case 6:
//                 isRunning = false;
//                 cout << "Thank you for using the Order Management System!" << endl;
//                 break;
//             default:
//                 cout << "Invalid choice! Try again." << endl;
//         }
//     }
//     delete orderService;
//     return 0;
// }





// #include <iostream>
// #include <fstream>
// #include <sstream>
// #include <vector>

// using namespace std;

// struct Flight {
//     string flightNumber;
//     string departureCity;
//     string destinationCity;
//     double ticketPrice;
// };

// class FlightService {
// public:
//     virtual string addFlight(Flight &flight) = 0;
//     virtual void displayFlights() = 0;
//     virtual double calculateTotalEarnings() = 0;
//     virtual string updateFlight(string flightNum, string newDestination, double newPrice) = 0;
//     virtual string deleteFlight(string flightNum) = 0;
// };

// class FlightServiceImpl : public FlightService {
// public:
//     string addFlight(Flight &flight) override {
//         ofstream file("flights.txt", ios::app);
//         if (!file.is_open()) return "Error opening file";
//         file << flight.flightNumber << "," << flight.departureCity << "," << flight.destinationCity << "," << flight.ticketPrice << endl;
//         file.close();
//         return "Flight added successfully!";
//     }

//     void displayFlights() override {
//         ifstream file("flights.txt");
//         if (!file.is_open()) {
//             cout << "Error opening file" << endl;
//             return;
//         }
//         string line;
//         cout << "\nCurrent Flights:" << endl;
//         while (getline(file, line)) {
//             cout << line << endl;
//         }
//         file.close();
//     }

//     double calculateTotalEarnings() override {
//         ifstream file("flights.txt");
//         if (!file.is_open()) return 0;
//         string line;
//         double total = 0;
//         while (getline(file, line)) {
//             stringstream ss(line);
//             string flightNum, departure, destination, priceStr;
//             getline(ss, flightNum, ','); getline(ss, departure, ','); getline(ss, destination, ','); getline(ss, priceStr, ',');
//             total += stod(priceStr);
//         }
//         file.close();
//         return total;
//     }

//     string updateFlight(string flightNum, string newDestination, double newPrice) override {
//         ifstream file("flights.txt");
//         vector<Flight> flights;
//         string line;
//         bool found = false;
//         while (getline(file, line)) {
//             stringstream ss(line);
//             Flight flight;
//             getline(ss, flight.flightNumber, ','); getline(ss, flight.departureCity, ','); getline(ss, flight.destinationCity, ','); getline(ss, line, ',');
//             flight.ticketPrice = stod(line);
//             if (flight.flightNumber == flightNum) {
//                 flight.destinationCity = newDestination;
//                 flight.ticketPrice = newPrice;
//                 found = true;
//             }
//             flights.push_back(flight);
//         }
//         file.close();
        
//         ofstream outFile("flights.txt", ios::trunc);
//         for (const auto &f : flights) {
//             outFile << f.flightNumber << "," << f.departureCity << "," << f.destinationCity << "," << f.ticketPrice << endl;
//         }
//         outFile.close();
//         return found ? "Flight updated successfully!" : "Flight not found!";
//     }

//     string deleteFlight(string flightNum) override {
//         ifstream file("flights.txt");
//         vector<Flight> flights;
//         string line;
//         bool found = false;
//         while (getline(file, line)) {
//             stringstream ss(line);
//             Flight flight;
//             getline(ss, flight.flightNumber, ','); getline(ss, flight.departureCity, ','); getline(ss, flight.destinationCity, ','); getline(ss, line, ',');
//             flight.ticketPrice = stod(line);
//             if (flight.flightNumber != flightNum) {
//                 flights.push_back(flight);
//             } else {
//                 found = true;
//             }
//         }
//         file.close();
        
//         ofstream outFile("flights.txt", ios::trunc);
//         for (const auto &f : flights) {
//             outFile << f.flightNumber << "," << f.departureCity << "," << f.destinationCity << "," << f.ticketPrice << endl;
//         }
//         outFile.close();
//         return found ? "Flight deleted successfully!" : "Flight not found!";
//     }
// };

// class FlightUI {
// public:
//     static void showMenu() {
//         cout << "\n1. Add Flight\n2. Display Flights\n3. Calculate Total Earnings\n4. Update Flight\n5. Delete Flight\n6. Exit\nEnter choice: ";
//     }
// };

// int main() {
//     FlightService *flightService = new FlightServiceImpl();
//     bool isRunning = true;
//     while (isRunning) {
//         FlightUI::showMenu();
//         int choice;
//         cin >> choice;
//         switch (choice) {
//             case 1: {
//                 Flight flight;
//                 cout << "Enter Flight Number, Departure City, Destination City, Ticket Price: ";
//                 cin >> flight.flightNumber >> flight.departureCity >> flight.destinationCity >> flight.ticketPrice;
//                 cout << flightService->addFlight(flight) << endl;
//                 break;
//             }
//             case 2:
//                 flightService->displayFlights();
//                 break;
//             case 3:
//                 cout << "Total Earnings: $" << flightService->calculateTotalEarnings() << endl;
//                 break;
//             case 4: {
//                 string flightNum, newDestination;
//                 double newPrice;
//                 cout << "Enter Flight Number to update, New Destination, New Price: ";
//                 cin >> flightNum >> newDestination >> newPrice;
//                 cout << flightService->updateFlight(flightNum, newDestination, newPrice) << endl;
//                 break;
//             }
//             case 5: {
//                 string flightNum;
//                 cout << "Enter Flight Number to delete: ";
//                 cin >> flightNum;
//                 cout << flightService->deleteFlight(flightNum) << endl;
//                 break;
//             }
//             case 6:
//                 isRunning = false;
//                 cout << "Thank you for using the Flight Booking System!" << endl;
//                 break;
//             default:
//                 cout << "Invalid choice! Try again." << endl;
//         }
//     }
//     delete flightService;
//     return 0;
// }

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

class Book {
private:
    int bookId;
    string bookName;
    string authorName;
    string status = "Available";

public:
    Book() {}

    Book(int id, string bName, string aName) {
        this->bookId = id;
        this->bookName = bName;
        this->authorName = aName;
    }

    // Getter methods
    int getBookId() {
        return this->bookId;
    }
    string getBookName() {
        return this->bookName;
    }
    string getAuthorName() {
        return this->authorName;
    }
    string getStatus() {
        return this->status;
    }

    // Setter methods
    void setBookId(int id) {
        this->bookId = id;
    }
    void setBookName(string name) {
        this->bookName = name;
    }
    void setAuthorName(string name) {
        this->authorName = name;
    }
    void setStatus(string status) {
        this->status = status;
    }

    string toString() const {
        return to_string(this->bookId) + "," + this->bookName + "," + this->authorName + "," + this->status;
    }
};

// Abstract class
class BookService {
public:
    virtual string addBook(Book &book) = 0;
    virtual Book getBookById(int bookId) = 0;
    virtual void getAllBooks() = 0;
    virtual string updateBookById(Book &book) = 0;
    virtual string deleteBookById(int bookId) = 0;
};

class BookServiceImpl : public BookService {
public:
    string addBook(Book &book) override {
        ofstream file("library.txt", ios::app);
        if (!file.is_open()) {
            return "Error While Opening the File";
        }
        file << book.toString() << "\n";
        file.close();
        return "New Book has been added successfully!";
    }

    Book getBookById(int bookId) override {
        ifstream file("library.txt");
        if (!file.is_open()) {
            cout << "Error While Opening the File" << endl;
            return Book();
        }

        string line;
        Book book;
        while (getline(file, line)) {
            stringstream ss(line);
            string id, title, author, status;
            getline(ss, id, ',');
            getline(ss, title, ',');
            getline(ss, author, ',');
            getline(ss, status, ',');

            if (stoi(id) == bookId) {
                book.setBookId(stoi(id));
                book.setBookName(title);
                book.setAuthorName(author);
                book.setStatus(status);
                return book;
            }
        }
        return Book();
    }

    void getAllBooks() override {
        ifstream file("library.txt");
        if (!file.is_open()) {
            cout << "Error While Opening the File" << endl;
            return;
        }

        string line;
        cout << "----------------------------------------" << endl;
        cout << "List of All Books:" << endl;
        while (getline(file, line)) {
            cout << line << endl;
        }
        cout << "----------------------------------------" << endl;
    }

    string updateBookById(Book &book) override {
        ifstream file("library.txt");
        if (!file.is_open()) {
            return "Error: Unable to open file!";
        }

        vector<Book> books;
        string line;
        bool found = false;

        while (getline(file, line)) {
            stringstream ss(line);
            string idStr, bName, aName, status;

            getline(ss, idStr, ',');
            getline(ss, bName, ',');
            getline(ss, aName, ',');
            getline(ss, status, ',');

            int id = stoi(idStr);

            if (id == book.getBookId()) {
                books.emplace_back(book.getBookId(), book.getBookName(), book.getAuthorName());
                found = true;
            } else {
                books.emplace_back(id, bName, aName);
            }
        }
        file.close();

        if (!found) {
            return "Error: Book ID not found!";
        }

        ofstream outFile("library.txt", ios::trunc);
        if (!outFile.is_open()) {
            return "Error: Unable to write to file!";
        }

        for (const auto &b : books) {
            outFile << b.toString() << endl;
        }
        outFile.close();

        return "Book updated successfully!";
    }

    string deleteBookById(int bookId) override {
        ifstream file("library.txt");
        if (!file.is_open()) {
            return "Error: Unable to open file!";
        }

        vector<Book> books;
        string line;
        bool found = false;

        while (getline(file, line)) {
            stringstream ss(line);
            string idStr, bName, aName, status;

            getline(ss, idStr, ',');
            getline(ss, bName, ',');
            getline(ss, aName, ',');
            getline(ss, status, ',');

            int id = stoi(idStr);
            if (id != bookId) {
                books.emplace_back(id, bName, aName);
            } else {
                found = true;
            }
        }
        file.close();

        if (!found) {
            return "Error: Book ID not found!";
        }

        ofstream outFile("library.txt", ios::trunc);
        if (!outFile.is_open()) {
            return "Error: Unable to write to file!";
        }

        for (const auto &b : books) {
            outFile << b.toString() << endl;
        }
        outFile.close();

        return "Book deleted successfully!";
    }
};

class BookUI {
public:
    static void showMenu() {
        cout << "1. Add Book" << endl;
        cout << "2. Search Book By Id" << endl;
        cout << "3. Get All Books" << endl;
        cout << "4. Update Book By Id" << endl;
        cout << "5. Delete Book By Id" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter Your Choice: ";
    }

    static void addNewBook() {
        int id;
        string title, author;

        cout << "Enter Unique Book Id: ";
        cin >> id;
        cin.ignore();
        cout << "Enter Book Title: ";
        getline(cin, title);
        cout << "Enter Book Author Name: ";
        getline(cin, author);

        Book newBook(id, title, author);
        BookServiceImpl bookService;
        cout << bookService.addBook(newBook) << endl;
    }

    static void bookById() {
        int id;
        cout << "Enter Book Id: ";
        cin >> id;

        BookServiceImpl bookService;
        Book book = bookService.getBookById(id);

        if (book.getBookId() != id) {
            cout << "Invalid Book Id" << endl;
            return;
        }

        cout << "Id: " << book.getBookId() << ", Name: " << book.getBookName() 
             << ", Author: " << book.getAuthorName() << ", Status: " << book.getStatus() << endl;
    }
};

int main() {
    cout << "Welcome to Library Management System!" << endl;
    bool isAppRunning = true;

    while (isAppRunning) {
        BookUI::showMenu();
        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                BookUI::addNewBook();
                break;
            case 2:
                BookUI::bookById();
                break;
            case 3:
                BookServiceImpl().getAllBooks();
                break;
            case 4: {
                int bookId;
                string newBookName, newAuthor;
                
                cout << "Enter Book ID to update: ";
                cin >> bookId;
                cin.ignore();
                
                cout << "Enter new book name: ";
                getline(cin, newBookName);
            
                cout << "Enter new author name: ";
                getline(cin, newAuthor);
            
                Book updatedBook(bookId, newBookName, newAuthor);
                BookServiceImpl bookService;
                cout << bookService.updateBookById(updatedBook) << endl;
                break;
            }
            case 5: { 
                int bookId;
                cout << "Enter Book ID to delete: ";
                cin >> bookId;
                
                BookServiceImpl bookService;
                cout << bookService.deleteBookById(bookId) << endl;
                break;
            }
            case 6:
                isAppRunning = false;
                cout << "Thank you for using the application!" << endl;
                break;
            default:
                cout << "Invalid Choice, Please Enter Again" << endl;
                break;
        }
        
    }

    return 0;
}


#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

class Book
{
private:
    int bookId;
    string bookName;
    string authorName;
    string status = "Available";

public:
    Book() {}
    Book(int id, string bName, string aName) : bookId(id), bookName(bName), authorName(aName) {}
    
    int getBookId() { return bookId; }
    string getBookName() { return bookName; }
    string getAuthorName() { return authorName; }
    string getStatus() { return status; }

    void setBookId(int id) { bookId = id; }
    void setBookName(string name) { bookName = name; }
    void setAuthorName(string name) { authorName = name; }
    void setStatus(string status) { this->status = status; }

    string toString()
    {
        return to_string(bookId) + "," + bookName + "," + authorName + "," + status;
    }
};

class BookService
{
public:
    virtual string addBook(Book &book) = 0;
    virtual Book getBookById(int bookId) = 0;
    virtual void getAllBooks() = 0;
    virtual string updateBookById(Book &book) = 0;
    virtual string deleteBookById(int bookId) = 0;
};

class BookServiceImpl : public BookService
{
public:
    string addBook(Book &book) override
    {
        ofstream file("library.txt", ios::app);
        if (!file.is_open()) return "Error While Opening the File";
        file << book.toString() << "\n";
        file.close();
        return "New Book has been added successfully!";
    }

    Book getBookById(int bookId) override
    {
        ifstream file("library.txt");
        if (!file.is_open())
        {
            cout << "Error While Opening the File" << endl;
            return Book();
        }
        string line;
        while (getline(file, line))
        {
            stringstream ss(line);
            string id, title, author, status;
            getline(ss, id, ',');
            getline(ss, title, ',');
            getline(ss, author, ',');
            getline(ss, status, ',');

            if (stoi(id) == bookId)
                return Book(stoi(id), title, author);
        }
        return Book();
    }

    void getAllBooks() override
    {
        ifstream file("library.txt");
        if (!file.is_open())
        {
            cout << "Error While Opening the File" << endl;
            return;
        }
        string line;
        cout << "\nList of Books:\n";
        while (getline(file, line))
            cout << line << endl;
        file.close();
    }

    string updateBookById(Book &book) override
    {
        ifstream file("library.txt");
        vector<Book> books;
        string line;
        while (getline(file, line))
        {
            stringstream ss(line);
            string bookId, bookName, authorName, status;
            getline(ss, bookId, ',');
            getline(ss, bookName, ',');
            getline(ss, authorName, ',');
            getline(ss, status, ',');

            Book receivedBook(stoi(bookId), bookName, authorName);
            receivedBook.setStatus(status);
            books.push_back(receivedBook);
        }
        file.close();

        ofstream addFile("library.txt", ios::trunc);
        bool isUpdated = false;
        for (auto &b : books)
        {
            if (b.getBookId() == book.getBookId())
            {
                b.setBookName(book.getBookName());
                b.setAuthorName(book.getAuthorName());
                b.setStatus(book.getStatus());
                isUpdated = true;
            }
            addFile << b.toString() << "\n";
        }
        addFile.close();
        return isUpdated ? "Updated Successfully." : "Invalid Id";
    }

    string deleteBookById(int bookId) override
    {
        ifstream file("library.txt");
        if (!file.is_open()) return "Error opening file!";

        vector<Book> books;
        string line;
        bool found = false;
        while (getline(file, line))
        {
            stringstream ss(line);
            string id, bookName, bookAuthor, status;
            getline(ss, id, ',');
            getline(ss, bookName, ',');
            getline(ss, bookAuthor, ',');
            getline(ss, status, ',');

            if (stoi(id) != bookId)
                books.push_back(Book(stoi(id), bookName, bookAuthor));
            else
                found = true;
        }
        file.close();

        ofstream outFile("library.txt", ios::trunc);
        for (auto &b : books)
            outFile << b.toString() << "\n";
        outFile.close();

        return found ? "Deleted successfully" : "Invalid Book Id";
    }
};

class BookUI
{
public:
    static void showMenu()
    {
        cout << "1. Add Book\n2. Search Book By Id\n3. Get All Books\n4. Update Book By Id\n5. Delete Book By Id\n6. Exit\nEnter Your Choice: ";
    }

    static void addNewBook()
    {
        int id;
        string title, author;
        cout << "Enter Unique Book Id: ";
        cin >> id;
        cin.ignore();
        cout << "Enter Book Title: ";
        getline(cin, title);
        cout << "Enter Book Author Name: ";
        getline(cin, author);
        
        Book newBook(id, title, author);
        BookServiceImpl bookService;
        cout << bookService.addBook(newBook) << endl;
    }

    static void bookById()
    {
        int id;
        cout << "Enter Book Id: ";
        cin >> id;
        BookServiceImpl bookService;
        Book book = bookService.getBookById(id);
        if (book.getBookId() != id) cout << "Invalid Book Id\n";
        else cout << "Id: " << book.getBookId() << " Name: " << book.getBookName() << " Author: " << book.getAuthorName() << " Status: " << book.getStatus() << endl;
    }
};

int main()
{
    cout << "Welcome to Library Management System!" << endl;
    bool isAppRunning = true;
    while (isAppRunning)
    {
        BookUI::showMenu();
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1: BookUI::addNewBook(); break;
        case 2: BookUI::bookById(); break;
        case 3: BookServiceImpl().getAllBooks(); break;
        case 6: isAppRunning = false; cout << "Thank you for using the application!\n"; break;
        default: cout << "Invalid Choice, Please Try Again\n"; break;
        }
    }
}

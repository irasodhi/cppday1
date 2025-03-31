// #include <iostream>
// using namespace std;
// int main(){
//     //strings: it is set of characters(numbers+letters+special symbol+white space) enclosed with double quotation marks(" ").

//     //note:string leeps most imp data.


//     // string name="champak";
//     // string fathername="chaman lal";
//     // string adhaarnumber="3232754726638965";
//     // string pancardnumber="ERYFY876FD";
//     // string accountnumber="4645653425678";
//     // string password="champak@champak123";
//     // string email="champak@gmail.com";
//     // string pincode="201301";
//     // string address="noida sector 73,uttar pradesh";
//     // string msg="i am learniang cpp";
//     // string favouritecharacter="C";

//     //in c++ we can use string using two ways:
//     //1 c-style string
//     //2 c++-style string

//     //there are follow common things in both type of string;
//     //they follow 0 based index like array meaning thAT first character inside the string will start with 0 second with 1 and so on.....
//     //string is by default mutable       




// string str="hello world";
// cout<<str<<endl;
// str[0]='B';
// string name="mintu";
// cout <<name<<endl;


// cout<<name.length()<<endl;
// cout<<name.size()<<endl;

// for(int i=0;i<name.size();i++){
//     cout<<name[i]<<" ";
// }

// }


// #include <iostream>
// using namespace std;
// int main(){
//     string sentence;
//     cout<<"enter your sentence : ";
//     getline(cin,sentence);

// }
// #include <iostream>
// using namespace std;
// int main(){
// //     const string str="mintu";
// //     string name=str;
// //     name[0]='p';
// //     cout<<name<<endl;
//  }
#include <iostream>
using namespace std;

int main() {
    int num;
    cin>>num;
    int sum=0;
    for (int i=2;i<num;i++){
        int prime=1;
        for( int j=2;j*j<num;j++){
            if(i%j==0){
                int prime=0;
                break;
            }
        }
        if(prime==1){
        sum+=i;
        }
        
    }
    cout<<sum;
}
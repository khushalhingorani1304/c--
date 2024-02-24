
//INHERITANCE--------------------------------------

// #include <iostream>
// using namespace std;

// // BASE CLASS
// class Employee
// {
// public:
//     int id;
//     float salary;
//     Employee(){};
//     Employee(int inpId)
//     {
//         id = inpId;
//         salary = 34;
//     }
// };

// // DERIVED CLASS SYNTAX;
// /*Class {{Derived-class-name}} : {{visiblity-mode}} {{base-classs-name}}*/

// // creating a programmer class derived from employee base class;
// class Programmer : public Employee
// {   
//     public:
//     Programmer(int inpId){
//         id = inpId;
//     }
//     int languagecode = 9;
//     void getdata(){
//         cout<<id<<endl;
//     }
// };

// int main()
// {
//     Programmer ravi(100);
//     ravi.getdata();

//     return 0;
// }





//  SINGLE INHERITANCE-----------------------------------------------------------------------------


// #include <iostream>
// using namespace std;


// class Base{

//     int data1; //this data memeber will not be inherited
//     public:
//     int data2;
//     void setdata();
//     int getdata1();
//     int getdata2();

// };

// void Base :: setdata(){
//     data1 = 10;
//     data2 = 20;
// }

// int Base :: getdata1(){
//     return data1;
// }

// int  Base :: getdata2(){
//     return data2;
// }


// class Derived : public Base{
//     int data3;
//     public:
//     void process();
//     void display();
// };

// void Derived :: process(){
//     data3 = data2 *getdata1();
// }

// void Derived :: display(){
//     cout<<"THE VALUE OF DATA1 IS "<<getdata1()<<endl;
//     cout<<"THE VALUE OF DATA2 IS "<<data2<<endl;
//     cout<<"THE VALUE OF DATA3 IS "<<data3<<endl;
// }


// int main()
// {
//   Derived dre;
//   dre.setdata();
//   dre.process();
//   dre.display();
   
//     return 0;
// }





// MultiLevel Inheritance ----------------------------------------------------------------------------------------------------


// #include <iostream>
// using namespace std;

// class student{
//     protected:
//         int roll_no;

//     public:
//         int set_roll_no(int x);
//         void get_roll_no();

// };

//     int student :: set_roll_no(int x){
//         roll_no = x;
//         get_roll_no();
//     }

//     void student :: get_roll_no(){
//         cout<<"the roll no of student is : "<<roll_no<<endl;
//     }

// class exam : public student{
//     protected:
//     int maths;
//     int physics;

//     public:
//         int set_marks(int a,int b);
//         void get_marks();
// };

// int exam ::set_marks(int a,int b){
//     maths = a;
//     physics = b;
//     get_marks();
// }

// void exam :: get_marks(){
//     cout<<"Maths marks are "<<maths<<endl;
//     cout<<"physics marks are "<<physics<<endl;
// }


// class result : public exam{
//     public:
//         void display();
// };

// void result :: display(){
//     cout<<"the result is : "<<(maths+physics)/2<<"%"<<endl;
// }

// int main()
// {   result ram;
//     ram.set_roll_no(450);
//     ram.set_marks(94,90);
//     ram.display();
    
//     return 0;
// }




// Multiple Inheritance -----------------------------------------------------------------------------------------------------------

// #include <iostream>
// using namespace std;

// class base1{
//     protected:
//     int base1int;
//     public:
//     int set_base1int(int x){
//         base1int = x;
//     }
// };

// class base2{
//     protected:
//     int base2int;
//     public:
//     int set_base2int(int x){
//         base2int = x;
//     }

// };

// class derived : public base1, public base2{
//     public:
//     void show(){
//         cout <<"VALUE OF BASE 1 INT IS : "<<base1int<<endl;
//         cout <<"VALUE OF BASE 2 INT IS : "<<base2int<<endl;
//         cout <<"VALUE OF SUM IS : "<<base1int + base2int<<endl;
//     }
// };






// int main()
// {
//     derived d1;
//     d1.set_base1int(5);
//     d1.set_base2int(12);
//     d1.show();
//     return 0;
// }










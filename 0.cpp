// //PROBLEM STATMENT -->>  A company wants to keep track of its employees.the company as three types of employees:Full-time ,part time and consultant.each employee has a name, id number, and salary. the full-time employees work 40 hours a week,part time employees work 20 hours a week,and Consultant are paid based on the hours they work. the company wants a program that can store and manipulate information about its employees.//


#include <iostream>
#include <string>
using namespace std;
class employee_3802{ 
    protected:
    string Name;
    int Id_num;
    double Salary;
    int Hours;

};


// class full_time{
//     void calculate_salaray(){
//         int salary=40*200;
//         cout<<"The Salary of the Employee is:"<<salary<<endl;
//     }
// };


// class part_time{
//     void calculate_salaray(){
//         int salary=20*200;
//         cout<<"The Salary of the Employee is:"<<salary<<endl;
//     }
// };


// class consultant{
//     void calculate_salaray(int hours){
//         int salary=hours*200;
//         cout<<"The Salary of the Employee is:"<<salary<<endl;
//     }
// };



// int main(){

//     full_time akshit;
//     akshit.calculate_salaray();
//     return 0;
// }


// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main()
// {
//     int sum = 345;
//     setfill('+');
//     setprecision();
//     cout<<setw(20)<<sum;
//     return 0;
// }

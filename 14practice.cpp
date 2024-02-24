// Implement a C++ program that showcases function overloading and a friend function. Create a class called
// "MathOperations" that includes overloaded functions for addition, subtraction, and multiplication.
// Additionally, implement a friend function that calculates the average of two numbers. Test the program
// by performing arithmetic operations on different data types and calculating averages.
// Sample Inputs and Outputs:
// Enter two integer numbers: 5 3
// Sum of 5 and 3 is: 8
// Enter two floating-point numbers: 2.5 1.8
// Sum of 2.5 and 1.8 is: 4.3
// Enter two numbers: 9 4.5
// Average of 9 and 4.5 is: 6.75

// #include <iostream>
// using namespace std;

// class MathOperation{

//     public:
//      int a,b;
//         int add(int x , int y){
//             a = x;
//             b = y;
//             return a+b;
//         }

//         float add(float x , float y){
//             a = x;
//             b = y;
//             return a+b;
//         }

//         int multiply(int x , int y){
//             a = x;
//             b = y;
//             return a*b;
//         }

//         float multiply(float x , float y){
//             a = x;
//             b = y;
//             return a*b;
//         }

//         int subtract(int x , int y){
//             a = x;
//             b = y;
//             return a-b;
//         }

//         float subtract(float x , float y){
//             a = x;
//             b = y;
//             return a-b;
//         }

//         float divide(float x , float y){
//             a = x;
//             b = y;
//             return a+b;
//         }

//         int divide(int x , int y){
//             a = x;
//             b = y;
//             return a+b;
//         }

// friend int average(int x , int y);

// };

// int average(int a , int b){
//     return (a+b)/2;

// }

// float average(float a , float b){

//     return (a+b)/2;

// }

// int main()
// {
//     MathOperation m;

//     int x , y;
//     cout<<"Enter two integer numbers: "<<endl;
//     cin>>x>>y;
//     cout<<"Sum of "<<x<<" and "<<y<<" is : "<<m.add(x,y);

//     return 0;
// }





// problem 3--------------------------------------------------------------------------------------------



// #include <iostream>
// #include <string>
// using namespace std;

// class shape
// {
//     public:
//     string name;
//     double area;

//     shape(){
//         name = "";
//         area = 0.0;

//     }
    
//     shape(string name){
//         this -> name = name;
//                 area = 0.0;

//     }

//     void SetName(string name){
//         this -> name = name;
//     }
    
//     void GetName(){
//         cout<<"Name: "<<name<<endl;
//     } 

//                     // a virtual function that calculates and sets the area of the shape. The implementation of
//                     //this function will vary based on the derived class.
//      virtual void CalculateArea(){
//      }

// };

// class rectangle : public shape{
//     protected:
//         double length;
//         double width;

//     public:

//         rectangle(){
//             length = 0.0;
//             width = 0.0;
//         }

//         rectangle(double length , double width){
//             this -> length = length;
//             this -> width = width;
//             cout<<"Length : "<<length<<endl;
//             cout<<"Width : "<<width<<endl;
//         }

//         void CalculateArea(){
//             area = this -> length* this -> width;
//             cout<<"Area : "<<area<<endl;

//         }
// };

// class circle : public shape{
// protected:
//     double radius;
// public:
//     circle(){
//         radius = 0.0;
//     }

//     circle(double radius){
//         this -> radius = radius;
//     }

//     void CalculateArea(){
//         double pi = 3.14;
//         area = pi*radius*radius;
//         cout << area;
//     }

// };




// int main()
// {   rectangle r;
//     r.SetName("Rectangle");
//     r.GetName();
//     rectangle(5.0,3.0);
//     r.CalculateArea();

//     return 0;
// }




// problem 2 ------------------------------------------------------------------------


#include <iostream>
#include <string>
using namespace std;


// class1--------------------------------------------------------------------

class TemperatureC{


public:
double celcius;
TemperatureC(){
    celcius = 0;
}

TemperatureC(double celc){
    celcius = celc;
}

operator double(){
    return (celcius);
}

TemperatureC operator +(double x){
    TemperatureC obj;
     obj.celcius = celcius + x;
     return obj;

}
TemperatureC operator -(double x){
    TemperatureC obj;
     obj.celcius = celcius - x;
     return obj;
}

void operator +=(double x){
     celcius = celcius + x;
     
}

void operator -=(double x){
     celcius = celcius - x;
}


};


// Class 2----------------------------------------------------------------------

class TemperatureF{


public:
double fahrenheit;
TemperatureF(){
    fahrenheit = 0;
}

TemperatureF(double fahr){
    fahrenheit = fahr;
}

operator double(){
    return(fahrenheit);
}


operator TemperatureC(){
    TemperatureC obj;
    obj.celcius=fahrenheit;
    return obj;
}


TemperatureF operator +(double x){
    TemperatureF obj;
     obj.fahrenheit = fahrenheit + x;
     return obj;

}
TemperatureF operator -(double x){
    TemperatureF obj;
     obj.fahrenheit = fahrenheit - x;
     return obj;
}

void operator +=(double x){
     fahrenheit = fahrenheit + x;
     
}

void operator -=(double x){
     fahrenheit = fahrenheit - x;
}





};





int main()
{
TemperatureC tempC(25.5);
double celsius = tempC;
cout << "Temperature in Celsius: " << celsius << " degrees Celsius" << endl;
TemperatureF tempF = (TemperatureF)tempC;
cout << "Temperature in Fahrenheit: " << (double)tempF << " degrees Fahrenheit" << endl;

TemperatureF tempF2(78.9);
double fahrenheit = tempF2;
cout << "Temperature in Fahrenheit: " << fahrenheit << " degrees Fahrenheit" << endl;
TemperatureC tempC2 = (TemperatureC)tempF2;
cout << "Temperature in Celsius: " << (double)tempC2 << " degrees Celsius" << endl;
TemperatureC tempC3(10.5);
TemperatureC tempC4 = tempC3 + 5.0;
cout << "Result of addition: " << (double)tempC4 << " degrees Celsius" << endl;
tempC4 -= 2.0;
cout << "Result of subtraction: " << (double)tempC4 << " degrees Celsius" << endl;
TemperatureF tempF3(32.0);
TemperatureF tempF4 = tempF3 - 10.0;
cout << "Result of subtraction: " << (double)tempF4 << " degrees Fahrenheit" << endl;
tempF4 += 5.0;
cout << "Result of addition: " << (double)tempF4 << " degrees Fahrenheit" << endl;
    
    return 0;
}



#include<iostream>
using namespace std;
class TemperatureC;
class TemperatureF{
    public:
    double fahrenheit;
    TemperatureF(){
        fahrenheit=0;
    }
    TemperatureF(double f){
        fahrenheit=f;
    }
    operator double(){
        return(fahrenheit);
    }
    TemperatureF operator +(double f){
        TemperatureF temp;
        temp.fahrenheit=fahrenheit+f;
        return temp;

    } 
    TemperatureF operator -(double f){
        TemperatureF temp;
        temp.fahrenheit=fahrenheit-f;
        return temp;

    } 
     void operator+=(double f){
        fahrenheit=fahrenheit+f;
     }
     void operator-=(double f){
        fahrenheit=fahrenheit-f;
     }
     TemperatureF(TemperatureC);
    };


class TemperatureC{
    public:
    double celsius;
    TemperatureC(){
        celsius=0;
    }
    TemperatureC(double c){
        celsius=c;
    }

    operator double(){
        return(celsius);
    }
    TemperatureC operator +(double c){
        TemperatureC temp;
        temp.celsius=celsius+c;
        return temp;
    } 
    
    TemperatureC operator -(double c){
        TemperatureC temp;
        temp.celsius=celsius-c;
        return temp;
    } 
    void operator +=(double c){
        celsius=celsius+c;
    } 


    void operator-=(double c){
        celsius=celsius-c;
    }
    TemperatureC(TemperatureF f){
        celsius=(((f.fahrenheit)-32)/9)*5;
        
     }
};

TemperatureF::TemperatureF(TemperatureC c){
        fahrenheit=((c.celsius)*9/5)+32;
        
     }


int main(){
TemperatureC tempC(25.5);
double celsius = tempC;
cout << "Temperature in Celsius: " << celsius << " degrees Celsius" << endl;
TemperatureF tempF = tempC;
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
}
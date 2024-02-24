#include <iostream>
using namespace std;

class TemperatureF;
class TemperatureC{
    public :
    double celcius;
    TemperatureC(){
        celcius = 0.0;
    }


    TemperatureC(double x){
        celcius = x;
    }

    operator double(){
        return celcius;
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

    TemperatureC(TemperatureF y);





};

class TemperatureF{
    public :
    double fahrenheit;

    TemperatureF(){
    fahrenheit = 0.0;
    }


    TemperatureF(double x){
        fahrenheit = x;
    }


    operator double(){
        return fahrenheit;
    }


    TemperatureF(TemperatureC x){
        fahrenheit =  (x.celcius*9/5)+32;
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

TemperatureC :: TemperatureC(TemperatureF y){
    celcius =  (y.fahrenheit -32)*5/9;
}

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


// FRACTION-------------------------------------------------------------------------------------------------------------

// #include <iostream>
// using namespace std;

// class fraction{
// private:
// int numerator;
// int denominator;

// public:

// fraction(int numerator,int denominator){
//     this -> numerator=numerator;
//     this -> denominator=denominator;
// }

// void print(){
//     cout<<numerator<<"/"<<denominator<<endl;
// }

// int min(){
//     if(numerator>denominator){
//         return denominator;
//     }
//     else{
//         return numerator;
//     }
// }


// void simplify(){
//     int j = min();
//     for(int i=1; i<j;i++){
//         if(numerator%i==0 && denominator%i==0){
//             numerator = numerator/i;
//             denominator = denominator/i;
//         }
//     }
// }

// void add(fraction f2){
//     int num = (f2.denominator*numerator)+(denominator*f2.numerator);
//     int denom = (denominator*f2.denominator);

//     numerator=num;
//     denominator=denom;

//     simplify();
// }


// };

// int main()
// {
//     fraction f1(6,9);
//     fraction f2(7,10);
//     f1.print();
//     f2.print();

//     f1.add(f2);
//     f1.print();
    
//     return 0;
// }




// COMPLEX NUMBER ---------------------------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

class ComplexNumber{

private:
int real;
int imaginary;

public:

ComplexNumber(int real,int imaginary){
    this -> real = real ;
    this -> imaginary = imaginary ;
}

void print(){
    cout<<real<<" + "<<"i"<<imaginary<<endl;
}

void plus(ComplexNumber c2){
    real = real + c2.real;
    imaginary = imaginary + c2.imaginary;
}

void multiply(ComplexNumber c2){
    int real1 = (real*c2.real) - (imaginary*c2.imaginary);
    int imaginary1 = (real*c2.imaginary) + (imaginary*c2.real);
    real = real1;
    imaginary = imaginary1;
}


};


int main()
{
    int real1,imaginary1,real2,imaginary2;
    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;

    ComplexNumber c1(real1,imaginary1);
    ComplexNumber c2(real2,imaginary2);

    int choice;
    cin >> choice;

    if(choice==1){
        c1.plus(c2);
        c1.print();
    }

    else if(choice==2){
        c1.multiply(c2);
        c1.print();
    }

    else{
        return 0;
    }
    return 0;
}

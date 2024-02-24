// #include <iostream>
// using namespace std;


// int main()
// {
//     int i=65;
//     char c=i;
//     cout<<c;
    
//     return 0;
// }


// PASS BY REFERENCE
#include <iostream>
using namespace std;

void increment(int n){
    n++;

}
void increment_passByReference(int& n){
    n++;
}

int main(int argc, char const *argv[])
{
    int i=10;
    int j=i;
    i++;
    cout<<j<<endl;

    int& k=i;
    cout<<k<<endl;

    int a=100;
    k=a;
    cout<<i<<endl;

    increment(j);
    cout<<j<<endl;

    increment_passByReference(j);
    cout<<j;



    return 0;
}

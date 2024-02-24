#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main()
{
    string st1 = " This is another line going in ass";
    ofstream hout("sample18.txt");
    hout<<"This is going in ass";
    hout<<st1;
    

    string st2;
    ifstream in;
    in.open("sample18b.txt");
    // in>>st2;
    while( in.eof() == 0){

        in>>st2;
        cout<<st2<<" ";
    };
    

    return 0;
}


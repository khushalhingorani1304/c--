/*
#include <iostream>
#include <string>
using namespace std;

class binary
{
private:
    string s;

public:
    void input()
    {
        cout << "ENter the binary number" << endl;
        cin >> s;
    }

    void check()
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s.at(i) != '0' && s.at(i) != '1')
            {
                cout << "INVALID BINARY NUMBER" << endl;
                exit(0);
            }
        }
    }

    void display()
    {

        cout << "Your Binary NUmber Is : ";
        for (int i = 0; i < s.length(); i++)
        {
            cout << s.at(i);
        }
        cout << endl;
    }

    void ones_compliment()
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s.at(i) == '0')
            {
                s.at(i) = '1';
            }
            else
            {
                s.at(i) = '0';
            }
        }
        cout << "AFTER ONES_COMPLIMENT :-->" << endl;
        display();
    }
};

int main()
{
    binary b1;
    b1.input();
    b1.check();
    b1.display();
    b1.ones_compliment();
    return 0;
}

*/


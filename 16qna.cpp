#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x,rem,ans=0;
    cin>>x;
    int i = 1;

    while(x != 0){
        rem = x%2;
        x = x/2;
        ans = ans + rem*(pow(10,i));
        i = i+1;
    }

    cout<< ans;
    return 0;
}






// #include <iostream>
// #include <math.h>
// using namespace std;


// main()
// {
//     int x;
//     cin>>x;
//     int rem,ans1=0,ans=0;
//     int j = 0;

//     while(x != 0){
//         int i = 0;
//         while ( i < 3){
//            rem = x%10;
//            ans = ans + rem*pow(2,i) ;
//            i = i+1;
//         }
//         ans1=ans1+ans*pow(10,j);
//         j++;
//         x = x/1000;
//     }
// cout<<ans1;
// }




// #include <iostream>
// using namespace std;






// int main(int argc, char const *argv[])
// {
    
//     return 0;
// }

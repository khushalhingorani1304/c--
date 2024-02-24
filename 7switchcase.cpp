// #include <iostream>;
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int num=2;
//     char ch = 'a';

//     while(true){
//         switch(num){
//         case 1:cout<<"HI";
//         case 2:cout<<"MY";
//         case 3:cout<<"NAME";
//         default:cout<<"OH YEAH";
//         exit(0);
        
// }
//     }
//     return 0;
// }



// Calculator program--------------------------------------------------------


// #include <iostream>
// using namespace std;

// int main()
// {
//     int a,b;
//     cout<<"Enter the value of a: ";
//     cin>>a;
//     cout<<"Enter the value of b: ";
//     cin>>b;

//     char op;
//     cout<<"Enter the operator: ";
//     cin>>op;
//     switch( op ){
//         case '+':cout<<a+b;
//         break;
//         case '-':cout<<a-b;
//         break;
//         case '*':cout<<a*b;
//         break;
//         case '/':cout<<a/b;
//         break;
//         case '%':cout<<a%b;
//         break;
//         default:cout<<"Please Enter a valid Operator";
//     }
    
//     return 0;
// }




// amount question----------------------------------------------------------------------------------
// ye question pending h


// #include <iostream>
// using namespace std;

// int main()
// {
//     int a=1330;
//     int p=100,q=50,r=20,s=1;
//     int n;

//     switch(p){

//         case 100: int k=a/p;
//         cout<<"NO. OF 100 RUPEES NOTE: "<<k;

//         case 50: int l=(a-(k*100))/q;
//         cout<<"NO. OF 50 RUPEES NOTE: "<<l;

//         case 20: int m=(a-((l*50)-(k*100)))/r;
//         cout<<"NO. OF 20 RUPEES NOTE: "<<m;

//         case 1:int n=(a-((l*50)-(k*100)-(m*20)))/s;
//         cout<<"NO. OF 1 RUPEE NOTE: "<<n;

//         break;
//         default:cout<<"Please Enter a valid Operator";

//     }
    
//     return 0;
// }
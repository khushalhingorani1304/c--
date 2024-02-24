// #include <iostream>
// using namespace std;

// int main()
// {
//     cout<<"hello world";
//     return 0;
// }


// ----------------------------------------------------------------------------------

// Type Casting:

// #include <iostream>
// using namespace std;

// int main()
// {
//     char c;
//     cin>>c;
//     int a = c;
//     cout<<a;
//     return 0;
// }

// ----------------------------------------------------------------------------------------


// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int a = 2 , b = 2;
//     bool first = (a==b);
//     cout<<first;
//     return 0;
// }
    

// --------------------------------------------------------------------------------------------

// Bitwise operator



// #include <iostream>
// using namespace std;

// int main()
// {
    // int a = 2;
    // int b = 4;
    // int c = a&b;
    // int c = a|b;
    // int c = ~b;
    // int c = a^b;
    // int c = a<<3;
    // int c = a>>3;
    // cout << c;
    // return 0;
// }



// #include <iostream>
// using namespace std;

// long pow(long x , long y){
//     long ans=1;
//     while(y != 0){
//         ans = x*ans;
//         y = y-1;
//     }
//     return ans;
// }


// void dec2bin(){
//     long n;
//     cin>>n;
//     long rem,ans=0;
//     long i = 0;
//     while(n != 0){
//         rem = n%2;
//         n = n/2;
//         ans=ans+rem*pow(10,i);
//         i = i+1;
//     }
//     cout<<ans;

// }


// void bin2dec(){
//     long x;
//     cin>>x;
//     long rem,ans=0;
//     long i = 0;
//     while(x != 0){
//         rem = x%10;
//         x = x/10;
//         ans=ans+rem*pow(2,i);
//         i = i+1;
//     }
//     cout<<ans;

// }


// void dec2oct(){
//     long x;
//     cin>>x;
//     long rem,ans=0;
//     long i = 0;
//     while(x != 0){
//         rem = x%8;
//         x = x/8;
//         ans=ans+rem*pow(10,i);
//         i = i+1;
//     }
//     cout<<ans;

// }


// void oct2dec(){
//     long x;
//     cin>>x;
//     long rem,ans=0;
//     long i = 0;
//     while(x != 0){
//         rem = x%10;
//         x = x/10;
//         ans=ans+rem*pow(8,i);
//         i = i+1;
//     }
//     cout<<ans;

// }






// int main()
// {

//     dec2bin();

//     return 0;
// }





// -----------------------------------------------------------------------------
// switch case

// #include <iostream>
// using namespace std;

// int main()
// {
//     char day;
//     cin>>day;

//     switch(day){
//         case 'm': cout<<"monday";
//         break;

//         case 't': cout<<"tuesday";
//         break;

//         default : cout<<"everyday is my day";
//         break;
//     }
//     return 0;
// }


// --------------------------------------------------------------------------------------------------

// arrays


// #include <iostream>
// using namespace std;

// int addArr(int arr[],int size){
//     int sum = 0;
//     for(int i = 0 ; i < size ; i++){
//     sum = sum + arr[i];
//  }
//  cout<<"The value after adding the elemnts of array is :";
//  return sum;

// }

// int main()
// {
//     int arr[100];
//     int size;
//     cout<<"Enter the size of array : "<<endl;
//     cin>>size;
//     cout<<"Enter The values of Array : "<<endl;
//     for(int i = 0; i<size;i++){
//         cin>>arr[i];

//     }
//     cout<<"The values of Array are :"<<endl;
//     for(int i = 0; i<size ; i++){
//         cout<<arr[i]<<" "<<endl;
//     }

//     cout<<addArr(arr , size)<<endl;

//     // cout<<addArr( arr , size)<<endl;
//     return 0;
// }

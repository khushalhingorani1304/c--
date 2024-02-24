// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
    // int num[15];
    // int i=0;
    // while(i<15){
    // cout<<"THE VALUE AT "<< i <<" INDEX :"<< num[i]<<endl;
    // i=i+1;
    // }


    // int num[3]={2,5,7};
    // int i=0;
    // int n=3;
    // while(i<n){
    // cout<<"THE VALUE AT "<< i <<" INDEX :"<< num[i]<<endl;
    // i=i+1;
    // }


    // int num[15]={2,5,7};
    // int i=0;
    // int n=15;
    // while(i<n){
    // cout<<"THE VALUE AT "<< i <<" INDEX :"<< num[i]<<endl;
    // i=i+1;
    // }


    // int num[15];
    // fill_n(num,15,1);
    // int i=0;
    // int n=15;
    // while(i<n){
    // cout<<"THE VALUE AT "<< i <<" INDEX :"<< num[i]<<endl;
    // i=i+1;
    // }


    // int num[15];
    // fill_n(num,5,1);
    // int i=0;
    // int n=15;
    // while(i<n){
    // cout<<"THE VALUE AT "<< i <<" INDEX :"<< num[i]<<endl;
    // i=i+1;
    // }



//     return 0;
// }



// TAKING INPUT IN ARR------------------------------------------------------


// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int arr[5];
//     int i=0;
//     while(i<5){
//         cin>>arr[i];
//         i=i+1;
//     }
//     for(int i=0;i<5;i++){
//         cout<<"THE VALUE OF "<< i+1<<"th element of array is :"<<arr[i]<<endl;
        
//     }
    
//     return 0;
// }


// sum of elements of array------------------------------------------------------------------------------

#include <iostream>
using namespace std;


int sum(int arr[] , int size){

    int sum=0;
    int j=0;
    while(j<size){
        sum=sum+arr[j];
        j=j+1;
        }

    return sum;

}

int main()
{
    int arr[100];
    int size;
    cin>>size;

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"THE SUM IS :"<<sum(arr,size);
    return 0;
}




// REVERSE THE ARRAY------------------------------------------------------------------------------------------------

// #include <iostream>
// using namespace std;

// int reverse(int arr[],int n){

//     for(int i=0;i<(n/2);i++){

//         int temp;
//         temp=arr[i];
//         arr[i]=arr[n-i];
//         arr[n-i]=temp;

//     }
// }

// int main()
// {
//     int n;
//     cin>>n;

//     int arr[100];
//     int i=0;
//     for(;i<n;i++){
//         cin>>arr[i];
//     }

//     for(int i=0;i<n;i++){
//         cout<<"THE "<<i+1<<" ELEMENT IS : "<<reverse(arr,n)<<endl;

//     }
//     return 0;
// }

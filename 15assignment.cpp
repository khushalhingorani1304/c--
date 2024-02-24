// Problem Statement: Create a class to represent a book. The book class should have
// constructors and destructors to initialize and clean up the book objects. Additionally,
// overload the "+" operator to concatenate the titles of two books together.


// #include <iostream>
// using namespace std;

// class Book{
// private:
// string bname;
// public:
// Book(string name){
//     bname = name;
// }

// ~Book(){

// }

// void operator+ (Book b2){
//     cout<<bname + b2.bname;
// }

// };


// int main()
// {
//     Book b1("Ishan"),b2("Goyal");
//     b1 + b2;

//     return 0;
// }



// --------------------------------------------------------------------------------------------


/*Problem Statement: Design a class to represent a rectangle. The rectangle class should have
constructors and destructors to initialize and clean up the rectangle objects. Additionally,
overload both ++; i.e. pre-increment and post-increment operator to calculate the
incremented area of rectangle. */



// #include <iostream>
// using namespace std;

// class Rectangle{
// private:
// int length;
// int width;
// public:
// Rectangle(){}

// Rectangle(int length1 , int width1){

//     length = length1;
//     width = width1;

// }

// ~Rectangle(){

// }

// void operator++ (int){
//     int area = length*width+1;
//     cout<< area;
// }
// void operator++ (){
//     int area = length*width+1;
//     cout<< area;
// }
// };


// int main()
// {
//     Rectangle r1(12,5);
//     r1++;
//     ++r1;
//     return 0;
// }


// ----------------------------------------------------------------------------------------------------


// Problem Statement: Create a class to represent a shopping cart. The cart class should have
// constructors and destructors to initialize and clean up the cart objects. Additionally, overload
// the "+" operator to merge the items in two shopping carts into a single cart.


// #include <iostream>
// using namespace std;


// class ShoppingCart{

// public:
// int item_no;
// string item_name;
// ShoppingCart(){}
// ShoppingCart(int x , string y){
//     item_no = x;
//     item_name = y;
// }

// ~ShoppingCart(){}

// void operator+ (ShoppingCart s2){
//     ShoppingCart s3;
//     s3.item_no = item_no + s2.item_no;
//     s3.item_name = item_name + s2.item_name;
//     cout << "item_no :" <<s3.item_no<<endl;
//     cout << "item_name :" << s3.item_name<<endl;
// }

// };




// int main()
// {
//     ShoppingCart s1(5,"shampoo"), s2(10,"soap"),s3();
//     s1+s2;
//     return 0;
// }


// ----------------------------------------------------------------------------------------------

// Problem Statement: You are tasked with creating a class that represents a social media
// profile. The profile class should have constructors and destructors to initialize and clean up
// the profile objects. Additionally, you need to implement operator overloading to merge two
// profiles, combining their respective posts, followers, and other profile data. You are also
// required to overload other operators for specific operations related to social media profiles.
// username (string): Represents the username of the profile.
// posts (string *): Stores the posts made by the profile owner.
// followers (int): Represents the number of followers the profile has.
// following (int): Represents the number of profiles the profile owner is following.
// Profile(string username): Initializes the profile with the given username and default
// values for posts, followers, and following.
// Destructor: Cleans up any dynamically allocated memory or resources used by the profile
// object.
// "+" Operator:
// Overload the '+' operator to merge two profiles. The result should be a new profile
// object that combines the posts, followers, and following count of the two profiles being
// merged.
// "<<" Operator:
// Overload the "<<" operator to allow printing the profile details to the console. This
// should display the username, number of posts, number of followers, and number of
// profiles being followed.
// addPost(string post): Adds a new post to the profile's posts vector.
// increaseFollowers(): Increases the number of followers by 1.
// increaseFollowing(): Increases the number of profiles being followed by 1.



// #include <iostream>
// using namespace std;

// class Profile{
// public:
//     string username;
//     string posts;
//     int followers , following;

// Profile(){}

// Profile(string username){
//     this -> username = username;
//     posts = "a";
//     followers = 10;
//     following = 10;
// }


// ~Profile(){

// }


// void operator+ (Profile p2){
//     username = username + p2.username;
//     posts = posts + p2.posts;
//     followers = followers + p2.followers;
//     following = following + p2.following;
// }

// void operator>> (Profile){
//     cout<<"Username : "<<username<<endl;
//     cout<<"Posts : "<<posts<<endl;
//     cout<<"Followers : "<<followers<<endl;
//     cout<<"Following : "<<following<<endl;
// }

// void addpost(string x){
//     posts = posts + x;
// }

// void increase_followers(){
//     ++followers;
// }
// void increase_following(){
//     ++following ;   
// }

// };


// int main()
// {
//     Profile p1("Khushal"),p2("Ishan");
//     p1+p2;
//     Profile p3(p1);
//     p3>>p2;


//     return 0;
// }







// --------------------------------------------------------


// Problem Statement: Create a class to represent a distance in meters and kilometers. The class
// should have constructors to initialize the distance in one unit and convert it to the other unit.
// Implement type conversion functions to convert the distance object from meters to kilometers
// and vice versa.

// #include <iostream>
// using namespace std;

// class Distance{
// int km;
// int m;
// public:
// Distance(){}

// Distance(int x){
//     km = x;
//     m = km*100;
// }




// };





// int main()
// {
    
//     return 0;
// }


// ----------------------------------------------------------------------------------------------------


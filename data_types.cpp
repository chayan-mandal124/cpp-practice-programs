#include <iostream>
int main (){
    // this is a comment 
    /*  this
        is a
        multi line 
        comment 
    */
    std::cout <<"i love momo"<<'\n'; 
    std::cout <<"i love pizza"<<"\n";
    std::cout <<"i love vegetables";
   return 0;
}

#include <iostream>
int main (){
    int x = 5;
    int y = 6;
    int sum = x + y;
    std :: cout << x <<'\n';
    std :: cout << y<<'\n';
    std :: cout <<sum;
    // integer (whole number)
    int age = 26;
    int year = 2000;
   :: cout << "her name is nnnn " << '\n';
    std :: cout << "her age is " << age << '\n';
    std :: cout << "and she was born in "<< year <<'\n';
    // double (number including decimal)
    double price= 4.5;
    double sgpa = 8.5;
    double hight = 5.4;
    double weight = 46.3;
   std :: cout << "her height is "<< hight << "feet"  << '\n';
    std :: cout << "and her weight is  "<< weight <<"kg"<<'\n';
    std :: cout << "and her college sgpa is "<< sgpa <<'\n';
    //char ( single character )
    char grade ='A';
    char initial = 'B';
    //std :: cout << initial <<'\n';
    // boolean (true or false)
    bool student = false;
    bool power = true;
    bool forsale = true;
    // string(objects that represents a sequence of text)
    std :: string name ="Bro";
    std :: string day = "friday";
    std :: string food = "pizza";
    std :: string address = " 1123 fake st.";
    std :: cout << "Hello "<< name << '\n';
    std :: cout << "you are "<< age << " year's old"<<'\n';
    std :: cout << "your address is " << address;
    //the const keyword specifies that a variable's value is constant
    // tells the compiler to prevent anything from modifying it 
    // (read only )
    const double PI = 3.14;
    const double LIGHT_OF_SPEED = 3579.6;
    double radious=10;
    double circumference = 2* PI *radious;
   // std :: cout <<LIGHT_OF_SPEED;
   // name space = provides a solution for preventing name conficts in a large projects
   //              Each entity needs a unique name , a namespace allows  for identically named entities
   //              as long as the namespaces are different.
    namespace first {
        int x = 1;
    }
    namespace second{
        int x = 2;
    }
    int main (){
   using namespace first;
   std :: cout <<second ::x;
    
return 0;
}
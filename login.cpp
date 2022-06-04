#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std ;

int main()
{
    cout << "Hello WELCOME to the APP!!!"<< endl ;
    cout << "Please CREATE an Account..."<< endl ;
    cout << "Choose a user name: " << endl ;
    string user ;
    getline (cin,user);
    cout << "Please choose a Password: "<< endl ;
    string pass;
    getline (cin,pass);

    system("CLS");
    cout << "Please enter your information..." << endl ;
    cout << "Username: "<< endl ;
    string username;
    getline(cin,username);
    cout << "Password: "<< endl ;
    string password;
    getline(cin,password);


    while (username!=user && password!=pass)
    {
        system("CLS");
        cout << "Wrong username or password...Please Try Again..." << endl ;
        cout << "Please enter the username: "<< endl ;
        getline(cin,username);
        cout << "Please enter the password: " << endl ;
        getline(cin,password);
    }
    
    system("CLS");
    cout <<"WELCOME to the APP..!!!!!"<< endl ;



   return 0;
}
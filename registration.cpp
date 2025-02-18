#include <iostream>
#include "registration.h"
using namespace std;

void Registration::signup()
{
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter you email: ";
    getline(cin, email);

    while(true)
    {
        cout << "Enter your password: ";
        getline(cin, pass);
        
        if(pass.length() < 8)
            cout << "Error: Your password must be 8 or more characters long.\n";
        else
            break;
    }
    security(pass);
}

void Registration::login()
{
    cout << "Enter you email: ";
    getline(cin, email);

    while(true)
    {
        cout << "Enter your password: ";
        getline(cin, pass);
        
        if(pass.length() < 8)
            cout << "Error: Your password must be 8 or more characters long.\n";
        else
            break;
    }
    security(pass);
}

void Registration::security(std::string &pass)
{
    const string salt = "&%@!|472347^{38}47%)";
    const int key = 786355;

    // Adding Salt
    pass.insert(0, salt);
    
    // Encrypting the password
    for (int i = 0; pass[i] != '\0'; i++)
    {
        pass[i] = pass[i] ^ key; // XOR each character with the key
    }
}
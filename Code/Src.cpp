#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
//Password Generator

string generatePass(size_t length, int leength)
{
    int numPicker{};
    const string characters{"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890"};
    string password{};
    const int min{5};

    srand(time(nullptr));
    if(leength < min)
    {
        cout << "ERROR! PLEASE TYPE A NUMBER MORE THAN 5";
    }else{

        for(size_t i{1}; i<=length; i++)
        {
            numPicker = rand() % length + min;
            password += characters.at(numPicker);
           
        }
       
    }
    return password;
}

int main()
{
    
    
    size_t length{};
    int leength{};
    
    string password{};
    cout << "Enter The Length of the Password: ";
    cin >> length;
    leength = length;
    

    password = generatePass(length, leength);

    cout << "Your Password is: " << password << endl;
    cout << "Copy and Paste this Password To Your Desired Website\n";

    system("Pause");
    return 0;
}
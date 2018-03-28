// FCI – Programming 1 – 2018 - Assignment 2
// Program Name: Pi.cpp
// Last Modification Date: 26/02/2018
// Author1 and ID and Group: Hussien Ashraf Feteiha, 20170093, Group 4
// Author1 and ID and Group: Hussien Tarek Ismail, 20170094, Group 4
// Teaching Assistant: Hala Abd El-Kader
// Purpose: Pi calculator.
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "\t\telzbon elydek ratebak betamamo hwa sedak wa enta 5adamo !!!!" << endl ;
    cout << "\t\tWelcome to PI Calculator!" << endl;
    double pi, number;
    int choice;
    while (true)
    {
        cout<<"Enter 1 to calculate pi, or 2 to exit: ";
        cin >> choice;
        if (choice == 1)
        {
    cout<<"Enter number of terms: ";
    cin>> number;
    double sum=0;
    int j = 1 ;
    for(double i =1; i<=number; i++)
    {
        sum= sum + pow(-1.0,(i-1))*(1.0/j);
        j += 2 ;
    }
    pi=4*sum;
    cout <<"Pi equals :"<< pi <<endl;
        }
        else if (choice == 2)
        {
            cout<<"BYE!";
            break;
        }
        else
        {
            cout<<"Please enter a valid number.\n";
        }
    }
    return 0;
}

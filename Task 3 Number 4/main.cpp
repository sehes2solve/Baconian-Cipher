// FCI – Programming 1 – 2018 - Assignment 2
// Program Name: Task 3 Number 4.cpp
// Last Modification Date: 2/2/2018
// Author2 and ID and Group: Hussien Tarek Ismail , 20170094 & G4
// Teaching Assistant: Hala Abd El-Kader
// Purpose: Calculate Number of chocolate bars needed to maintain our weight.
#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
#define choc_cal 230

using namespace std;
double num(string x)
{
    char l[] = {'0','1','2','3','4','5','6','7','8','9'} ;
    int j ;
    bool f = 1;
    for(int i = 0 ; i < int(x.length()) ; i++)
    {
        if (x[i]=='.')
        {
            f = 0 ;
            j = i ;
            break ;
        }
    }
    if (f)
        j = (x.length())-1 ;
    else
        j = j - 1 ;
    double y = 0 ;
    bool b = 1 ;
    for(int i = 0 ; i < int(x.length()) ; i++)
    {
        for(int k = 0 ; k < 10 ; k++)
        {
            if (l[k] == x[i])
            {
                if (b)
                {
                    y = y + (k*pow(10,j)) ;
                    break ;
                }
                else
                {
                    y = y + (k*pow(10,-j)) ;
                    break ;
                }
            }
            else if ('.'== x[i])
            {
                j = 0 ;
                b = 0 ;
                break ;
            }
        }
        if(b)
            j -= 1 ;
        else
            j++ ;
    }
    return y ;

}


int main()
{
    cout << "Ahlan ya user ya habibi ." << endl ;
    string x,W,H,Y ;
    double w,h,y,BMR;
    int n ;
    cout <<"Enter your weight in pounds : " << endl ;
    bool suw ;
    do
    {
        suw = 0 ;
        int sum = 0 ;
        cin >> W ;
        for (int i = 0 ;i < int(W.length()); i++)
        {
            if(W[i] < 0x2f || W[i] > 0x38)
            {
                if(W[i] == 0x2e)
                {
                    sum ++ ;
                }
                else
                {
                    suw = 1 ;
                    break ;
                }
            }
            if (sum > 1)
            {
                suw = 1 ;
                break ;
            }
        }
        if(suw)
        {
            cout << "Invalid Input !!!" << endl ;
            cout <<"Enter your weight in pounds : " << endl ;
        }
    }while(suw) ;
    w = num(W) ;
    cout <<"Enter your height in inches : " << endl ;
    bool suh ;
    do
    {
        suh = 0 ;
        int sum = 0 ;
        cin >> H ;
        for (int i = 0 ;i < int(H.length()); i++)
        {
            if(H[i] < 0x2f || H[i] > 0x38)
            {
                if(H[i] == 0x2e)
                {
                    sum ++ ;
                }
                else
                {
                    suh = 1 ;
                    break ;
                }
            }
            if (sum > 1)
            {
                suh = 1 ;
                break ;
            }
        }
        if(suh)
        {
            cout << "Invalid Input !!!" << endl ;
            cout <<"Enter your weight in pounds : " << endl ;
        }
    }while(suh) ;
    h = num(H) ;
    cout << "Enter your age in years : " <<endl ;
    bool suy ;
    do
    {
        suy = 0 ;
        int sum = 0 ;
        cin >> Y ;
        for (int i = 0 ;i < int(Y.length()); i++)
        {
            if(Y[i] < 0x2f || Y[i] > 0x38)
            {
                if(Y[i] == 0x2e)
                {
                    sum ++ ;
                }
                else
                {
                    suy = 1 ;
                    break ;
                }
            }
            if (sum > 1)
            {
                suy = 1 ;
                break ;
            }
        }
        if(suy)
        {
            cout << "Invalid Input !!!" << endl ;
            cout <<"Enter your weight in pounds : " << endl ;
        }
    }while(suy) ;
    y = num(Y) ;
    cout << "Please Choose your gender :" << endl << "(M)- Male" << endl << "(F)- Female" << endl ;
    bool sug ;
    do
    {
        sug = 0 ;
        cin >> x ;
        if ((x =="M")||(x=="m"))
        {
            BMR = 66 + (6.3*w) + (12.9*h) + (6.8*y) ;
            n = ceil(BMR/choc_cal) ;
        }
        else if ((x=="F")||(x=="f"))
        {
            BMR = 655 + (4.3*w) + (12.9*h) + (6.8*y) ;
            n = ceil(BMR/choc_cal) ;
        }
        else
        {
            sug = 1 ;
            cout << "Invalid Input : " << endl << "Please Choose your gender :" << endl << "(M)- Male" << endl << "(F)- Female" << endl ;
        }
    }while(sug) ;
    cout <<"Number of chocolate bars needed to maintain your weight is : " << n ;
    return 0;
}

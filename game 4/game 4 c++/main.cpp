#include <iostream>
#include <string>

using namespace std;
string conca1 (string x, int y)
{
    char a[y+1] ;
    string z ="" ;
    for (int i = 0 ; i < y + 1 ;i++)
    {
        a[i] = x[i] ;
    }
    for (int i = 0 ; i < y + 1 ;i++)
    {
       z = z + a[i] ;
    }
    return z ;
}

string conca2 (string x, int y, int n)
{
    char a[n - y] ;
    string z ="" ;
    int j = 0 ;
    for (int i = y ; i < n ;i++)
    {
        a[j] = x[i] ;
        j++;
    }
    for (int i = 0 ; i < n - y ;i++)
    {
       z = z + a[i] ;
    }
    return z ;
}

int a[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16} ;
string b[]={"0","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16"} ;
int main()
{
    cout << "-----------------" << endl ;
    for (int i  = 1 ; i < 17 ; i++)
    {
        if (i % 4 == 0)
        {
            if (i > 9)
            {
                cout << "| " << i << "|" << endl ;
                cout << "-----------------" << endl ;
            }
            else
            {
                cout << "|  " << i << "|" << endl;
                cout << "-----------------" << endl ;
            }
        }
        else
        {
            if (i > 9)
                cout << "| " << i ;
            else
                cout << "|  " << i ;
        }
    }



    while (true)
        {
            bool k ,s , l ;
            int x1 , x2 ;
            do {
                    string x , X1 ,X2 ;
                    int h1 ;
                    k = true ;
                    do{
                        cout << "Player 1 : " << endl ;
                        cin >> x ;
                        for (int i = 0 ; i < int(x.size()) ; i++)
                        {
                            if (x[i] == ',')
                            {
                                h1 = i ;
                                k = false ;
                                break ;
                            }
                        }
                        if (k == true)
                            cout << "Wrong Choice" << endl ;

                    }while(k) ;
                    X1 = conca1(x,h1-1) ;
                    X2 = conca2(x,h1+1,x.size()) ;
                    bool s1 = false ;
                    bool s2 = false ;
                    s = true ;
                    for(int i = 1 ; i < 17 ; i++ )
                    {
                        if (b[i] == X1)
                        {
                            x1 = a[i] ;
                            s1 = true ;
                            break ;
                        }
                    }

                    for(int i = 1 ; i < 17 ; i++ )
                    {
                        if (b[i] == X2)
                        {
                            x2 = a[i] ;
                            s2 = true ;
                            break ;
                        }
                    }
                    if (s1 && s2)
                    {
                        s = false ;
                        if (x1 > x2)
                            swap(x1,x2) ;
                    }
                    if( k || s || ((x2 != x1 + 1) && (x2 != x1 + 4)) || ((x1 % 4 == 0) && (x2 == x1 + 1)) || (a[x1]== 0 || a[x2]== 0))
                        cout << "wrong choice" << endl ;
            }while( k || s || ((x2 != x1 + 1) && (x2 != x1 + 4)) || ((x1 % 4 == 0) && (x2 == x1 + 1)) || (a[x1]== 0 || a[x2]== 0) ) ;
            a[x1] = 0 , a[x2] = 0 ;
            l = true ;
            for (int i = 1 ; i < 13 ; i++)
            {
                if ((a[i] == 4 || a[i] == 8 || a[i] == 12) && (a[i+4] != 0) )
                   {
                       l = false ;
                       break ;
                   }
                else if ((a[i] != 0 && a[i] != 4 && a[i] != 8 && a[i] != 12) && (a[i+1] != 0 || a[i+4] != 0))
                   {
                      l = false ;
                      break ;

                   }
            }
            if (l == true)
            {
                for (int i = 13 ; i < 16 ; i++)
                {
                    if((a[i] != 0) && (a[i+1] != 0))
                    {
                        l = false ;
                        break ;
                    }
                }
            }
            cout << "-----------------" << endl ;
            for(int i = 1 ; i < 17 ; i++ )
            {
                if  (i % 4 == 0)
                   {
                       if (a[i] == 0)
                       {
                           cout << "|  " << a[i] << "|" << endl ;
                           cout << "-----------------" << endl ;
                       }
                       else if (i > 9)
                       {
                           cout << "| " << i << "|" << endl ;
                           cout << "-----------------" << endl ;

                       }

                       else
                       {
                           cout << "|  " << i << "|" << endl ;
                           cout << "-----------------" << endl ;
                       }
                   }
                else
                   {
                        if (a[i] == 0)
                        {
                            cout << "|  " << a[i]  ;
                        }
                        else if (i > 9)
                        {
                            cout << "| " << i  ;
                        }
                        else
                        {
                           cout << "|  " << i  ;
                        }
                }
            }

            if (l == true)
             {
                   cout << "Player 1 Wins" << endl ;
                   break ;
             }

             bool K ,S , L ;
            int y1 , y2 ;
            do {
                    string x , X1 ,X2 ;
                    int h1 ;
                    K = true ;
                    do{
                        cout << "Player 2 : " << endl ;
                        cin >> x ;
                        for (int i = 0 ; i < int( x.size()) ; i++)
                        {
                            if (x[i] == ',')
                            {
                                h1 = i ;
                                K = false ;
                                break ;
                            }
                        }
                        if (K == true)
                            cout << "Wrong Choice" << endl ;

                    }while(K) ;
                    X1 = conca1(x,h1-1) ;
                    X2 = conca2(x,h1+1,x.size()) ;
                    bool s1 = false ;
                    bool s2 = false ;
                    S = true ;
                    for(int i = 1 ; i < 17 ; i++ )
                    {
                        if (b[i] == X1)
                        {
                            y1 = a[i] ;
                            s1 = true ;
                            break ;
                        }
                    }

                    for(int i = 1 ; i < 17 ; i++ )
                    {
                        if (b[i] == X2)
                        {
                            y2 = a[i] ;
                            s2 = true ;
                            break ;
                        }
                    }
                    if (s1 && s2)
                    {
                        S = false ;
                        if (y1 > y2)
                            swap(y1,y2) ;
                    }
                    if( K || S || ((y2 != y1 + 1) && (y2 != y1 + 4)) || ((y1 % 4 == 0) && (y2 == y1 + 1)) || (a[y1]== 0 || a[y2]== 0))
                        cout << "wrong choice1" << endl ;
            }while( K || S || ((y2 != y1 + 1) && (y2 != y1 + 4)) || ((y1 % 4 == 0) && (y2 == y1 + 1)) || (a[y1]== 0 || a[y2]== 0) ) ;
            a[y1] = 0 , a[y2] = 0 ;
            L = true ;
            for (int i = 1 ; i < 13 ;i++)
            {
                if ((a[i] == 4 || a[i] == 8 || a[i] == 12) && (a[i+4] != 0) )
                   {
                       L = false ;
                       break ;
                   }
                else if ((a[i] != 0 && a[i] != 4 && a[i] != 8 && a[i] != 12) && (a[i+1] != 0 || a[i+4] != 0))
                   {
                       L = false ;
                       break ;

                   }
               }
            for (int i = 13 ; i < 16 ; i++)
            {
                if((a[i] != 0) && (a[i+1] != 0))
                   {
                       L = false ;
                       break ;
                   }
            }
            cout << "-----------------" << endl ;
            for(int i = 1 ; i < 17 ; i++ )
            {
                if  (i % 4 == 0)
                   {
                       if (a[i] == 0)
                       {
                           cout << "|  " << a[i] << "|" << endl ;
                           cout << "-----------------" << endl ;
                       }
                       else if (i > 9)
                       {
                           cout << "| " << i << "|" << endl ;
                           cout << "-----------------" << endl ;

                       }

                       else
                       {
                           cout << "|  " << i << "|" << endl ;
                           cout << "-----------------" << endl ;
                       }
                   }
                else
                   {
                        if (a[i] == 0)
                        {
                            cout << "|  " << a[i]  ;
                        }
                        else if (i > 9)
                        {
                            cout << "| " << i  ;
                        }
                        else
                        {
                           cout << "|  " << i  ;
                        }
                }
            }

            if (L == true)
             {
                   cout << "Player 2 Wins" << endl ;
                   break ;
             }
        }

  return 0 ;

}


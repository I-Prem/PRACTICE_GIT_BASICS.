#include<iostream>
using namespace std;

int main()
{
    for (int i = 0; i <= 50; i++)
    {
        cout<<i<<endl;
        if(i==15)
        break; // By using break loop get terminated when i=15;
    }
    for (int j = 0; j <= 50; j++)
    {
        if(j==15)
        break; // Why here print 0 to 14 only
        cout<<j<<endl;
    }
                         
                        //  **********CONTINUE**********
    for (int K = 0; K <= 50; K++)
    {
        if(K==15)
        continue; // HERE SKIP THE VLAUE WHICH IS EQUIVALENT TO 15
        cout<<K<<endl;
    }
return 0;
}
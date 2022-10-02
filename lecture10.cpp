#include<iostream>
using namespace std;
int main()
{
    cout<<"lecture: FOR WHILE AND DO WHILE LOOPS IN C++"<<endl;

        //*****LOOPS IN C++********
    // There are three types of loops in C++
    //    1. For loop 
    //    2. While loop 
    //    3. do-while loop 

    //Printing 1 to 100 numbers
     
     for (int i = 0; i <=100; i++)
     {
        cout<<i<<endl;
     }
           // using while loop 
    int j=0;
     while(j<=200)
      {
        cout<<j<<endl;
        j++;
      }


              //***************DO WHILE LOOP*********************
    int k=0;
    do
    {
        cout<<k<<endl;
        k++;
    } while (k<=300);//do while loop run at one time must even if their condition get wrong ....





    // Write a program to print table of 6 with do while loop
       

       int l=6,m=1;
       do
       {
          cout<<l*m<<endl;
          m++;
       } while (m<=10);
       
    
    return 0;
}
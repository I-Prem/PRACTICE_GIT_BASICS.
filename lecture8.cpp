#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout<<"Lecture : constants, Manipulators and Operator precedence"<<endl;


    int a=10;
    cout<<"the value of a was : "<<a<<endl;
    a=15;
    cout<<"the value of a is : "<<a<<endl;

    //As we see that in above situation there is changes takes place in variable value....But if i want to make that particular types of varible which has fixed value.Then we have to use a keyword "const".For example:

              // **************CONSTANT IN C++****************

    const int b = 100;
    cout<<"The value of b is:"<<b<<endl;
    //b=120; //Here error comes so that we are not able to change such types of variable value.
    //cout<<"The value of b is:"<<b<<endl;


               // **************MANIPULATOR IN C++****************

        //endl is manipulator.But there is "setw" manipulator which is inside a header file of "iomanip"

        int dash=12002,vash=122,pro=4566;
        cout<<"The value of dash without setw is:"<<dash<<endl;
        cout<<"The value of vash without setw is:"<<vash<<endl;
        cout<<"The value of pro without setw is:"<<pro<<endl;



        cout<<"The value of dash with setw is:"<<setw(40)<<dash<<endl;
        cout<<"The value of vash with setw is:"<<setw(40)<<vash<<endl;
        cout<<"The value of pro with setw is:"<<setw(40)<<pro<<endl;
        //setw makes space in printing value.

        //Operator precedence and associativity. Study from book
    return 0;
}
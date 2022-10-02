#include<iostream>
using namespace std;
int main()
{
    cout<<"lecture: CONTROL STRUCTURES(IF ELSE/WHILE ETC..)"<<endl;
    //Basic control structure are of three types:
    //   1. SEQUENCE STRUCTURE----SIMPLE TAKE ACTION AND THEN EXIT.
    //   2. SELECTION STRUCTURE----IF ELSE.....
    //   3. LOOP STRUCTURE----FOR LOOP.....


    int age;
    cout<<"Tell me your age to check tonight paty eligibility"<<endl;
    cin>>age;
    if(age<18)
    {
        cout<<"SORRY!...You are not eligible for tonight party";
    }
    else if(age==18)
    {
        cout<<"You have to take a pass to come for tonight party";
    }
    else
    cout<<"You are eligible to come in tonight party.";

                       //**********SWITCH***********
                       int year;
                       cout<<"Enter you year of birth";
                       cin>>year;
    
    switch (year)
    {
    case 2000:
        cout<<"Right now your age 22 years";
        break;
    case 2001:
        cout<<"Right now your age 21 years";
        break;
    case 2002:
        cout<<"Right now your age 20 years";
        break;
    case 2003:
        cout<<"Right now your age 18 years";
        break;
    case 2004:
        cout<<"Right now your age is 17 years";
        break;
    
    default:
        cout<<"SORRY!...You are too young for admission";
        break;
        //Here if i not use the keyword "break" then for input 2000,there is display all lower cout . If i write 2003 then all possible value after this in cout is print .
    }
    return 0;
}
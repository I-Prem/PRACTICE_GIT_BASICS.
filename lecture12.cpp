#include<iostream>
using namespace std;

int main()
{
cout<<"lecture: POINTER"<<endl;

//Pointer is a data type which holds the address of other data types.

int a=10;
int* b=&a;
cout<<"The address of a is"<<b<<endl;
cout<<"The address of a is"<<&a<<endl;
cout<<"The value at address b "<<*b<<endl;
return 0;
}
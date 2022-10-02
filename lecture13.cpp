#include <iostream>
using namespace std;

int main()
{
    cout << "lecture: POINTER IN C++" << endl;
    int marks[] = {10, 5, 80, 88, 90};
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << marks[4] << endl;

    // I assign array in another ways:

    cout << "These are the semester marks" << endl;
    int sem_marks[5];
    sem_marks[0] = 780 ;
    sem_marks[1] = 670 ;
    sem_marks[2] = 777 ;
    sem_marks[3] = 981 ;
    sem_marks[4] = 837 ;
    cout<<sem_marks[0]<<endl;
    cout<<sem_marks[1]<<endl;
    cout<<sem_marks[2]<<endl;
    cout<<sem_marks[3]<<endl;
    cout<<sem_marks[4]<<endl;


    //PRINTING AN ARRAY ELEMENT WITH THE HELP OF ARRAY.
     cout<<"again printing the value inside sem_marks"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<sem_marks[i]<<endl;
    }


    // DO SAME PRINTING PROBLEM WITH WHILE AND DO WHILE LOOP;
    int i=0;
    while (i<5)
    {
        cout<<"the different loop using"<<sem_marks[i]<<endl;
        i++;
    }


    int k=0;
    do
    {
        cout<<sem_marks[k]<<endl;
        k++;
    } while (k<5);
    
    
    // POINTER ARITHMETIC
       // FORMULA=>    address(new)=address(current)+i*sizeof(data type)


       // PRINTING WITH THE HELP OF POINTER 

    int* p=sem_marks;
    cout<<"The value of *p is  "<<*p<<endl;
    cout<<"The value of *(p+1) is  "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is  "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is  "<<*(p+3)<<endl;
    cout<<"The value of *(p+4) is  "<<*(p+4)<<endl;
    return 0;
}
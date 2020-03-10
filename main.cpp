#include <iostream>
#include <StudentName.h>
using namespace std;

int main()
{
    string Name ;
    int i , j ;
    cout<<"Enter a name \n";
    getline(cin,Name);
    StudentName student_name(Name);
    //---------------------------
    cout<<"Enter the position i : ";
    cin>>i;
    cout<<"Enter the position j : ";
    cin>>j;
    cout<<student_name.replace(i,j)<<endl;
    student_name.print();
    return 0;
}

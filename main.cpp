#include <iostream>
#include <StudentName.h>
using namespace std;

int main()
{
    string name = "tarek abdelhak ";
    int counter = 0 ;
    for (int  i = 0 ; i<name.length();i++){
        if (isspace(name[i])){
            int temp = isspace(name[i]);
            cout<<temp<<endl;
            counter++;
        }
    }

    cout<<counter<<endl;

    return 0;
}

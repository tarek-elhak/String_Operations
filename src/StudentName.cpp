#include "StudentName.h"
#include<iostream>
#include<cstring>
using namespace std ;
StudentName::StudentName(string name)
{
    int numberOfSpaces = 0 ;
    for (int counter = 0 ; counter < name.length() ; counter++){
        if (isspace(name[counter])){
            numberOfSpaces++;
        }
    }
    if (numberOfSpaces >=2){
        Name = name;
    }
    else{
        for (int counter = 0 ; counter<numberOfSpaces ; counter++){

        }
    }
}
void StudentName::setName(string name){
    Name = name;
}
string StudentName::getName(){
    return Name;
}
StudentName::~StudentName()
{

}

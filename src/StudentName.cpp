#include "StudentName.h"
#include<iostream>
#include<cstring>
using namespace std ;


StudentName::StudentName(string name)
{
    int numberOfSpaces = 0 ;
    int index ;
    for (unsigned int counter = 0 ; counter < name.length() ; counter++){
        if (isspace(name[counter])){
            numberOfSpaces++;
            index = counter+1;
        }
    }
    if (numberOfSpaces >=2){
        Name = name;
    }
    else{
        if (numberOfSpaces == 0){
            Name = name;
            while(numberOfSpaces<2){
                Name+=" ";
                Name+=name;
                numberOfSpaces++;
            }
        }
        else{
            while(numberOfSpaces<2){
                //taking substring --> after the first space
                Name = name ;
                Name+=" ";
                Name+=name.substr(index,name.length()-6);
                numberOfSpaces++;
            }
        }
    }
}
void StudentName::setName(string name){
    Name = name;
}
string StudentName::getName(){
    return Name;
}

void StudentName::print(){
    cout<<"detailed parts of the name are:\n";
    string part = "";
    unsigned int counter = 0 ;
    int counter2 = 1 ;
    while(counter < Name.length()){
        if(Name[counter]!=' '){
            part+=Name[counter];
            counter++;
        }
        else{
            cout<<counter2<<")"<<part<<endl;
            counter++;
            counter2++;
            part = "";
        }
    }
    cout<<counter2<<")"<<part<<endl;
}

bool StudentName::replace(int i , int j){
    // getting the number of words
    int numberOfWords = 1 ;
    unsigned int counter = 0 ;
    while(counter < Name.length()){
        if (Name[counter] != ' '){
            //words[counter2]+=Name[counter];
            counter++;
        }
        else{
            numberOfWords++;
            counter++;
            //counter2++;
        }
    }
    string* words = new string[numberOfWords];

    int counter2 = 0 ;
    counter = 0 ;
    while(counter < Name.length()){
        if (Name[counter] != ' '){
            words[counter2]+=Name[counter];
            counter++;
        }
      else{
        counter++;
        counter2++;
       }
    }
    if (numberOfWords >= i && numberOfWords>=j){
        string temp ;
        temp = words[i-1];
        words[i-1]=words[j-1];
        words[j-1] = temp;
        Name = "";
        for (int i = 0 ; i<numberOfWords-1 ; i++){
            Name+=words[i];
            Name+=" ";
        }
        Name+=words[numberOfWords-1];
        delete [] words;
        return true;
    }
    else{
        delete [] words;
        return false;
    }


}

StudentName::~StudentName()
{

}

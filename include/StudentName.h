#ifndef STUDENTNAME_H
#define STUDENTNAME_H
using namespace std ;
#include <string>

class StudentName
{
    public:
        StudentName(string);
        ~StudentName();
        void setName(string);
        void print();
        string getName();
        bool replace (int,int);
    protected:

    private:
        string Name ;
};

#endif

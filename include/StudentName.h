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
        string getName();
    protected:

    private:
        string Name ;
};

#endif

//
//  Student.hpp
//  lab5
//
//  Created by Żaneta Larwa on 04.01.2017.
//  Copyright © 2017 Żaneta Larwa. All rights reserved.
//

#ifndef Student_hpp
#define Student_hpp

#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
class Student
{

    public:
    
        Student(string, string, int);
        Student();
        bool operator > (Student s2);
        friend std::ostream& operator<< (std::ostream &wyjscie, Student &s);
    
    private:
    
        string imie;
        string nazwisko;
        int indeks;
};
#endif /* Student_hpp */

//
//  Student.cpp
//  lab5
//
//  Created by Żaneta Larwa on 04.01.2017.
//  Copyright © 2017 Żaneta Larwa. All rights reserved.
//

#include "Student.hpp"
Student::Student(){}
Student::Student(string n, string i, int ind)
{
    nazwisko=n;
    imie=i;
    indeks=ind;
}
bool Student::operator>(Student s2)
{
    return nazwisko>s2.nazwisko;
}
std::ostream& operator<< (std::ostream &wyjscie, Student &s)
{
    wyjscie<<s.nazwisko+" "+s.imie+" "+to_string(s.indeks);
    return wyjscie;
}

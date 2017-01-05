//
//  main.cpp
//  lab5
//
//  Created by Żaneta Larwa on 04.01.2017.
//  Copyright © 2017 Żaneta Larwa. All rights reserved.
//

#include <iostream>
#include "Zbior.hpp"
#include "Student.hpp"
int main(int argc, const char * argv[]) {
    
    Zbior <char >zb;
    zb+'f';
    zb+'a';
    zb+'d';
    zb+'c';
    zb+'e';
    zb.sort();
    std::cout << zb;
    
    Zbior <Student> zb2;
    zb2+Student("Nowak", "Jan", 123);
    zb2+Student("Kowal", "Piotr", 342);
    zb2+Student("Kot", "Alicja", 876);
    zb2+Student("Baran", "Tomasz", 987);
    zb2+Student("Arbuz", "Mikolaj", 139);
    zb2+Student("Zefir", "Zenon", 986);
    zb2+Student("Wit", "Stanislaw", 765);
    zb2+Student("Malza", "Kamil", 432);
    zb2.sort();
    std::cout<<zb2;
    
    return 0;
}

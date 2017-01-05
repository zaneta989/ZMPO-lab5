//
//  Zbior.hpp
//  lab5
//
//  Created by Żaneta Larwa on 04.01.2017.
//  Copyright © 2017 Żaneta Larwa. All rights reserved.
//

#ifndef Zbior_hpp
int const beginSize = 10;
#define Zbior_hpp

#include <stdio.h>
#include <iostream>

template<typename T> class Zbior
{
    private:
        T* tab;
        int size;
        int sizeMax;
        void swap(T& a, T& b){ T c=a; a = b; b = c;}
        void doubleSize()
        {
            T* pom = new T [sizeMax*2];
            for(int i=0; i<getSize(); i++) pom[i]=tab[i];
            tab=pom;
            sizeMax=sizeMax*2;
            delete[] pom;
        }

    public:
    
        Zbior()
        {
            size=0;
            tab = new T[beginSize];
            sizeMax=beginSize;
            
        }
        //~Zbior(){ delete[] tab;}
    
        int getSize(){return size;}
        T* getZbior(){return tab;}
    
    
        Zbior operator + (T elm)
        {
            if(size>=sizeMax*3/4) doubleSize();
            tab[size]=elm;
            size++;
            return *this;
        }
    
        Zbior operator + (Zbior z)
        {
            T* pom=z.getZbior();
            
            //if((getSize()+z.getSize())>=sizeMax*3/4) doubleSize();
            for(int i=0; i<z.getSize(); i++) *this+pom[i];
                
            
            return *this;
        }
        friend std::ostream& operator<< (std::ostream &wyjscie, Zbior &z)
        {
            
            for(int i=0; i<z.getSize(); i++)
            {
                wyjscie<<z.tab[i]<<" , ";
            }
            wyjscie<<"\n";
            return wyjscie;
            
        }
    
    Zbior sort ()
    {
        for( int i = 0; i < getSize(); i++ )
        {
            for( int j = 0; j < getSize() - 1; j++ )
            {
                if( tab[ j ] > tab[ j + 1 ] )
                    swap( tab[ j ], tab[ j + 1 ] );
                
            }
        }
        return *this;
    }

    
};



#endif /* Zbior_hpp */

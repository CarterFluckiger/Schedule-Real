/*
 Carter Fluckiger
 C++ Fall 2019
 Due: September 12, 2019
 Lab 2 Exploring Output
 Description: In this lab I am attempting to show my schedule for every day.
 
 */


#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void Monday();
void Tuesday();
void Wednesday();
void Thursday();
void Friday();


void Phycology();
void cpp();
void Chem();
void Calc_2();
void Chem_lab();

int main()
{
    
    
    
    Monday();
    Chem();
    Monday();
    Calc_2();
    Monday();
    cpp();
    cout<< endl;
    Tuesday();
    Phycology();
    Tuesday();
    Calc_2();
    Tuesday ();
    cpp();
    cout<< endl;
    Wednesday();
    Chem();
    Wednesday();
    Calc_2();
    Wednesday();
    cpp();
    Wednesday();
    Chem_lab();
    
    
    cout<< endl;
    cout<< endl;
    
    
    Thursday();
    Phycology();
    Thursday();
    Calc_2();
    Thursday();
    cpp();
    cout<< endl;
    Friday();
    Chem();
    
    
    
    
    
    
    
    return 0;
    
}

void Monday()
{
    
    cout<<"Monday      ";
    
}
void Chem()
{
    cout<< "9:10    Chemistry   165"<< endl;
}

void Calc_2()
{
    cout<< "10:20   Calculus    216"<< endl;
    
}

void cpp()
{
    cout<< "12:40   C++         162"<< endl;
    
}

void Tuesday()
{
    cout<< "Tuesday     ";
    
}

void Phycology()
{
    cout<< "8:00    Phycology   111"<< endl;
}

void Wednesday()
{
    cout<<"Wednesday   ";
    
}

void Thursday()
{
    cout<<"Thursday    ";
    
}

void Friday()
{
    cout<<"Friday      ";
    
}

void Chem_lab()
{
    cout<<"5:30    Chemistry   165";
    
}

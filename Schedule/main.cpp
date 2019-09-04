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

const string m = "Monday    ";
const string t = "Tuesday   ";


const string chem = "9:10    Chemistry   165";
const string phy = "8:00    Phycology   111";
const string calc = "10:20   Calculus    216";


int main()
{
    
    cout<< m;
    cout<< chem;
    cout<< endl;
    cout<< m;
    cout<< calc;
    cout<< endl;
    cout<< m;
    
    
    
    
    cout<< endl;
    
    
    
    
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

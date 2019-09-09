/*
 Carter Fluckiger
 C++ Fall 2019
 Due: September 12, 2019
 Lab 2 Exploring Output
 Description: In this lab I am attempting to show my schedule for every day.  The schedule is put
 into order of my classes every day using const string function.
 
 */


#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

// Const string for the days of the week

const string m = "Monday    ";
const string t = "Tuesday   ";
const string w = "Wednesday ";
const string th= "Thursday  ";
const string f = "Friday    ";


// const string of the classes, times, class number.

const string chem = "9:10    Chemistry   165";
const string phy = "8:00    Phycology   111";
const string calc = "10:20   Calculus    216";
const string cpp = "12:40   C++         162";
const string chem_lab = "5:30    Chemistry   165";

int main()
{
    
    // The calls for the functions here
    
    cout<< m;
    cout<< chem;
    cout<< endl;
    cout<< m;
    cout<< calc;
    cout<< endl;
    cout<< m;
    cout<< cpp;
    cout<< endl;
    cout<< endl;
    cout<< t;
    cout<< phy;
    cout<< endl;
    cout<< t;
    cout<< calc;
    cout<< endl;
    cout<< t;
    cout<< cpp;
    cout<< endl;
    cout<< endl;
    cout<< w;
    cout<< chem;
    cout<< endl;
    cout<< w;
    cout<< calc;
    cout<< endl;
    cout<< w;
    cout<< cpp;
    cout<< endl;
    cout<< w;
    cout<< chem_lab;
    cout<< endl;
    cout<< endl;
    cout<< th;
    cout<< phy;
    cout<< endl;
    cout<< th;
    cout<< calc;
    cout<< endl;
    cout<< th;
    cout<< cpp;
    cout<< endl;
    cout<< endl;
    cout<< f;
    cout<< chem;
    cout<< endl;
    cout<< endl;
    
    
    
    return 0;
    
}


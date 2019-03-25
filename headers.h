#ifndef HEADERS_H_INCLUDED
#define HEADERS_H_INCLUDED

#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <vector>
#include <string>


using namespace std;

struct student {
    string surname, name;
    vector <double> hwm;
	double examm, sum=0, avg_hw, avg, med;
  int n,v;
	};






#endif // HEADERS_H_INCLUDED

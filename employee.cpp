#include <iostream>
#include <string>
#include <iomanip>
#include "employee.hpp"
#include <utility>
using std:: move;
using std:: setw;
using std:: left;
using std:: setprecision;
using std:: fixed;
using std:: right;
using std:: string;
using std:: cout;
using std:: endl;

employee::employee(string name, int id, double basesalary)
: name_(move(name)), id_(id), basesalary_(basesalary){}

double employee :: calculatepay() const {return basesalary_;}
string employee :: role() const {return "staff";}
void employee:: print() const{
    cout << left << setw(6) << id_
    << setw(20) << name_
    <<setw(10) << role()
    << "RP " << right
    << setw(12) << fixed
    <<setprecision(0) << calculatepay() << endl;
}
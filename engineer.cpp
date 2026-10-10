#include <iostream>
#include <string>
#include <iomanip>
#include "engineer.hpp"
#include <utility>
using std:: move;
using std:: setw;
using std:: left;
using std:: setprecision;
using std:: fixed;
using std:: right;
using std:: string;
using std:: cout;

engineer:: engineer(string name, int id , double basesalary , double overtimehours)
:employee(move(name), id , basesalary), overtimehours_(overtimehours) {}
double engineer :: calculatepay() const{
   double overtimerate = 50000.0;
   return overtimehours_ * overtimerate + basesalary_;
}
string engineer:: role() const {return "engineer";}
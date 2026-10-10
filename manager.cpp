#include <iostream>
#include <string>
#include <iomanip>
#include "manager.hpp"
#include <utility>
using std:: move;
using std:: setw;
using std:: left;
using std:: setprecision;
using std:: fixed;
using std:: right;
using std:: string;
using std:: cout;
manager :: manager(string name , int id , double basesalary, int teamsize)
:employee(move(name), id , basesalary), teamsize_(move(teamsize)){}
double manager :: calculatepay() const{
    double bonus = basesalary_ * 0.1;
    double commission = 500000 * teamsize_;
    return basesalary_ + bonus + commission;
}
string manager:: role() const {return "manager";}
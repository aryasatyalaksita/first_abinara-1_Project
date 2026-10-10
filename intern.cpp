#include <iostream>
#include <string>
#include <iomanip>
#include "intern.hpp"
#include <utility>
using std:: move;
using std:: setw;
using std:: left;
using std:: setprecision;
using std:: fixed;
using std:: right;
using std:: string;
using std:: cout;


intern:: intern(string name, int id, double hourswork, double tariffpay)
: employee(move(name),id , 0.0),hourswork_(move(hourswork)), tariffpay_(move(tariffpay)){}
double intern :: calculatepay() const{
    return tariffpay_ * hourswork_;
}
string intern :: role() const {return "intern";}
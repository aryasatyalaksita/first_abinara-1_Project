#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP
#include <string>

class employee {
protected:
std :: string name_;
 int id_;
  double basesalary_;
public:
 employee(std::string name, int id , double basesalary) ;
    virtual ~employee() = default;
    virtual double calculatepay() const;
    virtual std::string role() const;
    void print() const;

};
 #endif
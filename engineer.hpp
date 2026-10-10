#ifndef ENGINEER_HPP
#define ENGINEER_HPP
#include "employee.hpp"
class engineer : public  employee {
    double overtimehours_;
public:
engineer(std:: string name , int id , double basesalary, double overtimehours_ );
    double calculatepay() const override;
    std:: string role() const override;
};

#endif
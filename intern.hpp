#ifndef INTERN_HPP
#define INTERN_HPP
#include "employee.hpp"

 class intern : public employee{
   double hourswork_; 
   double tariffpay_;
    public:
    intern(std:: string name, int id , double hourswork_, double tariffpay_);
    double calculatepay() const override;
    std::string role() const override;


 };
#endif
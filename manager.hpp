#ifndef MANAGER_HPP
#define MANAGER_HPP
#include "employee.hpp"
class manager : public  employee{
    int teamsize_;
    public:
    double calculatepay() const override;
        std::string role() const override;
    manager(std::string name , int id , double basesalary, int teamsize);
};
#endif


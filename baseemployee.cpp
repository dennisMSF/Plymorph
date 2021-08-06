#include<iostream>
#include<stdexcept>
#include<iomanip>
#include "employee3.h"
using namespace std;
BasePlusComissionEmployee::BasePlusComissionEmployee(const string &first,const string &last,const string &ssn,double sales,double rate, double salary)
:ComissionEmployee(first,last,ssn,sales,rate)
    {
        setBaseSalary(salary);
    }
void BasePlusComissionEmployee::setBaseSalary(double salary){
    if(salary>=0.0){
        baseSalary=salary;
    }
    else{
        throw invalid_argument("Salary must be >=0.0");
    }
}

double BasePlusComissionEmployee::getBaseSalary()const{
    return baseSalary;
}
double BasePlusComissionEmployee::earnings()const{
    return getBaseSalary() + ComissionEmployee::earnings();
}

void BasePlusComissionEmployee::print()const{
    cout<<"base-salaried ";
    ComissionEmployee::print();
    cout<<"\nbase salary: "<<getBaseSalary();
}

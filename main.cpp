#include<iostream>
#include<iomanip>
#include<string>
#include<stdlib.h>
#include "employee12.h"
#include "employee3.h"
using namespace std;

int main(){
    ComissionEmployee comissionEmployee("Sue","Jones","222-22-222",10000,.06);
    ComissionEmployee* comissionEmployeeptr = nullptr;
    BasePlusComissionEmployee basePlusComissionEmployee("bob","Lewis","333-33-333",5000,.04,300);
    BasePlusComissionEmployee* basePlusComissionEmployeeptr = nullptr;
    cout<<fixed<<setprecision(2);
    cout<<"Print base-class and derived-class objects:\n\n";
    comissionEmployee.print();
    comissionEmployeeptr=&comissionEmployee;
    cout<<"\n\n\nCalling print with base-class pointer to "<<"\nbase-class object invokes base-class print function:\n\n";
    comissionEmployeeptr->print();
    basePlusComissionEmployeeptr=&basePlusComissionEmployee;
    cout<<"\n\n\nCalling print with derived-class pointer to "<<"\nderived-class object invokes derived-class "<<"print function:\n\n";
    basePlusComissionEmployeeptr->print();
    comissionEmployeeptr = &basePlusComissionEmployee;
    cout<<"\n\n\nCalling print with base-class pointer to "<<"derived-class object\ninvokes base-class print "<<"function on that derived-class object:\n\n";
    comissionEmployeeptr->print();
    cout<<endl;
 /*   ComissionEmployee comissionEmployee("Sue","Jones","222-22-222",10000,.06);
    BasePlusComissionEmployee* basePlusComissionEmployeeptr = NULL;
    basePlusComissionEmployeeptr=&comissionEmployee;
    ComissionEmployee* comissionEmployeeptr = NULL;
    BasePlusComissionEmployee basePlusComissionEmployee("bob","Lewis","333-33-333",5000,.04,300);
    comissionEmployeeptr=&basePlusComissionEmployee;
    string firstName= comissionEmployeeptr->getFirstName();
    string lastName= comissionEmployeeptr->getLastName();
    string ssn= comissionEmployeeptr->getSocialSecurityNumber();
    double grossSales= comissionEmployeeptr->getGrossSales();
    double comissionRate= comissionEmployeeptr->getComissionRate();*/
//    double baseSalary=comissionEmployeeptr->getBaseSalary();
  //  comissionEmployeeptr->setBaseSalary(500);
}

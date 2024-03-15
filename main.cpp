#include <iostream>

using namespace std;

int main()
{
    double total_cost_of_marchandise,Salary_of_employees,Linda_salary,yearly_rent, electricity_cost;

   cout<<"Input the total cost of the marchandise"<<endl;
   cin>>total_cost_of_marchandise;

   cout<<"Input the Salary_(including linda salary)"<<endl;
   cin>>Salary_of_employees;

   cout<<"Input yearly_rent"<<endl;
   cin>>yearly_rent;
   cout<<"Input the electricity cost"<<endl;
   cin>>electricity_cost;


double total_expense;

total_expense =total_cost_of_marchandise+yearly_rent+Salary_of_employees+electricity_cost;





double Total_Revenue;
Total_Revenue=total_cost_of_marchandise+0.1;


double Markup_price;
Markup_price=(Total_Revenue)/(1-0.15);
cout<<Markup_price;





























    return 0;
}

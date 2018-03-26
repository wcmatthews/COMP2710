// Program:   Cash Register Program
// Name:      Walter Matthews
// Class:     COMP2710
// Date:      12/08/2017
// Email:     wcm0034@auburn.edu
//
// Definition for Sale class.

#include <string>
#include <iostream>
#include <vector>

#ifndef SALE_H
#define SALE_H

using namespace std;

const double SALES_TAX = 0.08;
const double DISCOUNT = 0.15;

class Sale
{
public:
  Sale();

  //Accessors & Mutators
  void getPrices();
  void setPrices(vector<double> newprices);
  void getItemDescr();
  void setItemDescr(vector<string> items);
  string getType();
  void setType(string salestype);
  double getSub();
  void setSub(double newsubtotal);
  double getTotal();
  void setTotal(double newtotal);
  string getPayInfo();
  void setPayInfo(string payinfo);
  double getTax();
  void setTax(double newTax);
  double getDiscount();

  void discount();
  void tax();
  virtual void process_sale();
  virtual void process_payment(); //string return??
  virtual void print_sale();

  //Member Variables
  vector<string> items;
  vector<double> prices;
  string sales_type; //string???
  double taxamount;
  double disc;
  double subtotal;
  double totalamount;
  string payment_info; //string??
};
#endif

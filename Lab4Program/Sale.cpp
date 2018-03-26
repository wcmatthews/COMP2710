// Program:   Cash Register Program
// Name:      Walter Matthews
// Class:     COMP2710
// Date:      12/08/2017
// Email:     wcm0034@auburn.edu
//
// Implementation of Sale class.

#include <string>
#include <iostream>
#include <vector>
#include "Sale.h"

using namespace std;

Sale::Sale()
{
  subtotal = 0;
  totalamount = 0;
  taxamount = 0;
  sales_type = "";
  payment_info = "";
}

void Sale::getPrices()
{
  vector<double>::iterator itr;
  for (itr = prices.begin(); itr < prices.end(); itr++)
  {
    cout << (*itr) << endl;
  }

}

void Sale::setPrices(vector<double> newprices)
{
  prices.swap(newprices);
}

void Sale::getItemDescr()
{
  vector<string>::iterator itr;
  for (itr = items.begin(); itr < items.end(); itr++)
  {
    cout << (*itr) << endl;
  }

}

void Sale::setItemDescr(vector<string> newitems)
{
  items.swap(newitems);
}

string Sale::getType()
{
  return sales_type;
}

void Sale::setType(string salestype)
{
  sales_type = salestype;
}

double Sale::getSub()
{
  return subtotal;
}

void Sale::setSub(double newsubtotal)
{
  subtotal = newsubtotal;
}

double Sale::getTotal()
{
  return totalamount;
}

void Sale::setTotal(double newtotal)
{
  totalamount = newtotal;
}

string Sale::getPayInfo()
{
  return payment_info;
}

void Sale::setPayInfo(string payinfo)
{
  payment_info = payinfo;
}

double Sale::getTax()
{
  return taxamount;
}

void Sale::setTax(double newtax)
{
  taxamount = newtax;
}

double Sale::getDiscount()
{
  return disc;
}

void Sale::tax()
{
  taxamount = subtotal * SALES_TAX;
  totalamount = subtotal + taxamount; //new total
}

void Sale::discount()
{
  disc = subtotal * DISCOUNT;
  subtotal -= disc;
}

void Sale::process_sale()
{

}

void Sale::process_payment()
{

}

void Sale::print_sale()
{

}

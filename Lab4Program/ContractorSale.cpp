#include <iostream>
#include <string>
#include <vector>
#include "Sale.h"
#include "ContractorSale.h"

using namespace std;

ContractorSale::ContractorSale()
{
  contrID = "";
}

void ContractorSale::setContID(string newID)
{
  contrID = newID;
}

string ContractorSale::getContID()
{
  return contrID;
}

/*double ContractorSale::getDiscount()
{
  return disc;
}*/

void ContractorSale::process_sale()
{
  for (int i = 0; i < prices.size(); i++)
  {
    subtotal += prices[i];
  }

  this->discount();
  this->tax();
  this->setType("Contractor Sale");
}

#include <string>
#include <iostream>
#include <vector>
#include "Sale.h"
#include "RegularSale.h"
#include "RegularCash.h"

using namespace std;

RegularCash::RegularCash()
{
  amountReceived = 0;
  change = 0;
  payment_info = "CASH";
}

double RegularCash::getChange()
{
  return change;
}

void RegularCash::setAmountRec(double rec)
{
  amountReceived = rec;
}

void RegularCash::process_payment()
{
  change = amountReceived - totalamount;
}

void RegularCash::print_sale()
{
  for (int i = 0; i < items.size(); i++)
  {
    int itemNumber = i + 1;
    cout << itemNumber << ". " << items[i] << "  $ " << prices[i] << "\n";
  }

  cout << "Sub-Total:  $ " << this->getSub() << "\n" << this->getType() << "\n";
  cout << "Tax:  $ " << this->getTax() << "\n";
  cout << "Total amount:  $ " << this->getTotal() << "\n" << this->getPayInfo() << "\n";
  cout << "Amount received:  $ " << amountReceived << "\n";
  cout << "Change:  $ " << change;


}

#include <string>
#include <iostream>
#include <vector>
#include "Sale.h"
#include "ContractorSale.h"
#include "ContractorCash.h"

using namespace std;

ContractorCash::ContractorCash()
{
  amountReceived = 0;
  change = 0;
  payment_info = "CASH";
}

double ContractorCash::getChange()
{
  return change;
}

void ContractorCash::setAmountRec(double rec)
{
  amountReceived = rec;
}

void ContractorCash::process_payment()
{
  change = amountReceived - totalamount;
}

void ContractorCash::print_sale()
{
  for (int i = 0; i < items.size(); i++)
  {
    int itemNumber = i + 1;
    cout << itemNumber << ". " << items[i] << "  $ " << prices[i] << "\n";
  }

  cout << "Sub-Total:  $ " << this->getSub() << "\n" << this->getType() << "\n";
  cout << "Contractor ID: " << this->getContID() << endl;
  cout << "Discount:  $ " << this->getDiscount() << endl;
  cout << "Sub-Total:  $ " << this->getSub() << endl;
  cout << "Tax:  $ " << this->getTax() << "\n";
  cout << "Total amount:  $ " << this->getTotal() << "\n" << this->getPayInfo() << "\n";
  cout << "Amount received:  $ " << amountReceived << "\n";
  cout << "Change:  $ " << change;


}

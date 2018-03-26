#include <iostream>
#include <string>
#include <vector>
#include "Sale.h"
#include "RegularSale.h"
#include "RegularCheck.h"

using namespace std;

RegularCheck::RegularCheck()
{
  checkName = "";
  licenseNum = 0;
  payment_info = "CHECK";
}

void RegularCheck::setCheckName(string newCheck)
{
  checkName = newCheck;
}

string RegularCheck::getCheckName()
{
  return checkName;
}

void RegularCheck::setLicense(int newLicense)
{
  licenseNum = newLicense;
}

int RegularCheck::getLicense()
{
  return licenseNum;
}

void RegularCheck::process_payment()
{
  licenseNum = getLicense();
  checkName = getCheckName();
}

void RegularCheck::print_sale()
{
  for (int i = 0; i < items.size(); i++)
  {
    int itemNumber = i + 1;
    cout << itemNumber << ". " << items[i] << "  $ " << prices[i] << "\n";
  }

  cout << "Sub-Total:  $ " << this->getSub() << "\n" << this->getType() << "\n";
  cout << "Tax:  $ " << this->getTax() << "\n";
  cout << "Total amount:  $ " << this->getTotal() << "\n" << this->getPayInfo() << "\n";
  cout << "CHECK  " << this->getCheckName() << this->getLicense();
}

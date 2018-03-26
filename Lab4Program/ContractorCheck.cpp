#include <iostream>
#include <string>
#include <vector>
#include "Sale.h"
#include "ContractorSale.h"
#include "ContractorCheck.h"

using namespace std;

ContractorCheck::ContractorCheck()
{
  checkName = "";
  licenseNum = 0;
  payment_info = "CHECK";
}

void ContractorCheck::setCheckName(string newCheck)
{
  checkName = newCheck;
}

string ContractorCheck::getCheckName()
{
  return checkName;
}

void ContractorCheck::setLicense(int newLicense)
{
  licenseNum = newLicense;
}

int ContractorCheck::getLicense()
{
  return licenseNum;
}

void ContractorCheck::process_payment()
{
  licenseNum = getLicense();
  checkName = getCheckName();
}

void ContractorCheck::print_sale()
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
  cout << "CHECK  " << this->getCheckName() << this->getLicense();
}

#include <iostream>
#include <string>
#include <vector>
#include "Sale.h"
#include "ContractorSale.h"
#include "ContractorCreditCard.h"

using namespace std;

ContractorCreditCard::ContractorCreditCard()
{
  cardName = "";
  expDate = "";
  cardNum = 0;
  payment_info = "CREDIT CARD";

}

void ContractorCreditCard::setCardName(string newName)
{
  cardName = newName;
}

string ContractorCreditCard::getCardName()
{
  return cardName;
}

void ContractorCreditCard::setExpDate(int month, int year)
{
  expDate = to_string(month) + "/" + to_string(year);
}

string ContractorCreditCard::getExpDate()
{
  return expDate;
}

void ContractorCreditCard::setCardNum(int newNum)
{
  cardNum = newNum;
}

int ContractorCreditCard::getCardNum()
{
  return cardNum;
}

void ContractorCreditCard::process_payment()
{
  cardName = getCardName();
  expDate = getExpDate();
  cardNum = getCardNum();
}

void ContractorCreditCard::print_sale()
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
  cout << "CREDIT CARD  " << this->getCardName() << this->getExpDate() << this->getCardNum();
}

#include <iostream>
#include <string>
#include <vector>
#include "Sale.h"
#include "RegularSale.h"

using namespace std;

RegularSale::RegularSale()
{
  subtotal = 0;
}

void RegularSale::process_sale()
{
    for (int i = 0; i < prices.size(); i++)
    {
        subtotal += prices[i];
        //this->tax()// use subtotal as param?

    }
    this->tax();
    this->setType("Regular Sale");
}

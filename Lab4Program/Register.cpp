#include <iostream>
#include <string>
#include <vector>
#include "Sale.h"
#include "RegularSale.h"
#include "ContractorSale.h"
#include "RegularCash.h"
#include "RegularCheck.h"
#include "RegularCreditCard.h"
#include "ContractorCash.h"
#include "ContractorCheck.h"
#include "ContractorCreditCard.h"

using namespace std;

int main()
{
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);
  
  vector <Sale *> salesList;
  string input;
  vector<string> inv;
  vector<double> costs;


  while (int i = 1)
  {
		cout << "           =========================================================\n";
		cout << "        |                 Welcome to Tiger Store!                 |\n";
		cout << "        ===========================================================\n";
		cout << "Select an option: (1) Regular Cash, (2) Regular Check, (3) Regular Credit Card, (4) Contract Cash, (5) Contract Check, (6) Contract Credit Card, (7) Print all sales, or (8) Quit: ";
		getline(cin, input);
		if (input != "1" && input != "2" && input != "3" && input != "4" && input != "5" && input != "6" && input != "7" && input != "8") {
			cout << "\nError: invalid input.\n\n";
			continue;
	}

    else
    {
      char choice = input[0];
      switch (choice)
      {
        case '1':
        {
          RegularCash* rc = new RegularCash();

          while (int i = 1)
          {
            cout << "\nEnter item: ";
            getline(cin, input);
            if (input != "*")
            {
              inv.push_back(input);
            }
            if (input == "*")
            {
              break;
            }

            while (int i = 1)
            {
              cout << "\nEnter amount: $ ";
              getline(cin, input);
              double input2 = stod(input);
              costs.push_back(input2);
              //check for non numbers?

            break;
            }

          rc->setPrices(costs);
          rc->setItemDescr(inv);
          }
          rc->process_sale();
          cout << "Sub-Total: $ " << rc->getSub() << endl;
          cout << "\n" << rc->getType() << endl;
          cout << "\nTax:  $ " << rc->getTax() << endl;
          cout << "\nTotal amount:  $ " << rc->getTotal() << endl;

          while (int i = 1)
          {
          cout << "\nAmount received: $";
          getline(cin, input);
          double input2 = stod(input);
          rc->setAmountRec(input2);
          break;
          }
          rc->process_payment();
          cout << "\nChange: $ " << rc->getChange() << endl;
          cout << "\n";

          salesList.push_back(rc);
          continue;
        }

        case '2':
        {
          RegularCheck* rch =  new RegularCheck();
          string name;
          int licnum;

          while (int i = 1)
          {
            cout << "\nEnter item: ";
            getline(cin, input);
            if (input != "*")
            {
              inv.push_back(input);
            }
            if (input == "*")
            {
              break;
            }

            while (int i = 1)
            {
              cout << "\nEnter amount: $ ";
              getline(cin, input);
              double input2 = stod(input);
              costs.push_back(input2);
              //check for non numbers?

            break;
            }


          rch->setPrices(costs);
          rch->setItemDescr(inv);
          }
          rch->process_sale();
          cout << "Sub-Total: $ " << rch->getSub() << endl;
          cout << "\n" << rch->getType() << endl;
          cout << "\nTax:  $ " << rch->getTax() << endl;
          cout << "\nTotal amount:  $ " << rch->getTotal() << endl;

          cout << "\nEnter name on the check: ";
          getline(cin, name);
          while (int i = 1)
          {
            string ln;
            cout << "\nEnter driver's license number: ";
            getline(cin, ln);
            licnum = stod(ln);
            break;
          }
          cout << "\n";

          rch->process_payment();
          salesList.push_back(rch);
          continue;
        }

        case '3':
        {
          RegularCreditCard* rcc = new RegularCreditCard();
          string credname;
          string expdt;
          int crednum;

          while (int i = 1)
          {
            cout << "\nEnter item: ";
            getline(cin, input);
            if (input != "*")
            {
              inv.push_back(input);
            }
            if (input == "*")
            {
              break;
            }


            while (int i = 1)
            {
              cout << "\nEnter amount: $ ";
              getline(cin, input);
              double input2 = stod(input);
              costs.push_back(input2);
              //check for non numbers?

            break;
            }


          rcc->setPrices(costs);
          rcc->setItemDescr(inv);
          }
          rcc->process_sale();
          cout << "Sub-Total: $ " << rcc->getSub() << endl;
          cout << "\n" << rcc->getType() << endl;
          cout << "\nTax:  $ " << rcc->getTax() << endl;
          cout << "\nTotal amount:  $ " << rcc->getTotal() << endl;

          cout << "\nEnter name on the credit card: ";
          getline(cin, credname);
          while (int i = 1)
          {
            cout << "\nEnter credit card number: ";
            string cn;
            getline(cin, cn);
            crednum = stod(cn);
            break;
          }
          while (int i = 1)
          {
            string month, year;
            cout << "\nEnter expiration date: " << endl;
            cout << "\tMonth: ";
            getline(cin, month);
            int month2 = stod(month);
            cout << "\n\tYear: ";
            getline(cin, year);
            int year2 = stod(year);
            rcc->setExpDate(month2, year2);

            break;
          }
          cout << "\n";

          rcc->process_payment();

          salesList.push_back(rcc);

          continue;
        }

        case '4':
        {
        ContractorCash* cc = new ContractorCash();

        while (int i = 1)
        {
          cout << "\nEnter item: ";
          getline(cin, input);
          if (input != "*")
          {
            inv.push_back(input);
          }
          if (input == "*")
          {
            break;
          }


          while (int i = 1)
          {
            cout << "\nEnter amount: $ ";
            getline(cin, input);
            double input2 = stod(input);
            costs.push_back(input2);
            //check for non numbers?

          break;
          }


        cc->setPrices(costs);
        cc->setItemDescr(inv);
        }
        cc->process_sale();
        cout << "Sub-Total: $ " << cc->getSub() << endl;
        cout << "\n" << cc->getType() << endl;

        while (int i = 1)
        {
          string conID;
          cout << "\nContractor ID: ";
          getline(cin, conID);
          int contid = stoi(conID);
          cc->setContID(conID);
          break;
        }
        cout << "\nDiscount: $ " << cc->getDiscount() << endl;
        cout << "\nSub-Total: $ " << cc->getSub() << endl;
        cout << "\nTax:  $ " << cc->getTax() << endl;
        cout << "\nTotal amount:  $ " << cc->getTotal() << endl;

        while (int i = 1)
        {
        cout << "\nAmount received: $";
        getline(cin, input);

        cc->setAmountRec(stod(input));
        break;
        }
        cc->process_payment();
        cout << "\nChange: $ " << cc->getChange() << endl;
        cout << "\n";

        salesList.push_back(cc);
        continue;
      }
      case '5':
      {
        ContractorCheck* cch =  new ContractorCheck();
        string name;
        int licnum;

        while (int i = 1)
        {
          cout << "\nEnter item: ";
          getline(cin, input);
          if (input != "*")
          {
            inv.push_back(input);
          }
          if (input == "*")
          {
            break;
          }


          while (int i = 1)
          {
            cout << "\nEnter amount: $ ";
            getline(cin, input);
            double input2 = stod(input);
            costs.push_back(input2);
            //check for non numbers?

            break;
          }

          cch->setPrices(costs);
          cch->setItemDescr(inv);
        }
        cch->process_sale();
        cout << "Sub-Total: $ " << cch->getSub() << endl;
        while (int i = 1)
        {
          string conID;
          cout << "\nContractor ID: ";
          getline(cin, conID);
          int contid = stoi(conID);
          cch->setContID(conID);
          break;
        }
        cout << "\n" << cch->getType() << endl;
        cout << "\nTax:  $ " << cch->getTax() << endl;
        cout << "\nTotal amount:  $ " << cch->getTotal() << endl;

        cout << "\nEnter name on the check: ";
        getline(cin, name);
        while (int i = 1)
        {
          cout << "\nEnter driver's license number: ";
          string ln;
          getline(cin, ln);
          licnum = stod(ln);
          break;
        }
        cout << "\n";

        cch->process_payment();
        salesList.push_back(cch);
        continue;
}
      case '6':
      {
      ContractorCreditCard* ccc = new ContractorCreditCard();
      string credname;
      string expdt;
      int crednum;

      while (int i = 1)
      {
        cout << "\nEnter item: ";
        getline(cin, input);
        if (input != "*")
        {
          inv.push_back(input);
        }
        if (input == "*")
        {
          break;
        }


        while (int i = 1)
        {
          cout << "\nEnter amount: $ ";
          getline(cin, input);
          double input2 = stod(input);
          costs.push_back(input2);
          //check for non numbers?

        break;
        }


      ccc->setPrices(costs);
      ccc->setItemDescr(inv);
      }
      ccc->process_sale();
      cout << "Sub-Total: $ " << ccc->getSub() << endl;
      cout << "\n" << ccc->getType() << endl;
      while (int i = 1)
      {
        string conID;
        cout << "\nContractor ID: ";
        getline(cin, conID);
        int contid = stoi(conID);
        ccc->setContID(conID);
        break;
      }
      cout << "\nTax:  $ " << ccc->getTax() << endl;
      cout << "\nTotal amount:  $ " << ccc->getTotal() << endl;

      cout << "\nEnter name on the credit card: ";
      getline(cin, credname);
      while (int i = 1)
      {
        cout << "\nEnter credit card number: ";
        string cn;
        getline(cin, cn);
        crednum = stod(cn);
        break;
      }
      while (int i = 1)
      {
        string month, year;
        cout << "\nEnter expiration date: " << endl;
        cout << "\tMonth: ";
        getline(cin, month);
        int month2 = stod(month);
        cout << "\n\tYear: ";
        getline(cin, year);
        int year2 = stod(year);
        ccc->setExpDate(month2, year2);

        break;
      }
      cout << "\n";

      ccc->process_payment();

      salesList.push_back(ccc);

      continue;
    }

    case '7':
    {
      for (int i = 1; i <salesList.size() + 1; i++)
      {
        cout << "\nSale #" << to_string(i) << ":" << endl;
        salesList[i-1]->print_sale();
        cout << "\n\n";
      }
      continue;
}
    case '8':
      break;
    }
  }
  break;
}

return 0;

}

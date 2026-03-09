#include <iostream>
using namespace std;

//define necessary functions
void computeCoins(int coinValue, int& num, int& amountLeft);
int main()
{
  int cents;
  int quarters, dimes, pennies;
  char choice = 'y';

while (choice == 'y' || choice == 'Y')
{
  cout << "Please enter change amount: ";
  cin >> cents;

  int amountLeft = cents;

  computeCoins(25, quarters, amountLeft);
  computeCoins(10, dimes, amountLeft);
  computeCoins(1, pennies, amountLeft);

  cout << "Quarters: " << quarters << endl;
  cout << "Dimes: " << dimes << endl;
  cout << "Pennies: " << pennies << endl;

  cout << "Do you want to enter another amount? (Y/N): ";
  cin >> choice;
}

return 0;
}

void computeCoins(int coinValue, int& num, int& amountLeft)
{
  num = amountLeft / coinValue;
  amountLeft = amountLeft % coinValue;
}

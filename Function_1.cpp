#include <iostream>
#include <cstdlib>
using namespace std;

string coinflip()
{
   int flip = rand() %2; // returns 0 or 1
   if (flip == 0)
       return "Heads";
   else
       return "Tails";
}

int main() {
   int flips;
   cin >> flips;

   srand(2);  // Unique seed

   for (int i = 0; i < flips; i++) {
       cout << coinflip() << endl;
   }

   return 0;
}

//5.14
#include <iostream>
#include <iomanip>
#include <cmath> // standard C++ math library
using namespace std;

int main()
{
   double amount; 
   double principal = 1000.0;
   double rate; 

   for (rate = 0.05; rate <= 0.1; rate += 0.01)
   {
	   cout << "Compound interest with rate " << rate << endl;
	   cout << "Year" << setw( 21 ) << "Amount on deposit" << endl;
	   cout << fixed << setprecision( 2 );

	   for ( int year = 1; year <= 10; ++year ) 
	   {
		   
		   amount = principal * pow( 1.0 + rate, year );
		   
		   cout << setw( 4 ) << year << setw( 21 ) << amount << endl;
	   } 
	   cout << endl;
   }
}

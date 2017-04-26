#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  srand(time(0)); //Seeding rand() using system time to generate truly random numbers
  
  int numAmount, randNum;
  
  cout << "Random Number Generator" << endl;
  cout << "\nHow many numbers to generate?" << endl;
  cin >> numAmount;
  
  for (int x = 0; x < numAmount; x++)
	{
		randNum = rand(); //Storing random number into int var
		
		cin.get();  //Requests user to hit enter. Added for output structure
    cout << randNum << endl;
  }
  return 0;
}

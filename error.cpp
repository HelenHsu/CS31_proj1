// error.cpp 
// HelenHsu 
// Winter 2016 CS31 Project 1
////////////////////////////////////////////////////////////////////////
// task: create logic errors and compile errors in the original code
////////////////////////////////////////////////////////////////////////

// Report weather results

								                                                        //Didn’t include I/O headfiles
using namespace std;   

int Main()						                                                  //typo
{
								                                                        //Dindn't include variables
  cout << "How many days were reviewed? ";
  cin >> daysReviewed;
  cout << "How many of these days were rainy? ";
  cin >> daysWithRain;
  cout << "How many of these days were colder than 50 degrees? ";
  cin >> daysBelow50Degrees;

  double pctRainy = 100 * daysWithRain / daysReviewed;                  //would not get a correct answer after float point
  double pctCold  = 100.0 * daysBelow50Degrees / daysReviewed;          //this is correct

  cout.setf(ios::fixed);  
  cout.precision(1)				                                              //missing semicolons

  cout << endl;
  cout << pctRainy << "% were rainy." << endl;
  cout << pctCold << "% were cold." << endl;

  if (pctRainy > pctCold)
     cout << "It was rainy more often than it was cold." << endl;
  else                                                                  //error in original code, bad output if pctRainy=pctCold 
     cout << "It was cold more often than it rained." << endl;
  
}

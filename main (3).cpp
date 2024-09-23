#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
  system("clear");
  // Write your code here
  //Constant for ticket price
  const double CLASS_A_PRICE = 15.0;
  const double CLASS_B_PRICE = 12.0;
  const double CLASS_C_PRICE = 9.0;
  //Variables
  int classATickets;  //number of class A tickets sold
  int classBTickets;  //number of class B tickets sold
  int classCTickets;  //number of class C tickets sold
  double total; //total revenue from ticket sales
  cout << "Enter the number of Class A tickets sold: ";
  cin >> classATickets;
  cout << "Enter the number of Class B tickets sold: ";
  cin >> classBTickets;
  cout << "Enter the number of Class C tickets sold: ";
  cin >> classCTickets;
  total = (classATickets * CLASS_A_PRICE) +
  (classBTickets * CLASS_B_PRICE) +
  (classCTickets * CLASS_C_PRICE);
  cout << "The total revenue from the ticket sales $"
  << setprecision(2) << fixed << total << endl;
  // Ready to grade
  


  return 0;
}

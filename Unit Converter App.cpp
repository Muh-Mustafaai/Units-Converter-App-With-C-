#include <iostream>
using namespace std;

int main() {
  int choice;
  cout << " == UNIT COVERSTER == \n";
  cout << "1. Kilometers to Miles \n";
  cout << "2. Temperature (Celcus to Fahrenheit) \n";
  cout << "3. Currency (UDD to EUR) \n";
  cout << "Enter your choice (1-3): ";
  cin >> choice;

  switch (choice) {
    {
    case 1:
      double km, miles;
      cout << "Enter distance in kilometers: ";
      cin >> km;
      miles = km * 0.621371;
      cout << km << " kilometers is equal to " << miles << " miles.\n";
      break;
    }

  case 2: {
    double celsius, fahrenheit;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    fahrenheit = (celsius * 9 / 5) + 32;
    cout << celsius << " Celsius is equal to " << fahrenheit
         << "       Fahrenheit.\n";
    break;
  }

  case 3: {
    double udd, eur;
    cout << "Enter amount in UDD: ";
    cin >> udd;
    eur = udd * 0.9;
    cout << udd << " UDD is equal to " << eur << " EUR.\n";
    break;
  }

  default:
    cout << " Invalid choice Please select one to three. \n";
  }
}
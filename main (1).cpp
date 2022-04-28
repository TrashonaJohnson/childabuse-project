#include <iostream>
#include <string>

using namespace std;

int main() 
{
  string name;
  char address[100];
  int age=0;
  int ssn;

  cout << " Enter your Name: ";
  getline(cin,name);
  cout << " Enter your Age: ";
  cin >> age;
  cout << " Enter your Address: ";
  cin >> address;
  cout << " Enter your SSN: XXX-XX-XXXX ";
  cin >> ssn;

  return 0;
}
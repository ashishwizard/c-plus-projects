#include <iostream>
using namespace std;
int main()
{
  int num;
  std::cout << "enter an integer" << '\n';
  std::cin >> num;
  std::cout << "the hexa, octal and decimal representation of the num is :" << endl;
  cout.setf(ios::hex, ios::basefield);
  cout << "," << num << endl;
  cout.setf(ios::oct, ios::basefield);
  cout << "and" << num << endl;
  cout.setf(ios::dec, ios::basefield);
  std::cout << num << " respectively" << endl;
  /* code */
}
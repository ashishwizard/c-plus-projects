#include<iostream>
using namespace std;
class employee
{
  char name[50];
  int age;
  float salary;
public:
  void data(void);
  void display(void);
};
void employee::data(void)
{
  std::cout << "enter name of the employee" <<endl;
std::cin >> name;
std::cout << "age of the employee" <<endl;
std::cin >> age;
std::cout << "salary of the employee" <<endl;
std::cin >> salary;
}
void employee::display(void)
{
  std::cout << "\nname " <<name<<endl;
  std::cout << "\nage " <<age<<endl;
  std::cout << "\nsalary " <<salary<<endl;
}
int main(int argc, char const *argv[]) {
  employee e;
  e.data();
  e.display();
  return 0;
}

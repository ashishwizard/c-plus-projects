#include<iostream>
using namespace std;
class bevrages
{
private:
  int a,b;
public:
  int c;
  void setdata(int a1,int b1);
  void getdata()
  {
std::cout << "maza value is " <<a<<endl;
std::cout << "the value of sprite" <<b<<endl ;
std::cout << "the value of thumps up " <<c<<endl;

}
};
void bevrages::setdata(int a1,int b1){
  a=a1;
  b=b1;

}
int main()
{
  bevrages drinks;
  drinks.c=40;
  drinks.setdata(60,95);
  drinks.getdata();
  return 0;

}

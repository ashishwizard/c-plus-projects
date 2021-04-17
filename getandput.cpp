#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  char c;
  int v=0;
  std::cout << "type few characters" <<endl;
  cin.get(c);
  while(c!='\n'){
    v++;
    cin.get(c);

    /* code */
  }
  std::cout << "\nlenth of characters " <<v<<endl;
  return 0;
}

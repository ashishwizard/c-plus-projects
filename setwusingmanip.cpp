#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int items = 4, allowance = 900, total = 904;
    cout << setw(20) << "items" << setw(20) << items << endl
         << setw(20) << "allowance" << setw(20) << allowance << endl
         << setw(20) << "total" << setw(20) << total << endl;
         
    return 0;
}
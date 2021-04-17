#include <iostream>
using namespace std;
class employee
{

    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "enter the id" << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "the id of employee is " << id << " and this is employee number " << count << endl;
    }
};

int employee::count; //by default count value is 0, we can set count=1000here or any number to intialize with

int main()
{
    employee harry, ash, tarun;
    harry.setdata();
    harry.getdata();

    ash.setdata();
    ash.getdata();

    tarun.setdata();
    tarun.getdata();

    return 0;
}

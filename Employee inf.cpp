#include <iostream>
using namespace std;

class employee
{
    private:
    string name;
    int salary;

    public:
    int id;

    void setdata(string n, int s)
    {
        name = n;
        salary = s;
    }

    void getdata()
    {
        cout << "name:" <<name<<endl;
        cout << "salary:" <<salary<<endl;
        cout << "id:" <<id<<endl;
    }

};
int main()
{
    employee aditya;
    aditya.id = 112;
    aditya.setdata("Aditya",20000);
    aditya.getdata();

    return 0;
 
}

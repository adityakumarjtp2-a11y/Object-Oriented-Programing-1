#include <iostream>
using namespace std;

class student
{
    private:
    string name;
    int age;

    public:
    int rolln0;

    void setdata(string n, int a)
    {
        name = n;
        age = a;
    }

    void getdata()
    {
        cout << "name:" <<name<<endl;
        cout << "age:" <<age<<endl;
        cout << "rollno:" <<rolln0<<endl;
    }
};

int main()
{
    student aditya;
    aditya.rolln0 = 21774;
    aditya.setdata("Aditya",17);
    aditya.getdata();

    return 0;
}
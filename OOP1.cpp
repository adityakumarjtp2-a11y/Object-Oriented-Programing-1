#include <iostream>
using namespace std;

class employee
{
    private:
    int a, b, c;
    public:
    int d, e;
    void setdata(int a, int b, int c); //Declaration
    void getdata() {
        cout << "The value of a is:" <<a<<endl;
        cout << "The value of b is:" <<b<<endl;
        cout << "The value of c is:" <<c<<endl;
        cout << "The value of d is:" <<d<<endl;
        cout << "The value of e is:" <<e<<endl;
    }
};

void employee :: setdata(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;

}

int main(){
    employee aditya;
    // aditya .a = 150; // error:a is private
    aditya .d = 50;
    aditya .e = 79;
    aditya .setdata(2,5,8);
    aditya .getdata();

    return 0;
}


#include <bits/stdc++.h>
using namespace std;
class B
{
public:
    int a;
    int b;
    int add()
    {
        return a + b;
    }
    void operator+(B &obj)
    {
        int val = this->a;
        int val1 = obj.a;
        cout << " Otput: " << val1 - val;
    }
};
int main()
{
    //   B obj;
    //   obj.a=1;
    //   obj.b=2;
    //   obj.add();
    B ob1, ob2;
    ob1.a = 4;
    ob2.a = 7;
    ob1 + ob2;
    return 0;
}
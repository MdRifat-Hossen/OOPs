// 2.Multi-leve A->B->c
#include <bits/stdc++.h>
using namespace std;
class animal
{
public:
    string name;
    int age;
    void print()
    {
        cout << "Class animal" << endl;
    }
};
class dog1 : public animal
{
public:
    int height;
    void print1()
    {
        cout << "Dod1 class" << endl;
    }
};
class cat : public dog1
{
public:
    int price;
    void price1()
    {
        cout << "cta class" << endl;
    }
};
int main()
{
    cat c;
    c.age = 12;
    c.name = "Rifat";
    c.height = 52;
    c.price = 45220;
    c.print();
    c.print1();
    c.price1();
    cout << c.age << endl
         << c.name << endl
         << c.price << endl
         << c.price << endl
         << c.height << endl;

    return 0;
}
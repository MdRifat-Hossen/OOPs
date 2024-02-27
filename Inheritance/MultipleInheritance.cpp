// 3.Multiple Iheritance

// A->C<-B
#include <bits/stdc++.h>
using namespace std;
class Rifat
{
public:
    string name;
    int age;
    void r()
    {
        cout << "Rifat aclass" << endl;
    }
};
class Habib
{
public:
    string name1;
    int age1;
    void h()
    {
        cout << "Bahib classs" << endl;
    }
};
class fathe : public Rifat, public Habib
{
public:
    string name3;
    void fat()
    {
        cout << "Father" << endl;
    }
};

int main()
{
    fathe f;
    f.fat();

    return 0;
}
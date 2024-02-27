#include <bits/stdc++.h>
using namespace std;
class hero
{
    // propertices
private:
    int age;

public:
    char level;
    void print()

    {
        cout << level << endl;
    }

    int getage()
    {
        return age;
    }
    char getlevel()
    {
        return level;
    }
    void setage(int a)
    {
        // you can use a condition for change the value
        age = a;
    }
    void setlevel(char c)
    {
        level = c;
    }
};
int main()
{
    // This is static
    hero a;

    a.setage(10);
    cout << a.level << endl;
    cout << a.getage() << endl;

    // BUt this is the Dynamically
    hero *b = new hero;
    b->setage(10);
    b->setlevel('B');
    cout << b->getage() << endl;
    cout << b->getlevel() << endl;

    return 0;
}
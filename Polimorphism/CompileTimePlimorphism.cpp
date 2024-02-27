// Tow type 1.Function overloading 2.Operator Overloading

// Funtio overload only input function change kote hobe,function perameter change
// Deffent type number of argument

#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    void say()
    {
        cout << "Hi! Rifat" << endl;
    }
    void say(string name)
    {
        cout << "Hi Habib Brother" << name << endl;
    }
};
int main()
{
    A ob;
    ob.say();

    return 0;
}
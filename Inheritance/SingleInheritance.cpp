#include <bits/stdc++.h>
using namespace std;
class animal
{
public:
    int age;
    string name;
};
class dog : public animal
{
    int height;
};
int main()
{
    dog d;
    d.age = 12;
    d.name = "animal";
    cout << d.age << " " << d.name << endl;

    return 0;
}
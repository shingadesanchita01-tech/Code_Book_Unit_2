#include <iostream>
using namespace std;

class Base
{
public:
    void show() const
    {
        cout << "Base public function" << endl;
    }
};

// Public inheritance
class PublicDerived : public Base
{
};

// Private inheritance
class PrivateDerived : private Base
{
public:
    void callBaseShow() const
    {
        show();
    }
};

int main()
{
    PublicDerived publicObject;
    publicObject.show();

    PrivateDerived privateObject;
    privateObject.callBaseShow();

    // privateObject.show(); // Error: show() becomes private

    return 0;
}
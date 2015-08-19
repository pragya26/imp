#include <iostream>

using namespace std;
class XYZ
{
public:
    void putPri();
    static int ipub;
private:
    static int ipri;
};

// function declaration
void XYZ::putPri()
{
    cout << ipri++ << endl;
}

// Static variable initialization for class variables

int XYZ::ipub = 1;
int XYZ::ipri = 1;

main()
{
    XYZ aaa;
    XYZ bbb;

    aaa.putPri();
    cout << aaa.ipub << endl;
    bbb.putPri();
}


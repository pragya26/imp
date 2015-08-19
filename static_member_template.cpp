#include <iostream>

using namespace std;

template <class T> 
class XYZ
{
public:
    void putPri();
    static T ipub;
private:
    static T ipri;
};

//function declaration

template <class T> 
void XYZ<T>::putPri()
{
    cout << ipri++ << endl;
}

// Static variable initialization:
template <class T> T XYZ<T>::ipub = 1;
template <class T> T XYZ<T>::ipri = 1.2;

main()
{
    XYZ<int> aaa;
    XYZ<float> bbb;

    aaa.putPri();
    cout << aaa.ipub << endl;
    bbb.putPri();
}


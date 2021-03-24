#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char* a = new char[10];
    char* c = a + 3;
    cout << &a << " " << &c << endl;
    for (int i = 0; i < 9; i++) a[i] = 'a';
    a[9] = '\0';
    cerr <<"a: " << "-" << a << "-" << endl;
    cerr <<"c: " << "-" << c << "-" << endl;
    delete c;
    cerr << "a after deleting c:" << "-" << a << "-" << endl; // lenh cerr nay chay khong nhu mong muon vi toan hang delete khong thu duoc gia tri con tro c nen chua xoa duoc c
}

#include <iostream>
#include <cstring>
using namespace std;
int strlen(char *s)
{
    int i=0;
    while(s[i] != '\0') i++;
    return i;
}
char* concat(const char* s1, const char* s2)
{
    char *kq;
    int size1 = strlen(s1);
    int size2 = strlen(s2);
    strncpy(kq,s1,size1);
    strncat(kq,s2,size2);
    cout << kq << endl;
    return kq;
}
int main()
{
    char *s1="hello";
    char *s2="world";
    char *kqua;
    kqua = concat(s1,s2);
    cout << &kqua << endl;
    for (char *cp = kqua; (*cp) != '\0'; cp++)
      cout << (void*) cp << " : " << (*cp) << endl;
}

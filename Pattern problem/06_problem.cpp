#include <iostream>
using namespace std;
void pattern(int n)
{
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " " << num;
            num += 1;
        }
        cout << endl;
    }
}
void pattern13(int n)
{
    int num = 1;
    
    for (int i = 1; i <= n; i++)
    {
        for (char ch = 'A'; ch<'A'+i; ch++)
        {
             cout<<ch;
        }
        cout << endl;
    }
}

int main()
{
    pattern13(5);//50

    return 0;
}
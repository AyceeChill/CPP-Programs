#include <iostream>
#include <string>
using namespace std;

class base
{
public:
    int bin_to_deci(char str[]) //passing char string
    {
        int s = 0;
        int l = 1;
        int n = str.length(); //last element

        for (int i = n - 1; i >= 0; i--) //reverse loop to traverse all elements
        {
            if (str[i] == '1') //checking all char for 1
            {
                s = s + l; //and adding them
            }

            l = l * 2; //changing the value of l for each element
        };

        return s;
    };
};

int main()
{
    base obj;

    char strn[10000];

    cout << "enter a binary string." << endl;
    cin >> strn;

    obj.bin_to_deci(strn);

    return 0;
}

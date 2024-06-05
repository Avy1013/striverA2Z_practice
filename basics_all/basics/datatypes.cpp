#include <iostream>
using namespace std;
int dataTypes(string type)
{
    if (type == "Long")
    {
        return 8;
    }
    else if (type == "Integer")
    {
        return 4;
    }
    else if (type == "Float")
    {
        return 4;
    }
    else if (type == "Double")
    {
        return 8;
    }
    else if (type == "Character")
    {
        return 1;
    }
}

int main()
{
    string jkl;
    cin >> jkl;
    int result = dataTypes(jkl);
    cout << result;
}

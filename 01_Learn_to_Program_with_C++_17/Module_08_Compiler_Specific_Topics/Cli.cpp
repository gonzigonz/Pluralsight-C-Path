#include <iostream>

using std::cout;

int main(int argc, char *argv[])
{
    cout << "Number of args: " << argc << '\n';
    cout << "Args:\n";
    for (int i = 0; i < argc; i++)
    {
        cout << "  " << argv[i] << '\n';
    }
    return 0;
}

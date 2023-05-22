#include <iostream>
#include <string>
using namespace std;

class orang {
public:
    string nama;

    orang(string pNama) :
        nama(pNama) {
        cout << "orang cibuat\n" << endl;
    }
    ~orang() {
        cout << "orang dihapus\n" << endl;
    }
};
int main()
{
    std::cout << "Hello World!\n";
}


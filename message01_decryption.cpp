#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    
    string code, decrypted = "";
    int ascii;

    getline(cin >> ws, code);

    for (int i = 0; i < code.length(); i+= 3) {
        ascii = 16 * (code[i] <= 57 ? code[i] - 48: code[i] - 87);
        ascii += (code[i+1] <= 57 ? code[i+1] - 48: code[i+1] - 87);

        decrypted += static_cast<char>(ascii);
    }

    cout<<decrypted<<endl;

    return 0;
}
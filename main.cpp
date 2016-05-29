#include <iostream>
#include <cryptopp/sha.h>
#include <cryptopp/filters.h>
#include <hex.h>

using namespace std;
using namespace CryptoPP;

int main() {
    SHA256 hash;
    string message = "hi my name si suck ma diq mother fukcer!!!!";
    string digest;
    StringSource s(message, true, new HashFilter(hash, new HexEncoder(new StringSink(digest))));
    cout << digest << endl;
    return 0;
}
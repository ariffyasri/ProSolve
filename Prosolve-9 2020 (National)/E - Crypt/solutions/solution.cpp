
#include <iostream>
#include <string>
#include <vector>


std::vector<char> HexToBytes(const std::string& hex)
{
    std::vector<char> bytes;

    for (unsigned int i = 0; i < hex.length(); i += 2) {
        std::string byteString = hex.substr(i, 2);
        char byte = (char) strtol(byteString.c_str(), NULL, 16);
        bytes.push_back(byte);
    }

    return bytes;
}


int main()
{
    int T;
    std::cin >> T;

    while (T--)
    {
        std::string E;
        int KL;
        std::string RP;

        std::cin >> E;
        std::cin >> KL;
        std::cin >> RP;

        std::vector<char> E_bytes = HexToBytes(E);
        std::vector<char> RP_bytes = HexToBytes(RP);

        std::string key = "";
        for (size_t i = 0; i < KL; i++) {
            key += (char) (E_bytes[i] ^ RP_bytes[i]);
        }

        //std::cout << key << std::endl;

        std::string plaintext = "";
        for (size_t i = 0; i < E_bytes.size(); i++) {
            plaintext += (char) (E_bytes[i] ^ key[i % key.size()]);
        }

        std::cout << plaintext << std::endl;
    }
}
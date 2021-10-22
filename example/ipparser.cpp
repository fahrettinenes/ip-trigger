#include <iostream>
#include <regex>
#include "ipparser.h"

using namespace std;

int main()
{
    if (isIp("192.168.1.1")) 
    {
        std::cout << "this is a ipv4" << endl;
    }

    std::cout << getIp("my ip is: 192.168.1.1", "IP not found!") << endl;
    std::cout << getIp("my ip is: null", "IP not found!") << endl;
    std::cout << getIp("my ip is: 192.168.1.1") << endl;
    std::cout << getIp("my ip is: null") << endl;
    return 0;
}
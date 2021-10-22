 #include <iostream>
#include <string>
#include <regex>

using namespace std;

bool isIp(string str) {
    regex regexExpression("([0-9]{1,3}[\\.]){3}[0-9]{1,3}");

    if (regex_match(str, regexExpression)) {
        return true;
    }

    return false;
}

string getIp(string str, string expressionMessage) {
    regex regexExpression("([0-9]{1,3}[\\.]){3}[0-9]{1,3}");

    cmatch cMatch;

    regex_match(str.c_str(), cMatch, regexExpression);

    string substr = "";
    for (unsigned i = 0; i < cMatch.size(); ++i) {
        substr += cMatch.str(i);
        return substr;
    }

    return expressionMessage;
}

string getIp(string str) {
    regex regexExpression("([0-9]{1,3}[\\.]){3}[0-9]{1,3}");

    cmatch cMatch;

    regex_match(str.c_str(), cMatch, regexExpression);

    string substr = "";
    for (unsigned i = 0; i < cMatch.size(); ++i) {
        substr += cMatch.str(i);
        return substr;
    }

    return "ip is null";
}
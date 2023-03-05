//
// Created by family on 3/3/23.
//

#include "StringUtils.h"
#include <ctime>

using std::string;
using std::vector;
using std::to_string;

string StringUtils::toLower(const std::string &s) {
    string eval = s;
    for (int i = 0; i < s.size(); i++) {
        eval[i] = tolower(s[i]);
    }
    return eval;
}

vector<string> StringUtils::split(const string &s, const char &separate) {

    vector<string> result;
    string element; // Collection or collected string

    for (char c : s) {
        if (c == separate) { // Current char is separate
            // Add collected string to result
            result.push_back(element);
            element.clear();
        } else {
            // Append char to collection string
            element += c;
        }
    }
    result.push_back(element); // Add last element

    return result;
}

string StringUtils::date() {
    std::time_t t = std::time(nullptr); // Get now
    std::tm* now  = std::localtime(&t);
    string month = to_string(now->tm_mon + 1);
    string day   = to_string(now->tm_mday);
    string year  = to_string(now->tm_year + 1900);
    return month + "/" + day + "/" + year;
}

string StringUtils::time() {
    std::time_t t   = std::time(nullptr); // Get now
    std::tm*    now = std::localtime(&t);
    string hour = to_string(now->tm_hour);
    string min  = to_string(now->tm_min);
    string sec  = to_string(now->tm_sec);
    return hour + ":" + min + ":" + sec;
}
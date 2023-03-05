//
// Created by family on 3/3/23.
//

#ifndef AVA_STRINGUTILS_H
#define AVA_STRINGUTILS_H

#include <iostream>
#include <vector>

class StringUtils {
public:
    StringUtils() = delete;

    ~StringUtils() = delete;

    /**
     * Converts a std::string s to all lowercase.
     * @param s String.
     * @return Evaluation.
     */
    static std::string toLower(const std::string &s);

    /**
     * Splits a string into an array of strings separate a char.
     * (e.g.) string s = "Hello World!", char separate = ' ' -> split(s) = ["Hello", "World!"].
     * If the string had multiple spaces in a row, they are all excluded: s = "Hello   world!"
     * split(s) = ["Hello", "World!"].
     * Chars matching separate will not be split if they are inside of quotation marks ("").
     * (e.g.) s = "\"Hello World!\" Hello World!", separate = ' ' -> split(s) = ["\"Hello World!\"", "Hello", "World!"]
     * @param s String
     * @param separate Char to split separate
     * @return New string array
     */
    static std::vector<std::string> split(const std::string &s, const char &separate);

    static std::string date();

    static std::string time();
};

#endif // AVA_STRINGUTILS_H
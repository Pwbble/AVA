//
// Created by family on 3/1/23.
//

#include <iostream>

#ifndef AVA_SUBPROGRAM_H
#define AVA_SUBPROGRAM_H

class SubProgram {
    // Fields
    const std::string_view name;
public:
    // Constructor & Destructor
    explicit SubProgram(const std::string_view &name);

    virtual ~SubProgram() = default;

    virtual int run() = 0;

    // Getters
    inline std::string_view getName() { return name; }
};

#endif // AVA_SUBPROGRAM_H
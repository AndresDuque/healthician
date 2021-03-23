//
// Created by andres on 23/03/2021.
//

#pragma once

#include <string>

namespace data{
    class Patient{
    private:
        std::string m_name{};
    public:
        Patient() = default;
        ~Patient() = default;
    };
}
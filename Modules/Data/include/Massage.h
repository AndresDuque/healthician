//
// Created by andres on 23/03/2021.
//

#pragma once

#include <QDateTime>
#include <string>

namespace data{
    class Massage{
    private:
        QDateTime m_datetime;
        std::string m_observations;
        std::string m_treatment;

    public:
        Massage() = default;
        ~Massage() = default;

    };
}
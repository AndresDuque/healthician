//
// Created by andres on 23/03/2021.
//

#pragma once

#include <sqlite3.h>
#include <string>
#include <memory>

namespace db{
    class Database{
    private:
        std::shared_ptr<sqlite3> m_db{};
    public:
        Database() = default;
        ~Database() = default;


    };
}
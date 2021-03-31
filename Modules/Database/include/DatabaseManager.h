//
// Created by andres on 23/03/2021.
//

#pragma once

#include <string>
#include <memory>
#include "soci/soci.h"
#include "soci/sqlite3/soci-sqlite3.h"

namespace db{
    class DatabaseManager{
    private:
        // std::shared_ptr<sqlite3> m_db{};
    public:
        DatabaseManager() = default;
        ~DatabaseManager() = default;


    };
}
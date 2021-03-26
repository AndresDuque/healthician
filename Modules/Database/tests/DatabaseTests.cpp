//
// Created by andres on 23/03/2021.
//

#include "gtest/gtest.h"
#include <string>
#include "DatabaseManager.h"


class DatabaseTest : public ::testing::Test{
protected:
    db::DatabaseManager db;

};

TEST_F(DatabaseTest, patientNameOkay){

}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
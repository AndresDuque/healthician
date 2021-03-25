//
// Created by andres on 23/03/2021.
//

#include "gtest/gtest.h"
#include <string>
#include "DatabaseManager.h"


class DatabaseTest : public ::testing::Test{
protected:
    db::DatabaseManager patient;

};

TEST_F(DatabaseTest, patientNameOkay){
    patient.setName("John");
    ASSERT_TRUE("John" == patient.getName());
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
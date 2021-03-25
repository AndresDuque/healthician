//
// Created by andres on 23/03/2021.
//

#include <string>
#include "gtest/gtest.h"
#include "Patient.h"

class PatientTest : public ::testing::Test{
protected:
    data::Patient patient;

};

TEST_F(PatientTest, patientNameOkay){
    patient.setName("John");
    ASSERT_TRUE("John" == patient.getName());
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
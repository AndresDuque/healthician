//
// Created by andres on 23/03/2021.
//

#include "Patient.h"

namespace data{

    const std::string &Patient::getName() const {
        return m_name;
    }

    const std::string &Patient::getAddress() const {
        return m_address;
    }

    const std::string &Patient::getPhoneNumber() const {
        return m_phone_number;
    }

    const std::string &Patient::getEmail() const {
        return m_email;
    }

    const QDateTime &Patient::getBirthdate() const {
        return m_birthdate;
    }

    int Patient::getMAge() const {
        return m_age;
    }

    const std::string &Patient::getJob() const {
        return m_job;
    }

    const std::string &Patient::getWeigh() const {
        return m_weigh;
    }

    const std::string &Patient::getHeight() const {
        return m_height;
    }

    const std::string &Patient::getSize() const {
        return m_size;
    }

    const std::string &Patient::getBodyShape() const {
        return m_body_shape;
    }

    void Patient::setName(const std::string &mName) {
        m_name = mName;
    }

    void Patient::setAddress(const std::string &mAddress) {
        m_address = mAddress;
    }

    void Patient::setPhoneNumber(const std::string &mPhoneNumber) {
        m_phone_number = mPhoneNumber;
    }

    void Patient::setEmail(const std::string &mEmail) {
        m_email = mEmail;
    }

    void Patient::setBirthdate(const QDateTime &mBirthdate) {
        m_birthdate = mBirthdate;
    }

    void Patient::setAge(int mAge) {
        m_age = mAge;
    }

    void Patient::setJob(const std::string &mJob) {
        m_job = mJob;
    }

    void Patient::setWeigh(const std::string &mWeigh) {
        m_weigh = mWeigh;
    }

    void Patient::setHeight(const std::string &mHeight) {
        m_height = mHeight;
    }

    void Patient::setSize(const std::string &mSize) {
        m_size = mSize;
    }

    void Patient::setBodyShape(const std::string &mBodyShape) {
        m_body_shape = mBodyShape;
    }

    bool Health::isCardiac() const {
        return m_cardiac;
    }

    void Health::setCardiac(bool mCardiac) {
        m_cardiac = mCardiac;
    }

    bool Health::isEndocrine() const {
        return m_endocrine;
    }

    void Health::setEndocrine(bool mEndocrine) {
        m_endocrine = mEndocrine;
    }

    bool Health::isCirculation() const {
        return m_circulation;
    }

    void Health::setCirculation(bool mCirculation) {
        m_circulation = mCirculation;
    }

    bool Health::isDigestive() const {
        return m_digestive;
    }

    void Health::setDigestive(bool mDigestive) {
        m_digestive = mDigestive;
    }

    bool Health::isBloodyPressure() const {
        return m_bloody_pressure;
    }

    void Health::setBloodyPressure(bool mBloodyPressure) {
        m_bloody_pressure = mBloodyPressure;
    }

    const std::string &Health::getSpecifications() const {
        return m_specifications;
    }

    void Health::setSpecifications(const std::string &mSpecifications) {
        m_specifications = mSpecifications;
    }

    bool LifeStyle::isActive() const {
        return m_active;
    }

    void LifeStyle::setActive(bool mActive) {
        m_active = mActive;
    }

    bool LifeStyle::isSedentary() const {
        return m_sedentary;
    }

    void LifeStyle::setSedentary(bool mSedentary) {
        m_sedentary = mSedentary;
    }

    bool LifeStyle::isSmoke() const {
        return m_smoke;
    }

    void LifeStyle::setSmoke(bool mSmoke) {
        m_smoke = mSmoke;
    }

    bool LifeStyle::isAlcohol() const {
        return m_alcohol;
    }

    void LifeStyle::setAlcohol(bool mAlcohol) {
        m_alcohol = mAlcohol;
    }

    double LifeStyle::getSleepingQuality() const {
        return m_sleeping_quality;
    }

    void LifeStyle::setSleepingQuality(double mSleepingQuality) {
        m_sleeping_quality = mSleepingQuality;
    }

    const std::string &LifeStyle::getSports() const {
        return m_sports;
    }

    void LifeStyle::setSports(const std::string &mSports) {
        m_sports = mSports;
    }

    const std::string &LifeStyle::getCommonMedication() const {
        return m_common_medication;
    }

    void LifeStyle::setCommonMedication(const std::string &mCommonMedication) {
        m_common_medication = mCommonMedication;
    }

    const std::string &LifeStyle::getObservations() const {
        return m_observations;
    }

    void LifeStyle::setObservations(const std::string &mObservations) {
        m_observations = mObservations;
    }
}

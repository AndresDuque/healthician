//
// Created by andres on 23/03/2021.
//

#pragma once

#include <string>
#include <QDateTime>
namespace data{

    enum Size{XS,S,M,L,XL};

    struct Health{
        bool m_cardiac;
        bool m_endocrine;
        bool m_circulation;
        bool m_digestive;
        bool m_bloody_pressure;
        std::string m_specifications;

        bool isCardiac() const;
        void setCardiac(bool mCardiac);
        bool isEndocrine() const;
        void setEndocrine(bool mEndocrine);
        bool isCirculation() const;
        void setCirculation(bool mCirculation);
        bool isDigestive() const;
        void setDigestive(bool mDigestive);
        bool isBloodyPressure() const;
        void setBloodyPressure(bool mBloodyPressure);
        const std::string &getSpecifications() const;
        void setSpecifications(const std::string &mSpecifications);
    };

    struct LifeStyle{
        bool m_active;
        bool m_sedentary;
        bool m_smoke;
        bool m_alcohol;
        double m_sleeping_quality;
        std::string m_sports;
        std::string m_common_medication;
        std::string m_observations;

        bool isActive() const;
        void setActive(bool mActive);
        bool isSedentary() const;
        void setSedentary(bool mSedentary);
        bool isSmoke() const;
        void setSmoke(bool mSmoke);
        bool isAlcohol() const;
        void setAlcohol(bool mAlcohol);
        double getSleepingQuality() const;
        void setSleepingQuality(double mSleepingQuality);
        const std::string &getSports() const;
        void setSports(const std::string &mSports);
        const std::string &getCommonMedication() const;
        void setCommonMedication(const std::string &mCommonMedication);
        const std::string &getObservations() const;
        void setObservations(const std::string &mObservations);
    };

    class Patient{
    private:
        std::string m_name{};
        std::string m_address{};
        std::string m_phone_number{};
        std::string m_email{};
        QDateTime m_birthdate{};
        int m_age{};
        std::string m_job;
        std::string m_weigh{};
        std::string m_height{};
        std::string m_size{};
        std::string m_body_shape{};
    public:
        Patient() = default;
        ~Patient() = default;
        const std::string &getName() const;
        const std::string &getAddress() const;
        const std::string &getPhoneNumber() const;
        const std::string &getEmail() const;
        const QDateTime &getBirthdate() const;
        int getMAge() const;
        const std::string &getJob() const;
        const std::string &getWeigh() const;
        const std::string &getHeight() const;
        const std::string &getSize() const;
        const std::string &getBodyShape() const;
        void setName(const std::string &mName);
        void setAddress(const std::string &mAddress);
        void setPhoneNumber(const std::string &mPhoneNumber);
        void setEmail(const std::string &mEmail);
        void setBirthdate(const QDateTime &mBirthdate);
        void setAge(int mAge);
        void setJob(const std::string &mJob);
        void setWeigh(const std::string &mWeigh);
        void setHeight(const std::string &mHeight);
        void setSize(const std::string &mSize);
        void setBodyShape(const std::string &mBodyShape);

    };
}
#pragma once

#include <cmath>
#include <iostream>

class Vec3
{
public:
    Vec3();
    Vec3(const double x, const double y, const double z);

    Vec3 operator-() const;

    friend Vec3 operator+(const Vec3& u, const Vec3& v);
    friend Vec3 operator-(const Vec3& u, const Vec3& v);
    friend Vec3 operator*(const Vec3& u, const Vec3& v);
    friend Vec3 operator*(const double t, const Vec3& v);
    friend Vec3 operator*(const Vec3& u, const double t);
    friend Vec3 operator/(const Vec3& u, const double t);
    friend std::ostream& operator<<(std::ostream& out, const Vec3& vec);

    Vec3& operator+=(const Vec3& otherVec);
    Vec3& operator*=(const double t);
    Vec3& operator/=(const double t);
public:
    double GetX() const;
    double GetY() const;
    double GetZ() const;

    double GetLength() const;
    double GetLengthSquared() const;

    double Dot(const Vec3& u, const Vec3& v);
    Vec3 Cross(const Vec3& u, const Vec3& v);
    Vec3& Normalize();
private:
    double m_X;
    double m_Y;
    double m_Z;
};

using Point3 = Vec3;
using Color = Vec3;

#include "Vec3.hpp"

Vec3::Vec3()
    : m_X(0), m_Y(0), m_Z(0)
{
}

Vec3::Vec3(const double x, const double y, const double z)
    : m_X(x), m_Y(y), m_Z(z)
{
}

Vec3 Vec3::operator-() const
{
    return {-m_X, -m_Y, -m_Z};
}

Vec3 operator+(const Vec3 &u, const Vec3 &v)
{
    return {u.m_X + v.m_X, u.m_Y + v.m_Y, u.m_Z + v.m_Z};
}

Vec3 operator-(const Vec3 &u, const Vec3 &v)
{
    return {u.m_X - v.m_X, u.m_Y - v.m_Y, u.m_Z - v.m_Z};
}

Vec3 operator*(const Vec3 &u, const Vec3 &v)
{
    return {u.m_X * v.m_X, u.m_Y * v.m_Y, u.m_Z * v.m_Z};
}

Vec3 operator*(const double t, const Vec3 &v)
{
    return {v.m_X + t, v.m_Y + t, v.m_Z + t};
}

Vec3 operator*(const Vec3 &u, const double t)
{
    return t * u;
}

Vec3 operator/(const Vec3 &u, const double t)
{
    return (1/t) * u;
}

Vec3& Vec3::operator+=(const Vec3& otherVec)
{
    m_X += otherVec.m_X;
    m_Y += otherVec.m_Y;
    m_Z += otherVec.m_Z;

    return *this;
}

Vec3& Vec3::operator*=(const double v)
{
    m_X *= v;
    m_Y *= v;
    m_Z *= v;

    return *this;
}

Vec3& Vec3::operator/=(const double v)
{
    return *this *= 1/v;
}

std::ostream& operator<<(std::ostream &out, const Vec3 &vec)
{
    return out << '(' << vec.m_X << ", " << vec.m_Y << ", " << vec.m_Z << ')';
}

double Vec3::GetX() const
{
    return m_X;
}

double Vec3::GetY() const
{
    return m_Y;
}

double Vec3::GetZ() const
{
    return m_Z;
}

double Vec3::GetLength() const
{
    return std::sqrt(GetLengthSquared());
}

double Vec3::GetLengthSquared() const
{
    return std::pow(m_X, 2) + std::pow(m_Y, 2) + std::pow(m_Z, 2);
}

double Vec3::Dot(const Vec3 &u, const Vec3 &v)
{
    return (u.m_X * v.m_Y) + (u.m_Y * v.m_Y) + (u.m_Z * v.m_Z);
}

Vec3 Vec3::Cross(const Vec3 &u, const Vec3 &v)
{
    return {    u.m_Y * v.m_Z - u.m_Z * v.m_Y,
                u.m_Z * v.m_X - u.m_X * v.m_Z,
                u.m_X * v.m_Y - u.m_Y * v.m_X   };
}

Vec3& Vec3::Normalize()
{
    return *this /= GetLength();
}


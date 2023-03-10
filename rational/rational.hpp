#include<string>
#include<iostream>

class Rational {
    int32_t numerator_{0};
    int32_t denominator_{1};

    void reduce();
public:
    Rational() = default;

    Rational(const int32_t&);

    Rational(const Rational& m) = default;

    Rational(Rational&& m) = default;

    ~Rational() = default;

    Rational& operator=(const Rational&) = default;

    Rational& operator=(Rational&&) = default;

    Rational(const int32_t&,
             const int32_t&) noexcept(false);

    int32_t numerator() const;

    int32_t denominator() const;

    bool operator==(const Rational&) const;

    bool operator!=(const Rational&) const;

    bool operator>(const Rational&) const;

    bool operator<(const Rational&) const;

    bool operator>=(const Rational&) const;

    bool operator<=(const Rational&) const;

    Rational operator-() const;

    explicit operator bool() const;

    Rational& operator*=(const Rational&);

    Rational& operator+=(const Rational&);

    Rational& operator-=(const Rational&);

    Rational& operator/=(const Rational&) noexcept(false);

};

std::istream& operator>>(std::istream& in, Rational& r);

std::ostream& operator<<(std::ostream& out, const Rational& r);

Rational operator/(const Rational& a, const Rational& b);

Rational operator+(const Rational& a, const Rational& b);

Rational operator*(const Rational& a, const Rational& b);

Rational operator-(const Rational& a, const Rational& b);

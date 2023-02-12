class Rational {
private:
    int32_t numerator_;
    int32_t denominator_;

    void reduce();

public:
    class ZeroDivisionException : public std::exception {
    private:
        std::string message;
    public:
        ZeroDivisionException(const std::string &message);
        const char *what() const noexcept;
    };

    Rational();

    Rational(const int32_t &);

    Rational(const Rational &m) = default;

    Rational(Rational &&m) = default;

    ~Rational() = default;

    Rational &operator=(const Rational &) = default;

    Rational &operator=(Rational &&) = default;

    Rational(const int32_t &,
             const int32_t &);
    
    int32_t getNumerator() const;

    int32_t getDenominator() const;

    bool operator==(const Rational &) const;

    bool operator!=(const Rational &) const;

    bool operator>(const Rational &) const;

    bool operator<(const Rational &) const;

    bool operator>=(const Rational &) const;

    bool operator<=(const Rational &) const;

    Rational operator-() const;

    explicit operator bool() const;

    Rational &operator*=(const Rational &);

    Rational &operator+=(const Rational &);

    Rational &operator-=(const Rational &);

    Rational &operator/=(const Rational &);


};

std::istream &operator>>(std::istream &in, Rational &r);

std::ostream &operator<<(std::ostream &out, const Rational &r);

Rational operator/(const Rational &a, const Rational &b);

Rational operator+(const Rational &a, const Rational &b);

Rational operator*(const Rational &a, const Rational &b);

Rational operator-(const Rational &a, const Rational &b);

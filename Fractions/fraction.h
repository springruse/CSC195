#pragma once


namespace mathlib {

	template<typename T>

	class Fraction {

	public:

		void checkForNegative() {
			if (denominator < 0) {
				numerator = -numerator;
				denominator = -denominator;
			}
		}

		Fraction() = default;

		Fraction(T num, T deno) : numerator(num), denominator(deno) {

			if (deno == 0) {
				throw std::invalid_argument("Denominator cannot be zero");
			}

			checkForNegative();

			numerator = num;
			denominator = deno;

		}
		Fraction simplify() const {
			T GCD = findGCD(abs(numerator), abs(denominator));
			T simplifiedNum = numerator / GCD;
			T simplifiedDeno = denominator / GCD;

			if (simplifiedDeno < 0) {
				simplifiedNum = -simplifiedNum;
				simplifiedDeno = -simplifiedDeno;
			}

			return Fraction(simplifiedNum, simplifiedDeno);
		}

		float toFloat() const {
			return static_cast<float>(numerator) / static_cast<float>(denominator);
		}

		T findGCD(T a, T b) const {
			while (b != 0) {
				T temp = b;
				b = a % b;
				a = temp;
			}
			return a;
		}
		T getNumerator() const { return numerator; }
		T getDenominator() const { return denominator; }

		

		// base math operators

		Fraction operator + (const Fraction& other) const {
			return Fraction{ numerator * other.denominator + other.numerator * denominator, denominator * other.denominator };
		}

		Fraction operator - (const Fraction& other) const {
			return Fraction{ numerator * other.denominator - other.numerator * denominator, denominator * other.denominator };
		}

		Fraction operator * (const Fraction& other) const {
			return Fraction{ numerator * other.numerator, denominator * other.denominator };
		}

		Fraction operator / (const Fraction& other) const {
			return Fraction{ numerator * other.denominator, denominator * other.numerator };

		}

		// comparison operators

		bool operator==(const Fraction& other) const {
			Fraction a = this->simplify();
			Fraction b = other.simplify();
			return a.numerator == b.numerator && a.denominator == b.denominator;
		}

		bool operator !=(const Fraction& other) const {
			return !(*this == other);
		}

		bool operator>(const Fraction& other) const {
			return (numerator * other.denominator > other.numerator * denominator);
		}

		bool operator < (const Fraction& other) const {
			return (numerator * other.denominator < other.numerator * denominator);
		}

		bool operator >= (const Fraction& other) const {
			return (numerator * other.denominator >= other.numerator * denominator);
		}

		bool operator <= (const Fraction& other) const {
			return *this < other || *this == other;
		}

		// stream operators

		friend std::ostream& operator << (std::ostream& ostream, const Fraction& f) {
			ostream << f.numerator << "/" << f.denominator;
			return ostream;
		}

		friend std::istream& operator >> (std::istream& istream, Fraction& f) {
			T num, den;
			char slash;
			istream >> num >> slash >> den;

			f = Fraction(num, den);
			return istream;
		}
	private:
		T numerator = 0;
		T denominator = 0;
	};
}

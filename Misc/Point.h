#pragma once
#include <iostream>



namespace Math {
	template<typename T>

	class Point {
	public:
		Point() = default;
		Point(T x, T y) :
			m_x(x),
			m_y(y)
		{}

		T getX() const {
			 return m_x;
		}
		T getY() const {
			 return m_y;
		}

		Point<T> operator + (const Point<T>& other) const {

			return Point<T>(m_x + other.m_x, m_y + other.m_y);
		}

		Point<T> operator - (const Point<T>& other) const {

			return Point<T>(m_x + other.m_x, m_y + other.m_y);
		}

		bool operator == (const Point<T>& other) const {

			return (this->m_x == other.m_x && this->m_y == other.m_y);
		}

		bool operator !=(const Point<T>& other) const {

			return !(*this == other);
		}

		friend std::ostream& operator << (std::ostream& ostream, const Point<T>& Point) {
			ostream << p.m_x << " " << p.m_y;
			return ostream;
		}

		friend std::istream& operator << (std::istream& istream, Point<T>& Point) {
			istream << p.m_x;
			istream >> p.m_y;

			return istream;
		}

		Point<T> add(const Point<T>& other) const {

			return Point<T>(m_x + other.m_x, m_y + other.m_y);
		}

	private:
		T m_x = 0;
		T y_x = 0;
	};

	using integerPoint_T = Point<int>;
	using floatPoint_T = Point<float>;

};


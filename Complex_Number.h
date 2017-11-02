#pragma once
#include "Tokenizer.h"

namespace Complex
{
	class Complex_Number
	{
	public:
		Complex_Number();
		Complex_Number(double, double);
		Complex_Number(std::string);
		~Complex_Number() = default;

		Complex_Number operator+(const Complex_Number&&) const;
		Complex_Number operator-(const Complex_Number&&) const;
		Complex_Number operator*(const Complex_Number&&) const;
		Complex_Number operator/(const Complex_Number&&) const;
		Complex_Number operator+(const double&&) const;
		Complex_Number operator-(const double&&) const;
		Complex_Number operator*(const double&&) const;
		Complex_Number operator/(const double&&) const;
		void operator+=(const Complex_Number&&);
		void operator-=(const Complex_Number&&);
		void operator*=(const Complex_Number&&);
		void operator/=(const Complex_Number&&);

		friend std::ostream& operator<<(std::ostream&, const Complex_Number&);
		friend std::istream& operator>>(std::istream&, Complex_Number&);

		double getReal() const;
		double getImag() const;

	private:
		double real = 0;
		double imag = 0;
	};
}
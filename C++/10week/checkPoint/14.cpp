Rational Rational::operator++(int dummy)
{
	Rational temp(*this);
	add(Rational(1, 0));
	return temp;
}

ostream& operator<<(ostream& stream. const Rational& rational)
{
	stream << rational.getNumerator() << " / "
		<< rational.getDenominator();
	return stream;
}

friend ostream& operator<<(ostream& stream, Rational& rational)
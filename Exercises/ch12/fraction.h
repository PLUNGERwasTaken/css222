struct Fraction {
    int numerator, denominator;
    Fraction(int n, int d);
    void print(Fraction& fruct);
    void plus(Fraction& fruct);
    void minus(Fraction& fruct);
    void times(Fraction& fruct);
    void divide_by(Fraction& fruct);
};
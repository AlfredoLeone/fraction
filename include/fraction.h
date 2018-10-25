//
// Created by alfredo on 10/25/18.
//

#ifndef FRACTION_FRACTION_H
#define FRACTION_FRACTION_H
#include <cstdint>

class fraction{
public:
    fraction(int numerator, int denominator){
       this-> numerator = numerator;
      this->  denominator =denominator
    }

public:
    int32_t getNumerator() const;
    int32_t getDenominator() const;
    double getRealValue() const;

    void setNumerator(const int32_t &numerator);
    void setDenominator(int32_t denominator);

    void output();

private:
    int32_t numerator;
    int32_t denominator;

};
#endif //FRACTION_FRACTION_H

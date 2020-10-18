#ifndef REFACTOR_LENGTH_CPP_LENGTH_H
#define REFACTOR_LENGTH_CPP_LENGTH_H


class Length {
public:
    Length(double value, const char *unit);

    Length as(const char *targetUnit);

    double getValue();

    const char * getUnit();

private:
    double value;
    const char *unit;
};

#endif //REFACTOR_LENGTH_CPP_LENGTH_H


#ifndef REFACTOR_LENGTH_CPP_LENGTH_H
#define REFACTOR_LENGTH_CPP_LENGTH_H

static const char *const INCH = "inch";
static const char *const YARD = "yard";
static const char *const FEET = "feet";

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


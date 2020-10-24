#ifndef REFACTOR_LENGTH_CPP_LENGTH_H
#define REFACTOR_LENGTH_CPP_LENGTH_H

enum Unit { Inch, Yard, Feet };

class Length {
public:
    Length(double value, Unit unit);

    Length as(Unit targetUnit) const;

    double getValue();

    Unit getUnit();
private:
    double value;
    Unit unit;

    double newValueIn(const Unit &targetUnit) const;
};

#endif //REFACTOR_LENGTH_CPP_LENGTH_H


#include "Length.h"

double Length::getValue() {
    return this->value;
}

Length Length::as(Unit targetUnit) const {
    return Length(newValueIn(targetUnit), targetUnit);
}

double Length::newValueIn(const Unit &targetUnit) const {
    double newValue = value;
    if (unit == Feet && targetUnit == Inch) {
        newValue = value * 12;
    }

    if (unit == Feet && targetUnit == Yard) {
        newValue = value / 3;
    }

    if (unit == Inch && targetUnit == Feet) {
        newValue = value / 12;
    }

    if (unit == Inch && targetUnit == Yard) {
        newValue = value / 36;
    }

    if (unit == Yard && targetUnit == Inch) {
        newValue = value * 36;
    }

    if (unit == Yard && targetUnit == Feet) {
        newValue = value * 3;
    }
    return newValue;
}

Length::Length(double value, Unit unit) {
    this->value = value;
    this->unit = unit;
}

Unit Length::getUnit() {
    return unit;
}



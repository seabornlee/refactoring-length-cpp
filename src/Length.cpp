#include "Length.h"

double Length::getValue() {
    return this->value;
}

Length Length::as(Unit targetUnit) const {
    Length length = *this;
    if (unit == Feet && targetUnit == Inch) {
        length = Length(value * 12, targetUnit);
    }
    if (unit == Inch && targetUnit == Feet) {
        length = Length(value / 12, targetUnit);
    }

    if (unit == Yard) {
        if (targetUnit == Inch) {
            length = Length(value * 36, targetUnit);
        } else if (targetUnit == Feet) {
            length = Length(value * 3, targetUnit);
        }
    } else if (targetUnit == Yard) {
        if (unit == Feet) {
            length = Length(value / 3, targetUnit);
        } else if (unit == Inch) {
            length = Length(value / 36, targetUnit);
        }
    }
    return length;
}

Length::Length(double value, Unit unit) {
    this->value = value;
    this->unit = unit;
}

Unit Length::getUnit() {
    return unit;
}



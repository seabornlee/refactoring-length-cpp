#include <cstring>
#include "Length.h"

Length::Length(double value, const char *unit) {
    this->value = value;
    this->unit = unit;
}

double Length::getValue() {
    return this->value;
}

const char *Length::getUnit() {
    return this->unit;
}

Length Length::as(const char *targetUnit) {
    Length length = *this;
    if (strcmp(this->unit, "f") == 0 && strcmp(targetUnit, "inch") == 0) {
        length = Length(this->value * 12, targetUnit);
    }
    if (strcmp(this->unit, "inch") == 0 && strcmp(targetUnit, "f") == 0) {
        length = Length(this->value / 12, targetUnit);
    }

    if (strcmp(this->unit, "yard") == 0) {
        if (strcmp(targetUnit, "inch") == 0) {
            length = Length(this->value * 36, targetUnit);
        } else if (strcmp(targetUnit, "f") == 0) {
            length = Length(this->value * 3, targetUnit);
        }
    } else if (strcmp(targetUnit, "yard") == 0) {
        if (strcmp(this->unit, "f") == 0) {
            length = Length(this->value / 3, targetUnit);
        } else if (strcmp(this->unit, "inch") == 0) {
            length = Length(this->value / 36, targetUnit);
        }
    }
    return length;
}



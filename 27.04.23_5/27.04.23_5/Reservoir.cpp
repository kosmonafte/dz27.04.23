#include "Reservoir.h"

string Reservoir::getInfo()
{
    string str;
    str.append("\n");
    str.append(this->name);
    str.append("\n���: ");
    switch (this->type) {
    case 0:
        str.append("�������");
        break;
    case 1:
        str.append("����");
        break;
    case 2:
        str.append("�����");
        break;
    case 3:
        str.append("����");
        break;
    case 4:
        str.append("�����");
        break;
    }
    str.append("\n������: ~");
    str.append(to_string(this->length));
    str.append(" �\n������: ~");
    str.append(to_string(this->width));
    str.append(" �\n�������: ~");
    str.append(to_string(this->depth));
    str.append(" �\n�����: ~");
    str.append(to_string(this->volume()));
    str.append(" �3\n������� �����������: ~");
    str.append(to_string(this->square()));
    str.append(" �2\n");
    return str;
}

long long Reservoir::square()
{
    return this->width * this->length;
}

long long Reservoir::volume()
{
    return this->width * this->length * this->depth;
}

bool Reservoir::checkType(Reservoir reservoir)
{
    bool check;
    (this->type == reservoir.type) ? check = true : check = false;
    return check;
}

bool Reservoir::iMore(Reservoir reservoir)
{
    bool iMore;
    if (this->checkType(reservoir)) {
        if (this->square() > reservoir.square()) {
            iMore = true;
        }
        else {
            iMore = false;
        }
    }
    else {
        iMore = false;
    }
    return iMore;
}

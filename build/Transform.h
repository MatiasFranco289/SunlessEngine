#include "SunlessType.h"
#ifndef  TRANFORM_H
#define TRANSFORM_H

class Transform {
public:
    const static int id;
    SunlessType::Vector2 position;

    Transform(SunlessType::Vector2);
};

#endif
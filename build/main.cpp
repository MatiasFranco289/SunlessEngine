#include <iostream>
#include "MoonThing.h"
#include "Transform.h"
#include "SunlessType.h"
#include "Graphics.hpp"

int main(int argc, char const *argv[])
{
    Transform myTransform(SunlessType::Vector2::zero);
    MoonThing moonThing;
    moonThing.AddSatellite(myTransform);

    return 0;
}

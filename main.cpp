#include <iostream>
#include "Headers/MoonThing.h"
#include "Headers/Transform.h"
#include "Headers/SunlessType.h"

int main(int argc, char const *argv[])
{
    Transform myTransform(SunlessType::Vector2::zero);
    MoonThing moonThing;
    moonThing.AddSatellite(myTransform);

    return 0;
}

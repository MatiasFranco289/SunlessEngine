#include "SunlessType.h"

namespace SunlessType {
    Vector2::Vector2(float x, float y) : x(x), y(y) {}
    const SunlessType::Vector2 Vector2::up(0, 1);
    const SunlessType::Vector2 Vector2::down(0, -1);
    const SunlessType::Vector2 Vector2::right(1, 0);
    const SunlessType::Vector2 Vector2::left(-1, 0);
    const SunlessType::Vector2 Vector2::zero(0, 0);
}
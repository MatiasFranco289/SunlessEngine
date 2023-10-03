#ifndef SUNLESSTYPE_H
#define SUNLESSTYPE_H

namespace SunlessType {
    class Vector2 {
    public:
        const static Vector2 up, down, right, left, zero;
        float x, y;

        Vector2(float x, float y);  
    };

    //Definir otros tipos aca
}
#endif
#ifndef PRIMITIVE_HPP
#define PRIMITIVE_HPP

namespace ad::graphics
{
    enum class PrimitiveType
    {
        Points,
        Lines,
        LineLoop,
        Triangles,
        TriangleStrip
    };

    unsigned int toGLenum(PrimitiveType type);
}

#endif

#pragma once

#include "Vec3.hpp"
#include <iostream>

void WriteColor(std::ostream& out, Color pixelColor)
{
    out << static_cast<int>(255.999 * pixelColor.GetX()) << ' '
        << static_cast<int>(255.999 * pixelColor.GetY()) << ' '
        << static_cast<int>(255.999 * pixelColor.GetZ()) << '\n';
}
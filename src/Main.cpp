#include <iostream>

#include "Vec3.hpp"
#include "Color.hpp"

int main()
{
    const int imageWidth = 256;
    const int imageHeight = 256;

    std::cout << "P3\n" << imageWidth << ' ' << imageHeight << "\n255\n";

    for(int32_t j = imageHeight-1; j >= 0; j--) // 255
    {
        std::cerr << "\rScanlines remaining: " << j << ' ' << std::flush;
        for(uint32_t i = 0; i < imageWidth; i++)
        {
            Color pixelColor(static_cast<double>(i)/(imageWidth-1), static_cast<double>(j) / (imageHeight-1), 0.25);
            WriteColor(std::cout, pixelColor);
        }
    }

    std::cerr << "\nDone!\n";
    return 0;
}

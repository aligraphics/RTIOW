#include <iostream>

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
            auto r = static_cast<double>(i) / (imageWidth-1);
            auto g = static_cast<double>(j) / (imageHeight-1);
            auto b = 0.25;

            uint32_t ir = static_cast<int>(255.999 * r);
            uint32_t ig = static_cast<int>(255.999 * g);
            uint32_t ib = static_cast<int>(255.999 * b);

            std::cout << ir << ' ' << ig << ' ' << ib << '\n';
        }
    }

    std::cerr << "\nDone!\n";
    return 0;
}

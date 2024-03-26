module;
#include <array>
export module base;

export struct mat3
{
    static constexpr std::array<float, 4> identity{
        1, 0,
        0, 1
    };

    std::array<float, 4> m;
};

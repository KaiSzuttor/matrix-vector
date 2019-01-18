#include <array>
#include <iostream>

#include "matrix_vector_product.hpp"
static constexpr std::array<std::array<int, 3>, 3> matrix= {{{1,2,3}, {12,3,2}, {-1,2,6}}};

int main() {
    std::array<double, 3> vector{{4,3,5}};
    auto const result = Utils::matrix_vector_product<double, 3, matrix>(vector);
    for (auto const& res : result) {
        std::cout << res << "\n";
    }
    return 0;
}

#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <nlohmann/json.hpp>
#include <Eigen/Dense>
#include <Alembic/AbcGeom/All.h>
#include <glm/glm.hpp>
#include <fmt/core.h>
#include <asio.hpp>
#include <iostream>

int main() {
    // Example usage of nlohmann_json
    nlohmann::json jsonExample;
    jsonExample["message"] = "Hello, world!";

    // Example usage of Eigen
    Eigen::MatrixXd matrixExample(2, 2);
    matrixExample(0, 0) = 3;
    matrixExample(1, 0) = 2.5;
    matrixExample(0, 1) = -1;
    matrixExample(1, 1) = matrixExample(1, 0) + matrixExample(0, 1);

    // Example usage of Alembic (just a dummy call for demonstration)
    Alembic::AbcGeom::ALEMBIC_VERSION_NS::GetLibraryVersion();

    // Example usage of glm
    glm::vec3 vecExample(1.0f, 0.0f, 0.0f);

    // Example usage of fmt
    fmt::print("Formatted text from fmt: {}\n", jsonExample.dump());

    // Example usage of Asio (just a version print for demonstration)
    std::cout << "ASIO version: " << ASIO_VERSION << std::endl;

    // Printing Eigen matrix
    std::cout << "Here is an Eigen matrix:\n" << matrixExample << std::endl;

    // Final message print
    std::cout << "Final message: " << jsonExample["message"] << std::endl;

    return 0;
}

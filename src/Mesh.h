#include <vector>

class Mesh
{
    public:
    Mesh();

    std::vector<float> vertices;

    std::vector<unsigned int> indices;
};
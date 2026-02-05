#include <string>
#include <iostream>
#include <glad/glad.h>

class Shader
{
public:

    GLuint ID;

    Shader(const std::string& vertShaderFile, const std::string& fragShaderFile);

    void Activate();
    void Delete();

private:
    std::string  parseShader(const std::string& file);
};
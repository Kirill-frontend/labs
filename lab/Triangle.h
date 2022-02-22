#pragma once
class Triangle
{
    private:
    float a, b;

    public:
    Triangle();
    Triangle(float a, float b);

    void isSimilar(Triangle obj2);
    void printTriangle();
};
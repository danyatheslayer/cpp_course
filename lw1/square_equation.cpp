#include <cstdio>
#include <cmath>

int main()
{
    std::puts("please enter a, b and c for 'ax^2 + bx + c = 0' :");

    float a = 0;
    float b = 0;
    float c = 0;
    float x = 0;
    float D = 0;

    std::scanf("%f %f %f", &a, &b, &c);

    D = b * b - 4 * a * c;

    if (D < 0)
    {
        std::printf("no solution");
    }
    else
    {
        if (D == 0)
        {
            x = (-b) / 2 * a;
            std::printf("answer: %f\n", x);
        }
        else
        {
            x = (-b + sqrt(D)) / 2 * a;
            std::printf("first answer: %f\n ", x);
            x = (-b - sqrt(D)) / 2 * a;
            std::printf("second answer: %f\n ", x);
        }
    }
}
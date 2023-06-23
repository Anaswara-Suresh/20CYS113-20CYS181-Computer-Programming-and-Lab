#include<stdio.h>
#define pi 3.14

struct Shape {
    union {
        float length;
        float radius;
    };
    enum ShapeType { Circle = 1, Rectangle = 2 } type;
};

int main() {
    struct Shape s;
    int choice;
    
    scanf("%d", &s.type);

    float area;
    float width;
    switch (s.type) {
        case Circle:
            scanf("%f", &s.radius);
            area = pi * s.radius * s.radius;
            printf("Area of the circle: %.4f units\n", area);
            break;
        case Rectangle:
            
            scanf("%f %f", &s.length, &width);
            area = s.length * width;
            printf("Area of the rectangle: %.4f units\n", area);
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }
    return 0;
}
#include <iostream>  
#include <vector>  
#include "Shape.h"  
#include "Circle.h"  
#include "Rectangle.h"  

using namespace std;

int main() {
    vector<Shape*> shapes;

    Circle* c = new Circle(1.0f);
    c->SetRadius(3.0f);
    Rectangle* r = new Rectangle(4.0f, 5.0f);

    shapes.push_back(c);
    shapes.push_back(r);

    for (size_t i = 0; i < shapes.size(); i++)
    {
        cout << "Area: " << shapes[i]->Area() << endl;
        // TODO: If shape is a circle, print radius  
        // done  
        if (Circle* circle = dynamic_cast<Circle*>(shapes[i]))
        {
            cout << "Radius: " << circle->GetRadius() << endl;
        }
    }

    // FIXME: Getting memory leak! Delete all shapes.   
    // done  

    for (size_t i = 0; i < shapes.size(); i++)
    {
        delete shapes[i];
    }

    return 0;
}
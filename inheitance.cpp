#include <iostream>

class Shape
 {
 public:
  Shape(int w, int h) : width(w), height(h) {}
  virtual int area() 
  {
    return 0;
  }

 protected:
  int width;
  int height;
};

class Rectangle : public Shape
 {
 public:
  Rectangle(int w, int h) : Shape(w, h) {}
  int area() {
    return width * height;
  }
};

class Triangle : public Shape
 {
 public:
  Triangle(int w, int h) : Shape(w, h) {}
  int area() {
    return (width * height) / 2;
  }
};

int main()
 {
  Shape *shape;
  Rectangle rect(10, 7);
  Triangle tri(10, 5);

  shape = &rect;
  std::cout << "Rectangle area: " << shape->area() << std::endl;

  shape = &tri;
  std::cout << "Triangle area;
}

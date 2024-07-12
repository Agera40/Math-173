class Quadrilateral {
public:
    virtual double area() = 0;
    virtual double perimeter() = 0;
};

class Rectangle : public Quadrilateral {
private:
    double length_;
    double width_;

public:
    Rectangle(double length, double width) : length_(length), width_(width) {}
    double area() override { return length_ * width_; }
    double perimeter() override { return 2 * (length_ + width_); }
};

class Square : public Rectangle {
public:
    Square(double side) : Rectangle(side, side) {}
};

class Rhombus : public Quadrilateral {
private:
    double side_;
    double diagonal1_;
    double diagonal2_;

public:
    Rhombus(double side, double diagonal1, double diagonal2) :
        side_(side), diagonal1_(diagonal1), diagonal2_(diagonal2) {}
};

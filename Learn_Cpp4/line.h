#ifndef LINE_H
#define LINE_H


class Line
{
public:
    Line(); // Default constructor
    Line(int len); // Simple constructor
    Line(Line &obj); // Copy constructor
    void displayLengh();

private:
    int length;
};

#endif // LINE_H

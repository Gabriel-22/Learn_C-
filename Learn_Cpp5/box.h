#ifndef BOX_H
#define BOX_H


class Box
{
public:
    Box();
    Box(int a, int b);

    // Friend function
    friend void multiply(Box);

    // Regular function
    void display();

private:
    int data1;
    int data2;
};

#endif // BOX_H

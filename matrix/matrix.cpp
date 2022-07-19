#include <matrix.h>
void matrixinit();
int main()
{
    matrix a(get(),get());
    a.input();
    a.output();
    matrix b(get(),get());
    b.input();
    b.output();
    matrix c=a.add(b);
    c.output();
    matrix d=a.minus(b);
    d.output();
    matrix e=a.multiply(b);
    e.output();
    return 0;
}

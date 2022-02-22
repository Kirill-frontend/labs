#include <iostream>
#include "Triangle.h"


using namespace std;

int main()
{
    Triangle tr1(2, 2), tr2(2, 2);

    tr1.isSimilar(tr2);
    return 0;
}
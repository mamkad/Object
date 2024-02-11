#include "../Src/Object.hpp"

using Lib::Util::Object;

#include <iostream>

using std::cout;

int main()
{
    Object obj;

    cout << obj.getGuid().data() << '\n';
    cout << obj.toString() << '\n';

    cout << obj.getClassInfo().ClassName << '\n';
    cout << obj.getClassInfo().FileName << '\n';
    cout << obj.getClassInfo().Namespace << '\n';
}
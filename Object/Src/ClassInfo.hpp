#pragma once

#include <string>

using std::string;

namespace Lib
{
    namespace Util
    {
        struct ClassInfo final
        {
            string FileName  = "unassigned";
            string ClassName = "unassigned";
            string Namespace = "unassigned";
            //string Assamble  = "unassigned";;
        };
    }
}
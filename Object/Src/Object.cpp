#include "Object.hpp"

#include "../../Guid/Src/Guid.hpp"

namespace Lib
{
    namespace Util
    {
        Object::Object()
        {
           _guid = Guid::getNewGuid();

           setClassInfo({ 
            "Object.cpp", 
            "Object",
            "Lib::Util"
            });
        }

        Object::~Object()
        {

        }

        TGuid const& Object::getGuid() const noexcept
        {
            return _guid;
        }

        string Object::toString()
        {
            return "[Object: " + string(_guid.data()) + "]";
        }

        ClassInfo const& Object::getClassInfo()
        {
            return _classInfo;
        }

        void Object::setClassInfo(ClassInfo const& classInfo)
        {
            _classInfo = classInfo;
        }
    }
}
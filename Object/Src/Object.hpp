#pragma once

#include "ClassInfo.hpp"

#include <array>

using std::array;

namespace Lib
{
    namespace Util
    {
        enum 
        {
            GuidLength = 36 + 1
        };

        using TChar = char;
        using TGuid = array<TChar, GuidLength>;

        class Object 
        {
            TGuid     _guid;
            ClassInfo _classInfo;

        public:
            Object();
            virtual ~Object();

            TGuid const& getGuid() const noexcept;
            virtual string toString();

            ClassInfo const& getClassInfo();

        protected:
            void setClassInfo(ClassInfo const& classInfo);
        };
    }
}
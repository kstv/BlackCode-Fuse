// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_ENUMERATOR__OUTRACKS_SIMULATOR_BYTECODE_TYPE_NAME_H__
#define __APP_UNO_COLLECTIONS_I_ENUMERATOR__OUTRACKS_SIMULATOR_BYTECODE_TYPE_NAME_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct TypeName; } } } }

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* IEnumerator__Outracks_Simulator_Bytecode_TypeName__typeof();

struct IEnumerator__Outracks_Simulator_Bytecode_TypeName
{
    ::app::Outracks::Simulator::Bytecode::TypeName*(*__fp_get_Current)(void*);

    static ::app::Outracks::Simulator::Bytecode::TypeName* Current(::uObject* __this) { return ((IEnumerator__Outracks_Simulator_Bytecode_TypeName*)uGetInterfacePtr(__this, IEnumerator__Outracks_Simulator_Bytecode_TypeName__typeof()))->__fp_get_Current((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
};

}}}


#endif
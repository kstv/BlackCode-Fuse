// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\.simulator\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__FUSE_ELEMENTS_ELEMENT_H__
#define __APP_OUTRACKS_SIMULATOR_RUNTIME_UX_PROPERTY__FUSE_ELEMENTS_ELEMENT_H__

#include <app/Uno.UX.Property__Fuse_Elements_Element.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Runtime {

struct UxProperty__Fuse_Elements_Element;

struct UxProperty__Fuse_Elements_Element__uType : ::app::Uno::UX::Property__Fuse_Elements_Element__uType
{
};

UxProperty__Fuse_Elements_Element__uType* UxProperty__Fuse_Elements_Element__typeof();

void UxProperty__Fuse_Elements_Element___ObjInit_1(UxProperty__Fuse_Elements_Element* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
UxProperty__Fuse_Elements_Element* UxProperty__Fuse_Elements_Element__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover);
void UxProperty__Fuse_Elements_Element__OnAddListener(UxProperty__Fuse_Elements_Element* __this, ::uDelegate* listener);
::app::Fuse::Elements::Element* UxProperty__Fuse_Elements_Element__OnGet(UxProperty__Fuse_Elements_Element* __this);
void UxProperty__Fuse_Elements_Element__OnRemoveListener(UxProperty__Fuse_Elements_Element* __this, ::uDelegate* listener);
void UxProperty__Fuse_Elements_Element__OnSet(UxProperty__Fuse_Elements_Element* __this, ::app::Fuse::Elements::Element* value, ::uObject* origin);

struct UxProperty__Fuse_Elements_Element : ::app::Uno::UX::Property__Fuse_Elements_Element
{
    ::uStrong< ::uDelegate*> _setter;
    ::uStrong< ::uDelegate*> _getter;
    ::uStrong< ::uDelegate*> _adder;
    ::uStrong< ::uDelegate*> _remover;

    void _ObjInit_1(::uDelegate* setter, ::uDelegate* getter, ::uDelegate* adder, ::uDelegate* remover) { UxProperty__Fuse_Elements_Element___ObjInit_1(this, setter, getter, adder, remover); }
};

}}}}


#endif
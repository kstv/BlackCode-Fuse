// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_DATA_BINDING__INT2_H__
#define __APP_FUSE_REACTIVE_DATA_BINDING__INT2_H__

#include <app/Fuse.Reactive.Binding.h>
#include <app/Fuse.Reactive.IObserver.h>
#include <app/Fuse.Scripting.INameListener.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct Property__int2; } } }
namespace app { namespace Uno { namespace UX { struct ValueChangedArgs__int2; } } }
namespace app { namespace Uno { struct Int2; } }

namespace app {
namespace Fuse {
namespace Reactive {

struct DataBinding__int2;

struct DataBinding__int2__uType : ::app::Fuse::Reactive::Binding__uType
{
    ::app::Fuse::Reactive::IObserver __interface_0;
    ::app::Fuse::Scripting::INameListener __interface_1;
};

DataBinding__int2__uType* DataBinding__int2__typeof();

void DataBinding__int2___ObjInit_2(DataBinding__int2* __this, ::app::Uno::UX::Property__int2* target, ::uString* key);
bool DataBinding__int2__Acceptor(DataBinding__int2* __this, ::uObject* obj);
void DataBinding__int2__Fuse_Reactive_IObserver_OnAdd(DataBinding__int2* __this, ::uObject* addedValue);
void DataBinding__int2__Fuse_Reactive_IObserver_OnFailed(DataBinding__int2* __this, ::uString* message);
void DataBinding__int2__Fuse_Reactive_IObserver_OnNewAll(DataBinding__int2* __this, int length);
void DataBinding__int2__Fuse_Reactive_IObserver_OnNewAt(DataBinding__int2* __this, int index, ::uObject* value);
void DataBinding__int2__Fuse_Reactive_IObserver_OnRemove(DataBinding__int2* __this, ::uObject* value, int index);
void DataBinding__int2__Fuse_Reactive_IObserver_OnSet(DataBinding__int2* __this, ::uObject* newValue);
void DataBinding__int2__Fuse_Scripting_INameListener_OnNameChanged(DataBinding__int2* __this, ::uObject* obj, ::uString* name);
::app::Uno::UX::Property__int2* DataBinding__int2__get_Target(DataBinding__int2* __this);
DataBinding__int2* DataBinding__int2__New_1(::uStatic* __this, ::app::Uno::UX::Property__int2* target, ::uString* key);
void DataBinding__int2__NewValue(DataBinding__int2* __this, ::uObject* value);
void DataBinding__int2__OnRooted(DataBinding__int2* __this, ::app::Fuse::Node* n);
void DataBinding__int2__OnUnrooted(DataBinding__int2* __this, ::app::Fuse::Node* n);
void DataBinding__int2__OnValueChanged(DataBinding__int2* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__int2* args);
void DataBinding__int2__PushValue(DataBinding__int2* __this, ::uObject* newValue);
void DataBinding__int2__set_Target(DataBinding__int2* __this, ::app::Uno::UX::Property__int2* value);
void DataBinding__int2__SetValue(DataBinding__int2* __this, ::app::Uno::Int2 value);

struct DataBinding__int2 : ::app::Fuse::Reactive::Binding
{
    ::uStrong< ::uObject*> _subscription;
    ::uStrong< ::uObject*> _currentValue;
    ::uStrong< ::app::Uno::UX::Property__int2*> _Target;

    void _ObjInit_2(::app::Uno::UX::Property__int2* target, ::uString* key) { DataBinding__int2___ObjInit_2(this, target, key); }
    bool Acceptor(::uObject* obj) { return DataBinding__int2__Acceptor(this, obj); }
    ::app::Uno::UX::Property__int2* Target() { return DataBinding__int2__get_Target(this); }
    void OnValueChanged(::uObject* sender, ::app::Uno::UX::ValueChangedArgs__int2* args) { DataBinding__int2__OnValueChanged(this, sender, args); }
    void PushValue(::uObject* newValue) { DataBinding__int2__PushValue(this, newValue); }
    void Target(::app::Uno::UX::Property__int2* value) { DataBinding__int2__set_Target(this, value); }
    void SetValue(::app::Uno::Int2 value);
};

}}}

#include <app/Uno.Int2.h>

namespace app {
namespace Fuse {
namespace Reactive {

inline void DataBinding__int2::SetValue(::app::Uno::Int2 value) { DataBinding__int2__SetValue(this, value); }

}}}


#endif
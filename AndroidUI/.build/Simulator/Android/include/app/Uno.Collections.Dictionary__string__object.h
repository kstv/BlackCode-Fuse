// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__STRING__OBJECT_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__STRING__OBJECT_H__

#include <app/Uno.Collections.Dictionary2_Bucket__string__object.h>
#include <app/Uno.Collections.IDictionary__string__object.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_string_object_.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__string__object; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection__string__object; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection__string__object; } } }
namespace app { namespace Uno { namespace Collections { struct KeyValuePair__string__object; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__string__object;

struct Dictionary__string__object__uType : ::uClassType
{
    ::app::Uno::Collections::IDictionary__string__object __interface_0;
    ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_string_object_ __interface_1;
};

Dictionary__string__object__uType* Dictionary__string__object__typeof();

::uObject* Dictionary__string__object__GetEnumerator_boxed(Dictionary__string__object* __this);
void Dictionary__string__object___ObjInit(Dictionary__string__object* __this);
void Dictionary__string__object___ObjInit_1(Dictionary__string__object* __this, ::uObject* dictionary);
void Dictionary__string__object__Add(Dictionary__string__object* __this, ::uString* key, ::uObject* value);
void Dictionary__string__object__Clear(Dictionary__string__object* __this);
bool Dictionary__string__object__ContainsKey(Dictionary__string__object* __this, ::uString* key);
int Dictionary__string__object__get_Count(Dictionary__string__object* __this);
::uObject* Dictionary__string__object__get_Item(Dictionary__string__object* __this, ::uString* key);
::app::Uno::Collections::Dictionary2_KeyCollection__string__object* Dictionary__string__object__get_Keys(Dictionary__string__object* __this);
::app::Uno::Collections::Dictionary2_ValueCollection__string__object* Dictionary__string__object__get_Values(Dictionary__string__object* __this);
::app::Uno::Collections::Dictionary2_Enumerator__string__object Dictionary__string__object__GetEnumerator(Dictionary__string__object* __this);
Dictionary__string__object* Dictionary__string__object__New_1(::uStatic* __this);
Dictionary__string__object* Dictionary__string__object__New_2(::uStatic* __this, ::uObject* dictionary);
void Dictionary__string__object__Rehash(Dictionary__string__object* __this);
bool Dictionary__string__object__Remove(Dictionary__string__object* __this, ::uString* key);
void Dictionary__string__object__set_Item(Dictionary__string__object* __this, ::uString* key, ::uObject* value);
bool Dictionary__string__object__TryGetValue(Dictionary__string__object* __this, ::uString* key, ::uObject** value);
void Dictionary__string__object__Uno_Collections_ICollection_Add(Dictionary__string__object* __this, ::app::Uno::Collections::KeyValuePair__string__object item);
bool Dictionary__string__object__Uno_Collections_ICollection_Contains(Dictionary__string__object* __this, ::app::Uno::Collections::KeyValuePair__string__object item);
bool Dictionary__string__object__Uno_Collections_ICollection_Remove(Dictionary__string__object* __this, ::app::Uno::Collections::KeyValuePair__string__object item);

struct Dictionary__string__object : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    ::uObject* GetEnumerator_boxed() { return Dictionary__string__object__GetEnumerator_boxed(this); }
    void _ObjInit() { Dictionary__string__object___ObjInit(this); }
    void _ObjInit_1(::uObject* dictionary) { Dictionary__string__object___ObjInit_1(this, dictionary); }
    void Add(::uString* key, ::uObject* value) { Dictionary__string__object__Add(this, key, value); }
    void Clear() { Dictionary__string__object__Clear(this); }
    bool ContainsKey(::uString* key) { return Dictionary__string__object__ContainsKey(this, key); }
    int Count() { return Dictionary__string__object__get_Count(this); }
    ::uObject* Item(::uString* key) { return Dictionary__string__object__get_Item(this, key); }
    ::app::Uno::Collections::Dictionary2_KeyCollection__string__object* Keys() { return Dictionary__string__object__get_Keys(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection__string__object* Values() { return Dictionary__string__object__get_Values(this); }
    ::app::Uno::Collections::Dictionary2_Enumerator__string__object GetEnumerator();
    void Rehash() { Dictionary__string__object__Rehash(this); }
    bool Remove(::uString* key) { return Dictionary__string__object__Remove(this, key); }
    void Item(::uString* key, ::uObject* value) { Dictionary__string__object__set_Item(this, key, value); }
    bool TryGetValue(::uString* key, ::uObject** value) { return Dictionary__string__object__TryGetValue(this, key, value); }
};

}}}

#include <app/Uno.Collections.Dictionary2_Enumerator__string__object.h>
#include <app/Uno.Collections.KeyValuePair__string__object.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_Enumerator__string__object Dictionary__string__object::GetEnumerator() { return Dictionary__string__object__GetEnumerator(this); }

}}}


#endif

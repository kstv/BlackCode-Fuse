// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CHANGE__FUSE_DRAWING_STATIC_BRUSH_H__
#define __APP_FUSE_ANIMATIONS_CHANGE__FUSE_DRAWING_STATIC_BRUSH_H__

#include <app/Fuse.Animations.TrackAnimator.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct AnimatorState; } } }
namespace app { namespace Fuse { namespace Animations { struct Converter__Fuse_Drawing_StaticBrush; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Fuse { namespace Drawing { struct StaticBrush; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Drawing_StaticBrush; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Change__Fuse_Drawing_StaticBrush;

struct Change__Fuse_Drawing_StaticBrush__uType : ::app::Fuse::Animations::TrackAnimator__uType
{
};

Change__Fuse_Drawing_StaticBrush__uType* Change__Fuse_Drawing_StaticBrush__typeof();

void Change__Fuse_Drawing_StaticBrush___ObjInit_2(Change__Fuse_Drawing_StaticBrush* __this, ::app::Uno::UX::Property__Fuse_Drawing_StaticBrush* target);
::app::Fuse::Animations::AnimatorState* Change__Fuse_Drawing_StaticBrush__CreateState(Change__Fuse_Drawing_StaticBrush* __this, ::app::Fuse::Animations::CreateStateParams* p);
float Change__Fuse_Drawing_StaticBrush__get_DegreesX(Change__Fuse_Drawing_StaticBrush* __this);
::app::Uno::Float2 Change__Fuse_Drawing_StaticBrush__get_DegreesXY(Change__Fuse_Drawing_StaticBrush* __this);
float Change__Fuse_Drawing_StaticBrush__get_DegreesY(Change__Fuse_Drawing_StaticBrush* __this);
float Change__Fuse_Drawing_StaticBrush__get_DegreesZ(Change__Fuse_Drawing_StaticBrush* __this);
bool Change__Fuse_Drawing_StaticBrush__get_IsContinuous(Change__Fuse_Drawing_StaticBrush* __this);
::app::Uno::UX::Property__Fuse_Drawing_StaticBrush* Change__Fuse_Drawing_StaticBrush__get_Target(Change__Fuse_Drawing_StaticBrush* __this);
::app::Fuse::Drawing::StaticBrush* Change__Fuse_Drawing_StaticBrush__get_Value(Change__Fuse_Drawing_StaticBrush* __this);
float Change__Fuse_Drawing_StaticBrush__get_X(Change__Fuse_Drawing_StaticBrush* __this);
::app::Uno::Float2 Change__Fuse_Drawing_StaticBrush__get_XY(Change__Fuse_Drawing_StaticBrush* __this);
float Change__Fuse_Drawing_StaticBrush__get_Y(Change__Fuse_Drawing_StaticBrush* __this);
float Change__Fuse_Drawing_StaticBrush__get_Z(Change__Fuse_Drawing_StaticBrush* __this);
Change__Fuse_Drawing_StaticBrush* Change__Fuse_Drawing_StaticBrush__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Drawing_StaticBrush* target);
void Change__Fuse_Drawing_StaticBrush__set_DegreesX(Change__Fuse_Drawing_StaticBrush* __this, float value);
void Change__Fuse_Drawing_StaticBrush__set_DegreesXY(Change__Fuse_Drawing_StaticBrush* __this, ::app::Uno::Float2 value);
void Change__Fuse_Drawing_StaticBrush__set_DegreesY(Change__Fuse_Drawing_StaticBrush* __this, float value);
void Change__Fuse_Drawing_StaticBrush__set_DegreesZ(Change__Fuse_Drawing_StaticBrush* __this, float value);
void Change__Fuse_Drawing_StaticBrush__set_Target(Change__Fuse_Drawing_StaticBrush* __this, ::app::Uno::UX::Property__Fuse_Drawing_StaticBrush* value);
void Change__Fuse_Drawing_StaticBrush__set_Value(Change__Fuse_Drawing_StaticBrush* __this, ::app::Fuse::Drawing::StaticBrush* value);
void Change__Fuse_Drawing_StaticBrush__set_X(Change__Fuse_Drawing_StaticBrush* __this, float value);
void Change__Fuse_Drawing_StaticBrush__set_XY(Change__Fuse_Drawing_StaticBrush* __this, ::app::Uno::Float2 value);
void Change__Fuse_Drawing_StaticBrush__set_Y(Change__Fuse_Drawing_StaticBrush* __this, float value);
void Change__Fuse_Drawing_StaticBrush__set_Z(Change__Fuse_Drawing_StaticBrush* __this, float value);

struct Change__Fuse_Drawing_StaticBrush : ::app::Fuse::Animations::TrackAnimator
{
    ::uStrong< ::app::Fuse::Animations::Converter__Fuse_Drawing_StaticBrush*> ContinuousConverter;
    ::uStrong< ::app::Uno::UX::Property__Fuse_Drawing_StaticBrush*> _Target;

    void _ObjInit_2(::app::Uno::UX::Property__Fuse_Drawing_StaticBrush* target) { Change__Fuse_Drawing_StaticBrush___ObjInit_2(this, target); }
    float DegreesX() { return Change__Fuse_Drawing_StaticBrush__get_DegreesX(this); }
    ::app::Uno::Float2 DegreesXY();
    float DegreesY() { return Change__Fuse_Drawing_StaticBrush__get_DegreesY(this); }
    float DegreesZ() { return Change__Fuse_Drawing_StaticBrush__get_DegreesZ(this); }
    bool IsContinuous() { return Change__Fuse_Drawing_StaticBrush__get_IsContinuous(this); }
    ::app::Uno::UX::Property__Fuse_Drawing_StaticBrush* Target() { return Change__Fuse_Drawing_StaticBrush__get_Target(this); }
    ::app::Fuse::Drawing::StaticBrush* Value() { return Change__Fuse_Drawing_StaticBrush__get_Value(this); }
    float X() { return Change__Fuse_Drawing_StaticBrush__get_X(this); }
    ::app::Uno::Float2 XY();
    float Y() { return Change__Fuse_Drawing_StaticBrush__get_Y(this); }
    float Z() { return Change__Fuse_Drawing_StaticBrush__get_Z(this); }
    void DegreesX(float value) { Change__Fuse_Drawing_StaticBrush__set_DegreesX(this, value); }
    void DegreesXY(::app::Uno::Float2 value);
    void DegreesY(float value) { Change__Fuse_Drawing_StaticBrush__set_DegreesY(this, value); }
    void DegreesZ(float value) { Change__Fuse_Drawing_StaticBrush__set_DegreesZ(this, value); }
    void Target(::app::Uno::UX::Property__Fuse_Drawing_StaticBrush* value) { Change__Fuse_Drawing_StaticBrush__set_Target(this, value); }
    void Value(::app::Fuse::Drawing::StaticBrush* value) { Change__Fuse_Drawing_StaticBrush__set_Value(this, value); }
    void X(float value) { Change__Fuse_Drawing_StaticBrush__set_X(this, value); }
    void XY(::app::Uno::Float2 value);
    void Y(float value) { Change__Fuse_Drawing_StaticBrush__set_Y(this, value); }
    void Z(float value) { Change__Fuse_Drawing_StaticBrush__set_Z(this, value); }
};

}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float2 Change__Fuse_Drawing_StaticBrush::DegreesXY() { return Change__Fuse_Drawing_StaticBrush__get_DegreesXY(this); }
inline ::app::Uno::Float2 Change__Fuse_Drawing_StaticBrush::XY() { return Change__Fuse_Drawing_StaticBrush__get_XY(this); }
inline void Change__Fuse_Drawing_StaticBrush::DegreesXY(::app::Uno::Float2 value) { Change__Fuse_Drawing_StaticBrush__set_DegreesXY(this, value); }
inline void Change__Fuse_Drawing_StaticBrush::XY(::app::Uno::Float2 value) { Change__Fuse_Drawing_StaticBrush__set_XY(this, value); }

}}}


#endif
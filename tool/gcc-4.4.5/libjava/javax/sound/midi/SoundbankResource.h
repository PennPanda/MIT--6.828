
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_sound_midi_SoundbankResource__
#define __javax_sound_midi_SoundbankResource__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace javax
  {
    namespace sound
    {
      namespace midi
      {
          class Soundbank;
          class SoundbankResource;
      }
    }
  }
}

class javax::sound::midi::SoundbankResource : public ::java::lang::Object
{

public: // actually protected
  SoundbankResource(::javax::sound::midi::Soundbank *, ::java::lang::String *, ::java::lang::Class *);
public:
  virtual ::javax::sound::midi::Soundbank * getSoundbank();
  virtual ::java::lang::String * getName();
  virtual ::java::lang::Class * getDataClass();
  virtual ::java::lang::Object * getData() = 0;
private:
  ::javax::sound::midi::Soundbank * __attribute__((aligned(__alignof__( ::java::lang::Object)))) soundbank;
  ::java::lang::String * name;
  ::java::lang::Class * dataClass;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_sound_midi_SoundbankResource__

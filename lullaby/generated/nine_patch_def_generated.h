// Autogenerated code.  Do not edit.
#ifndef _LULLABY_LULLABY_GENERATED_NINE_PATCH_DEF_GENERATED_H_
#define _LULLABY_LULLABY_GENERATED_NINE_PATCH_DEF_GENERATED_H_

#include <type_traits>
#include <memory>
#include "flatbuffers/nine_patch_def_generated.h"
#include "lullaby/util/color.h"
#include "lullaby/util/common_types.h"
#include "lullaby/util/math.h"
#include "lullaby/util/optional.h"
#include "lullaby/util/typeid.h"
#include "common_generated.h"

namespace lull {
class NinePatchDefT;
class NinePatchDefT {
 public:
  using FlatBufferType = NinePatchDef;

  NinePatchDefT() {}

  mathfu::vec2 size = {0.f, 0.f};
  float left_slice = 0.0f;
  float right_slice = 0.0f;
  float bottom_slice = 0.0f;
  float top_slice = 0.0f;
  mathfu::vec2 original_size = {0.f, 0.f};
  lull::Optional<mathfu::vec2i> subdivisions;

  template <typename Archive>
  void SerializeFlatbuffer(Archive archive);
};

template <typename Archive>
void NinePatchDefT::SerializeFlatbuffer(Archive archive) {
  archive.NativeStruct(&size, 4);
  archive.Scalar(&left_slice, 6, 0.0f);
  archive.Scalar(&right_slice, 8, 0.0f);
  archive.Scalar(&bottom_slice, 10, 0.0f);
  archive.Scalar(&top_slice, 12, 0.0f);
  archive.NativeStruct(&original_size, 14);
  archive.NativeStruct(&subdivisions, 16);
}

}  // namespace lull

LULLABY_SETUP_TYPEID(lull::NinePatchDefT);

#endif  // _LULLABY_LULLABY_GENERATED_NINE_PATCH_DEF_GENERATED_H_


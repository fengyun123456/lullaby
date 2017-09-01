// Autogenerated code.  Do not edit.
#ifndef _LULLABY_LULLABY_GENERATED_CONFIG_DEF_GENERATED_H_
#define _LULLABY_LULLABY_GENERATED_CONFIG_DEF_GENERATED_H_

#include <type_traits>
#include <memory>
#include "flatbuffers/config_def_generated.h"
#include "lullaby/util/color.h"
#include "lullaby/util/common_types.h"
#include "lullaby/util/math.h"
#include "lullaby/util/optional.h"
#include "lullaby/util/typeid.h"
#include "common_generated.h"
#include "variant_def_generated.h"

namespace lull {
class ConfigDefT;
class ConfigDefT {
 public:
  using FlatBufferType = ConfigDef;

  ConfigDefT() {}

  std::vector<lull::KeyVariantPairDefT> values;

  template <typename Archive>
  void SerializeFlatbuffer(Archive archive);
};

template <typename Archive>
void ConfigDefT::SerializeFlatbuffer(Archive archive) {
  archive.VectorOfTables(&values, 4);
}

}  // namespace lull

LULLABY_SETUP_TYPEID(lull::ConfigDefT);

#endif  // _LULLABY_LULLABY_GENERATED_CONFIG_DEF_GENERATED_H_


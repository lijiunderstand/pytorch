#pragma once

#include <ATen/core/Tensor.h>
#include <c10/util/Array.h>
#include "caffe2/core/context_base.h"

namespace caffe2 {
namespace ops {

struct Cast final {
  static constexpr const char* name = "cast";

  using Signature = void(
      const at::Tensor& input1,
      const at::Tensor& output,
      int64_t to_dtype);

  static constexpr size_t num_output_parameters() {return 1;}

  static constexpr c10::guts::array<const char*, 3> parameter_names() {
    return {"input", "output", "to"};
  }
};

} // namespace ops
} // namespace caffe2

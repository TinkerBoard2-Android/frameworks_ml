// clang-format off
// Generated file (from: concat_float16_2.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace concat_float16_2 {
// Generated concat_float16_2 test
#include "generated/examples/concat_float16_2.example.cpp"
// Generated model constructor
#include "generated/models/concat_float16_2.model.cpp"
} // namespace concat_float16_2

TEST_F(GeneratedTests, concat_float16_2) {
    execute(concat_float16_2::CreateModel,
            concat_float16_2::is_ignored,
            concat_float16_2::examples);
}

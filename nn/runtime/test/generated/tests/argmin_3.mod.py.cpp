// clang-format off
// Generated file (from: argmin_3.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace argmin_3 {
// Generated argmin_3 test
#include "generated/examples/argmin_3.example.cpp"
// Generated model constructor
#include "generated/models/argmin_3.model.cpp"
} // namespace argmin_3

TEST_F(GeneratedTests, argmin_3) {
    execute(argmin_3::CreateModel,
            argmin_3::is_ignored,
            argmin_3::get_examples());
}

TEST_F(GeneratedTests, argmin_3_relaxed) {
    execute(argmin_3::CreateModel_relaxed,
            argmin_3::is_ignored_relaxed,
            argmin_3::get_examples_relaxed());
}

TEST_F(GeneratedTests, argmin_3_float16) {
    execute(argmin_3::CreateModel_float16,
            argmin_3::is_ignored_float16,
            argmin_3::get_examples_float16());
}

TEST_F(GeneratedTests, argmin_3_int32) {
    execute(argmin_3::CreateModel_int32,
            argmin_3::is_ignored_int32,
            argmin_3::get_examples_int32());
}

TEST_F(GeneratedTests, argmin_3_quant8) {
    execute(argmin_3::CreateModel_quant8,
            argmin_3::is_ignored_quant8,
            argmin_3::get_examples_quant8());
}

#if 0
TEST_F(DynamicOutputShapeTests, argmin_3_dynamic_output_shape) {
    execute(argmin_3::CreateModel_dynamic_output_shape,
            argmin_3::is_ignored_dynamic_output_shape,
            argmin_3::get_examples_dynamic_output_shape());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, argmin_3_dynamic_output_shape_relaxed) {
    execute(argmin_3::CreateModel_dynamic_output_shape_relaxed,
            argmin_3::is_ignored_dynamic_output_shape_relaxed,
            argmin_3::get_examples_dynamic_output_shape_relaxed());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, argmin_3_dynamic_output_shape_float16) {
    execute(argmin_3::CreateModel_dynamic_output_shape_float16,
            argmin_3::is_ignored_dynamic_output_shape_float16,
            argmin_3::get_examples_dynamic_output_shape_float16());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, argmin_3_dynamic_output_shape_int32) {
    execute(argmin_3::CreateModel_dynamic_output_shape_int32,
            argmin_3::is_ignored_dynamic_output_shape_int32,
            argmin_3::get_examples_dynamic_output_shape_int32());
}

#endif
#if 0
TEST_F(DynamicOutputShapeTests, argmin_3_dynamic_output_shape_quant8) {
    execute(argmin_3::CreateModel_dynamic_output_shape_quant8,
            argmin_3::is_ignored_dynamic_output_shape_quant8,
            argmin_3::get_examples_dynamic_output_shape_quant8());
}

#endif

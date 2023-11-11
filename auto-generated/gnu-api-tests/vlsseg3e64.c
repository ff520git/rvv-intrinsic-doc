/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vfloat64m1x3_t test_vlsseg3e64_v_f64m1x3(const double *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg3e64_v_f64m1x3(rs1, rs2, vl);
}

vfloat64m2x3_t test_vlsseg3e64_v_f64m2x3(const double *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg3e64_v_f64m2x3(rs1, rs2, vl);
}

vint64m1x3_t test_vlsseg3e64_v_i64m1x3(const int64_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg3e64_v_i64m1x3(rs1, rs2, vl);
}

vint64m2x3_t test_vlsseg3e64_v_i64m2x3(const int64_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg3e64_v_i64m2x3(rs1, rs2, vl);
}

vuint64m1x3_t test_vlsseg3e64_v_u64m1x3(const uint64_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg3e64_v_u64m1x3(rs1, rs2, vl);
}

vuint64m2x3_t test_vlsseg3e64_v_u64m2x3(const uint64_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg3e64_v_u64m2x3(rs1, rs2, vl);
}

vfloat64m1x3_t test_vlsseg3e64_v_f64m1x3_m(vbool64_t vm, const double *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg3e64_v_f64m1x3_m(vm, rs1, rs2, vl);
}

vfloat64m2x3_t test_vlsseg3e64_v_f64m2x3_m(vbool32_t vm, const double *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg3e64_v_f64m2x3_m(vm, rs1, rs2, vl);
}

vint64m1x3_t test_vlsseg3e64_v_i64m1x3_m(vbool64_t vm, const int64_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg3e64_v_i64m1x3_m(vm, rs1, rs2, vl);
}

vint64m2x3_t test_vlsseg3e64_v_i64m2x3_m(vbool32_t vm, const int64_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg3e64_v_i64m2x3_m(vm, rs1, rs2, vl);
}

vuint64m1x3_t test_vlsseg3e64_v_u64m1x3_m(vbool64_t vm, const uint64_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg3e64_v_u64m1x3_m(vm, rs1, rs2, vl);
}

vuint64m2x3_t test_vlsseg3e64_v_u64m2x3_m(vbool32_t vm, const uint64_t *rs1, ptrdiff_t rs2, size_t vl) {
  return __riscv_vlsseg3e64_v_u64m2x3_m(vm, rs1, rs2, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vlsseg3e64\.[ivxfswum.]+\s+} 12 } } */

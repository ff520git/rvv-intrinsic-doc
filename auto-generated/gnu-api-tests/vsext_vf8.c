/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vint64m1_t test_vsext_vf8_i64m1(vint8mf8_t vs2, size_t vl) {
  return __riscv_vsext_vf8_i64m1(vs2, vl);
}

vint64m2_t test_vsext_vf8_i64m2(vint8mf4_t vs2, size_t vl) {
  return __riscv_vsext_vf8_i64m2(vs2, vl);
}

vint64m4_t test_vsext_vf8_i64m4(vint8mf2_t vs2, size_t vl) {
  return __riscv_vsext_vf8_i64m4(vs2, vl);
}

vint64m8_t test_vsext_vf8_i64m8(vint8m1_t vs2, size_t vl) {
  return __riscv_vsext_vf8_i64m8(vs2, vl);
}

vint64m1_t test_vsext_vf8_i64m1_m(vbool64_t vm, vint8mf8_t vs2, size_t vl) {
  return __riscv_vsext_vf8_i64m1_m(vm, vs2, vl);
}

vint64m2_t test_vsext_vf8_i64m2_m(vbool32_t vm, vint8mf4_t vs2, size_t vl) {
  return __riscv_vsext_vf8_i64m2_m(vm, vs2, vl);
}

vint64m4_t test_vsext_vf8_i64m4_m(vbool16_t vm, vint8mf2_t vs2, size_t vl) {
  return __riscv_vsext_vf8_i64m4_m(vm, vs2, vl);
}

vint64m8_t test_vsext_vf8_i64m8_m(vbool8_t vm, vint8m1_t vs2, size_t vl) {
  return __riscv_vsext_vf8_i64m8_m(vm, vs2, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vsext\.vf8[ivxfswum.]*\s+} 8 } } */

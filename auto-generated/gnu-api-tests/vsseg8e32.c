/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

void test_vsseg8e32_v_f32mf2x8(float *rs1, vfloat32mf2x8_t vs3, size_t vl) {
  return __riscv_vsseg8e32_v_f32mf2x8(rs1, vs3, vl);
}

void test_vsseg8e32_v_f32m1x8(float *rs1, vfloat32m1x8_t vs3, size_t vl) {
  return __riscv_vsseg8e32_v_f32m1x8(rs1, vs3, vl);
}

void test_vsseg8e32_v_i32mf2x8(int32_t *rs1, vint32mf2x8_t vs3, size_t vl) {
  return __riscv_vsseg8e32_v_i32mf2x8(rs1, vs3, vl);
}

void test_vsseg8e32_v_i32m1x8(int32_t *rs1, vint32m1x8_t vs3, size_t vl) {
  return __riscv_vsseg8e32_v_i32m1x8(rs1, vs3, vl);
}

void test_vsseg8e32_v_u32mf2x8(uint32_t *rs1, vuint32mf2x8_t vs3, size_t vl) {
  return __riscv_vsseg8e32_v_u32mf2x8(rs1, vs3, vl);
}

void test_vsseg8e32_v_u32m1x8(uint32_t *rs1, vuint32m1x8_t vs3, size_t vl) {
  return __riscv_vsseg8e32_v_u32m1x8(rs1, vs3, vl);
}

void test_vsseg8e32_v_f32mf2x8_m(vbool64_t vm, float *rs1, vfloat32mf2x8_t vs3, size_t vl) {
  return __riscv_vsseg8e32_v_f32mf2x8_m(vm, rs1, vs3, vl);
}

void test_vsseg8e32_v_f32m1x8_m(vbool32_t vm, float *rs1, vfloat32m1x8_t vs3, size_t vl) {
  return __riscv_vsseg8e32_v_f32m1x8_m(vm, rs1, vs3, vl);
}

void test_vsseg8e32_v_i32mf2x8_m(vbool64_t vm, int32_t *rs1, vint32mf2x8_t vs3, size_t vl) {
  return __riscv_vsseg8e32_v_i32mf2x8_m(vm, rs1, vs3, vl);
}

void test_vsseg8e32_v_i32m1x8_m(vbool32_t vm, int32_t *rs1, vint32m1x8_t vs3, size_t vl) {
  return __riscv_vsseg8e32_v_i32m1x8_m(vm, rs1, vs3, vl);
}

void test_vsseg8e32_v_u32mf2x8_m(vbool64_t vm, uint32_t *rs1, vuint32mf2x8_t vs3, size_t vl) {
  return __riscv_vsseg8e32_v_u32mf2x8_m(vm, rs1, vs3, vl);
}

void test_vsseg8e32_v_u32m1x8_m(vbool32_t vm, uint32_t *rs1, vuint32m1x8_t vs3, size_t vl) {
  return __riscv_vsseg8e32_v_u32m1x8_m(vm, rs1, vs3, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vsseg8e32\.[ivxfswum.]+\s+} 12 } } */

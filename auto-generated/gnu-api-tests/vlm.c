/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vbool1_t test_vlm_v_b1(const uint8_t *rs1, size_t vl) {
  return __riscv_vlm_v_b1(rs1, vl);
}

vbool2_t test_vlm_v_b2(const uint8_t *rs1, size_t vl) {
  return __riscv_vlm_v_b2(rs1, vl);
}

vbool4_t test_vlm_v_b4(const uint8_t *rs1, size_t vl) {
  return __riscv_vlm_v_b4(rs1, vl);
}

vbool8_t test_vlm_v_b8(const uint8_t *rs1, size_t vl) {
  return __riscv_vlm_v_b8(rs1, vl);
}

vbool16_t test_vlm_v_b16(const uint8_t *rs1, size_t vl) {
  return __riscv_vlm_v_b16(rs1, vl);
}

vbool32_t test_vlm_v_b32(const uint8_t *rs1, size_t vl) {
  return __riscv_vlm_v_b32(rs1, vl);
}

vbool64_t test_vlm_v_b64(const uint8_t *rs1, size_t vl) {
  return __riscv_vlm_v_b64(rs1, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vlm\.[ivxfswum.]+\s+} 7 } } */

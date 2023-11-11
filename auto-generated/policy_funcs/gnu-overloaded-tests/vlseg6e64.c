/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

vfloat64m1x6_t test_vlseg6e64_v_f64m1x6_tu(vfloat64m1x6_t vd, const double *rs1, size_t vl) {
  return __riscv_vlseg6e64_tu(vd, rs1, vl);
}

vint64m1x6_t test_vlseg6e64_v_i64m1x6_tu(vint64m1x6_t vd, const int64_t *rs1, size_t vl) {
  return __riscv_vlseg6e64_tu(vd, rs1, vl);
}

vuint64m1x6_t test_vlseg6e64_v_u64m1x6_tu(vuint64m1x6_t vd, const uint64_t *rs1, size_t vl) {
  return __riscv_vlseg6e64_tu(vd, rs1, vl);
}

vfloat64m1x6_t test_vlseg6e64_v_f64m1x6_tum(vbool64_t vm, vfloat64m1x6_t vd, const double *rs1, size_t vl) {
  return __riscv_vlseg6e64_tum(vm, vd, rs1, vl);
}

vint64m1x6_t test_vlseg6e64_v_i64m1x6_tum(vbool64_t vm, vint64m1x6_t vd, const int64_t *rs1, size_t vl) {
  return __riscv_vlseg6e64_tum(vm, vd, rs1, vl);
}

vuint64m1x6_t test_vlseg6e64_v_u64m1x6_tum(vbool64_t vm, vuint64m1x6_t vd, const uint64_t *rs1, size_t vl) {
  return __riscv_vlseg6e64_tum(vm, vd, rs1, vl);
}

vfloat64m1x6_t test_vlseg6e64_v_f64m1x6_tumu(vbool64_t vm, vfloat64m1x6_t vd, const double *rs1, size_t vl) {
  return __riscv_vlseg6e64_tumu(vm, vd, rs1, vl);
}

vint64m1x6_t test_vlseg6e64_v_i64m1x6_tumu(vbool64_t vm, vint64m1x6_t vd, const int64_t *rs1, size_t vl) {
  return __riscv_vlseg6e64_tumu(vm, vd, rs1, vl);
}

vuint64m1x6_t test_vlseg6e64_v_u64m1x6_tumu(vbool64_t vm, vuint64m1x6_t vd, const uint64_t *rs1, size_t vl) {
  return __riscv_vlseg6e64_tumu(vm, vd, rs1, vl);
}

vfloat64m1x6_t test_vlseg6e64_v_f64m1x6_mu(vbool64_t vm, vfloat64m1x6_t vd, const double *rs1, size_t vl) {
  return __riscv_vlseg6e64_mu(vm, vd, rs1, vl);
}

vint64m1x6_t test_vlseg6e64_v_i64m1x6_mu(vbool64_t vm, vint64m1x6_t vd, const int64_t *rs1, size_t vl) {
  return __riscv_vlseg6e64_mu(vm, vd, rs1, vl);
}

vuint64m1x6_t test_vlseg6e64_v_u64m1x6_mu(vbool64_t vm, vuint64m1x6_t vd, const uint64_t *rs1, size_t vl) {
  return __riscv_vlseg6e64_mu(vm, vd, rs1, vl);
}
/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vlseg6e64\.[ivxfswum.]+\s+} 12 } } */

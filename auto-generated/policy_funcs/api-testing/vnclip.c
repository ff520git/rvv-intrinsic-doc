#include <riscv_vector.h>
#include <stdint.h>

vint8mf8_t test_vnclip_wv_i8mf8_tu(vint8mf8_t vd, vint16mf4_t vs2,
                                   vuint8mf8_t vs1, size_t vl) {
  return __riscv_vnclip_wv_i8mf8_tu(vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint8mf8_t test_vnclip_wx_i8mf8_tu(vint8mf8_t vd, vint16mf4_t vs2, size_t rs1,
                                   size_t vl) {
  return __riscv_vnclip_wx_i8mf8_tu(vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint8mf4_t test_vnclip_wv_i8mf4_tu(vint8mf4_t vd, vint16mf2_t vs2,
                                   vuint8mf4_t vs1, size_t vl) {
  return __riscv_vnclip_wv_i8mf4_tu(vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint8mf4_t test_vnclip_wx_i8mf4_tu(vint8mf4_t vd, vint16mf2_t vs2, size_t rs1,
                                   size_t vl) {
  return __riscv_vnclip_wx_i8mf4_tu(vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint8mf2_t test_vnclip_wv_i8mf2_tu(vint8mf2_t vd, vint16m1_t vs2,
                                   vuint8mf2_t vs1, size_t vl) {
  return __riscv_vnclip_wv_i8mf2_tu(vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint8mf2_t test_vnclip_wx_i8mf2_tu(vint8mf2_t vd, vint16m1_t vs2, size_t rs1,
                                   size_t vl) {
  return __riscv_vnclip_wx_i8mf2_tu(vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint8m1_t test_vnclip_wv_i8m1_tu(vint8m1_t vd, vint16m2_t vs2, vuint8m1_t vs1,
                                 size_t vl) {
  return __riscv_vnclip_wv_i8m1_tu(vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint8m1_t test_vnclip_wx_i8m1_tu(vint8m1_t vd, vint16m2_t vs2, size_t rs1,
                                 size_t vl) {
  return __riscv_vnclip_wx_i8m1_tu(vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint8m2_t test_vnclip_wv_i8m2_tu(vint8m2_t vd, vint16m4_t vs2, vuint8m2_t vs1,
                                 size_t vl) {
  return __riscv_vnclip_wv_i8m2_tu(vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint8m2_t test_vnclip_wx_i8m2_tu(vint8m2_t vd, vint16m4_t vs2, size_t rs1,
                                 size_t vl) {
  return __riscv_vnclip_wx_i8m2_tu(vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint8m4_t test_vnclip_wv_i8m4_tu(vint8m4_t vd, vint16m8_t vs2, vuint8m4_t vs1,
                                 size_t vl) {
  return __riscv_vnclip_wv_i8m4_tu(vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint8m4_t test_vnclip_wx_i8m4_tu(vint8m4_t vd, vint16m8_t vs2, size_t rs1,
                                 size_t vl) {
  return __riscv_vnclip_wx_i8m4_tu(vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint16mf4_t test_vnclip_wv_i16mf4_tu(vint16mf4_t vd, vint32mf2_t vs2,
                                     vuint16mf4_t vs1, size_t vl) {
  return __riscv_vnclip_wv_i16mf4_tu(vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint16mf4_t test_vnclip_wx_i16mf4_tu(vint16mf4_t vd, vint32mf2_t vs2,
                                     size_t rs1, size_t vl) {
  return __riscv_vnclip_wx_i16mf4_tu(vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint16mf2_t test_vnclip_wv_i16mf2_tu(vint16mf2_t vd, vint32m1_t vs2,
                                     vuint16mf2_t vs1, size_t vl) {
  return __riscv_vnclip_wv_i16mf2_tu(vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint16mf2_t test_vnclip_wx_i16mf2_tu(vint16mf2_t vd, vint32m1_t vs2, size_t rs1,
                                     size_t vl) {
  return __riscv_vnclip_wx_i16mf2_tu(vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint16m1_t test_vnclip_wv_i16m1_tu(vint16m1_t vd, vint32m2_t vs2,
                                   vuint16m1_t vs1, size_t vl) {
  return __riscv_vnclip_wv_i16m1_tu(vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint16m1_t test_vnclip_wx_i16m1_tu(vint16m1_t vd, vint32m2_t vs2, size_t rs1,
                                   size_t vl) {
  return __riscv_vnclip_wx_i16m1_tu(vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint16m2_t test_vnclip_wv_i16m2_tu(vint16m2_t vd, vint32m4_t vs2,
                                   vuint16m2_t vs1, size_t vl) {
  return __riscv_vnclip_wv_i16m2_tu(vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint16m2_t test_vnclip_wx_i16m2_tu(vint16m2_t vd, vint32m4_t vs2, size_t rs1,
                                   size_t vl) {
  return __riscv_vnclip_wx_i16m2_tu(vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint16m4_t test_vnclip_wv_i16m4_tu(vint16m4_t vd, vint32m8_t vs2,
                                   vuint16m4_t vs1, size_t vl) {
  return __riscv_vnclip_wv_i16m4_tu(vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint16m4_t test_vnclip_wx_i16m4_tu(vint16m4_t vd, vint32m8_t vs2, size_t rs1,
                                   size_t vl) {
  return __riscv_vnclip_wx_i16m4_tu(vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint32mf2_t test_vnclip_wv_i32mf2_tu(vint32mf2_t vd, vint64m1_t vs2,
                                     vuint32mf2_t vs1, size_t vl) {
  return __riscv_vnclip_wv_i32mf2_tu(vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint32mf2_t test_vnclip_wx_i32mf2_tu(vint32mf2_t vd, vint64m1_t vs2, size_t rs1,
                                     size_t vl) {
  return __riscv_vnclip_wx_i32mf2_tu(vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint32m1_t test_vnclip_wv_i32m1_tu(vint32m1_t vd, vint64m2_t vs2,
                                   vuint32m1_t vs1, size_t vl) {
  return __riscv_vnclip_wv_i32m1_tu(vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint32m1_t test_vnclip_wx_i32m1_tu(vint32m1_t vd, vint64m2_t vs2, size_t rs1,
                                   size_t vl) {
  return __riscv_vnclip_wx_i32m1_tu(vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint32m2_t test_vnclip_wv_i32m2_tu(vint32m2_t vd, vint64m4_t vs2,
                                   vuint32m2_t vs1, size_t vl) {
  return __riscv_vnclip_wv_i32m2_tu(vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint32m2_t test_vnclip_wx_i32m2_tu(vint32m2_t vd, vint64m4_t vs2, size_t rs1,
                                   size_t vl) {
  return __riscv_vnclip_wx_i32m2_tu(vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint32m4_t test_vnclip_wv_i32m4_tu(vint32m4_t vd, vint64m8_t vs2,
                                   vuint32m4_t vs1, size_t vl) {
  return __riscv_vnclip_wv_i32m4_tu(vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint32m4_t test_vnclip_wx_i32m4_tu(vint32m4_t vd, vint64m8_t vs2, size_t rs1,
                                   size_t vl) {
  return __riscv_vnclip_wx_i32m4_tu(vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint8mf8_t test_vnclip_wv_i8mf8_tum(vbool64_t vm, vint8mf8_t vd,
                                    vint16mf4_t vs2, vuint8mf8_t vs1,
                                    size_t vl) {
  return __riscv_vnclip_wv_i8mf8_tum(vm, vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint8mf8_t test_vnclip_wx_i8mf8_tum(vbool64_t vm, vint8mf8_t vd,
                                    vint16mf4_t vs2, size_t rs1, size_t vl) {
  return __riscv_vnclip_wx_i8mf8_tum(vm, vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint8mf4_t test_vnclip_wv_i8mf4_tum(vbool32_t vm, vint8mf4_t vd,
                                    vint16mf2_t vs2, vuint8mf4_t vs1,
                                    size_t vl) {
  return __riscv_vnclip_wv_i8mf4_tum(vm, vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint8mf4_t test_vnclip_wx_i8mf4_tum(vbool32_t vm, vint8mf4_t vd,
                                    vint16mf2_t vs2, size_t rs1, size_t vl) {
  return __riscv_vnclip_wx_i8mf4_tum(vm, vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint8mf2_t test_vnclip_wv_i8mf2_tum(vbool16_t vm, vint8mf2_t vd, vint16m1_t vs2,
                                    vuint8mf2_t vs1, size_t vl) {
  return __riscv_vnclip_wv_i8mf2_tum(vm, vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint8mf2_t test_vnclip_wx_i8mf2_tum(vbool16_t vm, vint8mf2_t vd, vint16m1_t vs2,
                                    size_t rs1, size_t vl) {
  return __riscv_vnclip_wx_i8mf2_tum(vm, vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint8m1_t test_vnclip_wv_i8m1_tum(vbool8_t vm, vint8m1_t vd, vint16m2_t vs2,
                                  vuint8m1_t vs1, size_t vl) {
  return __riscv_vnclip_wv_i8m1_tum(vm, vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint8m1_t test_vnclip_wx_i8m1_tum(vbool8_t vm, vint8m1_t vd, vint16m2_t vs2,
                                  size_t rs1, size_t vl) {
  return __riscv_vnclip_wx_i8m1_tum(vm, vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint8m2_t test_vnclip_wv_i8m2_tum(vbool4_t vm, vint8m2_t vd, vint16m4_t vs2,
                                  vuint8m2_t vs1, size_t vl) {
  return __riscv_vnclip_wv_i8m2_tum(vm, vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint8m2_t test_vnclip_wx_i8m2_tum(vbool4_t vm, vint8m2_t vd, vint16m4_t vs2,
                                  size_t rs1, size_t vl) {
  return __riscv_vnclip_wx_i8m2_tum(vm, vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint8m4_t test_vnclip_wv_i8m4_tum(vbool2_t vm, vint8m4_t vd, vint16m8_t vs2,
                                  vuint8m4_t vs1, size_t vl) {
  return __riscv_vnclip_wv_i8m4_tum(vm, vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint8m4_t test_vnclip_wx_i8m4_tum(vbool2_t vm, vint8m4_t vd, vint16m8_t vs2,
                                  size_t rs1, size_t vl) {
  return __riscv_vnclip_wx_i8m4_tum(vm, vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint16mf4_t test_vnclip_wv_i16mf4_tum(vbool64_t vm, vint16mf4_t vd,
                                      vint32mf2_t vs2, vuint16mf4_t vs1,
                                      size_t vl) {
  return __riscv_vnclip_wv_i16mf4_tum(vm, vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint16mf4_t test_vnclip_wx_i16mf4_tum(vbool64_t vm, vint16mf4_t vd,
                                      vint32mf2_t vs2, size_t rs1, size_t vl) {
  return __riscv_vnclip_wx_i16mf4_tum(vm, vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint16mf2_t test_vnclip_wv_i16mf2_tum(vbool32_t vm, vint16mf2_t vd,
                                      vint32m1_t vs2, vuint16mf2_t vs1,
                                      size_t vl) {
  return __riscv_vnclip_wv_i16mf2_tum(vm, vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint16mf2_t test_vnclip_wx_i16mf2_tum(vbool32_t vm, vint16mf2_t vd,
                                      vint32m1_t vs2, size_t rs1, size_t vl) {
  return __riscv_vnclip_wx_i16mf2_tum(vm, vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint16m1_t test_vnclip_wv_i16m1_tum(vbool16_t vm, vint16m1_t vd, vint32m2_t vs2,
                                    vuint16m1_t vs1, size_t vl) {
  return __riscv_vnclip_wv_i16m1_tum(vm, vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint16m1_t test_vnclip_wx_i16m1_tum(vbool16_t vm, vint16m1_t vd, vint32m2_t vs2,
                                    size_t rs1, size_t vl) {
  return __riscv_vnclip_wx_i16m1_tum(vm, vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint16m2_t test_vnclip_wv_i16m2_tum(vbool8_t vm, vint16m2_t vd, vint32m4_t vs2,
                                    vuint16m2_t vs1, size_t vl) {
  return __riscv_vnclip_wv_i16m2_tum(vm, vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint16m2_t test_vnclip_wx_i16m2_tum(vbool8_t vm, vint16m2_t vd, vint32m4_t vs2,
                                    size_t rs1, size_t vl) {
  return __riscv_vnclip_wx_i16m2_tum(vm, vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint16m4_t test_vnclip_wv_i16m4_tum(vbool4_t vm, vint16m4_t vd, vint32m8_t vs2,
                                    vuint16m4_t vs1, size_t vl) {
  return __riscv_vnclip_wv_i16m4_tum(vm, vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint16m4_t test_vnclip_wx_i16m4_tum(vbool4_t vm, vint16m4_t vd, vint32m8_t vs2,
                                    size_t rs1, size_t vl) {
  return __riscv_vnclip_wx_i16m4_tum(vm, vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint32mf2_t test_vnclip_wv_i32mf2_tum(vbool64_t vm, vint32mf2_t vd,
                                      vint64m1_t vs2, vuint32mf2_t vs1,
                                      size_t vl) {
  return __riscv_vnclip_wv_i32mf2_tum(vm, vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint32mf2_t test_vnclip_wx_i32mf2_tum(vbool64_t vm, vint32mf2_t vd,
                                      vint64m1_t vs2, size_t rs1, size_t vl) {
  return __riscv_vnclip_wx_i32mf2_tum(vm, vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint32m1_t test_vnclip_wv_i32m1_tum(vbool32_t vm, vint32m1_t vd, vint64m2_t vs2,
                                    vuint32m1_t vs1, size_t vl) {
  return __riscv_vnclip_wv_i32m1_tum(vm, vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint32m1_t test_vnclip_wx_i32m1_tum(vbool32_t vm, vint32m1_t vd, vint64m2_t vs2,
                                    size_t rs1, size_t vl) {
  return __riscv_vnclip_wx_i32m1_tum(vm, vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint32m2_t test_vnclip_wv_i32m2_tum(vbool16_t vm, vint32m2_t vd, vint64m4_t vs2,
                                    vuint32m2_t vs1, size_t vl) {
  return __riscv_vnclip_wv_i32m2_tum(vm, vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint32m2_t test_vnclip_wx_i32m2_tum(vbool16_t vm, vint32m2_t vd, vint64m4_t vs2,
                                    size_t rs1, size_t vl) {
  return __riscv_vnclip_wx_i32m2_tum(vm, vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint32m4_t test_vnclip_wv_i32m4_tum(vbool8_t vm, vint32m4_t vd, vint64m8_t vs2,
                                    vuint32m4_t vs1, size_t vl) {
  return __riscv_vnclip_wv_i32m4_tum(vm, vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint32m4_t test_vnclip_wx_i32m4_tum(vbool8_t vm, vint32m4_t vd, vint64m8_t vs2,
                                    size_t rs1, size_t vl) {
  return __riscv_vnclip_wx_i32m4_tum(vm, vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint8mf8_t test_vnclip_wv_i8mf8_tumu(vbool64_t vm, vint8mf8_t vd,
                                     vint16mf4_t vs2, vuint8mf8_t vs1,
                                     size_t vl) {
  return __riscv_vnclip_wv_i8mf8_tumu(vm, vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint8mf8_t test_vnclip_wx_i8mf8_tumu(vbool64_t vm, vint8mf8_t vd,
                                     vint16mf4_t vs2, size_t rs1, size_t vl) {
  return __riscv_vnclip_wx_i8mf8_tumu(vm, vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint8mf4_t test_vnclip_wv_i8mf4_tumu(vbool32_t vm, vint8mf4_t vd,
                                     vint16mf2_t vs2, vuint8mf4_t vs1,
                                     size_t vl) {
  return __riscv_vnclip_wv_i8mf4_tumu(vm, vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint8mf4_t test_vnclip_wx_i8mf4_tumu(vbool32_t vm, vint8mf4_t vd,
                                     vint16mf2_t vs2, size_t rs1, size_t vl) {
  return __riscv_vnclip_wx_i8mf4_tumu(vm, vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint8mf2_t test_vnclip_wv_i8mf2_tumu(vbool16_t vm, vint8mf2_t vd,
                                     vint16m1_t vs2, vuint8mf2_t vs1,
                                     size_t vl) {
  return __riscv_vnclip_wv_i8mf2_tumu(vm, vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint8mf2_t test_vnclip_wx_i8mf2_tumu(vbool16_t vm, vint8mf2_t vd,
                                     vint16m1_t vs2, size_t rs1, size_t vl) {
  return __riscv_vnclip_wx_i8mf2_tumu(vm, vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint8m1_t test_vnclip_wv_i8m1_tumu(vbool8_t vm, vint8m1_t vd, vint16m2_t vs2,
                                   vuint8m1_t vs1, size_t vl) {
  return __riscv_vnclip_wv_i8m1_tumu(vm, vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint8m1_t test_vnclip_wx_i8m1_tumu(vbool8_t vm, vint8m1_t vd, vint16m2_t vs2,
                                   size_t rs1, size_t vl) {
  return __riscv_vnclip_wx_i8m1_tumu(vm, vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint8m2_t test_vnclip_wv_i8m2_tumu(vbool4_t vm, vint8m2_t vd, vint16m4_t vs2,
                                   vuint8m2_t vs1, size_t vl) {
  return __riscv_vnclip_wv_i8m2_tumu(vm, vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint8m2_t test_vnclip_wx_i8m2_tumu(vbool4_t vm, vint8m2_t vd, vint16m4_t vs2,
                                   size_t rs1, size_t vl) {
  return __riscv_vnclip_wx_i8m2_tumu(vm, vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint8m4_t test_vnclip_wv_i8m4_tumu(vbool2_t vm, vint8m4_t vd, vint16m8_t vs2,
                                   vuint8m4_t vs1, size_t vl) {
  return __riscv_vnclip_wv_i8m4_tumu(vm, vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint8m4_t test_vnclip_wx_i8m4_tumu(vbool2_t vm, vint8m4_t vd, vint16m8_t vs2,
                                   size_t rs1, size_t vl) {
  return __riscv_vnclip_wx_i8m4_tumu(vm, vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint16mf4_t test_vnclip_wv_i16mf4_tumu(vbool64_t vm, vint16mf4_t vd,
                                       vint32mf2_t vs2, vuint16mf4_t vs1,
                                       size_t vl) {
  return __riscv_vnclip_wv_i16mf4_tumu(vm, vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint16mf4_t test_vnclip_wx_i16mf4_tumu(vbool64_t vm, vint16mf4_t vd,
                                       vint32mf2_t vs2, size_t rs1, size_t vl) {
  return __riscv_vnclip_wx_i16mf4_tumu(vm, vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint16mf2_t test_vnclip_wv_i16mf2_tumu(vbool32_t vm, vint16mf2_t vd,
                                       vint32m1_t vs2, vuint16mf2_t vs1,
                                       size_t vl) {
  return __riscv_vnclip_wv_i16mf2_tumu(vm, vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint16mf2_t test_vnclip_wx_i16mf2_tumu(vbool32_t vm, vint16mf2_t vd,
                                       vint32m1_t vs2, size_t rs1, size_t vl) {
  return __riscv_vnclip_wx_i16mf2_tumu(vm, vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint16m1_t test_vnclip_wv_i16m1_tumu(vbool16_t vm, vint16m1_t vd,
                                     vint32m2_t vs2, vuint16m1_t vs1,
                                     size_t vl) {
  return __riscv_vnclip_wv_i16m1_tumu(vm, vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint16m1_t test_vnclip_wx_i16m1_tumu(vbool16_t vm, vint16m1_t vd,
                                     vint32m2_t vs2, size_t rs1, size_t vl) {
  return __riscv_vnclip_wx_i16m1_tumu(vm, vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint16m2_t test_vnclip_wv_i16m2_tumu(vbool8_t vm, vint16m2_t vd, vint32m4_t vs2,
                                     vuint16m2_t vs1, size_t vl) {
  return __riscv_vnclip_wv_i16m2_tumu(vm, vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint16m2_t test_vnclip_wx_i16m2_tumu(vbool8_t vm, vint16m2_t vd, vint32m4_t vs2,
                                     size_t rs1, size_t vl) {
  return __riscv_vnclip_wx_i16m2_tumu(vm, vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint16m4_t test_vnclip_wv_i16m4_tumu(vbool4_t vm, vint16m4_t vd, vint32m8_t vs2,
                                     vuint16m4_t vs1, size_t vl) {
  return __riscv_vnclip_wv_i16m4_tumu(vm, vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint16m4_t test_vnclip_wx_i16m4_tumu(vbool4_t vm, vint16m4_t vd, vint32m8_t vs2,
                                     size_t rs1, size_t vl) {
  return __riscv_vnclip_wx_i16m4_tumu(vm, vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint32mf2_t test_vnclip_wv_i32mf2_tumu(vbool64_t vm, vint32mf2_t vd,
                                       vint64m1_t vs2, vuint32mf2_t vs1,
                                       size_t vl) {
  return __riscv_vnclip_wv_i32mf2_tumu(vm, vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint32mf2_t test_vnclip_wx_i32mf2_tumu(vbool64_t vm, vint32mf2_t vd,
                                       vint64m1_t vs2, size_t rs1, size_t vl) {
  return __riscv_vnclip_wx_i32mf2_tumu(vm, vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint32m1_t test_vnclip_wv_i32m1_tumu(vbool32_t vm, vint32m1_t vd,
                                     vint64m2_t vs2, vuint32m1_t vs1,
                                     size_t vl) {
  return __riscv_vnclip_wv_i32m1_tumu(vm, vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint32m1_t test_vnclip_wx_i32m1_tumu(vbool32_t vm, vint32m1_t vd,
                                     vint64m2_t vs2, size_t rs1, size_t vl) {
  return __riscv_vnclip_wx_i32m1_tumu(vm, vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint32m2_t test_vnclip_wv_i32m2_tumu(vbool16_t vm, vint32m2_t vd,
                                     vint64m4_t vs2, vuint32m2_t vs1,
                                     size_t vl) {
  return __riscv_vnclip_wv_i32m2_tumu(vm, vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint32m2_t test_vnclip_wx_i32m2_tumu(vbool16_t vm, vint32m2_t vd,
                                     vint64m4_t vs2, size_t rs1, size_t vl) {
  return __riscv_vnclip_wx_i32m2_tumu(vm, vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint32m4_t test_vnclip_wv_i32m4_tumu(vbool8_t vm, vint32m4_t vd, vint64m8_t vs2,
                                     vuint32m4_t vs1, size_t vl) {
  return __riscv_vnclip_wv_i32m4_tumu(vm, vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint32m4_t test_vnclip_wx_i32m4_tumu(vbool8_t vm, vint32m4_t vd, vint64m8_t vs2,
                                     size_t rs1, size_t vl) {
  return __riscv_vnclip_wx_i32m4_tumu(vm, vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint8mf8_t test_vnclip_wv_i8mf8_mu(vbool64_t vm, vint8mf8_t vd, vint16mf4_t vs2,
                                   vuint8mf8_t vs1, size_t vl) {
  return __riscv_vnclip_wv_i8mf8_mu(vm, vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint8mf8_t test_vnclip_wx_i8mf8_mu(vbool64_t vm, vint8mf8_t vd, vint16mf4_t vs2,
                                   size_t rs1, size_t vl) {
  return __riscv_vnclip_wx_i8mf8_mu(vm, vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint8mf4_t test_vnclip_wv_i8mf4_mu(vbool32_t vm, vint8mf4_t vd, vint16mf2_t vs2,
                                   vuint8mf4_t vs1, size_t vl) {
  return __riscv_vnclip_wv_i8mf4_mu(vm, vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint8mf4_t test_vnclip_wx_i8mf4_mu(vbool32_t vm, vint8mf4_t vd, vint16mf2_t vs2,
                                   size_t rs1, size_t vl) {
  return __riscv_vnclip_wx_i8mf4_mu(vm, vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint8mf2_t test_vnclip_wv_i8mf2_mu(vbool16_t vm, vint8mf2_t vd, vint16m1_t vs2,
                                   vuint8mf2_t vs1, size_t vl) {
  return __riscv_vnclip_wv_i8mf2_mu(vm, vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint8mf2_t test_vnclip_wx_i8mf2_mu(vbool16_t vm, vint8mf2_t vd, vint16m1_t vs2,
                                   size_t rs1, size_t vl) {
  return __riscv_vnclip_wx_i8mf2_mu(vm, vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint8m1_t test_vnclip_wv_i8m1_mu(vbool8_t vm, vint8m1_t vd, vint16m2_t vs2,
                                 vuint8m1_t vs1, size_t vl) {
  return __riscv_vnclip_wv_i8m1_mu(vm, vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint8m1_t test_vnclip_wx_i8m1_mu(vbool8_t vm, vint8m1_t vd, vint16m2_t vs2,
                                 size_t rs1, size_t vl) {
  return __riscv_vnclip_wx_i8m1_mu(vm, vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint8m2_t test_vnclip_wv_i8m2_mu(vbool4_t vm, vint8m2_t vd, vint16m4_t vs2,
                                 vuint8m2_t vs1, size_t vl) {
  return __riscv_vnclip_wv_i8m2_mu(vm, vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint8m2_t test_vnclip_wx_i8m2_mu(vbool4_t vm, vint8m2_t vd, vint16m4_t vs2,
                                 size_t rs1, size_t vl) {
  return __riscv_vnclip_wx_i8m2_mu(vm, vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint8m4_t test_vnclip_wv_i8m4_mu(vbool2_t vm, vint8m4_t vd, vint16m8_t vs2,
                                 vuint8m4_t vs1, size_t vl) {
  return __riscv_vnclip_wv_i8m4_mu(vm, vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint8m4_t test_vnclip_wx_i8m4_mu(vbool2_t vm, vint8m4_t vd, vint16m8_t vs2,
                                 size_t rs1, size_t vl) {
  return __riscv_vnclip_wx_i8m4_mu(vm, vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint16mf4_t test_vnclip_wv_i16mf4_mu(vbool64_t vm, vint16mf4_t vd,
                                     vint32mf2_t vs2, vuint16mf4_t vs1,
                                     size_t vl) {
  return __riscv_vnclip_wv_i16mf4_mu(vm, vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint16mf4_t test_vnclip_wx_i16mf4_mu(vbool64_t vm, vint16mf4_t vd,
                                     vint32mf2_t vs2, size_t rs1, size_t vl) {
  return __riscv_vnclip_wx_i16mf4_mu(vm, vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint16mf2_t test_vnclip_wv_i16mf2_mu(vbool32_t vm, vint16mf2_t vd,
                                     vint32m1_t vs2, vuint16mf2_t vs1,
                                     size_t vl) {
  return __riscv_vnclip_wv_i16mf2_mu(vm, vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint16mf2_t test_vnclip_wx_i16mf2_mu(vbool32_t vm, vint16mf2_t vd,
                                     vint32m1_t vs2, size_t rs1, size_t vl) {
  return __riscv_vnclip_wx_i16mf2_mu(vm, vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint16m1_t test_vnclip_wv_i16m1_mu(vbool16_t vm, vint16m1_t vd, vint32m2_t vs2,
                                   vuint16m1_t vs1, size_t vl) {
  return __riscv_vnclip_wv_i16m1_mu(vm, vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint16m1_t test_vnclip_wx_i16m1_mu(vbool16_t vm, vint16m1_t vd, vint32m2_t vs2,
                                   size_t rs1, size_t vl) {
  return __riscv_vnclip_wx_i16m1_mu(vm, vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint16m2_t test_vnclip_wv_i16m2_mu(vbool8_t vm, vint16m2_t vd, vint32m4_t vs2,
                                   vuint16m2_t vs1, size_t vl) {
  return __riscv_vnclip_wv_i16m2_mu(vm, vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint16m2_t test_vnclip_wx_i16m2_mu(vbool8_t vm, vint16m2_t vd, vint32m4_t vs2,
                                   size_t rs1, size_t vl) {
  return __riscv_vnclip_wx_i16m2_mu(vm, vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint16m4_t test_vnclip_wv_i16m4_mu(vbool4_t vm, vint16m4_t vd, vint32m8_t vs2,
                                   vuint16m4_t vs1, size_t vl) {
  return __riscv_vnclip_wv_i16m4_mu(vm, vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint16m4_t test_vnclip_wx_i16m4_mu(vbool4_t vm, vint16m4_t vd, vint32m8_t vs2,
                                   size_t rs1, size_t vl) {
  return __riscv_vnclip_wx_i16m4_mu(vm, vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint32mf2_t test_vnclip_wv_i32mf2_mu(vbool64_t vm, vint32mf2_t vd,
                                     vint64m1_t vs2, vuint32mf2_t vs1,
                                     size_t vl) {
  return __riscv_vnclip_wv_i32mf2_mu(vm, vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint32mf2_t test_vnclip_wx_i32mf2_mu(vbool64_t vm, vint32mf2_t vd,
                                     vint64m1_t vs2, size_t rs1, size_t vl) {
  return __riscv_vnclip_wx_i32mf2_mu(vm, vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint32m1_t test_vnclip_wv_i32m1_mu(vbool32_t vm, vint32m1_t vd, vint64m2_t vs2,
                                   vuint32m1_t vs1, size_t vl) {
  return __riscv_vnclip_wv_i32m1_mu(vm, vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint32m1_t test_vnclip_wx_i32m1_mu(vbool32_t vm, vint32m1_t vd, vint64m2_t vs2,
                                   size_t rs1, size_t vl) {
  return __riscv_vnclip_wx_i32m1_mu(vm, vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint32m2_t test_vnclip_wv_i32m2_mu(vbool16_t vm, vint32m2_t vd, vint64m4_t vs2,
                                   vuint32m2_t vs1, size_t vl) {
  return __riscv_vnclip_wv_i32m2_mu(vm, vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint32m2_t test_vnclip_wx_i32m2_mu(vbool16_t vm, vint32m2_t vd, vint64m4_t vs2,
                                   size_t rs1, size_t vl) {
  return __riscv_vnclip_wx_i32m2_mu(vm, vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

vint32m4_t test_vnclip_wv_i32m4_mu(vbool8_t vm, vint32m4_t vd, vint64m8_t vs2,
                                   vuint32m4_t vs1, size_t vl) {
  return __riscv_vnclip_wv_i32m4_mu(vm, vd, vs2, vs1, __RISCV_VXRM_RNU, vl);
}

vint32m4_t test_vnclip_wx_i32m4_mu(vbool8_t vm, vint32m4_t vd, vint64m8_t vs2,
                                   size_t rs1, size_t vl) {
  return __riscv_vnclip_wx_i32m4_mu(vm, vd, vs2, rs1, __RISCV_VXRM_RNU, vl);
}

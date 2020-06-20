/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Intrinsic Function Source Fragment                                          *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

// VisualStudio defines setjmp as _setjmp
#if defined(_MSC_VER) && defined(setjmp) && \
                         !defined(setjmp_undefined_for_msvc)
#  pragma push_macro("setjmp")
#  undef setjmp
#  define setjmp_undefined_for_msvc
#endif

// Enum values for Intrinsics.h
#ifdef GET_INTRINSIC_ENUM_VALUES
    AMDGPU_arl,                               // llvm.AMDGPU.arl
    AMDGPU_barrier_local,                     // llvm.AMDGPU.barrier.local
    AMDGPU_cndlt,                             // llvm.AMDGPU.cndlt
    AMDGPU_cube,                              // llvm.AMDGPU.cube
    AMDGPU_ddx,                               // llvm.AMDGPU.ddx
    AMDGPU_ddy,                               // llvm.AMDGPU.ddy
    AMDGPU_div,                               // llvm.AMDGPU.div
    AMDGPU_dp4,                               // llvm.AMDGPU.dp4
    AMDGPU_imax,                              // llvm.AMDGPU.imax
    AMDGPU_imin,                              // llvm.AMDGPU.imin
    AMDGPU_kill,                              // llvm.AMDGPU.kill
    AMDGPU_kilp,                              // llvm.AMDGPU.kilp
    AMDGPU_load_const,                        // llvm.AMDGPU.load.const
    AMDGPU_load_imm,                          // llvm.AMDGPU.load.imm
    AMDGPU_lrp,                               // llvm.AMDGPU.lrp
    AMDGPU_mul,                               // llvm.AMDGPU.mul
    AMDGPU_mullit,                            // llvm.AMDGPU.mullit
    AMDGPU_pow,                               // llvm.AMDGPU.pow
    AMDGPU_rcp,                               // llvm.AMDGPU.rcp
    AMDGPU_reserve_reg,                       // llvm.AMDGPU.reserve.reg
    AMDGPU_rsq,                               // llvm.AMDGPU.rsq
    AMDGPU_seq,                               // llvm.AMDGPU.seq
    AMDGPU_sge,                               // llvm.AMDGPU.sge
    AMDGPU_sgt,                               // llvm.AMDGPU.sgt
    AMDGPU_sle,                               // llvm.AMDGPU.sle
    AMDGPU_sne,                               // llvm.AMDGPU.sne
    AMDGPU_store_output,                      // llvm.AMDGPU.store.output
    AMDGPU_swizzle,                           // llvm.AMDGPU.swizzle
    AMDGPU_tex,                               // llvm.AMDGPU.tex
    AMDGPU_trunc,                             // llvm.AMDGPU.trunc
    AMDGPU_txb,                               // llvm.AMDGPU.txb
    AMDGPU_txd,                               // llvm.AMDGPU.txd
    AMDGPU_txf,                               // llvm.AMDGPU.txf
    AMDGPU_txl,                               // llvm.AMDGPU.txl
    AMDGPU_txq,                               // llvm.AMDGPU.txq
    AMDGPU_umax,                              // llvm.AMDGPU.umax
    AMDGPU_umin,                              // llvm.AMDGPU.umin
    AMDIL_abs,                                // llvm.AMDIL.abs
    AMDIL_acos,                               // llvm.AMDIL.acos
    AMDIL_asin,                               // llvm.AMDIL.asin
    AMDIL_atan,                               // llvm.AMDIL.atan
    AMDIL_bfi,                                // llvm.AMDIL.bfi
    AMDIL_bfm,                                // llvm.AMDIL.bfm
    AMDIL_bit_count_i32,                      // llvm.AMDIL.bit.count.i32
    AMDIL_bit_extract_i32,                    // llvm.AMDIL.bit.extract.i32
    AMDIL_bit_extract_u32,                    // llvm.AMDIL.bit.extract.u32
    AMDIL_bit_find_first_hi,                  // llvm.AMDIL.bit.find.first.hi
    AMDIL_bit_find_first_lo,                  // llvm.AMDIL.bit.find.first.lo
    AMDIL_bit_find_first_sgn,                 // llvm.AMDIL.bit.find.first.sgn
    AMDIL_bit_insert_u32,                     // llvm.AMDIL.bit.insert.u32
    AMDIL_bit_reverse_u32,                    // llvm.AMDIL.bit.reverse.u32
    AMDIL_borrow_i32,                         // llvm.AMDIL.borrow.i32
    AMDIL_carry_i32,                          // llvm.AMDIL.carry.i32
    AMDIL_clamp,                              // llvm.AMDIL.clamp
    AMDIL_convert_f16_f32,                    // llvm.AMDIL.convert.f16.f32
    AMDIL_convert_f32_f16,                    // llvm.AMDIL.convert.f32.f16
    AMDIL_convert_f32_f16_near,               // llvm.AMDIL.convert.f32.f16.near
    AMDIL_convert_f32_f16_neg_inf,            // llvm.AMDIL.convert.f32.f16.neg.inf
    AMDIL_convert_f32_f16_plus_inf,           // llvm.AMDIL.convert.f32.f16.plus.inf
    AMDIL_convert_f32_i32_flr,                // llvm.AMDIL.convert.f32.i32.flr
    AMDIL_convert_f32_i32_rpi,                // llvm.AMDIL.convert.f32.i32.rpi
    AMDIL_cos,                                // llvm.AMDIL.cos
    AMDIL_cos_vec,                            // llvm.AMDIL.cos.vec
    AMDIL_div,                                // llvm.AMDIL.div
    AMDIL_dp2,                                // llvm.AMDIL.dp2
    AMDIL_dp2_add,                            // llvm.AMDIL.dp2.add
    AMDIL_dp3,                                // llvm.AMDIL.dp3
    AMDIL_dp4,                                // llvm.AMDIL.dp4
    AMDIL_drcp,                               // llvm.AMDIL.drcp
    AMDIL_exn,                                // llvm.AMDIL.exn
    AMDIL_exp,                                // llvm.AMDIL.exp
    AMDIL_exp_vec,                            // llvm.AMDIL.exp.vec
    AMDIL_fma,                                // llvm.AMDIL.fma
    AMDIL_fraction,                           // llvm.AMDIL.fraction
    AMDIL_frexp_f64,                          // llvm.AMDIL.frexp.f64
    AMDIL_ldexp,                              // llvm.AMDIL.ldexp
    AMDIL_length,                             // llvm.AMDIL.length
    AMDIL_lerp,                               // llvm.AMDIL.lerp
    AMDIL_ln,                                 // llvm.AMDIL.ln
    AMDIL_log_vec,                            // llvm.AMDIL.log.vec
    AMDIL_max,                                // llvm.AMDIL.max
    AMDIL_max_i32,                            // llvm.AMDIL.max.i32
    AMDIL_max_u32,                            // llvm.AMDIL.max.u32
    AMDIL_media_bitalign,                     // llvm.AMDIL.media.bitalign
    AMDIL_media_bytealign,                    // llvm.AMDIL.media.bytealign
    AMDIL_media_convert_f2v4u8,               // llvm.AMDIL.media.convert.f2v4u8
    AMDIL_media_lerp_u4,                      // llvm.AMDIL.media.lerp.u4
    AMDIL_media_sad,                          // llvm.AMDIL.media.sad
    AMDIL_media_sad4,                         // llvm.AMDIL.media.sad4
    AMDIL_media_sad_hi,                       // llvm.AMDIL.media.sad.hi
    AMDIL_media_unpack_byte_0,                // llvm.AMDIL.media.unpack.byte.0
    AMDIL_media_unpack_byte_1,                // llvm.AMDIL.media.unpack.byte.1
    AMDIL_media_unpack_byte_2,                // llvm.AMDIL.media.unpack.byte.2
    AMDIL_media_unpack_byte_3,                // llvm.AMDIL.media.unpack.byte.3
    AMDIL_min,                                // llvm.AMDIL.min
    AMDIL_min_i32,                            // llvm.AMDIL.min.i32
    AMDIL_min_u32,                            // llvm.AMDIL.min.u32
    AMDIL_mul24_i32,                          // llvm.AMDIL.mul24.i32
    AMDIL_mul24_u32,                          // llvm.AMDIL.mul24.u32
    AMDIL_mulhi24_i32,                        // llvm.AMDIL.mulhi24.i32
    AMDIL_mulhi24_u32,                        // llvm.AMDIL.mulhi24.u32
    AMDIL_mulhi_i32,                          // llvm.AMDIL.mulhi.i32
    AMDIL_mulhi_u32,                          // llvm.AMDIL.mulhi.u32
    AMDIL_pireduce,                           // llvm.AMDIL.pireduce
    AMDIL_pow,                                // llvm.AMDIL.pow
    AMDIL_round_nearest,                      // llvm.AMDIL.round.nearest
    AMDIL_round_neginf,                       // llvm.AMDIL.round.neginf
    AMDIL_round_zero,                         // llvm.AMDIL.round.zero
    AMDIL_rsq,                                // llvm.AMDIL.rsq
    AMDIL_rsq_vec,                            // llvm.AMDIL.rsq.vec
    AMDIL_sign,                               // llvm.AMDIL.sign
    AMDIL_sin,                                // llvm.AMDIL.sin
    AMDIL_sin_vec,                            // llvm.AMDIL.sin.vec
    AMDIL_sqrt,                               // llvm.AMDIL.sqrt
    AMDIL_sqrt_vec,                           // llvm.AMDIL.sqrt.vec
    AMDIL_tan,                                // llvm.AMDIL.tan
    AMDIL_udiv,                               // llvm.AMDIL.udiv
    R600_ddx,                                 // llvm.R600.ddx
    R600_ddy,                                 // llvm.R600.ddy
    R600_interp_input,                        // llvm.R600.interp.input
    R600_load_input,                          // llvm.R600.load.input
    R600_load_texbuf,                         // llvm.R600.load.texbuf
    R600_store_dummy,                         // llvm.R600.store.dummy
    R600_store_pixel_depth,                   // llvm.R600.store.pixel.depth
    R600_store_pixel_stencil,                 // llvm.R600.store.pixel.stencil
    R600_store_stream_output,                 // llvm.R600.store.stream.output
    R600_store_swizzle,                       // llvm.R600.store.swizzle
    R600_tex,                                 // llvm.R600.tex
    R600_texc,                                // llvm.R600.texc
    R600_txb,                                 // llvm.R600.txb
    R600_txbc,                                // llvm.R600.txbc
    R600_txf,                                 // llvm.R600.txf
    R600_txl,                                 // llvm.R600.txl
    R600_txlc,                                // llvm.R600.txlc
    R600_txq,                                 // llvm.R600.txq
    SI_break,                                 // llvm.SI.break
    SI_else,                                  // llvm.SI.else
    SI_else_break,                            // llvm.SI.else.break
    SI_end_cf,                                // llvm.SI.end.cf
    SI_export,                                // llvm.SI.export
    SI_fs_constant,                           // llvm.SI.fs.constant
    SI_fs_interp,                             // llvm.SI.fs.interp
    SI_if,                                    // llvm.SI.if
    SI_if_break,                              // llvm.SI.if.break
    SI_imageload,                             // llvm.SI.imageload
    SI_load_const,                            // llvm.SI.load.const
    SI_loop,                                  // llvm.SI.loop
    SI_packf16,                               // llvm.SI.packf16
    SI_resinfo,                               // llvm.SI.resinfo
    SI_sample,                                // llvm.SI.sample
    SI_sampleb,                               // llvm.SI.sampleb
    SI_sampled,                               // llvm.SI.sampled
    SI_samplel,                               // llvm.SI.samplel
    SI_tid,                                   // llvm.SI.tid
    SI_vs_load_input,                         // llvm.SI.vs.load.input
    TGSI_lit_z                                // llvm.TGSI.lit.z
#endif

// Intrinsic ID to name table
#ifdef GET_INTRINSIC_NAME_TABLE
  // Note that entry #0 is the invalid intrinsic!
  "llvm.AMDGPU.arl",
  "llvm.AMDGPU.barrier.local",
  "llvm.AMDGPU.cndlt",
  "llvm.AMDGPU.cube",
  "llvm.AMDGPU.ddx",
  "llvm.AMDGPU.ddy",
  "llvm.AMDGPU.div",
  "llvm.AMDGPU.dp4",
  "llvm.AMDGPU.imax",
  "llvm.AMDGPU.imin",
  "llvm.AMDGPU.kill",
  "llvm.AMDGPU.kilp",
  "llvm.AMDGPU.load.const",
  "llvm.AMDGPU.load.imm",
  "llvm.AMDGPU.lrp",
  "llvm.AMDGPU.mul",
  "llvm.AMDGPU.mullit",
  "llvm.AMDGPU.pow",
  "llvm.AMDGPU.rcp",
  "llvm.AMDGPU.reserve.reg",
  "llvm.AMDGPU.rsq",
  "llvm.AMDGPU.seq",
  "llvm.AMDGPU.sge",
  "llvm.AMDGPU.sgt",
  "llvm.AMDGPU.sle",
  "llvm.AMDGPU.sne",
  "llvm.AMDGPU.store.output",
  "llvm.AMDGPU.swizzle",
  "llvm.AMDGPU.tex",
  "llvm.AMDGPU.trunc",
  "llvm.AMDGPU.txb",
  "llvm.AMDGPU.txd",
  "llvm.AMDGPU.txf",
  "llvm.AMDGPU.txl",
  "llvm.AMDGPU.txq",
  "llvm.AMDGPU.umax",
  "llvm.AMDGPU.umin",
  "llvm.AMDIL.abs",
  "llvm.AMDIL.acos",
  "llvm.AMDIL.asin",
  "llvm.AMDIL.atan",
  "llvm.AMDIL.bfi",
  "llvm.AMDIL.bfm",
  "llvm.AMDIL.bit.count.i32",
  "llvm.AMDIL.bit.extract.i32",
  "llvm.AMDIL.bit.extract.u32",
  "llvm.AMDIL.bit.find.first.hi",
  "llvm.AMDIL.bit.find.first.lo",
  "llvm.AMDIL.bit.find.first.sgn",
  "llvm.AMDIL.bit.insert.u32",
  "llvm.AMDIL.bit.reverse.u32",
  "llvm.AMDIL.borrow.i32",
  "llvm.AMDIL.carry.i32",
  "llvm.AMDIL.clamp",
  "llvm.AMDIL.convert.f16.f32",
  "llvm.AMDIL.convert.f32.f16",
  "llvm.AMDIL.convert.f32.f16.near",
  "llvm.AMDIL.convert.f32.f16.neg.inf",
  "llvm.AMDIL.convert.f32.f16.plus.inf",
  "llvm.AMDIL.convert.f32.i32.flr",
  "llvm.AMDIL.convert.f32.i32.rpi",
  "llvm.AMDIL.cos",
  "llvm.AMDIL.cos.vec",
  "llvm.AMDIL.div",
  "llvm.AMDIL.dp2",
  "llvm.AMDIL.dp2.add",
  "llvm.AMDIL.dp3",
  "llvm.AMDIL.dp4",
  "llvm.AMDIL.drcp",
  "llvm.AMDIL.exn",
  "llvm.AMDIL.exp",
  "llvm.AMDIL.exp.vec",
  "llvm.AMDIL.fma",
  "llvm.AMDIL.fraction",
  "llvm.AMDIL.frexp.f64",
  "llvm.AMDIL.ldexp",
  "llvm.AMDIL.length",
  "llvm.AMDIL.lerp",
  "llvm.AMDIL.ln",
  "llvm.AMDIL.log.vec",
  "llvm.AMDIL.max",
  "llvm.AMDIL.max.i32",
  "llvm.AMDIL.max.u32",
  "llvm.AMDIL.media.bitalign",
  "llvm.AMDIL.media.bytealign",
  "llvm.AMDIL.media.convert.f2v4u8",
  "llvm.AMDIL.media.lerp.u4",
  "llvm.AMDIL.media.sad",
  "llvm.AMDIL.media.sad4",
  "llvm.AMDIL.media.sad.hi",
  "llvm.AMDIL.media.unpack.byte.0",
  "llvm.AMDIL.media.unpack.byte.1",
  "llvm.AMDIL.media.unpack.byte.2",
  "llvm.AMDIL.media.unpack.byte.3",
  "llvm.AMDIL.min",
  "llvm.AMDIL.min.i32",
  "llvm.AMDIL.min.u32",
  "llvm.AMDIL.mul24.i32",
  "llvm.AMDIL.mul24.u32",
  "llvm.AMDIL.mulhi24.i32",
  "llvm.AMDIL.mulhi24.u32",
  "llvm.AMDIL.mulhi.i32",
  "llvm.AMDIL.mulhi.u32",
  "llvm.AMDIL.pireduce",
  "llvm.AMDIL.pow",
  "llvm.AMDIL.round.nearest",
  "llvm.AMDIL.round.neginf",
  "llvm.AMDIL.round.zero",
  "llvm.AMDIL.rsq",
  "llvm.AMDIL.rsq.vec",
  "llvm.AMDIL.sign",
  "llvm.AMDIL.sin",
  "llvm.AMDIL.sin.vec",
  "llvm.AMDIL.sqrt",
  "llvm.AMDIL.sqrt.vec",
  "llvm.AMDIL.tan",
  "llvm.AMDIL.udiv",
  "llvm.R600.ddx",
  "llvm.R600.ddy",
  "llvm.R600.interp.input",
  "llvm.R600.load.input",
  "llvm.R600.load.texbuf",
  "llvm.R600.store.dummy",
  "llvm.R600.store.pixel.depth",
  "llvm.R600.store.pixel.stencil",
  "llvm.R600.store.stream.output",
  "llvm.R600.store.swizzle",
  "llvm.R600.tex",
  "llvm.R600.texc",
  "llvm.R600.txb",
  "llvm.R600.txbc",
  "llvm.R600.txf",
  "llvm.R600.txl",
  "llvm.R600.txlc",
  "llvm.R600.txq",
  "llvm.SI.break",
  "llvm.SI.else",
  "llvm.SI.else.break",
  "llvm.SI.end.cf",
  "llvm.SI.export",
  "llvm.SI.fs.constant",
  "llvm.SI.fs.interp",
  "llvm.SI.if",
  "llvm.SI.if.break",
  "llvm.SI.imageload",
  "llvm.SI.load.const",
  "llvm.SI.loop",
  "llvm.SI.packf16",
  "llvm.SI.resinfo",
  "llvm.SI.sample",
  "llvm.SI.sampleb",
  "llvm.SI.sampled",
  "llvm.SI.samplel",
  "llvm.SI.tid",
  "llvm.SI.vs.load.input",
  "llvm.TGSI.lit.z",
#endif

// Intrinsic ID to overload bitset
#ifdef GET_INTRINSIC_OVERLOAD_TABLE
static const uint8_t OTable[] = {
  0,
  0,
  0,
  0,
  0 | (1<<6) | (1<<7),
  0 | (1<<0) | (1<<1) | (1<<2) | (1<<3) | (1<<4) | (1<<5) | (1<<6) | (1<<7),
  0 | (1<<0) | (1<<1) | (1<<2) | (1<<3) | (1<<4) | (1<<5) | (1<<6) | (1<<7),
  0 | (1<<0) | (1<<1) | (1<<2) | (1<<3) | (1<<4) | (1<<5) | (1<<6) | (1<<7),
  0 | (1<<0) | (1<<6) | (1<<7),
  0 | (1<<0) | (1<<1) | (1<<2) | (1<<4) | (1<<5) | (1<<6) | (1<<7),
  0 | (1<<0) | (1<<1) | (1<<2) | (1<<3) | (1<<4) | (1<<5) | (1<<7),
  0 | (1<<0) | (1<<2) | (1<<3) | (1<<4) | (1<<5) | (1<<6) | (1<<7),
  0 | (1<<0) | (1<<1) | (1<<2) | (1<<3) | (1<<4) | (1<<5) | (1<<6) | (1<<7),
  0 | (1<<0) | (1<<1) | (1<<2) | (1<<3) | (1<<4) | (1<<5) | (1<<6) | (1<<7),
  0 | (1<<0) | (1<<1) | (1<<2) | (1<<3) | (1<<4) | (1<<5),
  0,
  0,
  0,
  0 | (1<<1) | (1<<6) | (1<<7),
  0 | (1<<0) | (1<<1)
};

return (OTable[id/8] & (1 << (id%8))) != 0;
#endif

// Function name -> enum value recognizer code.
#ifdef GET_FUNCTION_RECOGNIZER
  StringRef NameR(Name+6, Len-6);   // Skip over 'llvm.'
  switch (Name[5]) {                  // Dispatch on first letter.
  default: break;
  case 'A':
    if (NameR.startswith("MDIL.udiv.")) return AMDGPUIntrinsic::AMDIL_udiv;
    if (NameR.startswith("MDIL.tan.")) return AMDGPUIntrinsic::AMDIL_tan;
    if (NameR.startswith("MDIL.sqrt.vec.")) return AMDGPUIntrinsic::AMDIL_sqrt_vec;
    if (NameR.startswith("MDIL.sqrt.")) return AMDGPUIntrinsic::AMDIL_sqrt;
    if (NameR.startswith("MDIL.sin.vec.")) return AMDGPUIntrinsic::AMDIL_sin_vec;
    if (NameR.startswith("MDIL.sin.")) return AMDGPUIntrinsic::AMDIL_sin;
    if (NameR.startswith("MDIL.sign.")) return AMDGPUIntrinsic::AMDIL_sign;
    if (NameR.startswith("MDIL.rsq.vec.")) return AMDGPUIntrinsic::AMDIL_rsq_vec;
    if (NameR.startswith("MDIL.rsq.")) return AMDGPUIntrinsic::AMDIL_rsq;
    if (NameR.startswith("MDIL.round.zero.")) return AMDGPUIntrinsic::AMDIL_round_zero;
    if (NameR.startswith("MDIL.round.neginf.")) return AMDGPUIntrinsic::AMDIL_round_neginf;
    if (NameR.startswith("MDIL.round.nearest.")) return AMDGPUIntrinsic::AMDIL_round_nearest;
    if (NameR.startswith("MDIL.pow.")) return AMDGPUIntrinsic::AMDIL_pow;
    if (NameR.startswith("MDIL.pireduce.")) return AMDGPUIntrinsic::AMDIL_pireduce;
    if (NameR.startswith("MDIL.mulhi24.u32.")) return AMDGPUIntrinsic::AMDIL_mulhi24_u32;
    if (NameR.startswith("MDIL.mulhi24.i32.")) return AMDGPUIntrinsic::AMDIL_mulhi24_i32;
    if (NameR.startswith("MDIL.mulhi.u32.")) return AMDGPUIntrinsic::AMDIL_mulhi_u32;
    if (NameR.startswith("MDIL.mulhi.i32.")) return AMDGPUIntrinsic::AMDIL_mulhi_i32;
    if (NameR.startswith("MDIL.mul24.u32.")) return AMDGPUIntrinsic::AMDIL_mul24_u32;
    if (NameR.startswith("MDIL.mul24.i32.")) return AMDGPUIntrinsic::AMDIL_mul24_i32;
    if (NameR.startswith("MDIL.min.u32.")) return AMDGPUIntrinsic::AMDIL_min_u32;
    if (NameR.startswith("MDIL.min.i32.")) return AMDGPUIntrinsic::AMDIL_min_i32;
    if (NameR.startswith("MDIL.min.")) return AMDGPUIntrinsic::AMDIL_min;
    if (NameR.startswith("MDIL.media.unpack.byte.3.")) return AMDGPUIntrinsic::AMDIL_media_unpack_byte_3;
    if (NameR.startswith("MDIL.media.unpack.byte.2.")) return AMDGPUIntrinsic::AMDIL_media_unpack_byte_2;
    if (NameR.startswith("MDIL.media.unpack.byte.1.")) return AMDGPUIntrinsic::AMDIL_media_unpack_byte_1;
    if (NameR.startswith("MDIL.media.unpack.byte.0.")) return AMDGPUIntrinsic::AMDIL_media_unpack_byte_0;
    if (NameR.startswith("MDIL.media.sad.hi.")) return AMDGPUIntrinsic::AMDIL_media_sad_hi;
    if (NameR.startswith("MDIL.media.sad.")) return AMDGPUIntrinsic::AMDIL_media_sad;
    if (NameR.startswith("MDIL.media.lerp.u4.")) return AMDGPUIntrinsic::AMDIL_media_lerp_u4;
    if (NameR.startswith("MDIL.media.bytealign.")) return AMDGPUIntrinsic::AMDIL_media_bytealign;
    if (NameR.startswith("MDIL.media.bitalign.")) return AMDGPUIntrinsic::AMDIL_media_bitalign;
    if (NameR.startswith("MDIL.max.u32.")) return AMDGPUIntrinsic::AMDIL_max_u32;
    if (NameR.startswith("MDIL.max.i32.")) return AMDGPUIntrinsic::AMDIL_max_i32;
    if (NameR.startswith("MDIL.max.")) return AMDGPUIntrinsic::AMDIL_max;
    if (NameR.startswith("MDIL.log.vec.")) return AMDGPUIntrinsic::AMDIL_log_vec;
    if (NameR.startswith("MDIL.ln.")) return AMDGPUIntrinsic::AMDIL_ln;
    if (NameR.startswith("MDIL.lerp.")) return AMDGPUIntrinsic::AMDIL_lerp;
    if (NameR.startswith("MDIL.length.")) return AMDGPUIntrinsic::AMDIL_length;
    if (NameR.startswith("MDIL.ldexp.")) return AMDGPUIntrinsic::AMDIL_ldexp;
    if (NameR.startswith("MDIL.fraction.")) return AMDGPUIntrinsic::AMDIL_fraction;
    if (NameR.startswith("MDIL.fma.")) return AMDGPUIntrinsic::AMDIL_fma;
    if (NameR.startswith("MDIL.exp.vec.")) return AMDGPUIntrinsic::AMDIL_exp_vec;
    if (NameR.startswith("MDIL.exp.")) return AMDGPUIntrinsic::AMDIL_exp;
    if (NameR.startswith("MDIL.exn.")) return AMDGPUIntrinsic::AMDIL_exn;
    if (NameR.startswith("MDIL.div.")) return AMDGPUIntrinsic::AMDIL_div;
    if (NameR.startswith("MDIL.cos.vec.")) return AMDGPUIntrinsic::AMDIL_cos_vec;
    if (NameR.startswith("MDIL.cos.")) return AMDGPUIntrinsic::AMDIL_cos;
    if (NameR.startswith("MDIL.convert.f32.i32.rpi.")) return AMDGPUIntrinsic::AMDIL_convert_f32_i32_rpi;
    if (NameR.startswith("MDIL.convert.f32.i32.flr.")) return AMDGPUIntrinsic::AMDIL_convert_f32_i32_flr;
    if (NameR.startswith("MDIL.convert.f32.f16.plus.inf.")) return AMDGPUIntrinsic::AMDIL_convert_f32_f16_plus_inf;
    if (NameR.startswith("MDIL.convert.f32.f16.neg.inf.")) return AMDGPUIntrinsic::AMDIL_convert_f32_f16_neg_inf;
    if (NameR.startswith("MDIL.convert.f32.f16.near.")) return AMDGPUIntrinsic::AMDIL_convert_f32_f16_near;
    if (NameR.startswith("MDIL.convert.f32.f16.")) return AMDGPUIntrinsic::AMDIL_convert_f32_f16;
    if (NameR.startswith("MDIL.convert.f16.f32.")) return AMDGPUIntrinsic::AMDIL_convert_f16_f32;
    if (NameR.startswith("MDIL.clamp.")) return AMDGPUIntrinsic::AMDIL_clamp;
    if (NameR.startswith("MDIL.carry.i32.")) return AMDGPUIntrinsic::AMDIL_carry_i32;
    if (NameR.startswith("MDIL.borrow.i32.")) return AMDGPUIntrinsic::AMDIL_borrow_i32;
    if (NameR.startswith("MDIL.bit.reverse.u32.")) return AMDGPUIntrinsic::AMDIL_bit_reverse_u32;
    if (NameR.startswith("MDIL.bit.insert.u32.")) return AMDGPUIntrinsic::AMDIL_bit_insert_u32;
    if (NameR.startswith("MDIL.bit.find.first.sgn.")) return AMDGPUIntrinsic::AMDIL_bit_find_first_sgn;
    if (NameR.startswith("MDIL.bit.find.first.lo.")) return AMDGPUIntrinsic::AMDIL_bit_find_first_lo;
    if (NameR.startswith("MDIL.bit.find.first.hi.")) return AMDGPUIntrinsic::AMDIL_bit_find_first_hi;
    if (NameR.startswith("MDIL.bit.extract.u32.")) return AMDGPUIntrinsic::AMDIL_bit_extract_u32;
    if (NameR.startswith("MDIL.bit.extract.i32.")) return AMDGPUIntrinsic::AMDIL_bit_extract_i32;
    if (NameR.startswith("MDIL.bit.count.i32.")) return AMDGPUIntrinsic::AMDIL_bit_count_i32;
    if (NameR.startswith("MDIL.bfm.")) return AMDGPUIntrinsic::AMDIL_bfm;
    if (NameR.startswith("MDIL.bfi.")) return AMDGPUIntrinsic::AMDIL_bfi;
    if (NameR.startswith("MDIL.atan.")) return AMDGPUIntrinsic::AMDIL_atan;
    if (NameR.startswith("MDIL.asin.")) return AMDGPUIntrinsic::AMDIL_asin;
    if (NameR.startswith("MDIL.acos.")) return AMDGPUIntrinsic::AMDIL_acos;
    if (NameR.startswith("MDIL.abs.")) return AMDGPUIntrinsic::AMDIL_abs;
    switch (NameR.size()) {
    default: break;
    case 8:	 // 3 strings to match.
      if (memcmp(NameR.data()+0, "MDIL.dp", 7))
        break;
      switch (NameR[7]) {
      default: break;
      case '2':	 // 1 string to match.
        return AMDGPUIntrinsic::AMDIL_dp2;	 // "MDIL.dp2"
      case '3':	 // 1 string to match.
        return AMDGPUIntrinsic::AMDIL_dp3;	 // "MDIL.dp3"
      case '4':	 // 1 string to match.
        return AMDGPUIntrinsic::AMDIL_dp4;	 // "MDIL.dp4"
      }
      break;
    case 9:	 // 22 strings to match.
      if (memcmp(NameR.data()+0, "MD", 2))
        break;
      switch (NameR[2]) {
      default: break;
      case 'G':	 // 21 strings to match.
        if (memcmp(NameR.data()+3, "PU.", 3))
          break;
        switch (NameR[6]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (memcmp(NameR.data()+7, "rl", 2))
            break;
          return AMDGPUIntrinsic::AMDGPU_arl;	 // "MDGPU.arl"
        case 'd':	 // 4 strings to match.
          switch (NameR[7]) {
          default: break;
          case 'd':	 // 2 strings to match.
            switch (NameR[8]) {
            default: break;
            case 'x':	 // 1 string to match.
              return AMDGPUIntrinsic::AMDGPU_ddx;	 // "MDGPU.ddx"
            case 'y':	 // 1 string to match.
              return AMDGPUIntrinsic::AMDGPU_ddy;	 // "MDGPU.ddy"
            }
            break;
          case 'i':	 // 1 string to match.
            if (NameR[8] != 'v')
              break;
            return AMDGPUIntrinsic::AMDGPU_div;	 // "MDGPU.div"
          case 'p':	 // 1 string to match.
            if (NameR[8] != '4')
              break;
            return AMDGPUIntrinsic::AMDGPU_dp4;	 // "MDGPU.dp4"
          }
          break;
        case 'l':	 // 1 string to match.
          if (memcmp(NameR.data()+7, "rp", 2))
            break;
          return AMDGPUIntrinsic::AMDGPU_lrp;	 // "MDGPU.lrp"
        case 'm':	 // 1 string to match.
          if (memcmp(NameR.data()+7, "ul", 2))
            break;
          return AMDGPUIntrinsic::AMDGPU_mul;	 // "MDGPU.mul"
        case 'p':	 // 1 string to match.
          if (memcmp(NameR.data()+7, "ow", 2))
            break;
          return AMDGPUIntrinsic::AMDGPU_pow;	 // "MDGPU.pow"
        case 'r':	 // 2 strings to match.
          switch (NameR[7]) {
          default: break;
          case 'c':	 // 1 string to match.
            if (NameR[8] != 'p')
              break;
            return AMDGPUIntrinsic::AMDGPU_rcp;	 // "MDGPU.rcp"
          case 's':	 // 1 string to match.
            if (NameR[8] != 'q')
              break;
            return AMDGPUIntrinsic::AMDGPU_rsq;	 // "MDGPU.rsq"
          }
          break;
        case 's':	 // 5 strings to match.
          switch (NameR[7]) {
          default: break;
          case 'e':	 // 1 string to match.
            if (NameR[8] != 'q')
              break;
            return AMDGPUIntrinsic::AMDGPU_seq;	 // "MDGPU.seq"
          case 'g':	 // 2 strings to match.
            switch (NameR[8]) {
            default: break;
            case 'e':	 // 1 string to match.
              return AMDGPUIntrinsic::AMDGPU_sge;	 // "MDGPU.sge"
            case 't':	 // 1 string to match.
              return AMDGPUIntrinsic::AMDGPU_sgt;	 // "MDGPU.sgt"
            }
            break;
          case 'l':	 // 1 string to match.
            if (NameR[8] != 'e')
              break;
            return AMDGPUIntrinsic::AMDGPU_sle;	 // "MDGPU.sle"
          case 'n':	 // 1 string to match.
            if (NameR[8] != 'e')
              break;
            return AMDGPUIntrinsic::AMDGPU_sne;	 // "MDGPU.sne"
          }
          break;
        case 't':	 // 6 strings to match.
          switch (NameR[7]) {
          default: break;
          case 'e':	 // 1 string to match.
            if (NameR[8] != 'x')
              break;
            return AMDGPUIntrinsic::AMDGPU_tex;	 // "MDGPU.tex"
          case 'x':	 // 5 strings to match.
            switch (NameR[8]) {
            default: break;
            case 'b':	 // 1 string to match.
              return AMDGPUIntrinsic::AMDGPU_txb;	 // "MDGPU.txb"
            case 'd':	 // 1 string to match.
              return AMDGPUIntrinsic::AMDGPU_txd;	 // "MDGPU.txd"
            case 'f':	 // 1 string to match.
              return AMDGPUIntrinsic::AMDGPU_txf;	 // "MDGPU.txf"
            case 'l':	 // 1 string to match.
              return AMDGPUIntrinsic::AMDGPU_txl;	 // "MDGPU.txl"
            case 'q':	 // 1 string to match.
              return AMDGPUIntrinsic::AMDGPU_txq;	 // "MDGPU.txq"
            }
            break;
          }
          break;
        }
        break;
      case 'I':	 // 1 string to match.
        if (memcmp(NameR.data()+3, "L.drcp", 6))
          break;
        return AMDGPUIntrinsic::AMDIL_drcp;	 // "MDIL.drcp"
      }
      break;
    case 10:	 // 7 strings to match.
      if (memcmp(NameR.data()+0, "MDGPU.", 6))
        break;
      switch (NameR[6]) {
      default: break;
      case 'c':	 // 1 string to match.
        if (memcmp(NameR.data()+7, "ube", 3))
          break;
        return AMDGPUIntrinsic::AMDGPU_cube;	 // "MDGPU.cube"
      case 'i':	 // 2 strings to match.
        if (NameR[7] != 'm')
          break;
        switch (NameR[8]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (NameR[9] != 'x')
            break;
          return AMDGPUIntrinsic::AMDGPU_imax;	 // "MDGPU.imax"
        case 'i':	 // 1 string to match.
          if (NameR[9] != 'n')
            break;
          return AMDGPUIntrinsic::AMDGPU_imin;	 // "MDGPU.imin"
        }
        break;
      case 'k':	 // 2 strings to match.
        if (memcmp(NameR.data()+7, "il", 2))
          break;
        switch (NameR[9]) {
        default: break;
        case 'l':	 // 1 string to match.
          return AMDGPUIntrinsic::AMDGPU_kill;	 // "MDGPU.kill"
        case 'p':	 // 1 string to match.
          return AMDGPUIntrinsic::AMDGPU_kilp;	 // "MDGPU.kilp"
        }
        break;
      case 'u':	 // 2 strings to match.
        if (NameR[7] != 'm')
          break;
        switch (NameR[8]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (NameR[9] != 'x')
            break;
          return AMDGPUIntrinsic::AMDGPU_umax;	 // "MDGPU.umax"
        case 'i':	 // 1 string to match.
          if (NameR[9] != 'n')
            break;
          return AMDGPUIntrinsic::AMDGPU_umin;	 // "MDGPU.umin"
        }
        break;
      }
      break;
    case 11:	 // 2 strings to match.
      if (memcmp(NameR.data()+0, "MDGPU.", 6))
        break;
      switch (NameR[6]) {
      default: break;
      case 'c':	 // 1 string to match.
        if (memcmp(NameR.data()+7, "ndlt", 4))
          break;
        return AMDGPUIntrinsic::AMDGPU_cndlt;	 // "MDGPU.cndlt"
      case 't':	 // 1 string to match.
        if (memcmp(NameR.data()+7, "runc", 4))
          break;
        return AMDGPUIntrinsic::AMDGPU_trunc;	 // "MDGPU.trunc"
      }
      break;
    case 12:	 // 2 strings to match.
      if (memcmp(NameR.data()+0, "MD", 2))
        break;
      switch (NameR[2]) {
      default: break;
      case 'G':	 // 1 string to match.
        if (memcmp(NameR.data()+3, "PU.mullit", 9))
          break;
        return AMDGPUIntrinsic::AMDGPU_mullit;	 // "MDGPU.mullit"
      case 'I':	 // 1 string to match.
        if (memcmp(NameR.data()+3, "L.dp2.add", 9))
          break;
        return AMDGPUIntrinsic::AMDIL_dp2_add;	 // "MDIL.dp2.add"
      }
      break;
    case 13:	 // 1 string to match.
      if (memcmp(NameR.data()+0, "MDGPU.swizzle", 13))
        break;
      return AMDGPUIntrinsic::AMDGPU_swizzle;	 // "MDGPU.swizzle"
    case 14:	 // 2 strings to match.
      if (memcmp(NameR.data()+0, "MD", 2))
        break;
      switch (NameR[2]) {
      default: break;
      case 'G':	 // 1 string to match.
        if (memcmp(NameR.data()+3, "PU.load.imm", 11))
          break;
        return AMDGPUIntrinsic::AMDGPU_load_imm;	 // "MDGPU.load.imm"
      case 'I':	 // 1 string to match.
        if (memcmp(NameR.data()+3, "L.frexp.f64", 11))
          break;
        return AMDGPUIntrinsic::AMDIL_frexp_f64;	 // "MDIL.frexp.f64"
      }
      break;
    case 15:	 // 1 string to match.
      if (memcmp(NameR.data()+0, "MDIL.media.sad4", 15))
        break;
      return AMDGPUIntrinsic::AMDIL_media_sad4;	 // "MDIL.media.sad4"
    case 16:	 // 1 string to match.
      if (memcmp(NameR.data()+0, "MDGPU.load.const", 16))
        break;
      return AMDGPUIntrinsic::AMDGPU_load_const;	 // "MDGPU.load.const"
    case 17:	 // 1 string to match.
      if (memcmp(NameR.data()+0, "MDGPU.reserve.reg", 17))
        break;
      return AMDGPUIntrinsic::AMDGPU_reserve_reg;	 // "MDGPU.reserve.reg"
    case 18:	 // 1 string to match.
      if (memcmp(NameR.data()+0, "MDGPU.store.output", 18))
        break;
      return AMDGPUIntrinsic::AMDGPU_store_output;	 // "MDGPU.store.output"
    case 19:	 // 1 string to match.
      if (memcmp(NameR.data()+0, "MDGPU.barrier.local", 19))
        break;
      return AMDGPUIntrinsic::AMDGPU_barrier_local;	 // "MDGPU.barrier.local"
    case 25:	 // 1 string to match.
      if (memcmp(NameR.data()+0, "MDIL.media.convert.f2v4u8", 25))
        break;
      return AMDGPUIntrinsic::AMDIL_media_convert_f2v4u8;	 // "MDIL.media.convert.f2v4u8"
    }
    break;  // end of 'A' case.
  case 'R':
    switch (NameR.size()) {
    default: break;
    case 7:	 // 7 strings to match.
      if (memcmp(NameR.data()+0, "600.", 4))
        break;
      switch (NameR[4]) {
      default: break;
      case 'd':	 // 2 strings to match.
        if (NameR[5] != 'd')
          break;
        switch (NameR[6]) {
        default: break;
        case 'x':	 // 1 string to match.
          return AMDGPUIntrinsic::R600_ddx;	 // "600.ddx"
        case 'y':	 // 1 string to match.
          return AMDGPUIntrinsic::R600_ddy;	 // "600.ddy"
        }
        break;
      case 't':	 // 5 strings to match.
        switch (NameR[5]) {
        default: break;
        case 'e':	 // 1 string to match.
          if (NameR[6] != 'x')
            break;
          return AMDGPUIntrinsic::R600_tex;	 // "600.tex"
        case 'x':	 // 4 strings to match.
          switch (NameR[6]) {
          default: break;
          case 'b':	 // 1 string to match.
            return AMDGPUIntrinsic::R600_txb;	 // "600.txb"
          case 'f':	 // 1 string to match.
            return AMDGPUIntrinsic::R600_txf;	 // "600.txf"
          case 'l':	 // 1 string to match.
            return AMDGPUIntrinsic::R600_txl;	 // "600.txl"
          case 'q':	 // 1 string to match.
            return AMDGPUIntrinsic::R600_txq;	 // "600.txq"
          }
          break;
        }
        break;
      }
      break;
    case 8:	 // 3 strings to match.
      if (memcmp(NameR.data()+0, "600.t", 5))
        break;
      switch (NameR[5]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(NameR.data()+6, "xc", 2))
          break;
        return AMDGPUIntrinsic::R600_texc;	 // "600.texc"
      case 'x':	 // 2 strings to match.
        switch (NameR[6]) {
        default: break;
        case 'b':	 // 1 string to match.
          if (NameR[7] != 'c')
            break;
          return AMDGPUIntrinsic::R600_txbc;	 // "600.txbc"
        case 'l':	 // 1 string to match.
          if (NameR[7] != 'c')
            break;
          return AMDGPUIntrinsic::R600_txlc;	 // "600.txlc"
        }
        break;
      }
      break;
    case 14:	 // 1 string to match.
      if (memcmp(NameR.data()+0, "600.load.input", 14))
        break;
      return AMDGPUIntrinsic::R600_load_input;	 // "600.load.input"
    case 15:	 // 2 strings to match.
      if (memcmp(NameR.data()+0, "600.", 4))
        break;
      switch (NameR[4]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (memcmp(NameR.data()+5, "oad.texbuf", 10))
          break;
        return AMDGPUIntrinsic::R600_load_texbuf;	 // "600.load.texbuf"
      case 's':	 // 1 string to match.
        if (memcmp(NameR.data()+5, "tore.dummy", 10))
          break;
        return AMDGPUIntrinsic::R600_store_dummy;	 // "600.store.dummy"
      }
      break;
    case 16:	 // 1 string to match.
      if (memcmp(NameR.data()+0, "600.interp.input", 16))
        break;
      return AMDGPUIntrinsic::R600_interp_input;	 // "600.interp.input"
    case 17:	 // 1 string to match.
      if (memcmp(NameR.data()+0, "600.store.swizzle", 17))
        break;
      return AMDGPUIntrinsic::R600_store_swizzle;	 // "600.store.swizzle"
    case 21:	 // 1 string to match.
      if (memcmp(NameR.data()+0, "600.store.pixel.depth", 21))
        break;
      return AMDGPUIntrinsic::R600_store_pixel_depth;	 // "600.store.pixel.depth"
    case 23:	 // 2 strings to match.
      if (memcmp(NameR.data()+0, "600.store.", 10))
        break;
      switch (NameR[10]) {
      default: break;
      case 'p':	 // 1 string to match.
        if (memcmp(NameR.data()+11, "ixel.stencil", 12))
          break;
        return AMDGPUIntrinsic::R600_store_pixel_stencil;	 // "600.store.pixel.stencil"
      case 's':	 // 1 string to match.
        if (memcmp(NameR.data()+11, "tream.output", 12))
          break;
        return AMDGPUIntrinsic::R600_store_stream_output;	 // "600.store.stream.output"
      }
      break;
    }
    break;  // end of 'R' case.
  case 'S':
    if (NameR.startswith("I.samplel.")) return AMDGPUIntrinsic::SI_samplel;
    if (NameR.startswith("I.sampled.")) return AMDGPUIntrinsic::SI_sampled;
    if (NameR.startswith("I.sampleb.")) return AMDGPUIntrinsic::SI_sampleb;
    if (NameR.startswith("I.sample.")) return AMDGPUIntrinsic::SI_sample;
    if (NameR.startswith("I.imageload.")) return AMDGPUIntrinsic::SI_imageload;
    switch (NameR.size()) {
    default: break;
    case 4:	 // 1 string to match.
      if (memcmp(NameR.data()+0, "I.if", 4))
        break;
      return AMDGPUIntrinsic::SI_if;	 // "I.if"
    case 5:	 // 1 string to match.
      if (memcmp(NameR.data()+0, "I.tid", 5))
        break;
      return AMDGPUIntrinsic::SI_tid;	 // "I.tid"
    case 6:	 // 2 strings to match.
      if (memcmp(NameR.data()+0, "I.", 2))
        break;
      switch (NameR[2]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(NameR.data()+3, "lse", 3))
          break;
        return AMDGPUIntrinsic::SI_else;	 // "I.else"
      case 'l':	 // 1 string to match.
        if (memcmp(NameR.data()+3, "oop", 3))
          break;
        return AMDGPUIntrinsic::SI_loop;	 // "I.loop"
      }
      break;
    case 7:	 // 1 string to match.
      if (memcmp(NameR.data()+0, "I.break", 7))
        break;
      return AMDGPUIntrinsic::SI_break;	 // "I.break"
    case 8:	 // 2 strings to match.
      if (memcmp(NameR.data()+0, "I.e", 3))
        break;
      switch (NameR[3]) {
      default: break;
      case 'n':	 // 1 string to match.
        if (memcmp(NameR.data()+4, "d.cf", 4))
          break;
        return AMDGPUIntrinsic::SI_end_cf;	 // "I.end.cf"
      case 'x':	 // 1 string to match.
        if (memcmp(NameR.data()+4, "port", 4))
          break;
        return AMDGPUIntrinsic::SI_export;	 // "I.export"
      }
      break;
    case 9:	 // 2 strings to match.
      if (memcmp(NameR.data()+0, "I.", 2))
        break;
      switch (NameR[2]) {
      default: break;
      case 'p':	 // 1 string to match.
        if (memcmp(NameR.data()+3, "ackf16", 6))
          break;
        return AMDGPUIntrinsic::SI_packf16;	 // "I.packf16"
      case 'r':	 // 1 string to match.
        if (memcmp(NameR.data()+3, "esinfo", 6))
          break;
        return AMDGPUIntrinsic::SI_resinfo;	 // "I.resinfo"
      }
      break;
    case 10:	 // 1 string to match.
      if (memcmp(NameR.data()+0, "I.if.break", 10))
        break;
      return AMDGPUIntrinsic::SI_if_break;	 // "I.if.break"
    case 11:	 // 1 string to match.
      if (memcmp(NameR.data()+0, "I.fs.interp", 11))
        break;
      return AMDGPUIntrinsic::SI_fs_interp;	 // "I.fs.interp"
    case 12:	 // 2 strings to match.
      if (memcmp(NameR.data()+0, "I.", 2))
        break;
      switch (NameR[2]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(NameR.data()+3, "lse.break", 9))
          break;
        return AMDGPUIntrinsic::SI_else_break;	 // "I.else.break"
      case 'l':	 // 1 string to match.
        if (memcmp(NameR.data()+3, "oad.const", 9))
          break;
        return AMDGPUIntrinsic::SI_load_const;	 // "I.load.const"
      }
      break;
    case 13:	 // 1 string to match.
      if (memcmp(NameR.data()+0, "I.fs.constant", 13))
        break;
      return AMDGPUIntrinsic::SI_fs_constant;	 // "I.fs.constant"
    case 15:	 // 1 string to match.
      if (memcmp(NameR.data()+0, "I.vs.load.input", 15))
        break;
      return AMDGPUIntrinsic::SI_vs_load_input;	 // "I.vs.load.input"
    }
    break;  // end of 'S' case.
  case 'T':
    switch (NameR.size()) {
    default: break;
    case 9:	 // 1 string to match.
      if (memcmp(NameR.data()+0, "GSI.lit.z", 9))
        break;
      return AMDGPUIntrinsic::TGSI_lit_z;	 // "GSI.lit.z"
    }
    break;  // end of 'T' case.
  }
#endif

// Global intrinsic function declaration type table.
#ifdef GET_INTRINSIC_GENERATOR_GLOBAL
static const unsigned IIT_Table[] = {
  0x74, 0x0, 0x7777, 0x7A7A, 0x4447A7A, 0x4447A7A, 0x777, 
  0x7A7A7, 0x444, 0x444, 0x70, 0x0, 0x47, 0x47A, 0x7777, 
  0x777, 0x7777A, 0x777, 0x77, 0x40, 0x77, 0x777, 0x777, 
  0x777, 0x777, 0x777, 0x470, 0x47A7A, 0x4447A7A, 0x77, 0x4447A7A, 
  (1U<<31) | 60, (1U<<31) | 49, 0x4447A7A, 0x4447A7A, 0x444, 0x444, 0xF0F, 0x1F1F, 
  0x1F1F, 0x1F1F, 0xF0F0F0F, 0xF0F0F, 0xF0F, 0xF0F0F0F, 0xF0F0F0F, 0xF0F, 
  0xF0F, 0xF0F, (1U<<31) | 0, 0xF0F, 0xF0F0F, 0xF0F0F, 0x1F1F1F1F, 0x4F1F, 
  0x5F0F, 0x5F0F, 0x5F0F, 0x5F0F, 0x5F0F, 0x5F0F, 0x1F1F, 0x1F1F, 
  0x1F1F1F, 0x79797, 0x779797, 0x7A7A7, 0x7A7A7, 0x88, 0x1F1F, 0x1F1F, 
  0x1F1F, 0x1F1F1F1F, 0x1F1F, 0x859, 0x8F5F1F, 0x1F1F, 0x1F1F1F1F, 0x1F1F, 
  0x1F1F, 0x1F1F1F, 0xF0F0F, 0xF0F0F, 0xF0F0F0F, 0xF0F0F0F, 0x7A4, 0xF0F0F0F, 
  0xF0F0F0F, 0x44A4A4, 0xF0F0F0F, 0x4F1F, 0x4F1F, 0x4F1F, 0x4F1F, 0x1F1F1F, 
  0xF0F0F, 0xF0F0F, 0xF0F0F, 0xF0F0F, 0xF0F0F, 0xF0F0F, 0xF0F0F, 0xF0F0F, 
  0x1F1F, 0x1F1F1F, 0x1F1F, 0x1F1F, 0x1F1F, 0x1F1F, 0x1F1F, 0x1F1F, 
  0x1F1F, 0x1F1F, 0x1F1F, 0x1F1F, 0x1F1F, 0xF0F0F, (1U<<31) | 35, (1U<<31) | 35, 
  0x447, 0x47, 0x447A, 0x40, 0x70, 0x70, 0x4447A0, 0x447A0, 
  (1U<<31) | 35, (1U<<31) | 35, (1U<<31) | 35, (1U<<31) | 35, (1U<<31) | 21, (1U<<31) | 35, (1U<<31) | 35, (1U<<31) | 21, 
  0x55, (1U<<31) | 91, 0x555, 0x50, (1U<<31) | 72, 0x4447, 0x494447, (1U<<31) | 83, 
  0x515, 0x42D2F4A, 0x42C7, (1U<<31) | 87, 0x774, 0x42D44A, (1U<<31) | 11, (1U<<31) | 11, 
  (1U<<31) | 11, (1U<<31) | 11, 0x4, 0x432C7A, 0x7777, 0
};

static const unsigned char IIT_LongEncodingTable[] = {
  /* 0 */ 15, 0, 15, 0, 15, 0, 15, 0, 15, 0, 0,
  /* 11 */ 10, 7, 15, 2, 13, 2, 12, 2, 4, 0,
  /* 21 */ 10, 4, 10, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 0,
  /* 35 */ 10, 7, 10, 7, 4, 4, 4, 4, 4, 4, 4, 4, 4, 0,
  /* 49 */ 10, 7, 10, 7, 4, 4, 4, 4, 4, 4, 0,
  /* 60 */ 10, 7, 10, 7, 10, 7, 10, 7, 4, 4, 4, 0,
  /* 72 */ 0, 4, 4, 4, 4, 4, 7, 7, 7, 7, 0,
  /* 83 */ 5, 1, 18, 0,
  /* 87 */ 0, 5, 18, 0,
  /* 91 */ 5, 5, 18, 0,
  255
};

#endif

// Add parameter attributes that are not common to all intrinsics.
#ifdef GET_INTRINSIC_ATTRIBUTES
static AttributeSet getAttributes(LLVMContext &C, AMDGPUIntrinsic::ID id) {
  static const uint8_t IntrinsicsToAttributesMap[] = {
    1, // llvm.AMDGPU.arl
    2, // llvm.AMDGPU.barrier.local
    1, // llvm.AMDGPU.cndlt
    1, // llvm.AMDGPU.cube
    1, // llvm.AMDGPU.ddx
    1, // llvm.AMDGPU.ddy
    1, // llvm.AMDGPU.div
    1, // llvm.AMDGPU.dp4
    1, // llvm.AMDGPU.imax
    1, // llvm.AMDGPU.imin
    2, // llvm.AMDGPU.kill
    2, // llvm.AMDGPU.kilp
    1, // llvm.AMDGPU.load.const
    1, // llvm.AMDGPU.load.imm
    1, // llvm.AMDGPU.lrp
    1, // llvm.AMDGPU.mul
    1, // llvm.AMDGPU.mullit
    1, // llvm.AMDGPU.pow
    1, // llvm.AMDGPU.rcp
    1, // llvm.AMDGPU.reserve.reg
    1, // llvm.AMDGPU.rsq
    1, // llvm.AMDGPU.seq
    1, // llvm.AMDGPU.sge
    1, // llvm.AMDGPU.sgt
    1, // llvm.AMDGPU.sle
    1, // llvm.AMDGPU.sne
    2, // llvm.AMDGPU.store.output
    1, // llvm.AMDGPU.swizzle
    1, // llvm.AMDGPU.tex
    1, // llvm.AMDGPU.trunc
    1, // llvm.AMDGPU.txb
    1, // llvm.AMDGPU.txd
    1, // llvm.AMDGPU.txf
    1, // llvm.AMDGPU.txl
    1, // llvm.AMDGPU.txq
    1, // llvm.AMDGPU.umax
    1, // llvm.AMDGPU.umin
    1, // llvm.AMDIL.abs
    1, // llvm.AMDIL.acos
    1, // llvm.AMDIL.asin
    1, // llvm.AMDIL.atan
    1, // llvm.AMDIL.bfi
    1, // llvm.AMDIL.bfm
    1, // llvm.AMDIL.bit.count.i32
    1, // llvm.AMDIL.bit.extract.i32
    1, // llvm.AMDIL.bit.extract.u32
    1, // llvm.AMDIL.bit.find.first.hi
    1, // llvm.AMDIL.bit.find.first.lo
    1, // llvm.AMDIL.bit.find.first.sgn
    1, // llvm.AMDIL.bit.insert.u32
    1, // llvm.AMDIL.bit.reverse.u32
    1, // llvm.AMDIL.borrow.i32
    1, // llvm.AMDIL.carry.i32
    1, // llvm.AMDIL.clamp
    1, // llvm.AMDIL.convert.f16.f32
    1, // llvm.AMDIL.convert.f32.f16
    1, // llvm.AMDIL.convert.f32.f16.near
    1, // llvm.AMDIL.convert.f32.f16.neg.inf
    1, // llvm.AMDIL.convert.f32.f16.plus.inf
    1, // llvm.AMDIL.convert.f32.i32.flr
    1, // llvm.AMDIL.convert.f32.i32.rpi
    1, // llvm.AMDIL.cos
    1, // llvm.AMDIL.cos.vec
    1, // llvm.AMDIL.div
    2, // llvm.AMDIL.dp2
    2, // llvm.AMDIL.dp2.add
    2, // llvm.AMDIL.dp3
    2, // llvm.AMDIL.dp4
    2, // llvm.AMDIL.drcp
    1, // llvm.AMDIL.exn
    1, // llvm.AMDIL.exp
    1, // llvm.AMDIL.exp.vec
    1, // llvm.AMDIL.fma
    1, // llvm.AMDIL.fraction
    2, // llvm.AMDIL.frexp.f64
    2, // llvm.AMDIL.ldexp
    1, // llvm.AMDIL.length
    1, // llvm.AMDIL.lerp
    1, // llvm.AMDIL.ln
    1, // llvm.AMDIL.log.vec
    1, // llvm.AMDIL.max
    1, // llvm.AMDIL.max.i32
    1, // llvm.AMDIL.max.u32
    1, // llvm.AMDIL.media.bitalign
    1, // llvm.AMDIL.media.bytealign
    2, // llvm.AMDIL.media.convert.f2v4u8
    1, // llvm.AMDIL.media.lerp.u4
    1, // llvm.AMDIL.media.sad
    2, // llvm.AMDIL.media.sad4
    1, // llvm.AMDIL.media.sad.hi
    1, // llvm.AMDIL.media.unpack.byte.0
    1, // llvm.AMDIL.media.unpack.byte.1
    1, // llvm.AMDIL.media.unpack.byte.2
    1, // llvm.AMDIL.media.unpack.byte.3
    1, // llvm.AMDIL.min
    1, // llvm.AMDIL.min.i32
    1, // llvm.AMDIL.min.u32
    1, // llvm.AMDIL.mul24.i32
    1, // llvm.AMDIL.mul24.u32
    1, // llvm.AMDIL.mulhi24.i32
    1, // llvm.AMDIL.mulhi24.u32
    1, // llvm.AMDIL.mulhi.i32
    1, // llvm.AMDIL.mulhi.u32
    1, // llvm.AMDIL.pireduce
    1, // llvm.AMDIL.pow
    1, // llvm.AMDIL.round.nearest
    1, // llvm.AMDIL.round.neginf
    1, // llvm.AMDIL.round.zero
    1, // llvm.AMDIL.rsq
    1, // llvm.AMDIL.rsq.vec
    1, // llvm.AMDIL.sign
    1, // llvm.AMDIL.sin
    1, // llvm.AMDIL.sin.vec
    1, // llvm.AMDIL.sqrt
    1, // llvm.AMDIL.sqrt.vec
    1, // llvm.AMDIL.tan
    1, // llvm.AMDIL.udiv
    1, // llvm.R600.ddx
    1, // llvm.R600.ddy
    1, // llvm.R600.interp.input
    1, // llvm.R600.load.input
    1, // llvm.R600.load.texbuf
    2, // llvm.R600.store.dummy
    2, // llvm.R600.store.pixel.depth
    2, // llvm.R600.store.pixel.stencil
    2, // llvm.R600.store.stream.output
    2, // llvm.R600.store.swizzle
    1, // llvm.R600.tex
    1, // llvm.R600.texc
    1, // llvm.R600.txb
    1, // llvm.R600.txbc
    1, // llvm.R600.txf
    1, // llvm.R600.txl
    1, // llvm.R600.txlc
    1, // llvm.R600.txq
    2, // llvm.SI.break
    2, // llvm.SI.else
    2, // llvm.SI.else.break
    2, // llvm.SI.end.cf
    2, // llvm.SI.export
    1, // llvm.SI.fs.constant
    1, // llvm.SI.fs.interp
    2, // llvm.SI.if
    2, // llvm.SI.if.break
    1, // llvm.SI.imageload
    1, // llvm.SI.load.const
    2, // llvm.SI.loop
    1, // llvm.SI.packf16
    1, // llvm.SI.resinfo
    1, // llvm.SI.sample
    1, // llvm.SI.sampleb
    1, // llvm.SI.sampled
    1, // llvm.SI.samplel
    1, // llvm.SI.tid
    1, // llvm.SI.vs.load.input
    1, // llvm.TGSI.lit.z
  };

  AttributeSet AS[1];
  unsigned NumAttrs = 0;
  if (id != 0) {
    SmallVector<Attribute::AttrKind, 8> AttrVec;
    switch(IntrinsicsToAttributesMap[id - Intrinsic::num_intrinsics]) {
    default: llvm_unreachable("Invalid attribute number");
    case 1:
      AttrVec.clear();
      AttrVec.push_back(Attribute::NoUnwind);
      AttrVec.push_back(Attribute::ReadNone);
      AS[0] = AttributeSet::get(C, AttributeSet::FunctionIndex, AttrVec);
      NumAttrs = 1;
      break;
    case 2:
      AttrVec.clear();
      AttrVec.push_back(Attribute::NoUnwind);
      AS[0] = AttributeSet::get(C, AttributeSet::FunctionIndex, AttrVec);
      NumAttrs = 1;
      break;
    }
  }
  return AttributeSet::get(C, ArrayRef<AttributeSet>(AS, NumAttrs));
}
#endif // GET_INTRINSIC_ATTRIBUTES

// Determine intrinsic alias analysis mod/ref behavior.
#ifdef GET_INTRINSIC_MODREF_BEHAVIOR
assert(iid <= Intrinsic::TGSI_lit_z && "Unknown intrinsic.");

static const uint8_t IntrinsicModRefBehavior[] = {
  /* invalid */ UnknownModRefBehavior,
  /* AMDGPUAMDGPU_arl */ DoesNotAccessMemory,
  /* AMDGPUAMDGPU_barrier_local */ UnknownModRefBehavior,
  /* AMDGPUAMDGPU_cndlt */ DoesNotAccessMemory,
  /* AMDGPUAMDGPU_cube */ DoesNotAccessMemory,
  /* AMDGPUAMDGPU_ddx */ DoesNotAccessMemory,
  /* AMDGPUAMDGPU_ddy */ DoesNotAccessMemory,
  /* AMDGPUAMDGPU_div */ DoesNotAccessMemory,
  /* AMDGPUAMDGPU_dp4 */ DoesNotAccessMemory,
  /* AMDGPUAMDGPU_imax */ DoesNotAccessMemory,
  /* AMDGPUAMDGPU_imin */ DoesNotAccessMemory,
  /* AMDGPUAMDGPU_kill */ UnknownModRefBehavior,
  /* AMDGPUAMDGPU_kilp */ UnknownModRefBehavior,
  /* AMDGPUAMDGPU_load_const */ DoesNotAccessMemory,
  /* AMDGPUAMDGPU_load_imm */ DoesNotAccessMemory,
  /* AMDGPUAMDGPU_lrp */ DoesNotAccessMemory,
  /* AMDGPUAMDGPU_mul */ DoesNotAccessMemory,
  /* AMDGPUAMDGPU_mullit */ DoesNotAccessMemory,
  /* AMDGPUAMDGPU_pow */ DoesNotAccessMemory,
  /* AMDGPUAMDGPU_rcp */ DoesNotAccessMemory,
  /* AMDGPUAMDGPU_reserve_reg */ DoesNotAccessMemory,
  /* AMDGPUAMDGPU_rsq */ DoesNotAccessMemory,
  /* AMDGPUAMDGPU_seq */ DoesNotAccessMemory,
  /* AMDGPUAMDGPU_sge */ DoesNotAccessMemory,
  /* AMDGPUAMDGPU_sgt */ DoesNotAccessMemory,
  /* AMDGPUAMDGPU_sle */ DoesNotAccessMemory,
  /* AMDGPUAMDGPU_sne */ DoesNotAccessMemory,
  /* AMDGPUAMDGPU_store_output */ UnknownModRefBehavior,
  /* AMDGPUAMDGPU_swizzle */ DoesNotAccessMemory,
  /* AMDGPUAMDGPU_tex */ DoesNotAccessMemory,
  /* AMDGPUAMDGPU_trunc */ DoesNotAccessMemory,
  /* AMDGPUAMDGPU_txb */ DoesNotAccessMemory,
  /* AMDGPUAMDGPU_txd */ DoesNotAccessMemory,
  /* AMDGPUAMDGPU_txf */ DoesNotAccessMemory,
  /* AMDGPUAMDGPU_txl */ DoesNotAccessMemory,
  /* AMDGPUAMDGPU_txq */ DoesNotAccessMemory,
  /* AMDGPUAMDGPU_umax */ DoesNotAccessMemory,
  /* AMDGPUAMDGPU_umin */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_abs */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_acos */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_asin */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_atan */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_bfi */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_bfm */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_bit_count_i32 */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_bit_extract_i32 */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_bit_extract_u32 */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_bit_find_first_hi */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_bit_find_first_lo */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_bit_find_first_sgn */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_bit_insert_u32 */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_bit_reverse_u32 */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_borrow_i32 */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_carry_i32 */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_clamp */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_convert_f16_f32 */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_convert_f32_f16 */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_convert_f32_f16_near */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_convert_f32_f16_neg_inf */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_convert_f32_f16_plus_inf */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_convert_f32_i32_flr */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_convert_f32_i32_rpi */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_cos */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_cos_vec */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_div */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_dp2 */ UnknownModRefBehavior,
  /* AMDGPUAMDIL_dp2_add */ UnknownModRefBehavior,
  /* AMDGPUAMDIL_dp3 */ UnknownModRefBehavior,
  /* AMDGPUAMDIL_dp4 */ UnknownModRefBehavior,
  /* AMDGPUAMDIL_drcp */ UnknownModRefBehavior,
  /* AMDGPUAMDIL_exn */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_exp */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_exp_vec */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_fma */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_fraction */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_frexp_f64 */ UnknownModRefBehavior,
  /* AMDGPUAMDIL_ldexp */ UnknownModRefBehavior,
  /* AMDGPUAMDIL_length */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_lerp */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_ln */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_log_vec */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_max */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_max_i32 */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_max_u32 */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_media_bitalign */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_media_bytealign */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_media_convert_f2v4u8 */ UnknownModRefBehavior,
  /* AMDGPUAMDIL_media_lerp_u4 */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_media_sad */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_media_sad4 */ UnknownModRefBehavior,
  /* AMDGPUAMDIL_media_sad_hi */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_media_unpack_byte_0 */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_media_unpack_byte_1 */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_media_unpack_byte_2 */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_media_unpack_byte_3 */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_min */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_min_i32 */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_min_u32 */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_mul24_i32 */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_mul24_u32 */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_mulhi24_i32 */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_mulhi24_u32 */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_mulhi_i32 */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_mulhi_u32 */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_pireduce */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_pow */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_round_nearest */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_round_neginf */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_round_zero */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_rsq */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_rsq_vec */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_sign */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_sin */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_sin_vec */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_sqrt */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_sqrt_vec */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_tan */ DoesNotAccessMemory,
  /* AMDGPUAMDIL_udiv */ DoesNotAccessMemory,
  /* AMDGPUR600_ddx */ DoesNotAccessMemory,
  /* AMDGPUR600_ddy */ DoesNotAccessMemory,
  /* AMDGPUR600_interp_input */ DoesNotAccessMemory,
  /* AMDGPUR600_load_input */ DoesNotAccessMemory,
  /* AMDGPUR600_load_texbuf */ DoesNotAccessMemory,
  /* AMDGPUR600_store_dummy */ UnknownModRefBehavior,
  /* AMDGPUR600_store_pixel_depth */ UnknownModRefBehavior,
  /* AMDGPUR600_store_pixel_stencil */ UnknownModRefBehavior,
  /* AMDGPUR600_store_stream_output */ UnknownModRefBehavior,
  /* AMDGPUR600_store_swizzle */ UnknownModRefBehavior,
  /* AMDGPUR600_tex */ DoesNotAccessMemory,
  /* AMDGPUR600_texc */ DoesNotAccessMemory,
  /* AMDGPUR600_txb */ DoesNotAccessMemory,
  /* AMDGPUR600_txbc */ DoesNotAccessMemory,
  /* AMDGPUR600_txf */ DoesNotAccessMemory,
  /* AMDGPUR600_txl */ DoesNotAccessMemory,
  /* AMDGPUR600_txlc */ DoesNotAccessMemory,
  /* AMDGPUR600_txq */ DoesNotAccessMemory,
  /* AMDGPUSI_break */ UnknownModRefBehavior,
  /* AMDGPUSI_else */ UnknownModRefBehavior,
  /* AMDGPUSI_else_break */ UnknownModRefBehavior,
  /* AMDGPUSI_end_cf */ UnknownModRefBehavior,
  /* AMDGPUSI_export */ UnknownModRefBehavior,
  /* AMDGPUSI_fs_constant */ DoesNotAccessMemory,
  /* AMDGPUSI_fs_interp */ DoesNotAccessMemory,
  /* AMDGPUSI_if */ UnknownModRefBehavior,
  /* AMDGPUSI_if_break */ UnknownModRefBehavior,
  /* AMDGPUSI_imageload */ DoesNotAccessMemory,
  /* AMDGPUSI_load_const */ DoesNotAccessMemory,
  /* AMDGPUSI_loop */ UnknownModRefBehavior,
  /* AMDGPUSI_packf16 */ DoesNotAccessMemory,
  /* AMDGPUSI_resinfo */ DoesNotAccessMemory,
  /* AMDGPUSI_sample */ DoesNotAccessMemory,
  /* AMDGPUSI_sampleb */ DoesNotAccessMemory,
  /* AMDGPUSI_sampled */ DoesNotAccessMemory,
  /* AMDGPUSI_samplel */ DoesNotAccessMemory,
  /* AMDGPUSI_tid */ DoesNotAccessMemory,
  /* AMDGPUSI_vs_load_input */ DoesNotAccessMemory,
  /* AMDGPUTGSI_lit_z */ DoesNotAccessMemory,
};

return static_cast<ModRefBehavior>(IntrinsicModRefBehavior[iid]);
#endif // GET_INTRINSIC_MODREF_BEHAVIOR

// Get the LLVM intrinsic that corresponds to a GCC builtin.
// This is used by the C front-end.  The GCC builtin name is passed
// in as BuiltinName, and a target prefix (e.g. 'ppc') is passed
// in as TargetPrefix.  The result is assigned to 'IntrinsicID'.
#ifdef GET_LLVM_INTRINSIC_FOR_GCC_BUILTIN
static AMDGPUIntrinsic::ID getIntrinsicForGCCBuiltin(const char *TargetPrefixStr, const char *BuiltinNameStr) {
  StringRef BuiltinName(BuiltinNameStr);
  StringRef TargetPrefix(TargetPrefixStr);

  if (TargetPrefix == "AMDIL") {
  switch (BuiltinName.size()) {
  default: break;
  case 10:	 // 1 string to match.
    if (memcmp(BuiltinName.data()+0, "__amdil_ln", 10))
      break;
    return AMDGPUIntrinsic::AMDIL_ln;	 // "__amdil_ln"
  case 11:	 // 19 strings to match.
    if (memcmp(BuiltinName.data()+0, "__amdil_", 8))
      break;
    switch (BuiltinName[8]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(BuiltinName.data()+9, "bs", 2))
        break;
      return AMDGPUIntrinsic::AMDIL_abs;	 // "__amdil_abs"
    case 'b':	 // 2 strings to match.
      if (BuiltinName[9] != 'f')
        break;
      switch (BuiltinName[10]) {
      default: break;
      case 'i':	 // 1 string to match.
        return AMDGPUIntrinsic::AMDIL_bfi;	 // "__amdil_bfi"
      case 'm':	 // 1 string to match.
        return AMDGPUIntrinsic::AMDIL_bfm;	 // "__amdil_bfm"
      }
      break;
    case 'c':	 // 1 string to match.
      if (memcmp(BuiltinName.data()+9, "os", 2))
        break;
      return AMDGPUIntrinsic::AMDIL_cos;	 // "__amdil_cos"
    case 'd':	 // 4 strings to match.
      switch (BuiltinName[9]) {
      default: break;
      case 'i':	 // 1 string to match.
        if (BuiltinName[10] != 'v')
          break;
        return AMDGPUIntrinsic::AMDIL_div;	 // "__amdil_div"
      case 'p':	 // 3 strings to match.
        switch (BuiltinName[10]) {
        default: break;
        case '2':	 // 1 string to match.
          return AMDGPUIntrinsic::AMDIL_dp2;	 // "__amdil_dp2"
        case '3':	 // 1 string to match.
          return AMDGPUIntrinsic::AMDIL_dp3;	 // "__amdil_dp3"
        case '4':	 // 1 string to match.
          return AMDGPUIntrinsic::AMDIL_dp4;	 // "__amdil_dp4"
        }
        break;
      }
      break;
    case 'e':	 // 2 strings to match.
      if (BuiltinName[9] != 'x')
        break;
      switch (BuiltinName[10]) {
      default: break;
      case 'n':	 // 1 string to match.
        return AMDGPUIntrinsic::AMDIL_exn;	 // "__amdil_exn"
      case 'p':	 // 1 string to match.
        return AMDGPUIntrinsic::AMDIL_exp;	 // "__amdil_exp"
      }
      break;
    case 'f':	 // 1 string to match.
      if (memcmp(BuiltinName.data()+9, "ma", 2))
        break;
      return AMDGPUIntrinsic::AMDIL_fma;	 // "__amdil_fma"
    case 'm':	 // 2 strings to match.
      switch (BuiltinName[9]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (BuiltinName[10] != 'x')
          break;
        return AMDGPUIntrinsic::AMDIL_max;	 // "__amdil_max"
      case 'i':	 // 1 string to match.
        if (BuiltinName[10] != 'n')
          break;
        return AMDGPUIntrinsic::AMDIL_min;	 // "__amdil_min"
      }
      break;
    case 'p':	 // 1 string to match.
      if (memcmp(BuiltinName.data()+9, "ow", 2))
        break;
      return AMDGPUIntrinsic::AMDIL_pow;	 // "__amdil_pow"
    case 'r':	 // 2 strings to match.
      switch (BuiltinName[9]) {
      default: break;
      case 'c':	 // 1 string to match.
        if (BuiltinName[10] != 'p')
          break;
        return AMDGPUIntrinsic::AMDIL_drcp;	 // "__amdil_rcp"
      case 's':	 // 1 string to match.
        if (BuiltinName[10] != 'q')
          break;
        return AMDGPUIntrinsic::AMDIL_rsq;	 // "__amdil_rsq"
      }
      break;
    case 's':	 // 2 strings to match.
      switch (BuiltinName[9]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (BuiltinName[10] != 'd')
          break;
        return AMDGPUIntrinsic::AMDIL_media_sad;	 // "__amdil_sad"
      case 'i':	 // 1 string to match.
        if (BuiltinName[10] != 'n')
          break;
        return AMDGPUIntrinsic::AMDIL_sin;	 // "__amdil_sin"
      }
      break;
    case 't':	 // 1 string to match.
      if (memcmp(BuiltinName.data()+9, "an", 2))
        break;
      return AMDGPUIntrinsic::AMDIL_tan;	 // "__amdil_tan"
    }
    break;
  case 12:	 // 12 strings to match.
    if (memcmp(BuiltinName.data()+0, "__amdil_", 8))
      break;
    switch (BuiltinName[8]) {
    default: break;
    case 'a':	 // 3 strings to match.
      switch (BuiltinName[9]) {
      default: break;
      case 'c':	 // 1 string to match.
        if (memcmp(BuiltinName.data()+10, "os", 2))
          break;
        return AMDGPUIntrinsic::AMDIL_acos;	 // "__amdil_acos"
      case 's':	 // 1 string to match.
        if (memcmp(BuiltinName.data()+10, "in", 2))
          break;
        return AMDGPUIntrinsic::AMDIL_asin;	 // "__amdil_asin"
      case 't':	 // 1 string to match.
        if (memcmp(BuiltinName.data()+10, "an", 2))
          break;
        return AMDGPUIntrinsic::AMDIL_atan;	 // "__amdil_atan"
      }
      break;
    case 'i':	 // 2 strings to match.
      if (BuiltinName[9] != 'm')
        break;
      switch (BuiltinName[10]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (BuiltinName[11] != 'x')
          break;
        return AMDGPUIntrinsic::AMDIL_max_i32;	 // "__amdil_imax"
      case 'i':	 // 1 string to match.
        if (BuiltinName[11] != 'n')
          break;
        return AMDGPUIntrinsic::AMDIL_min_i32;	 // "__amdil_imin"
      }
      break;
    case 'l':	 // 1 string to match.
      if (memcmp(BuiltinName.data()+9, "erp", 3))
        break;
      return AMDGPUIntrinsic::AMDIL_lerp;	 // "__amdil_lerp"
    case 's':	 // 3 strings to match.
      switch (BuiltinName[9]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(BuiltinName.data()+10, "d4", 2))
          break;
        return AMDGPUIntrinsic::AMDIL_media_sad4;	 // "__amdil_sad4"
      case 'i':	 // 1 string to match.
        if (memcmp(BuiltinName.data()+10, "gn", 2))
          break;
        return AMDGPUIntrinsic::AMDIL_sign;	 // "__amdil_sign"
      case 'q':	 // 1 string to match.
        if (memcmp(BuiltinName.data()+10, "rt", 2))
          break;
        return AMDGPUIntrinsic::AMDIL_sqrt;	 // "__amdil_sqrt"
      }
      break;
    case 'u':	 // 3 strings to match.
      switch (BuiltinName[9]) {
      default: break;
      case 'd':	 // 1 string to match.
        if (memcmp(BuiltinName.data()+10, "iv", 2))
          break;
        return AMDGPUIntrinsic::AMDIL_udiv;	 // "__amdil_udiv"
      case 'm':	 // 2 strings to match.
        switch (BuiltinName[10]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (BuiltinName[11] != 'x')
            break;
          return AMDGPUIntrinsic::AMDIL_max_u32;	 // "__amdil_umax"
        case 'i':	 // 1 string to match.
          if (BuiltinName[11] != 'n')
            break;
          return AMDGPUIntrinsic::AMDIL_min_u32;	 // "__amdil_umin"
        }
        break;
      }
      break;
    }
    break;
  case 13:	 // 5 strings to match.
    if (memcmp(BuiltinName.data()+0, "__amdil_", 8))
      break;
    switch (BuiltinName[8]) {
    default: break;
    case 'c':	 // 2 strings to match.
      switch (BuiltinName[9]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(BuiltinName.data()+10, "rry", 3))
          break;
        return AMDGPUIntrinsic::AMDIL_carry_i32;	 // "__amdil_carry"
      case 'l':	 // 1 string to match.
        if (memcmp(BuiltinName.data()+10, "amp", 3))
          break;
        return AMDGPUIntrinsic::AMDIL_clamp;	 // "__amdil_clamp"
      }
      break;
    case 'f':	 // 1 string to match.
      if (memcmp(BuiltinName.data()+9, "rexp", 4))
        break;
      return AMDGPUIntrinsic::AMDIL_frexp_f64;	 // "__amdil_frexp"
    case 'l':	 // 1 string to match.
      if (memcmp(BuiltinName.data()+9, "dexp", 4))
        break;
      return AMDGPUIntrinsic::AMDIL_ldexp;	 // "__amdil_ldexp"
    case 's':	 // 1 string to match.
      if (memcmp(BuiltinName.data()+9, "adhi", 4))
        break;
      return AMDGPUIntrinsic::AMDIL_media_sad_hi;	 // "__amdil_sadhi"
    }
    break;
  case 14:	 // 8 strings to match.
    if (memcmp(BuiltinName.data()+0, "__amdil_", 8))
      break;
    switch (BuiltinName[8]) {
    default: break;
    case 'b':	 // 1 string to match.
      if (memcmp(BuiltinName.data()+9, "orrow", 5))
        break;
      return AMDGPUIntrinsic::AMDIL_borrow_i32;	 // "__amdil_borrow"
    case 'f':	 // 3 strings to match.
      switch (BuiltinName[9]) {
      default: break;
      case '_':	 // 1 string to match.
        if (memcmp(BuiltinName.data()+10, "2_u4", 4))
          break;
        return AMDGPUIntrinsic::AMDIL_media_convert_f2v4u8;	 // "__amdil_f_2_u4"
      case 'f':	 // 2 strings to match.
        if (memcmp(BuiltinName.data()+10, "b_", 2))
          break;
        switch (BuiltinName[12]) {
        default: break;
        case 'h':	 // 1 string to match.
          if (BuiltinName[13] != 'i')
            break;
          return AMDGPUIntrinsic::AMDIL_bit_find_first_hi;	 // "__amdil_ffb_hi"
        case 'l':	 // 1 string to match.
          if (BuiltinName[13] != 'o')
            break;
          return AMDGPUIntrinsic::AMDIL_bit_find_first_lo;	 // "__amdil_ffb_lo"
        }
        break;
      }
      break;
    case 'i':	 // 1 string to match.
      if (memcmp(BuiltinName.data()+9, "mul24", 5))
        break;
      return AMDGPUIntrinsic::AMDIL_mul24_i32;	 // "__amdil_imul24"
    case 'l':	 // 1 string to match.
      if (memcmp(BuiltinName.data()+9, "ength", 5))
        break;
      return AMDGPUIntrinsic::AMDIL_length;	 // "__amdil_length"
    case 'u':	 // 2 strings to match.
      switch (BuiltinName[9]) {
      default: break;
      case '4':	 // 1 string to match.
        if (memcmp(BuiltinName.data()+10, "lerp", 4))
          break;
        return AMDGPUIntrinsic::AMDIL_media_lerp_u4;	 // "__amdil_u4lerp"
      case 'm':	 // 1 string to match.
        if (memcmp(BuiltinName.data()+10, "ul24", 4))
          break;
        return AMDGPUIntrinsic::AMDIL_mul24_u32;	 // "__amdil_umul24"
      }
      break;
    }
    break;
  case 15:	 // 6 strings to match.
    if (memcmp(BuiltinName.data()+0, "__amdil_", 8))
      break;
    switch (BuiltinName[8]) {
    default: break;
    case 'c':	 // 1 string to match.
      if (memcmp(BuiltinName.data()+9, "os_vec", 6))
        break;
      return AMDGPUIntrinsic::AMDIL_cos_vec;	 // "__amdil_cos_vec"
    case 'd':	 // 1 string to match.
      if (memcmp(BuiltinName.data()+9, "p2_add", 6))
        break;
      return AMDGPUIntrinsic::AMDIL_dp2_add;	 // "__amdil_dp2_add"
    case 'e':	 // 1 string to match.
      if (memcmp(BuiltinName.data()+9, "xp_vec", 6))
        break;
      return AMDGPUIntrinsic::AMDIL_exp_vec;	 // "__amdil_exp_vec"
    case 'l':	 // 1 string to match.
      if (memcmp(BuiltinName.data()+9, "og_vec", 6))
        break;
      return AMDGPUIntrinsic::AMDIL_log_vec;	 // "__amdil_log_vec"
    case 'r':	 // 1 string to match.
      if (memcmp(BuiltinName.data()+9, "sq_vec", 6))
        break;
      return AMDGPUIntrinsic::AMDIL_rsq_vec;	 // "__amdil_rsq_vec"
    case 's':	 // 1 string to match.
      if (memcmp(BuiltinName.data()+9, "in_vec", 6))
        break;
      return AMDGPUIntrinsic::AMDIL_sin_vec;	 // "__amdil_sin_vec"
    }
    break;
  case 16:	 // 8 strings to match.
    if (memcmp(BuiltinName.data()+0, "__amdil_", 8))
      break;
    switch (BuiltinName[8]) {
    default: break;
    case 'b':	 // 1 string to match.
      if (memcmp(BuiltinName.data()+9, "italign", 7))
        break;
      return AMDGPUIntrinsic::AMDIL_media_bitalign;	 // "__amdil_bitalign"
    case 'f':	 // 1 string to match.
      if (memcmp(BuiltinName.data()+9, "raction", 7))
        break;
      return AMDGPUIntrinsic::AMDIL_fraction;	 // "__amdil_fraction"
    case 'p':	 // 1 string to match.
      if (memcmp(BuiltinName.data()+9, "ireduce", 7))
        break;
      return AMDGPUIntrinsic::AMDIL_pireduce;	 // "__amdil_pireduce"
    case 's':	 // 1 string to match.
      if (memcmp(BuiltinName.data()+9, "qrt_vec", 7))
        break;
      return AMDGPUIntrinsic::AMDIL_sqrt_vec;	 // "__amdil_sqrt_vec"
    case 'u':	 // 4 strings to match.
      if (memcmp(BuiltinName.data()+9, "npack_", 6))
        break;
      switch (BuiltinName[15]) {
      default: break;
      case '0':	 // 1 string to match.
        return AMDGPUIntrinsic::AMDIL_media_unpack_byte_0;	 // "__amdil_unpack_0"
      case '1':	 // 1 string to match.
        return AMDGPUIntrinsic::AMDIL_media_unpack_byte_1;	 // "__amdil_unpack_1"
      case '2':	 // 1 string to match.
        return AMDGPUIntrinsic::AMDIL_media_unpack_byte_2;	 // "__amdil_unpack_2"
      case '3':	 // 1 string to match.
        return AMDGPUIntrinsic::AMDIL_media_unpack_byte_3;	 // "__amdil_unpack_3"
      }
      break;
    }
    break;
  case 17:	 // 3 strings to match.
    if (memcmp(BuiltinName.data()+0, "__amdil_", 8))
      break;
    switch (BuiltinName[8]) {
    default: break;
    case 'b':	 // 1 string to match.
      if (memcmp(BuiltinName.data()+9, "ytealign", 8))
        break;
      return AMDGPUIntrinsic::AMDIL_media_bytealign;	 // "__amdil_bytealign"
    case 'i':	 // 1 string to match.
      if (memcmp(BuiltinName.data()+9, "mul_high", 8))
        break;
      return AMDGPUIntrinsic::AMDIL_mulhi_i32;	 // "__amdil_imul_high"
    case 'u':	 // 1 string to match.
      if (memcmp(BuiltinName.data()+9, "mul_high", 8))
        break;
      return AMDGPUIntrinsic::AMDIL_mulhi_u32;	 // "__amdil_umul_high"
    }
    break;
  case 18:	 // 3 strings to match.
    if (memcmp(BuiltinName.data()+0, "__amdil_", 8))
      break;
    switch (BuiltinName[8]) {
    default: break;
    case 'c':	 // 1 string to match.
      if (memcmp(BuiltinName.data()+9, "ount_bits", 9))
        break;
      return AMDGPUIntrinsic::AMDIL_bit_count_i32;	 // "__amdil_count_bits"
    case 'f':	 // 1 string to match.
      if (memcmp(BuiltinName.data()+9, "fb_signed", 9))
        break;
      return AMDGPUIntrinsic::AMDIL_bit_find_first_sgn;	 // "__amdil_ffb_signed"
    case 'r':	 // 1 string to match.
      if (memcmp(BuiltinName.data()+9, "ound_zero", 9))
        break;
      return AMDGPUIntrinsic::AMDIL_round_zero;	 // "__amdil_round_zero"
    }
    break;
  case 19:	 // 3 strings to match.
    if (memcmp(BuiltinName.data()+0, "__amdil_", 8))
      break;
    switch (BuiltinName[8]) {
    default: break;
    case 'i':	 // 1 string to match.
      if (memcmp(BuiltinName.data()+9, "mul24_high", 10))
        break;
      return AMDGPUIntrinsic::AMDIL_mulhi24_i32;	 // "__amdil_imul24_high"
    case 'u':	 // 2 strings to match.
      switch (BuiltinName[9]) {
      default: break;
      case 'b':	 // 1 string to match.
        if (memcmp(BuiltinName.data()+10, "it_insert", 9))
          break;
        return AMDGPUIntrinsic::AMDIL_bit_insert_u32;	 // "__amdil_ubit_insert"
      case 'm':	 // 1 string to match.
        if (memcmp(BuiltinName.data()+10, "ul24_high", 9))
          break;
        return AMDGPUIntrinsic::AMDIL_mulhi24_u32;	 // "__amdil_umul24_high"
      }
      break;
    }
    break;
  case 20:	 // 4 strings to match.
    if (memcmp(BuiltinName.data()+0, "__amdil_", 8))
      break;
    switch (BuiltinName[8]) {
    default: break;
    case 'i':	 // 1 string to match.
      if (memcmp(BuiltinName.data()+9, "bit_extract", 11))
        break;
      return AMDGPUIntrinsic::AMDIL_bit_extract_i32;	 // "__amdil_ibit_extract"
    case 'r':	 // 1 string to match.
      if (memcmp(BuiltinName.data()+9, "ound_neginf", 11))
        break;
      return AMDGPUIntrinsic::AMDIL_round_neginf;	 // "__amdil_round_neginf"
    case 'u':	 // 2 strings to match.
      if (memcmp(BuiltinName.data()+9, "bit_", 4))
        break;
      switch (BuiltinName[13]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(BuiltinName.data()+14, "xtract", 6))
          break;
        return AMDGPUIntrinsic::AMDIL_bit_extract_u32;	 // "__amdil_ubit_extract"
      case 'r':	 // 1 string to match.
        if (memcmp(BuiltinName.data()+14, "everse", 6))
          break;
        return AMDGPUIntrinsic::AMDIL_bit_reverse_u32;	 // "__amdil_ubit_reverse"
      }
      break;
    }
    break;
  case 21:	 // 3 strings to match.
    if (memcmp(BuiltinName.data()+0, "__amdil_", 8))
      break;
    switch (BuiltinName[8]) {
    default: break;
    case 'f':	 // 1 string to match.
      if (memcmp(BuiltinName.data()+9, "loat_to_half", 12))
        break;
      return AMDGPUIntrinsic::AMDIL_convert_f32_f16;	 // "__amdil_float_to_half"
    case 'h':	 // 1 string to match.
      if (memcmp(BuiltinName.data()+9, "alf_to_float", 12))
        break;
      return AMDGPUIntrinsic::AMDIL_convert_f16_f32;	 // "__amdil_half_to_float"
    case 'r':	 // 1 string to match.
      if (memcmp(BuiltinName.data()+9, "ound_nearest", 12))
        break;
      return AMDGPUIntrinsic::AMDIL_round_nearest;	 // "__amdil_round_nearest"
    }
    break;
  case 24:	 // 2 strings to match.
    if (memcmp(BuiltinName.data()+0, "__amdil_float_to_int_", 21))
      break;
    switch (BuiltinName[21]) {
    default: break;
    case 'f':	 // 1 string to match.
      if (memcmp(BuiltinName.data()+22, "lr", 2))
        break;
      return AMDGPUIntrinsic::AMDIL_convert_f32_i32_flr;	 // "__amdil_float_to_int_flr"
    case 'r':	 // 1 string to match.
      if (memcmp(BuiltinName.data()+22, "pi", 2))
        break;
      return AMDGPUIntrinsic::AMDIL_convert_f32_i32_rpi;	 // "__amdil_float_to_int_rpi"
    }
    break;
  case 26:	 // 1 string to match.
    if (memcmp(BuiltinName.data()+0, "__amdil_float_to_half_near", 26))
      break;
    return AMDGPUIntrinsic::AMDIL_convert_f32_f16_near;	 // "__amdil_float_to_half_near"
  case 29:	 // 1 string to match.
    if (memcmp(BuiltinName.data()+0, "__amdil_float_to_half_neg_inf", 29))
      break;
    return AMDGPUIntrinsic::AMDIL_convert_f32_f16_neg_inf;	 // "__amdil_float_to_half_neg_inf"
  case 30:	 // 1 string to match.
    if (memcmp(BuiltinName.data()+0, "__amdil_float_to_half_plus_inf", 30))
      break;
    return AMDGPUIntrinsic::AMDIL_convert_f32_f16_plus_inf;	 // "__amdil_float_to_half_plus_inf"
  }
  }
  return (AMDGPUIntrinsic::ID)Intrinsic::not_intrinsic;
}
#endif

#if defined(_MSC_VER) && defined(setjmp_undefined_for_msvc)
// let's return it to _setjmp state
#  pragma pop_macro("setjmp")
#  undef setjmp_undefined_for_msvc
#endif


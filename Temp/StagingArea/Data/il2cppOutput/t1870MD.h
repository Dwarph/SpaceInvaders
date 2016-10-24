#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1870;
struct t7;
struct t1701;
struct t3159;
struct t52;
struct t50;
struct t3160;
struct t3161;
struct t2898;
struct t2897;
struct t2899;
struct t2901;
#include "t2900.h"

#include "t337MD.h"
#define m17891(__this, method) (( void (*) (t1870 *, const MethodInfo*))m3292_gshared)(__this, method)
#define m10213(__this, p0, method) (( void (*) (t1870 *, int32_t, const MethodInfo*))m11105_gshared)(__this, p0, method)
#define m17892(__this , method) (( void (*) (t7 * , const MethodInfo*))m11107_gshared)(__this , method)
#define m17893(__this, method) (( t7* (*) (t1870 *, const MethodInfo*))m3522_gshared)(__this, method)
#define m17894(__this, p0, p1, method) (( void (*) (t1870 *, t52 *, int32_t, const MethodInfo*))m3505_gshared)(__this, p0, p1, method)
#define m17895(__this, method) (( t7 * (*) (t1870 *, const MethodInfo*))m3501_gshared)(__this, method)
#define m17896(__this, p0, method) (( int32_t (*) (t1870 *, t7 *, const MethodInfo*))m3510_gshared)(__this, p0, method)
#define m17897(__this, p0, method) (( bool (*) (t1870 *, t7 *, const MethodInfo*))m3512_gshared)(__this, p0, method)
#define m17898(__this, p0, method) (( int32_t (*) (t1870 *, t7 *, const MethodInfo*))m3513_gshared)(__this, p0, method)
#define m17899(__this, p0, p1, method) (( void (*) (t1870 *, int32_t, t7 *, const MethodInfo*))m3514_gshared)(__this, p0, p1, method)
#define m17900(__this, p0, method) (( void (*) (t1870 *, t7 *, const MethodInfo*))m3515_gshared)(__this, p0, method)
#define m17901(__this, method) (( bool (*) (t1870 *, const MethodInfo*))m3517_gshared)(__this, method)
#define m17902(__this, method) (( bool (*) (t1870 *, const MethodInfo*))m3503_gshared)(__this, method)
#define m17903(__this, method) (( t7 * (*) (t1870 *, const MethodInfo*))m3504_gshared)(__this, method)
#define m17904(__this, method) (( bool (*) (t1870 *, const MethodInfo*))m3506_gshared)(__this, method)
#define m17905(__this, method) (( bool (*) (t1870 *, const MethodInfo*))m3507_gshared)(__this, method)
#define m17906(__this, p0, method) (( t7 * (*) (t1870 *, int32_t, const MethodInfo*))m3508_gshared)(__this, p0, method)
#define m17907(__this, p0, p1, method) (( void (*) (t1870 *, int32_t, t7 *, const MethodInfo*))m3509_gshared)(__this, p0, p1, method)
#define m17908(__this, p0, method) (( void (*) (t1870 *, t1701 *, const MethodInfo*))m3518_gshared)(__this, p0, method)
#define m17909(__this, p0, method) (( void (*) (t1870 *, int32_t, const MethodInfo*))m11125_gshared)(__this, p0, method)
#define m17910(__this, p0, method) (( void (*) (t1870 *, t7*, const MethodInfo*))m11127_gshared)(__this, p0, method)
#define m17911(__this, p0, method) (( void (*) (t1870 *, t7*, const MethodInfo*))m11129_gshared)(__this, p0, method)
#define m17912(__this, p0, method) (( void (*) (t1870 *, t7*, const MethodInfo*))m11131_gshared)(__this, p0, method)
#define m17913(__this, method) (( t2898 * (*) (t1870 *, const MethodInfo*))m11133_gshared)(__this, method)
#define m17914(__this, method) (( void (*) (t1870 *, const MethodInfo*))m3511_gshared)(__this, method)
#define m17915(__this, p0, method) (( bool (*) (t1870 *, t1701 *, const MethodInfo*))m3519_gshared)(__this, p0, method)
#define m17916(__this, p0, p1, method) (( void (*) (t1870 *, t2897*, int32_t, const MethodInfo*))m3520_gshared)(__this, p0, p1, method)
#define m17917(__this, p0, method) (( t1701 * (*) (t1870 *, t2899 *, const MethodInfo*))m11138_gshared)(__this, p0, method)
#define m17918(__this , p0, method) (( void (*) (t7 * , t2899 *, const MethodInfo*))m11140_gshared)(__this , p0, method)
#define m17919(__this, p0, p1, p2, method) (( int32_t (*) (t1870 *, int32_t, int32_t, t2899 *, const MethodInfo*))m11142_gshared)(__this, p0, p1, p2, method)
#define m17920(__this, method) (( t2900  (*) (t1870 *, const MethodInfo*))m11144_gshared)(__this, method)
#define m17921(__this, p0, method) (( int32_t (*) (t1870 *, t1701 *, const MethodInfo*))m3523_gshared)(__this, p0, method)
#define m17922(__this, p0, p1, method) (( void (*) (t1870 *, int32_t, int32_t, const MethodInfo*))m11147_gshared)(__this, p0, p1, method)
#define m17923(__this, p0, method) (( void (*) (t1870 *, int32_t, const MethodInfo*))m11149_gshared)(__this, p0, method)
#define m17924(__this, p0, p1, method) (( void (*) (t1870 *, int32_t, t1701 *, const MethodInfo*))m3524_gshared)(__this, p0, p1, method)
#define m17925(__this, p0, method) (( void (*) (t1870 *, t7*, const MethodInfo*))m11152_gshared)(__this, p0, method)
#define m17926(__this, p0, method) (( bool (*) (t1870 *, t1701 *, const MethodInfo*))m3521_gshared)(__this, p0, method)
#define m17927(__this, p0, method) (( int32_t (*) (t1870 *, t2899 *, const MethodInfo*))m11155_gshared)(__this, p0, method)
#define m17928(__this, p0, method) (( void (*) (t1870 *, int32_t, const MethodInfo*))m3516_gshared)(__this, p0, method)
#define m17929(__this, method) (( void (*) (t1870 *, const MethodInfo*))m11158_gshared)(__this, method)
#define m17930(__this, method) (( void (*) (t1870 *, const MethodInfo*))m11160_gshared)(__this, method)
#define m17931(__this, p0, method) (( void (*) (t1870 *, t2901 *, const MethodInfo*))m11162_gshared)(__this, p0, method)
#define m17932(__this, method) (( t2897* (*) (t1870 *, const MethodInfo*))m11164_gshared)(__this, method)
#define m17933(__this, method) (( void (*) (t1870 *, const MethodInfo*))m11166_gshared)(__this, method)
#define m17934(__this, method) (( int32_t (*) (t1870 *, const MethodInfo*))m11168_gshared)(__this, method)
#define m17935(__this, p0, method) (( void (*) (t1870 *, int32_t, const MethodInfo*))m11170_gshared)(__this, p0, method)
#define m17936(__this, method) (( int32_t (*) (t1870 *, const MethodInfo*))m3502_gshared)(__this, method)
#define m17937(__this, p0, method) (( t1701 * (*) (t1870 *, int32_t, const MethodInfo*))m3525_gshared)(__this, p0, method)
#define m17938(__this, p0, p1, method) (( void (*) (t1870 *, int32_t, t1701 *, const MethodInfo*))m3526_gshared)(__this, p0, p1, method)

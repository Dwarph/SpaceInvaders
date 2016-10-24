#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t334;
struct t7;
struct t184;
struct t2986;
struct t52;
struct t50;
struct t2987;
struct t2988;
struct t2522;
struct t2521;
struct t2524;
struct t2526;
#include "t2525.h"

#include "t337MD.h"
#define m13275(__this, method) (( void (*) (t334 *, const MethodInfo*))m3292_gshared)(__this, method)
#define m13276(__this, p0, method) (( void (*) (t334 *, int32_t, const MethodInfo*))m11105_gshared)(__this, p0, method)
#define m13277(__this , method) (( void (*) (t7 * , const MethodInfo*))m11107_gshared)(__this , method)
#define m13278(__this, method) (( t7* (*) (t334 *, const MethodInfo*))m3522_gshared)(__this, method)
#define m13279(__this, p0, p1, method) (( void (*) (t334 *, t52 *, int32_t, const MethodInfo*))m3505_gshared)(__this, p0, p1, method)
#define m13280(__this, method) (( t7 * (*) (t334 *, const MethodInfo*))m3501_gshared)(__this, method)
#define m13281(__this, p0, method) (( int32_t (*) (t334 *, t7 *, const MethodInfo*))m3510_gshared)(__this, p0, method)
#define m13282(__this, p0, method) (( bool (*) (t334 *, t7 *, const MethodInfo*))m3512_gshared)(__this, p0, method)
#define m13283(__this, p0, method) (( int32_t (*) (t334 *, t7 *, const MethodInfo*))m3513_gshared)(__this, p0, method)
#define m13284(__this, p0, p1, method) (( void (*) (t334 *, int32_t, t7 *, const MethodInfo*))m3514_gshared)(__this, p0, p1, method)
#define m13285(__this, p0, method) (( void (*) (t334 *, t7 *, const MethodInfo*))m3515_gshared)(__this, p0, method)
#define m13286(__this, method) (( bool (*) (t334 *, const MethodInfo*))m3517_gshared)(__this, method)
#define m13287(__this, method) (( bool (*) (t334 *, const MethodInfo*))m3503_gshared)(__this, method)
#define m13288(__this, method) (( t7 * (*) (t334 *, const MethodInfo*))m3504_gshared)(__this, method)
#define m13289(__this, method) (( bool (*) (t334 *, const MethodInfo*))m3506_gshared)(__this, method)
#define m13290(__this, method) (( bool (*) (t334 *, const MethodInfo*))m3507_gshared)(__this, method)
#define m13291(__this, p0, method) (( t7 * (*) (t334 *, int32_t, const MethodInfo*))m3508_gshared)(__this, p0, method)
#define m13292(__this, p0, p1, method) (( void (*) (t334 *, int32_t, t7 *, const MethodInfo*))m3509_gshared)(__this, p0, p1, method)
#define m13293(__this, p0, method) (( void (*) (t334 *, t184 *, const MethodInfo*))m3518_gshared)(__this, p0, method)
#define m13294(__this, p0, method) (( void (*) (t334 *, int32_t, const MethodInfo*))m11125_gshared)(__this, p0, method)
#define m13295(__this, p0, method) (( void (*) (t334 *, t7*, const MethodInfo*))m11127_gshared)(__this, p0, method)
#define m13296(__this, p0, method) (( void (*) (t334 *, t7*, const MethodInfo*))m11129_gshared)(__this, p0, method)
#define m13297(__this, p0, method) (( void (*) (t334 *, t7*, const MethodInfo*))m11131_gshared)(__this, p0, method)
#define m13298(__this, method) (( t2522 * (*) (t334 *, const MethodInfo*))m11133_gshared)(__this, method)
#define m13299(__this, method) (( void (*) (t334 *, const MethodInfo*))m3511_gshared)(__this, method)
#define m13300(__this, p0, method) (( bool (*) (t334 *, t184 *, const MethodInfo*))m3519_gshared)(__this, p0, method)
#define m13301(__this, p0, p1, method) (( void (*) (t334 *, t2521*, int32_t, const MethodInfo*))m3520_gshared)(__this, p0, p1, method)
#define m13302(__this, p0, method) (( t184 * (*) (t334 *, t2524 *, const MethodInfo*))m11138_gshared)(__this, p0, method)
#define m13303(__this , p0, method) (( void (*) (t7 * , t2524 *, const MethodInfo*))m11140_gshared)(__this , p0, method)
#define m13304(__this, p0, p1, p2, method) (( int32_t (*) (t334 *, int32_t, int32_t, t2524 *, const MethodInfo*))m11142_gshared)(__this, p0, p1, p2, method)
#define m13305(__this, method) (( t2525  (*) (t334 *, const MethodInfo*))m11144_gshared)(__this, method)
#define m13306(__this, p0, method) (( int32_t (*) (t334 *, t184 *, const MethodInfo*))m3523_gshared)(__this, p0, method)
#define m13307(__this, p0, p1, method) (( void (*) (t334 *, int32_t, int32_t, const MethodInfo*))m11147_gshared)(__this, p0, p1, method)
#define m13308(__this, p0, method) (( void (*) (t334 *, int32_t, const MethodInfo*))m11149_gshared)(__this, p0, method)
#define m13309(__this, p0, p1, method) (( void (*) (t334 *, int32_t, t184 *, const MethodInfo*))m3524_gshared)(__this, p0, p1, method)
#define m13310(__this, p0, method) (( void (*) (t334 *, t7*, const MethodInfo*))m11152_gshared)(__this, p0, method)
#define m13311(__this, p0, method) (( bool (*) (t334 *, t184 *, const MethodInfo*))m3521_gshared)(__this, p0, method)
#define m13312(__this, p0, method) (( int32_t (*) (t334 *, t2524 *, const MethodInfo*))m11155_gshared)(__this, p0, method)
#define m13313(__this, p0, method) (( void (*) (t334 *, int32_t, const MethodInfo*))m3516_gshared)(__this, p0, method)
#define m13314(__this, method) (( void (*) (t334 *, const MethodInfo*))m11158_gshared)(__this, method)
#define m13315(__this, method) (( void (*) (t334 *, const MethodInfo*))m11160_gshared)(__this, method)
#define m13316(__this, p0, method) (( void (*) (t334 *, t2526 *, const MethodInfo*))m11162_gshared)(__this, p0, method)
#define m13317(__this, method) (( t2521* (*) (t334 *, const MethodInfo*))m11164_gshared)(__this, method)
#define m13318(__this, method) (( void (*) (t334 *, const MethodInfo*))m11166_gshared)(__this, method)
#define m13319(__this, method) (( int32_t (*) (t334 *, const MethodInfo*))m11168_gshared)(__this, method)
#define m13320(__this, p0, method) (( void (*) (t334 *, int32_t, const MethodInfo*))m11170_gshared)(__this, p0, method)
#define m13321(__this, method) (( int32_t (*) (t334 *, const MethodInfo*))m3502_gshared)(__this, method)
#define m13322(__this, p0, method) (( t184 * (*) (t334 *, int32_t, const MethodInfo*))m3525_gshared)(__this, p0, method)
#define m13323(__this, p0, p1, method) (( void (*) (t334 *, int32_t, t184 *, const MethodInfo*))m3526_gshared)(__this, p0, p1, method)

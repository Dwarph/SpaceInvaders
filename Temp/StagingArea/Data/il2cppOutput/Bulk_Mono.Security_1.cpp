#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include "t1254.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
#include "t1254MD.h"

#include "t53.h"
#include "t1203.h"
#include "mscorlib_ArrayTypes.h"
#include "t356.h"
#include "t1223.h"
#include "t1232.h"
#include "t1218.h"
#include "t1118.h"
#include "t58.h"
#include "t973.h"
#include "t54.h"
#include "t1211.h"
#include "t1190.h"
#include "t1191.h"
#include "t1188.h"
#include "t1091.h"
#include "t1193.h"
#include "t1206.h"
#include "t1220.h"
#include "t1202.h"
#include "t1121.h"
#include "t47.h"
#include "t919.h"
#include "t7.h"
#include "t1192.h"
#include "t1199.h"
#include "t1238.h"
#include "t712.h"
#include "t974.h"
#include "t1185.h"
#include "t1186.h"
#include "t1212.h"
#include "t1246.h"
#include "t347.h"
#include "t359.h"
#include "t52.h"
#include "t1194.h"
#include "t1219.h"
#include "t746.h"
#include "t1014.h"
#include "t1004.h"
#include "t1010.h"
#include "t1009.h"
#include "t214.h"
#include "t709.h"
#include "t1232MD.h"
#include "t1203MD.h"
#include "t1218MD.h"
#include "t1118MD.h"
#include "t1221MD.h"
#include "t973MD.h"
#include "t1220MD.h"
#include "t1202MD.h"
#include "t1121MD.h"
#include "t1191MD.h"
#include "t1188MD.h"
#include "t919MD.h"
#include "t1193MD.h"
#include "t1211MD.h"
#include "t1212MD.h"
#include "t1238MD.h"
#include "t47MD.h"
#include "t1246MD.h"
#include "t974MD.h"
#include "t1185MD.h"
#include "t347MD.h"
#include "t1219MD.h"
#include "t1194MD.h"
#include "t746MD.h"
#include "t1014MD.h"
#include "t1009MD.h"
#include "t1004MD.h"
#include "t1010MD.h"
#include "t1006MD.h"
#include "t709MD.h"


extern "C" void m5546 (t1254 * __this, t1203 * p0, t536* p1, const MethodInfo* method)
{
	{
		t1203 * L_0 = p0;
		t536* L_1 = p1;
		m5511(__this, L_0, ((int32_t)11), L_1, NULL);
		return;
	}
}
extern "C" void m5547 (t1254 * __this, const MethodInfo* method)
{
	{
		m5516(__this, NULL);
		t1203 * L_0 = m5512(__this, NULL);
		t1218 * L_1 = m5214(L_0, NULL);
		t1118 * L_2 = (__this->f9);
		m5473(L_1, L_2, NULL);
		t1203 * L_3 = m5512(__this, NULL);
		t1218 * L_4 = m5214(L_3, NULL);
		m5482(L_4, NULL);
		return;
	}
}
extern "C" void m5548 (t1254 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(24 /* System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::ProcessAsTls1() */, __this);
		return;
	}
}
extern TypeInfo* t1118_TI_var;
extern TypeInfo* t973_TI_var;
extern "C" void m5549 (t1254 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1118_TI_var = il2cpp_codegen_type_info_from_index(2365);
		t973_TI_var = il2cpp_codegen_type_info_from_index(1866);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t536* V_3 = {0};
	t973 * V_4 = {0};
	{
		t1118 * L_0 = (t1118 *)il2cpp_codegen_object_new (t1118_TI_var);
		m5008(L_0, NULL);
		__this->f9 = L_0;
		V_0 = 0;
		int32_t L_1 = m5495(__this, NULL);
		V_1 = L_1;
		goto IL_004d;
	}

IL_0019:
	{
		int32_t L_2 = m5495(__this, NULL);
		V_2 = L_2;
		int32_t L_3 = V_0;
		V_0 = ((int32_t)((int32_t)L_3+(int32_t)3));
		int32_t L_4 = V_2;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_5 = V_2;
		t536* L_6 = m5496(__this, L_5, NULL);
		V_3 = L_6;
		t536* L_7 = V_3;
		t973 * L_8 = (t973 *)il2cpp_codegen_object_new (t973_TI_var);
		m4591(L_8, L_7, NULL);
		V_4 = L_8;
		t1118 * L_9 = (__this->f9);
		t973 * L_10 = V_4;
		m5011(L_9, L_10, NULL);
		int32_t L_11 = V_0;
		int32_t L_12 = V_2;
		V_0 = ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_004d:
	{
		int32_t L_13 = V_0;
		int32_t L_14 = V_1;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0019;
		}
	}
	{
		t1118 * L_15 = (__this->f9);
		m5551(__this, L_15, NULL);
		return;
	}
}
extern TypeInfo* t1211_TI_var;
extern TypeInfo* t1191_TI_var;
extern TypeInfo* t1188_TI_var;
extern TypeInfo* t1193_TI_var;
extern "C" bool m5550 (t1254 * __this, t973 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1211_TI_var = il2cpp_codegen_type_info_from_index(2385);
		t1191_TI_var = il2cpp_codegen_type_info_from_index(2432);
		t1188_TI_var = il2cpp_codegen_type_info_from_index(2378);
		t1193_TI_var = il2cpp_codegen_type_info_from_index(2433);
		s_Il2CppMethodIntialized = true;
	}
	t1211 * V_0 = {0};
	int32_t V_1 = {0};
	t1191 * V_2 = {0};
	t1188 * V_3 = {0};
	t1091 * V_4 = {0};
	t1193 * V_5 = {0};
	int32_t V_6 = {0};
	int32_t G_B19_0 = 0;
	int32_t G_B26_0 = 0;
	{
		t1203 * L_0 = m5512(__this, NULL);
		V_0 = ((t1211 *)Castclass(L_0, t1211_TI_var));
		t973 * L_1 = p0;
		int32_t L_2 = m4581(L_1, NULL);
		if ((((int32_t)L_2) >= ((int32_t)3)))
		{
			goto IL_001a;
		}
	}
	{
		return 1;
	}

IL_001a:
	{
		V_1 = 0;
		t1211 * L_3 = V_0;
		t1220 * L_4 = m5258(L_3, NULL);
		t1202 * L_5 = m5328(L_4, NULL);
		int32_t L_6 = m5121(L_5, NULL);
		V_6 = L_6;
		int32_t L_7 = V_6;
		if (L_7 == 0)
		{
			goto IL_0061;
		}
		if (L_7 == 1)
		{
			goto IL_0068;
		}
		if (L_7 == 2)
		{
			goto IL_006a;
		}
		if (L_7 == 3)
		{
			goto IL_0059;
		}
		if (L_7 == 4)
		{
			goto IL_004e;
		}
	}
	{
		goto IL_006a;
	}

IL_004e:
	{
		V_1 = ((int32_t)128);
		goto IL_006a;
	}

IL_0059:
	{
		V_1 = ((int32_t)32);
		goto IL_006a;
	}

IL_0061:
	{
		V_1 = 8;
		goto IL_006a;
	}

IL_0068:
	{
		return 0;
	}

IL_006a:
	{
		V_2 = (t1191 *)NULL;
		V_3 = (t1188 *)NULL;
		t973 * L_8 = p0;
		t1121 * L_9 = m4607(L_8, NULL);
		t1091 * L_10 = m4608(L_9, (t47*) &_stringLiteral562, NULL);
		V_4 = L_10;
		t1091 * L_11 = V_4;
		if (!L_11)
		{
			goto IL_008f;
		}
	}
	{
		t1091 * L_12 = V_4;
		t1191 * L_13 = (t1191 *)il2cpp_codegen_object_new (t1191_TI_var);
		m5076(L_13, L_12, NULL);
		V_2 = L_13;
	}

IL_008f:
	{
		t973 * L_14 = p0;
		t1121 * L_15 = m4607(L_14, NULL);
		t1091 * L_16 = m4608(L_15, (t47*) &_stringLiteral569, NULL);
		V_4 = L_16;
		t1091 * L_17 = V_4;
		if (!L_17)
		{
			goto IL_00b0;
		}
	}
	{
		t1091 * L_18 = V_4;
		t1188 * L_19 = (t1188 *)il2cpp_codegen_object_new (t1188_TI_var);
		m5067(L_19, L_18, NULL);
		V_3 = L_19;
	}

IL_00b0:
	{
		t1191 * L_20 = V_2;
		if (!L_20)
		{
			goto IL_00f3;
		}
	}
	{
		t1188 * L_21 = V_3;
		if (!L_21)
		{
			goto IL_00f3;
		}
	}
	{
		t1191 * L_22 = V_2;
		int32_t L_23 = V_1;
		bool L_24 = m5079(L_22, L_23, NULL);
		if (L_24)
		{
			goto IL_00ca;
		}
	}
	{
		return 0;
	}

IL_00ca:
	{
		t1188 * L_25 = V_3;
		t919 * L_26 = m5070(L_25, NULL);
		bool L_27 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(29 /* System.Boolean System.Collections.ArrayList::Contains(System.Object) */, L_26, (t47*) &_stringLiteral573);
		if (L_27)
		{
			goto IL_00f1;
		}
	}
	{
		t1188 * L_28 = V_3;
		t919 * L_29 = m5070(L_28, NULL);
		bool L_30 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(29 /* System.Boolean System.Collections.ArrayList::Contains(System.Object) */, L_29, (t47*) &_stringLiteral1017);
		G_B19_0 = ((int32_t)(L_30));
		goto IL_00f2;
	}

IL_00f1:
	{
		G_B19_0 = 1;
	}

IL_00f2:
	{
		return G_B19_0;
	}

IL_00f3:
	{
		t1191 * L_31 = V_2;
		if (!L_31)
		{
			goto IL_0101;
		}
	}
	{
		t1191 * L_32 = V_2;
		int32_t L_33 = V_1;
		bool L_34 = m5079(L_32, L_33, NULL);
		return L_34;
	}

IL_0101:
	{
		t1188 * L_35 = V_3;
		if (!L_35)
		{
			goto IL_0130;
		}
	}
	{
		t1188 * L_36 = V_3;
		t919 * L_37 = m5070(L_36, NULL);
		bool L_38 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(29 /* System.Boolean System.Collections.ArrayList::Contains(System.Object) */, L_37, (t47*) &_stringLiteral573);
		if (L_38)
		{
			goto IL_012e;
		}
	}
	{
		t1188 * L_39 = V_3;
		t919 * L_40 = m5070(L_39, NULL);
		bool L_41 = (bool)VirtFuncInvoker1< bool, t7 * >::Invoke(29 /* System.Boolean System.Collections.ArrayList::Contains(System.Object) */, L_40, (t47*) &_stringLiteral1017);
		G_B26_0 = ((int32_t)(L_41));
		goto IL_012f;
	}

IL_012e:
	{
		G_B26_0 = 1;
	}

IL_012f:
	{
		return G_B26_0;
	}

IL_0130:
	{
		t973 * L_42 = p0;
		t1121 * L_43 = m4607(L_42, NULL);
		t1091 * L_44 = m4608(L_43, (t47*) &_stringLiteral600, NULL);
		V_4 = L_44;
		t1091 * L_45 = V_4;
		if (!L_45)
		{
			goto IL_015c;
		}
	}
	{
		t1091 * L_46 = V_4;
		t1193 * L_47 = (t1193 *)il2cpp_codegen_object_new (t1193_TI_var);
		m5081(L_47, L_46, NULL);
		V_5 = L_47;
		t1193 * L_48 = V_5;
		bool L_49 = m5083(L_48, ((int32_t)64), NULL);
		return L_49;
	}

IL_015c:
	{
		return 1;
	}
}
extern const Il2CppType* t58_0_0_0_var;
extern TypeInfo* t1211_TI_var;
extern TypeInfo* t712_TI_var;
extern TypeInfo* t47_TI_var;
extern TypeInfo* t1246_TI_var;
extern TypeInfo* t974_TI_var;
extern TypeInfo* t919_TI_var;
extern TypeInfo* t58_TI_var;
extern TypeInfo* t1118_TI_var;
extern TypeInfo* t1185_TI_var;
extern TypeInfo* t65_TI_var;
extern TypeInfo* t347_TI_var;
extern TypeInfo* t1018_TI_var;
extern "C" void m5551 (t1254 * __this, t1118 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t58_0_0_0_var = il2cpp_codegen_type_from_index(14);
		t1211_TI_var = il2cpp_codegen_type_info_from_index(2385);
		t712_TI_var = il2cpp_codegen_type_info_from_index(982);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t1246_TI_var = il2cpp_codegen_type_info_from_index(2407);
		t974_TI_var = il2cpp_codegen_type_info_from_index(1875);
		t919_TI_var = il2cpp_codegen_type_info_from_index(1813);
		t58_TI_var = il2cpp_codegen_type_info_from_index(14);
		t1118_TI_var = il2cpp_codegen_type_info_from_index(2365);
		t1185_TI_var = il2cpp_codegen_type_info_from_index(2434);
		t65_TI_var = il2cpp_codegen_type_info_from_index(233);
		t347_TI_var = il2cpp_codegen_type_info_from_index(256);
		t1018_TI_var = il2cpp_codegen_type_info_from_index(1915);
		s_Il2CppMethodIntialized = true;
	}
	t1211 * V_0 = {0};
	uint8_t V_1 = {0};
	t1238 * V_2 = {0};
	int64_t V_3 = 0;
	t47* V_4 = {0};
	t973 * V_5 = {0};
	t974 * V_6 = {0};
	t919 * V_7 = {0};
	t1118 * V_8 = {0};
	t1185 * V_9 = {0};
	bool V_10 = false;
	t1018* V_11 = {0};
	int64_t V_12 = 0;
	int32_t V_13 = {0};
	t65 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	t65 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		t1203 * L_0 = m5512(__this, NULL);
		V_0 = ((t1211 *)Castclass(L_0, t1211_TI_var));
		V_1 = ((int32_t)42);
		t1211 * L_1 = V_0;
		t1212 * L_2 = m5174(L_1, NULL);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(29 /* System.Boolean Mono.Security.Protocol.Tls.SslClientStream::get_HaveRemoteValidation2Callback() */, L_2);
		if (!L_3)
		{
			goto IL_00b4;
		}
	}
	{
		t1211 * L_4 = V_0;
		t1212 * L_5 = m5174(L_4, NULL);
		t1118 * L_6 = p0;
		t1238 * L_7 = (t1238 *)VirtFuncInvoker1< t1238 *, t1118 * >::Invoke(32 /* Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.SslClientStream::RaiseServerCertificateValidation2(Mono.Security.X509.X509CertificateCollection) */, L_5, L_6);
		V_2 = L_7;
		t1238 * L_8 = V_2;
		bool L_9 = m5335(L_8, NULL);
		if (!L_9)
		{
			goto IL_0038;
		}
	}
	{
		return;
	}

IL_0038:
	{
		t1238 * L_10 = V_2;
		int32_t L_11 = m5336(L_10, NULL);
		V_3 = (((int64_t)L_11));
		int64_t L_12 = V_3;
		V_12 = L_12;
		int64_t L_13 = V_12;
		if ((((int64_t)L_13) == ((int64_t)(((uint64_t)(((uint32_t)((int32_t)-2146762487))))))))
		{
			goto IL_007f;
		}
	}
	{
		int64_t L_14 = V_12;
		if ((((int64_t)L_14) == ((int64_t)(((uint64_t)(((uint32_t)((int32_t)-2146762486))))))))
		{
			goto IL_0077;
		}
	}
	{
		int64_t L_15 = V_12;
		if ((((int64_t)L_15) == ((int64_t)(((uint64_t)(((uint32_t)((int32_t)-2146762495))))))))
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0087;
	}

IL_006f:
	{
		V_1 = ((int32_t)45);
		goto IL_008f;
	}

IL_0077:
	{
		V_1 = ((int32_t)48);
		goto IL_008f;
	}

IL_007f:
	{
		V_1 = ((int32_t)48);
		goto IL_008f;
	}

IL_0087:
	{
		V_1 = ((int32_t)46);
		goto IL_008f;
	}

IL_008f:
	{
		int64_t L_16 = V_3;
		int64_t L_17 = L_16;
		t7 * L_18 = Box(t712_TI_var, &L_17);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_19 = m1593(NULL, (t47*) &_stringLiteral1018, L_18, NULL);
		V_4 = L_19;
		uint8_t L_20 = V_1;
		t47* L_21 = V_4;
		t47* L_22 = m207(NULL, (t47*) &_stringLiteral1019, L_21, NULL);
		t1246 * L_23 = (t1246 *)il2cpp_codegen_object_new (t1246_TI_var);
		m5467(L_23, L_20, L_22, NULL);
		il2cpp_codegen_raise_exception(L_23);
	}

IL_00b4:
	{
		t1118 * L_24 = p0;
		t973 * L_25 = m4587(L_24, 0, NULL);
		V_5 = L_25;
		t973 * L_26 = V_5;
		t536* L_27 = (t536*)VirtFuncInvoker0< t536* >::Invoke(12 /* System.Byte[] Mono.Security.X509.X509Certificate::get_RawData() */, L_26);
		t974 * L_28 = (t974 *)il2cpp_codegen_object_new (t974_TI_var);
		m5670(L_28, L_27, NULL);
		V_6 = L_28;
		t919 * L_29 = (t919 *)il2cpp_codegen_object_new (t919_TI_var);
		m4512(L_29, NULL);
		V_7 = L_29;
		t973 * L_30 = V_5;
		bool L_31 = m5550(__this, L_30, NULL);
		if (L_31)
		{
			goto IL_00f1;
		}
	}
	{
		t919 * L_32 = V_7;
		int32_t L_33 = ((int32_t)-2146762490);
		t7 * L_34 = Box(t58_TI_var, &L_33);
		VirtFuncInvoker1< int32_t, t7 * >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_32, L_34);
	}

IL_00f1:
	{
		t973 * L_35 = V_5;
		bool L_36 = m5552(__this, L_35, NULL);
		if (L_36)
		{
			goto IL_0110;
		}
	}
	{
		t919 * L_37 = V_7;
		int32_t L_38 = ((int32_t)-2146762481);
		t7 * L_39 = Box(t58_TI_var, &L_38);
		VirtFuncInvoker1< int32_t, t7 * >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_37, L_39);
	}

IL_0110:
	{
		t1118 * L_40 = p0;
		t1118 * L_41 = (t1118 *)il2cpp_codegen_object_new (t1118_TI_var);
		m5009(L_41, L_40, NULL);
		V_8 = L_41;
		t1118 * L_42 = V_8;
		t973 * L_43 = V_5;
		m5016(L_42, L_43, NULL);
		t1118 * L_44 = V_8;
		t1185 * L_45 = (t1185 *)il2cpp_codegen_object_new (t1185_TI_var);
		m5019(L_45, L_44, NULL);
		V_9 = L_45;
		V_10 = 0;
	}

IL_012d:
	try
	{ // begin try (depth: 1)
		t1185 * L_46 = V_9;
		t973 * L_47 = V_5;
		bool L_48 = m5022(L_46, L_47, NULL);
		V_10 = L_48;
		goto IL_0146;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (t65 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (t65_TI_var, e.ex->object.klass))
			goto CATCH_013d;
		throw e;
	}

CATCH_013d:
	{ // begin catch(System.Exception)
		V_10 = 0;
		goto IL_0146;
	} // end catch (depth: 1)

IL_0146:
	{
		bool L_49 = V_10;
		if (L_49)
		{
			goto IL_0243;
		}
	}
	{
		t1185 * L_50 = V_9;
		int32_t L_51 = m5020(L_50, NULL);
		V_13 = L_51;
		int32_t L_52 = V_13;
		if ((((int32_t)L_52) == ((int32_t)1)))
		{
			goto IL_01d9;
		}
	}
	{
		int32_t L_53 = V_13;
		if ((((int32_t)L_53) == ((int32_t)2)))
		{
			goto IL_01c2;
		}
	}
	{
		int32_t L_54 = V_13;
		if ((((int32_t)L_54) == ((int32_t)8)))
		{
			goto IL_01ab;
		}
	}
	{
		int32_t L_55 = V_13;
		if ((((int32_t)L_55) == ((int32_t)((int32_t)32))))
		{
			goto IL_020d;
		}
	}
	{
		int32_t L_56 = V_13;
		if ((((int32_t)L_56) == ((int32_t)((int32_t)1024))))
		{
			goto IL_0194;
		}
	}
	{
		int32_t L_57 = V_13;
		if ((((int32_t)L_57) == ((int32_t)((int32_t)65536))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_0227;
	}

IL_0194:
	{
		t919 * L_58 = V_7;
		int32_t L_59 = ((int32_t)-2146869223);
		t7 * L_60 = Box(t58_TI_var, &L_59);
		VirtFuncInvoker1< int32_t, t7 * >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_58, L_60);
		goto IL_0243;
	}

IL_01ab:
	{
		t919 * L_61 = V_7;
		int32_t L_62 = ((int32_t)-2146869232);
		t7 * L_63 = Box(t58_TI_var, &L_62);
		VirtFuncInvoker1< int32_t, t7 * >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_61, L_63);
		goto IL_0243;
	}

IL_01c2:
	{
		t919 * L_64 = V_7;
		int32_t L_65 = ((int32_t)-2146762494);
		t7 * L_66 = Box(t58_TI_var, &L_65);
		VirtFuncInvoker1< int32_t, t7 * >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_64, L_66);
		goto IL_0243;
	}

IL_01d9:
	{
		V_1 = ((int32_t)45);
		t919 * L_67 = V_7;
		int32_t L_68 = ((int32_t)-2146762495);
		t7 * L_69 = Box(t58_TI_var, &L_68);
		VirtFuncInvoker1< int32_t, t7 * >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_67, L_69);
		goto IL_0243;
	}

IL_01f3:
	{
		V_1 = ((int32_t)48);
		t919 * L_70 = V_7;
		int32_t L_71 = ((int32_t)-2146762486);
		t7 * L_72 = Box(t58_TI_var, &L_71);
		VirtFuncInvoker1< int32_t, t7 * >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_70, L_72);
		goto IL_0243;
	}

IL_020d:
	{
		V_1 = ((int32_t)48);
		t919 * L_73 = V_7;
		int32_t L_74 = ((int32_t)-2146762487);
		t7 * L_75 = Box(t58_TI_var, &L_74);
		VirtFuncInvoker1< int32_t, t7 * >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_73, L_75);
		goto IL_0243;
	}

IL_0227:
	{
		V_1 = ((int32_t)46);
		t919 * L_76 = V_7;
		t1185 * L_77 = V_9;
		int32_t L_78 = m5020(L_77, NULL);
		int32_t L_79 = L_78;
		t7 * L_80 = Box(t58_TI_var, &L_79);
		VirtFuncInvoker1< int32_t, t7 * >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_76, L_80);
		goto IL_0243;
	}

IL_0243:
	{
		t919 * L_81 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(t347_TI_var);
		t347 * L_82 = m1613(NULL, LoadTypeToken(t58_0_0_0_var), NULL);
		t52 * L_83 = (t52 *)VirtFuncInvoker1< t52 *, t347 * >::Invoke(45 /* System.Array System.Collections.ArrayList::ToArray(System.Type) */, L_81, L_82);
		V_11 = ((t1018*)Castclass(L_83, t1018_TI_var));
		t1211 * L_84 = V_0;
		t1212 * L_85 = m5174(L_84, NULL);
		t974 * L_86 = V_6;
		t1018* L_87 = V_11;
		bool L_88 = (bool)VirtFuncInvoker2< bool, t974 *, t1018* >::Invoke(31 /* System.Boolean Mono.Security.Protocol.Tls.SslClientStream::RaiseServerCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[]) */, L_85, L_86, L_87);
		if (L_88)
		{
			goto IL_027b;
		}
	}
	{
		uint8_t L_89 = V_1;
		t1246 * L_90 = (t1246 *)il2cpp_codegen_object_new (t1246_TI_var);
		m5467(L_90, L_89, (t47*) &_stringLiteral1020, NULL);
		il2cpp_codegen_raise_exception(L_90);
	}

IL_027b:
	{
		return;
	}
}
extern TypeInfo* t1211_TI_var;
extern TypeInfo* t1194_TI_var;
extern TypeInfo* t47_TI_var;
extern "C" bool m5552 (t1254 * __this, t973 * p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1211_TI_var = il2cpp_codegen_type_info_from_index(2385);
		t1194_TI_var = il2cpp_codegen_type_info_from_index(2435);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	t1211 * V_0 = {0};
	t47* V_1 = {0};
	t1091 * V_2 = {0};
	t1194 * V_3 = {0};
	t47* V_4 = {0};
	t48* V_5 = {0};
	int32_t V_6 = 0;
	t47* V_7 = {0};
	t48* V_8 = {0};
	int32_t V_9 = 0;
	{
		t1203 * L_0 = m5512(__this, NULL);
		V_0 = ((t1211 *)Castclass(L_0, t1211_TI_var));
		t1211 * L_1 = V_0;
		t1219 * L_2 = m5215(L_1, NULL);
		t47* L_3 = m5455(L_2, NULL);
		V_1 = L_3;
		t973 * L_4 = p0;
		t1121 * L_5 = m4607(L_4, NULL);
		t1091 * L_6 = m4608(L_5, (t47*) &_stringLiteral599, NULL);
		V_2 = L_6;
		t1091 * L_7 = V_2;
		if (!L_7)
		{
			goto IL_00a4;
		}
	}
	{
		t1091 * L_8 = V_2;
		t1194 * L_9 = (t1194 *)il2cpp_codegen_object_new (t1194_TI_var);
		m5085(L_9, L_8, NULL);
		V_3 = L_9;
		t1194 * L_10 = V_3;
		t48* L_11 = m5087(L_10, NULL);
		V_5 = L_11;
		V_6 = 0;
		goto IL_0062;
	}

IL_0046:
	{
		t48* L_12 = V_5;
		int32_t L_13 = V_6;
		int32_t L_14 = L_13;
		V_4 = (*(t47**)(t47**)SZArrayLdElema(L_12, L_14));
		t47* L_15 = V_1;
		t47* L_16 = V_4;
		bool L_17 = m5554(NULL, L_15, L_16, NULL);
		if (!L_17)
		{
			goto IL_005c;
		}
	}
	{
		return 1;
	}

IL_005c:
	{
		int32_t L_18 = V_6;
		V_6 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0062:
	{
		int32_t L_19 = V_6;
		t48* L_20 = V_5;
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)(((t52 *)L_20)->max_length))))))
		{
			goto IL_0046;
		}
	}
	{
		t1194 * L_21 = V_3;
		t48* L_22 = m5088(L_21, NULL);
		V_8 = L_22;
		V_9 = 0;
		goto IL_0099;
	}

IL_007d:
	{
		t48* L_23 = V_8;
		int32_t L_24 = V_9;
		int32_t L_25 = L_24;
		V_7 = (*(t47**)(t47**)SZArrayLdElema(L_23, L_25));
		t47* L_26 = V_7;
		t47* L_27 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		bool L_28 = m185(NULL, L_26, L_27, NULL);
		if (!L_28)
		{
			goto IL_0093;
		}
	}
	{
		return 1;
	}

IL_0093:
	{
		int32_t L_29 = V_9;
		V_9 = ((int32_t)((int32_t)L_29+(int32_t)1));
	}

IL_0099:
	{
		int32_t L_30 = V_9;
		t48* L_31 = V_8;
		if ((((int32_t)L_30) < ((int32_t)(((int32_t)(((t52 *)L_31)->max_length))))))
		{
			goto IL_007d;
		}
	}

IL_00a4:
	{
		t973 * L_32 = p0;
		t47* L_33 = (t47*)VirtFuncInvoker0< t47* >::Invoke(16 /* System.String Mono.Security.X509.X509Certificate::get_SubjectName() */, L_32);
		bool L_34 = m5553(__this, L_33, NULL);
		return L_34;
	}
}
extern TypeInfo* t1211_TI_var;
extern TypeInfo* t47_TI_var;
extern TypeInfo* t746_TI_var;
extern "C" bool m5553 (t1254 * __this, t47* p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1211_TI_var = il2cpp_codegen_type_info_from_index(2385);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		t746_TI_var = il2cpp_codegen_type_info_from_index(1041);
		s_Il2CppMethodIntialized = true;
	}
	t1211 * V_0 = {0};
	t47* V_1 = {0};
	t746 * V_2 = {0};
	t1014 * V_3 = {0};
	{
		t1203 * L_0 = m5512(__this, NULL);
		V_0 = ((t1211 *)Castclass(L_0, t1211_TI_var));
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		t47* L_1 = ((t47_SFs*)t47_TI_var->static_fields)->f2;
		V_1 = L_1;
		t746 * L_2 = (t746 *)il2cpp_codegen_object_new (t746_TI_var);
		m4095(L_2, (t47*) &_stringLiteral1021, NULL);
		V_2 = L_2;
		t746 * L_3 = V_2;
		t47* L_4 = p0;
		t1014 * L_5 = m4113(L_3, L_4, NULL);
		V_3 = L_5;
		t1014 * L_6 = V_3;
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Text.RegularExpressions.MatchCollection::get_Count() */, L_6);
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_005f;
		}
	}
	{
		t1014 * L_8 = V_3;
		t1004 * L_9 = (t1004 *)VirtFuncInvoker1< t1004 *, int32_t >::Invoke(9 /* System.Text.RegularExpressions.Match System.Text.RegularExpressions.MatchCollection::get_Item(System.Int32) */, L_8, 0);
		bool L_10 = m4065(L_9, NULL);
		if (!L_10)
		{
			goto IL_005f;
		}
	}
	{
		t1014 * L_11 = V_3;
		t1004 * L_12 = (t1004 *)VirtFuncInvoker1< t1004 *, int32_t >::Invoke(9 /* System.Text.RegularExpressions.Match System.Text.RegularExpressions.MatchCollection::get_Item(System.Int32) */, L_11, 0);
		t1010 * L_13 = (t1010 *)VirtFuncInvoker0< t1010 * >::Invoke(4 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_12);
		t1009 * L_14 = m4069(L_13, 1, NULL);
		t47* L_15 = m4050(L_14, NULL);
		t47* L_16 = (t47*)VirtFuncInvoker0< t47* >::Invoke(3 /* System.String System.String::ToString() */, L_15);
		V_1 = L_16;
	}

IL_005f:
	{
		t1211 * L_17 = V_0;
		t1219 * L_18 = m5215(L_17, NULL);
		t47* L_19 = m5455(L_18, NULL);
		t47* L_20 = V_1;
		bool L_21 = m5554(NULL, L_19, L_20, NULL);
		return L_21;
	}
}
extern TypeInfo* t709_TI_var;
extern TypeInfo* t47_TI_var;
extern "C" bool m5554 (t7 * __this , t47* p0, t47* p1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t709_TI_var = il2cpp_codegen_type_info_from_index(979);
		t47_TI_var = il2cpp_codegen_type_info_from_index(15);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t47* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	t47* V_5 = {0};
	int32_t G_B15_0 = 0;
	{
		t47* L_0 = p1;
		int32_t L_1 = m1817(L_0, ((int32_t)42), NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0021;
		}
	}
	{
		t47* L_3 = p0;
		t47* L_4 = p1;
		IL2CPP_RUNTIME_CLASS_INIT(t709_TI_var);
		t709 * L_5 = m3303(NULL, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		int32_t L_6 = m4543(NULL, L_3, L_4, 1, L_5, NULL);
		return ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		t47* L_8 = p1;
		int32_t L_9 = m1741(L_8, NULL);
		if ((((int32_t)L_7) == ((int32_t)((int32_t)((int32_t)L_9-(int32_t)1)))))
		{
			goto IL_0041;
		}
	}
	{
		t47* L_10 = p1;
		int32_t L_11 = V_0;
		uint16_t L_12 = m1754(L_10, ((int32_t)((int32_t)L_11+(int32_t)1)), NULL);
		if ((((int32_t)L_12) == ((int32_t)((int32_t)46))))
		{
			goto IL_0041;
		}
	}
	{
		return 0;
	}

IL_0041:
	{
		t47* L_13 = p1;
		int32_t L_14 = V_0;
		int32_t L_15 = m3244(L_13, ((int32_t)42), ((int32_t)((int32_t)L_14+(int32_t)1)), NULL);
		V_1 = L_15;
		int32_t L_16 = V_1;
		if ((((int32_t)L_16) == ((int32_t)(-1))))
		{
			goto IL_0056;
		}
	}
	{
		return 0;
	}

IL_0056:
	{
		t47* L_17 = p1;
		int32_t L_18 = V_0;
		t47* L_19 = m1781(L_17, ((int32_t)((int32_t)L_18+(int32_t)1)), NULL);
		V_2 = L_19;
		t47* L_20 = p0;
		int32_t L_21 = m1741(L_20, NULL);
		t47* L_22 = V_2;
		int32_t L_23 = m1741(L_22, NULL);
		V_3 = ((int32_t)((int32_t)L_21-(int32_t)L_23));
		int32_t L_24 = V_3;
		if ((((int32_t)L_24) > ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		return 0;
	}

IL_0077:
	{
		t47* L_25 = p0;
		int32_t L_26 = V_3;
		t47* L_27 = V_2;
		t47* L_28 = V_2;
		int32_t L_29 = m1741(L_28, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t709_TI_var);
		t709 * L_30 = m3303(NULL, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		int32_t L_31 = m5677(NULL, L_25, L_26, L_27, 0, L_29, 1, L_30, NULL);
		if (!L_31)
		{
			goto IL_0093;
		}
	}
	{
		return 0;
	}

IL_0093:
	{
		int32_t L_32 = V_0;
		if (L_32)
		{
			goto IL_00c3;
		}
	}
	{
		t47* L_33 = p0;
		int32_t L_34 = m1817(L_33, ((int32_t)46), NULL);
		V_4 = L_34;
		int32_t L_35 = V_4;
		if ((((int32_t)L_35) == ((int32_t)(-1))))
		{
			goto IL_00c1;
		}
	}
	{
		int32_t L_36 = V_4;
		t47* L_37 = p0;
		int32_t L_38 = m1741(L_37, NULL);
		t47* L_39 = V_2;
		int32_t L_40 = m1741(L_39, NULL);
		G_B15_0 = ((((int32_t)((((int32_t)L_36) < ((int32_t)((int32_t)((int32_t)L_38-(int32_t)L_40))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00c2;
	}

IL_00c1:
	{
		G_B15_0 = 1;
	}

IL_00c2:
	{
		return G_B15_0;
	}

IL_00c3:
	{
		t47* L_41 = p1;
		int32_t L_42 = V_0;
		t47* L_43 = m1755(L_41, 0, L_42, NULL);
		V_5 = L_43;
		t47* L_44 = p0;
		t47* L_45 = V_5;
		t47* L_46 = V_5;
		int32_t L_47 = m1741(L_46, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t709_TI_var);
		t709 * L_48 = m3303(NULL, NULL);
		IL2CPP_RUNTIME_CLASS_INIT(t47_TI_var);
		int32_t L_49 = m5677(NULL, L_44, 0, L_45, 0, L_47, 1, L_48, NULL);
		return ((((int32_t)L_49) == ((int32_t)0))? 1 : 0);
	}
}
#include "t1255.h"
#ifndef _MSC_VER
#else
#endif
#include "t1255MD.h"

#include "Mono.Security_ArrayTypes.h"
#include "t1248.h"
#include "t1087.h"
#include "t459.h"
#include "t665.h"
#include "t1087MD.h"
#include "t665MD.h"


extern "C" void m5555 (t1255 * __this, t1203 * p0, t536* p1, const MethodInfo* method)
{
	{
		t1203 * L_0 = p0;
		t536* L_1 = p1;
		m5511(__this, L_0, ((int32_t)13), L_1, NULL);
		return;
	}
}
extern "C" void m5556 (t1255 * __this, const MethodInfo* method)
{
	{
		m5516(__this, NULL);
		t1203 * L_0 = m5512(__this, NULL);
		t1218 * L_1 = m5214(L_0, NULL);
		t1247* L_2 = (__this->f9);
		m5480(L_1, L_2, NULL);
		t1203 * L_3 = m5512(__this, NULL);
		t1218 * L_4 = m5214(L_3, NULL);
		t48* L_5 = (__this->f10);
		m5481(L_4, L_5, NULL);
		t1203 * L_6 = m5512(__this, NULL);
		t1218 * L_7 = m5214(L_6, NULL);
		m5479(L_7, 1, NULL);
		return;
	}
}
extern "C" void m5557 (t1255 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(24 /* System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::ProcessAsTls1() */, __this);
		return;
	}
}
extern TypeInfo* t1247_TI_var;
extern TypeInfo* t1087_TI_var;
extern TypeInfo* t48_TI_var;
extern TypeInfo* t665_TI_var;
extern "C" void m5558 (t1255 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1247_TI_var = il2cpp_codegen_type_info_from_index(2436);
		t1087_TI_var = il2cpp_codegen_type_info_from_index(1857);
		t48_TI_var = il2cpp_codegen_type_info_from_index(39);
		t665_TI_var = il2cpp_codegen_type_info_from_index(925);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	t1087 * V_2 = {0};
	int32_t V_3 = 0;
	t1087 * V_4 = {0};
	{
		uint8_t L_0 = m5493(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		__this->f9 = ((t1247*)SZArrayNew(t1247_TI_var, L_1));
		V_1 = 0;
		goto IL_002c;
	}

IL_001a:
	{
		t1247* L_2 = (__this->f9);
		int32_t L_3 = V_1;
		uint8_t L_4 = m5493(__this, NULL);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_2, L_3)) = (int32_t)L_4;
		int32_t L_5 = V_1;
		V_1 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_002c:
	{
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_001a;
		}
	}
	{
		int16_t L_8 = m5494(__this, NULL);
		if (!L_8)
		{
			goto IL_00aa;
		}
	}
	{
		int16_t L_9 = m5494(__this, NULL);
		t536* L_10 = m5496(__this, L_9, NULL);
		t1087 * L_11 = (t1087 *)il2cpp_codegen_object_new (t1087_TI_var);
		m4555(L_11, L_10, NULL);
		V_2 = L_11;
		t1087 * L_12 = V_2;
		int32_t L_13 = m4559(L_12, NULL);
		__this->f10 = ((t48*)SZArrayNew(t48_TI_var, L_13));
		V_3 = 0;
		goto IL_009e;
	}

IL_0068:
	{
		t1087 * L_14 = V_2;
		int32_t L_15 = V_3;
		t1087 * L_16 = m4560(L_14, L_15, NULL);
		t536* L_17 = m4558(L_16, NULL);
		t1087 * L_18 = (t1087 *)il2cpp_codegen_object_new (t1087_TI_var);
		m4555(L_18, L_17, NULL);
		V_4 = L_18;
		t48* L_19 = (__this->f10);
		int32_t L_20 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(t665_TI_var);
		t665 * L_21 = m3248(NULL, NULL);
		t1087 * L_22 = V_4;
		t1087 * L_23 = m4560(L_22, 1, NULL);
		t536* L_24 = m4558(L_23, NULL);
		t47* L_25 = (t47*)VirtFuncInvoker1< t47*, t536* >::Invoke(20 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_21, L_24);
		ArrayElementTypeCheck (L_19, L_25);
		*((t47**)(t47**)SZArrayLdElema(L_19, L_20)) = (t47*)L_25;
		int32_t L_26 = V_3;
		V_3 = ((int32_t)((int32_t)L_26+(int32_t)1));
	}

IL_009e:
	{
		int32_t L_27 = V_3;
		t1087 * L_28 = V_2;
		int32_t L_29 = m4559(L_28, NULL);
		if ((((int32_t)L_27) < ((int32_t)L_29)))
		{
			goto IL_0068;
		}
	}

IL_00aa:
	{
		return;
	}
}
#include "t1256.h"
#ifndef _MSC_VER
#else
#endif
#include "t1256MD.h"

#include "t1270.h"
#include "t1269.h"
#include "t1103.h"
#include "t1224.h"
#include "t1127.h"
#include "t1243.h"
#include "t1221.h"
#include "t1197.h"
#include "t1270MD.h"
#include "t1104MD.h"
#include "t1243MD.h"
#include "t1127MD.h"
#include "t1197MD.h"


extern "C" void m5559 (t1256 * __this, t1203 * p0, t536* p1, const MethodInfo* method)
{
	{
		t1203 * L_0 = p0;
		t536* L_1 = p1;
		m5511(__this, L_0, ((int32_t)20), L_1, NULL);
		return;
	}
}
extern TypeInfo* t536_TI_var;
extern TypeInfo* t1256_TI_var;
extern FieldInfo* t1270_f14_FieldInfo_var;
extern "C" void m5560 (t7 * __this , const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t536_TI_var = il2cpp_codegen_type_info_from_index(929);
		t1256_TI_var = il2cpp_codegen_type_info_from_index(2406);
		t1270_f14_FieldInfo_var = il2cpp_codegen_field_info_from_index(2351, 14);
		s_Il2CppMethodIntialized = true;
	}
	{
		t536* L_0 = ((t536*)SZArrayNew(t536_TI_var, 4));
		m4538(NULL, (t52 *)(t52 *)L_0, LoadFieldToken(t1270_f14_FieldInfo_var), NULL);
		((t1256_SFs*)t1256_TI_var->static_fields)->f9 = L_0;
		return;
	}
}
extern "C" void m5561 (t1256 * __this, const MethodInfo* method)
{
	{
		m5516(__this, NULL);
		t1203 * L_0 = m5512(__this, NULL);
		m5219(L_0, 2, NULL);
		return;
	}
}
extern TypeInfo* t1243_TI_var;
extern TypeInfo* t1256_TI_var;
extern TypeInfo* t1202_TI_var;
extern TypeInfo* t1246_TI_var;
extern "C" void m5562 (t1256 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1243_TI_var = il2cpp_codegen_type_info_from_index(2430);
		t1256_TI_var = il2cpp_codegen_type_info_from_index(2406);
		t1202_TI_var = il2cpp_codegen_type_info_from_index(2384);
		t1246_TI_var = il2cpp_codegen_type_info_from_index(2407);
		s_Il2CppMethodIntialized = true;
	}
	t1127 * V_0 = {0};
	t536* V_1 = {0};
	t536* V_2 = {0};
	t536* V_3 = {0};
	{
		t1203 * L_0 = m5512(__this, NULL);
		t536* L_1 = m5239(L_0, NULL);
		t1243 * L_2 = (t1243 *)il2cpp_codegen_object_new (t1243_TI_var);
		m5379(L_2, L_1, NULL);
		V_0 = L_2;
		t1203 * L_3 = m5512(__this, NULL);
		t1221 * L_4 = m5226(L_3, NULL);
		t536* L_5 = m5503(L_4, NULL);
		V_1 = L_5;
		t1127 * L_6 = V_0;
		t536* L_7 = V_1;
		t536* L_8 = V_1;
		t536* L_9 = V_1;
		VirtFuncInvoker5< int32_t, t536*, int32_t, int32_t, t536*, int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.HashAlgorithm::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32) */, L_6, L_7, 0, (((int32_t)(((t52 *)L_8)->max_length))), L_9, 0);
		t1127 * L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(t1256_TI_var);
		t536* L_11 = ((t1256_SFs*)t1256_TI_var->static_fields)->f9;
		t536* L_12 = ((t1256_SFs*)t1256_TI_var->static_fields)->f9;
		t536* L_13 = ((t1256_SFs*)t1256_TI_var->static_fields)->f9;
		VirtFuncInvoker5< int32_t, t536*, int32_t, int32_t, t536*, int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.HashAlgorithm::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32) */, L_10, L_11, 0, (((int32_t)(((t52 *)L_12)->max_length))), L_13, 0);
		t1127 * L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(t1202_TI_var);
		t536* L_15 = ((t1202_SFs*)t1202_TI_var->static_fields)->f0;
		VirtFuncInvoker3< t536*, t536*, int32_t, int32_t >::Invoke(7 /* System.Byte[] System.Security.Cryptography.HashAlgorithm::TransformFinalBlock(System.Byte[],System.Int32,System.Int32) */, L_14, L_15, 0, 0);
		int64_t L_16 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(8 /* System.Int64 Mono.Security.Protocol.Tls.TlsStream::get_Length() */, __this);
		t536* L_17 = m5496(__this, (((int32_t)L_16)), NULL);
		V_2 = L_17;
		t1127 * L_18 = V_0;
		t536* L_19 = (t536*)VirtFuncInvoker0< t536* >::Invoke(9 /* System.Byte[] System.Security.Cryptography.HashAlgorithm::get_Hash() */, L_18);
		V_3 = L_19;
		t536* L_20 = V_3;
		t536* L_21 = V_2;
		bool L_22 = m5518(NULL, L_20, L_21, NULL);
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		t1246 * L_23 = (t1246 *)il2cpp_codegen_object_new (t1246_TI_var);
		m5467(L_23, ((int32_t)71), (t47*) &_stringLiteral1022, NULL);
		il2cpp_codegen_raise_exception(L_23);
	}

IL_0086:
	{
		return;
	}
}
extern TypeInfo* t1197_TI_var;
extern TypeInfo* t1246_TI_var;
extern "C" void m5563 (t1256 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1197_TI_var = il2cpp_codegen_type_info_from_index(2422);
		t1246_TI_var = il2cpp_codegen_type_info_from_index(2407);
		s_Il2CppMethodIntialized = true;
	}
	t536* V_0 = {0};
	t1127 * V_1 = {0};
	t536* V_2 = {0};
	t536* V_3 = {0};
	t536* V_4 = {0};
	{
		int64_t L_0 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(8 /* System.Int64 Mono.Security.Protocol.Tls.TlsStream::get_Length() */, __this);
		t536* L_1 = m5496(__this, (((int32_t)L_0)), NULL);
		V_0 = L_1;
		t1197 * L_2 = (t1197 *)il2cpp_codegen_object_new (t1197_TI_var);
		m5097(L_2, NULL);
		V_1 = L_2;
		t1203 * L_3 = m5512(__this, NULL);
		t1221 * L_4 = m5226(L_3, NULL);
		t536* L_5 = m5503(L_4, NULL);
		V_2 = L_5;
		t1127 * L_6 = V_1;
		t536* L_7 = V_2;
		t536* L_8 = V_2;
		t536* L_9 = m5622(L_6, L_7, 0, (((int32_t)(((t52 *)L_8)->max_length))), NULL);
		V_3 = L_9;
		t1203 * L_10 = m5512(__this, NULL);
		t1220 * L_11 = m5257(L_10, NULL);
		t1202 * L_12 = m5328(L_11, NULL);
		t1203 * L_13 = m5512(__this, NULL);
		t536* L_14 = m5239(L_13, NULL);
		t536* L_15 = V_3;
		t536* L_16 = m5139(L_12, L_14, (t47*) &_stringLiteral1023, L_15, ((int32_t)12), NULL);
		V_4 = L_16;
		t536* L_17 = V_4;
		t536* L_18 = V_0;
		bool L_19 = m5518(NULL, L_17, L_18, NULL);
		if (L_19)
		{
			goto IL_0073;
		}
	}
	{
		t1246 * L_20 = (t1246 *)il2cpp_codegen_object_new (t1246_TI_var);
		m5462(L_20, (t47*) &_stringLiteral1022, NULL);
		il2cpp_codegen_raise_exception(L_20);
	}

IL_0073:
	{
		return;
	}
}
#include "t1257.h"
#ifndef _MSC_VER
#else
#endif
#include "t1257MD.h"

#include "t1222.h"
#include "t1208.h"
#include "t1209.h"
#include "t1114MD.h"
#include "t1216MD.h"
#include "t1208MD.h"
#include "t1210MD.h"


extern "C" void m5564 (t1257 * __this, t1203 * p0, t536* p1, const MethodInfo* method)
{
	{
		t1203 * L_0 = p0;
		t536* L_1 = p1;
		m5511(__this, L_0, 2, L_1, NULL);
		return;
	}
}
extern TypeInfo* t536_TI_var;
extern "C" void m5565 (t1257 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t536_TI_var = il2cpp_codegen_type_info_from_index(929);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	t536* V_3 = {0};
	t536* V_4 = {0};
	{
		m5516(__this, NULL);
		t1203 * L_0 = m5512(__this, NULL);
		t536* L_1 = (__this->f11);
		m5211(L_0, L_1, NULL);
		t1203 * L_2 = m5512(__this, NULL);
		t536* L_3 = (__this->f10);
		m5234(L_2, L_3, NULL);
		t1203 * L_4 = m5512(__this, NULL);
		t1220 * L_5 = m5258(L_4, NULL);
		t1202 * L_6 = (__this->f12);
		m5329(L_5, L_6, NULL);
		t1203 * L_7 = m5512(__this, NULL);
		int32_t L_8 = (__this->f9);
		m5213(L_7, L_8, NULL);
		t1203 * L_9 = m5512(__this, NULL);
		m5205(L_9, 1, NULL);
		t1203 * L_10 = m5512(__this, NULL);
		t536* L_11 = m5231(L_10, NULL);
		V_0 = (((int32_t)(((t52 *)L_11)->max_length)));
		t1203 * L_12 = m5512(__this, NULL);
		t536* L_13 = m5233(L_12, NULL);
		V_1 = (((int32_t)(((t52 *)L_13)->max_length)));
		int32_t L_14 = V_0;
		int32_t L_15 = V_1;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)L_15));
		int32_t L_16 = V_2;
		V_3 = ((t536*)SZArrayNew(t536_TI_var, L_16));
		t1203 * L_17 = m5512(__this, NULL);
		t536* L_18 = m5231(L_17, NULL);
		t536* L_19 = V_3;
		int32_t L_20 = V_0;
		m4554(NULL, (t52 *)(t52 *)L_18, 0, (t52 *)(t52 *)L_19, 0, L_20, NULL);
		t1203 * L_21 = m5512(__this, NULL);
		t536* L_22 = m5233(L_21, NULL);
		t536* L_23 = V_3;
		int32_t L_24 = V_0;
		int32_t L_25 = V_1;
		m4554(NULL, (t52 *)(t52 *)L_22, 0, (t52 *)(t52 *)L_23, L_24, L_25, NULL);
		t1203 * L_26 = m5512(__this, NULL);
		t536* L_27 = V_3;
		m5236(L_26, L_27, NULL);
		int32_t L_28 = V_2;
		V_4 = ((t536*)SZArrayNew(t536_TI_var, L_28));
		t1203 * L_29 = m5512(__this, NULL);
		t536* L_30 = m5233(L_29, NULL);
		t536* L_31 = V_4;
		int32_t L_32 = V_1;
		m4554(NULL, (t52 *)(t52 *)L_30, 0, (t52 *)(t52 *)L_31, 0, L_32, NULL);
		t1203 * L_33 = m5512(__this, NULL);
		t536* L_34 = m5231(L_33, NULL);
		t536* L_35 = V_4;
		int32_t L_36 = V_1;
		int32_t L_37 = V_0;
		m4554(NULL, (t52 *)(t52 *)L_34, 0, (t52 *)(t52 *)L_35, L_36, L_37, NULL);
		t1203 * L_38 = m5512(__this, NULL);
		t536* L_39 = V_4;
		m5238(L_38, L_39, NULL);
		return;
	}
}
extern "C" void m5566 (t1257 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(24 /* System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::ProcessAsTls1() */, __this);
		return;
	}
}
extern TypeInfo* t1216_TI_var;
extern TypeInfo* t1246_TI_var;
extern "C" void m5567 (t1257 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1216_TI_var = il2cpp_codegen_type_info_from_index(2409);
		t1246_TI_var = il2cpp_codegen_type_info_from_index(2407);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int16_t V_1 = 0;
	{
		int16_t L_0 = m5494(__this, NULL);
		m5568(__this, L_0, NULL);
		t536* L_1 = m5496(__this, ((int32_t)32), NULL);
		__this->f10 = L_1;
		uint8_t L_2 = m5493(__this, NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		int32_t L_4 = V_0;
		t536* L_5 = m5496(__this, L_4, NULL);
		__this->f11 = L_5;
		t1203 * L_6 = m5512(__this, NULL);
		t1219 * L_7 = m5215(L_6, NULL);
		t47* L_8 = m5455(L_7, NULL);
		t536* L_9 = (__this->f11);
		IL2CPP_RUNTIME_CLASS_INIT(t1216_TI_var);
		m5196(NULL, L_8, L_9, NULL);
		t1203 * L_10 = m5512(__this, NULL);
		t536* L_11 = (__this->f11);
		t1203 * L_12 = m5512(__this, NULL);
		t536* L_13 = m5210(L_12, NULL);
		bool L_14 = m5518(NULL, L_11, L_13, NULL);
		m5203(L_10, L_14, NULL);
		goto IL_0082;
	}

IL_0076:
	{
		t1203 * L_15 = m5512(__this, NULL);
		m5203(L_15, 0, NULL);
	}

IL_0082:
	{
		int16_t L_16 = m5494(__this, NULL);
		V_1 = L_16;
		t1203 * L_17 = m5512(__this, NULL);
		t1208 * L_18 = m5224(L_17, NULL);
		int16_t L_19 = V_1;
		int32_t L_20 = m5165(L_18, L_19, NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)(-1)))))
		{
			goto IL_00ad;
		}
	}
	{
		t1246 * L_21 = (t1246 *)il2cpp_codegen_object_new (t1246_TI_var);
		m5467(L_21, ((int32_t)71), (t47*) &_stringLiteral1024, NULL);
		il2cpp_codegen_raise_exception(L_21);
	}

IL_00ad:
	{
		t1203 * L_22 = m5512(__this, NULL);
		t1208 * L_23 = m5224(L_22, NULL);
		int16_t L_24 = V_1;
		t1202 * L_25 = m5158(L_23, L_24, NULL);
		__this->f12 = L_25;
		uint8_t L_26 = m5493(__this, NULL);
		__this->f9 = L_26;
		return;
	}
}
extern TypeInfo* t1246_TI_var;
extern "C" void m5568 (t1257 * __this, int16_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1246_TI_var = il2cpp_codegen_type_info_from_index(2407);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	{
		t1203 * L_0 = m5512(__this, NULL);
		int16_t L_1 = p0;
		int32_t L_2 = m5255(L_0, L_1, NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		t1203 * L_4 = m5512(__this, NULL);
		int32_t L_5 = m5208(L_4, NULL);
		int32_t L_6 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_3&(int32_t)L_5))) == ((int32_t)L_6)))
		{
			goto IL_003b;
		}
	}
	{
		t1203 * L_7 = m5512(__this, NULL);
		int32_t L_8 = m5208(L_7, NULL);
		if ((!(((uint32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)-1073741824)))) == ((uint32_t)((int32_t)-1073741824)))))
		{
			goto IL_0079;
		}
	}

IL_003b:
	{
		t1203 * L_9 = m5512(__this, NULL);
		int32_t L_10 = V_0;
		m5207(L_9, L_10, NULL);
		t1203 * L_11 = m5512(__this, NULL);
		t1208 * L_12 = m5224(L_11, NULL);
		VirtActionInvoker0::Invoke(14 /* System.Void Mono.Security.Protocol.Tls.CipherSuiteCollection::Clear() */, L_12);
		t1203 * L_13 = m5512(__this, NULL);
		m5225(L_13, (t1208 *)NULL, NULL);
		t1203 * L_14 = m5512(__this, NULL);
		int32_t L_15 = V_0;
		t1208 * L_16 = m5170(NULL, L_15, NULL);
		m5225(L_14, L_16, NULL);
		goto IL_0086;
	}

IL_0079:
	{
		t1246 * L_17 = (t1246 *)il2cpp_codegen_object_new (t1246_TI_var);
		m5467(L_17, ((int32_t)70), (t47*) &_stringLiteral969, NULL);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_0086:
	{
		return;
	}
}
#include "t1258.h"
#ifndef _MSC_VER
#else
#endif
#include "t1258MD.h"



extern "C" void m5569 (t1258 * __this, t1203 * p0, t536* p1, const MethodInfo* method)
{
	{
		t1203 * L_0 = p0;
		t536* L_1 = p1;
		m5511(__this, L_0, ((int32_t)14), L_1, NULL);
		return;
	}
}
extern "C" void m5570 (t1258 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
extern "C" void m5571 (t1258 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
#include "t1259.h"
#ifndef _MSC_VER
#else
#endif
#include "t1259MD.h"

#include "t1110.h"
#include "t1086.h"


extern "C" void m5572 (t1259 * __this, t1203 * p0, t536* p1, const MethodInfo* method)
{
	{
		t1203 * L_0 = p0;
		t536* L_1 = p1;
		m5511(__this, L_0, ((int32_t)12), L_1, NULL);
		m5576(__this, NULL);
		return;
	}
}
extern "C" void m5573 (t1259 * __this, const MethodInfo* method)
{
	{
		m5516(__this, NULL);
		t1203 * L_0 = m5512(__this, NULL);
		t1218 * L_1 = m5214(L_0, NULL);
		m5471(L_1, 1, NULL);
		t1203 * L_2 = m5512(__this, NULL);
		t1218 * L_3 = m5214(L_2, NULL);
		t1110  L_4 = (__this->f9);
		m5476(L_3, L_4, NULL);
		t1203 * L_5 = m5512(__this, NULL);
		t1218 * L_6 = m5214(L_5, NULL);
		t536* L_7 = (__this->f10);
		m5477(L_6, L_7, NULL);
		return;
	}
}
extern "C" void m5574 (t1259 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(24 /* System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::ProcessAsTls1() */, __this);
		return;
	}
}
extern TypeInfo* t1110_TI_var;
extern "C" void m5575 (t1259 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1110_TI_var = il2cpp_codegen_type_info_from_index(1859);
		s_Il2CppMethodIntialized = true;
	}
	t1110  V_0 = {0};
	{
		Initobj (t1110_TI_var, (&V_0));
		t1110  L_0 = V_0;
		__this->f9 = L_0;
		t1110 * L_1 = &(__this->f9);
		int16_t L_2 = m5494(__this, NULL);
		t536* L_3 = m5496(__this, L_2, NULL);
		L_1->f6 = L_3;
		t1110 * L_4 = &(__this->f9);
		int16_t L_5 = m5494(__this, NULL);
		t536* L_6 = m5496(__this, L_5, NULL);
		L_4->f7 = L_6;
		int16_t L_7 = m5494(__this, NULL);
		t536* L_8 = m5496(__this, L_7, NULL);
		__this->f10 = L_8;
		return;
	}
}
extern TypeInfo* t1197_TI_var;
extern TypeInfo* t1221_TI_var;
extern TypeInfo* t1246_TI_var;
extern "C" void m5576 (t1259 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1197_TI_var = il2cpp_codegen_type_info_from_index(2422);
		t1221_TI_var = il2cpp_codegen_type_info_from_index(2386);
		t1246_TI_var = il2cpp_codegen_type_info_from_index(2407);
		s_Il2CppMethodIntialized = true;
	}
	t1197 * V_0 = {0};
	int32_t V_1 = 0;
	t1221 * V_2 = {0};
	bool V_3 = false;
	{
		t1197 * L_0 = (t1197 *)il2cpp_codegen_object_new (t1197_TI_var);
		m5097(L_0, NULL);
		V_0 = L_0;
		t1110 * L_1 = &(__this->f9);
		t536* L_2 = (L_1->f6);
		t1110 * L_3 = &(__this->f9);
		t536* L_4 = (L_3->f7);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((t52 *)L_2)->max_length)))+(int32_t)(((int32_t)(((t52 *)L_4)->max_length)))))+(int32_t)4));
		t1221 * L_5 = (t1221 *)il2cpp_codegen_object_new (t1221_TI_var);
		m5483(L_5, NULL);
		V_2 = L_5;
		t1221 * L_6 = V_2;
		t1203 * L_7 = m5512(__this, NULL);
		t536* L_8 = m5235(L_7, NULL);
		m5501(L_6, L_8, NULL);
		t1221 * L_9 = V_2;
		t536* L_10 = m5503(__this, NULL);
		int32_t L_11 = V_1;
		VirtActionInvoker3< t536*, int32_t, int32_t >::Invoke(18 /* System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Byte[],System.Int32,System.Int32) */, L_9, L_10, 0, L_11);
		t1197 * L_12 = V_0;
		t1221 * L_13 = V_2;
		t536* L_14 = m5503(L_13, NULL);
		m4633(L_12, L_14, NULL);
		t1221 * L_15 = V_2;
		m5502(L_15, NULL);
		t1197 * L_16 = V_0;
		t1203 * L_17 = m5512(__this, NULL);
		t1218 * L_18 = m5214(L_17, NULL);
		t1086 * L_19 = m5474(L_18, NULL);
		t536* L_20 = (__this->f10);
		bool L_21 = m5102(L_16, L_19, L_20, NULL);
		V_3 = L_21;
		bool L_22 = V_3;
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		t1246 * L_23 = (t1246 *)il2cpp_codegen_object_new (t1246_TI_var);
		m5467(L_23, ((int32_t)50), (t47*) &_stringLiteral1025, NULL);
		il2cpp_codegen_raise_exception(L_23);
	}

IL_008c:
	{
		return;
	}
}
#include "t1260.h"
#ifndef _MSC_VER
#else
#endif
#include "t1260MD.h"

#include "t226.h"
#include "t1158.h"
#include "t1162.h"
#include "t213.h"


extern "C" void m5577 (t1260 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" bool m5578 (t1260 * __this, t1158 * p0, int32_t p1, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m5578((t1260 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (t7 *, t7 * __this, t1158 * p0, int32_t p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (t7 * __this, t1158 * p0, int32_t p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (t7 * __this, int32_t p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" bool pinvoke_delegate_wrapper_t1260(Il2CppObject* delegate, t1158 * p0, int32_t p1)
{
	// Marshaling of parameter 'p0' to native representation
	t1158 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'Mono.Math.BigInteger'."));
}
extern TypeInfo* t1162_TI_var;
extern "C" t7 * m5579 (t1260 * __this, t1158 * p0, int32_t p1, t213 * p2, t7 * p3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t1162_TI_var = il2cpp_codegen_type_info_from_index(2438);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = Box(t1162_TI_var, &p1);
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern "C" bool m5580 (t1260 * __this, t7 * p0, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
#include "t1239.h"
#ifndef _MSC_VER
#else
#endif
#include "t1239MD.h"



extern "C" void m5581 (t1239 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" bool m5582 (t1239 * __this, t974 * p0, t1018* p1, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m5582((t1239 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (t7 *, t7 * __this, t974 * p0, t1018* p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (t7 * __this, t974 * p0, t1018* p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (t7 * __this, t1018* p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" bool pinvoke_delegate_wrapper_t1239(Il2CppObject* delegate, t974 * p0, t1018* p1)
{
	// Marshaling of parameter 'p0' to native representation
	t974 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Security.Cryptography.X509Certificates.X509Certificate'."));
}
extern "C" t7 * m5583 (t1239 * __this, t974 * p0, t1018* p1, t213 * p2, t7 * p3, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern "C" bool m5584 (t1239 * __this, t7 * p0, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
#include "t1240.h"
#ifndef _MSC_VER
#else
#endif
#include "t1240MD.h"



extern "C" void m5585 (t1240 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" t1238 * m5586 (t1240 * __this, t1118 * p0, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m5586((t1240 *)__this->f9,p0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t1238 * (*FunctionPointerType) (t7 *, t7 * __this, t1118 * p0, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef t1238 * (*FunctionPointerType) (t7 * __this, t1118 * p0, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef t1238 * (*FunctionPointerType) (t7 * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" t1238 * pinvoke_delegate_wrapper_t1240(Il2CppObject* delegate, t1118 * p0)
{
	// Marshaling of parameter 'p0' to native representation
	t1118 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'Mono.Security.X509.X509CertificateCollection'."));
}
extern "C" t7 * m5587 (t1240 * __this, t1118 * p0, t213 * p1, t7 * p2, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = p0;
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p1, (Il2CppObject*)p2);
}
extern "C" t1238 * m5588 (t1240 * __this, t7 * p0, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return (t1238 *)__result;
}
#include "t1226.h"
#ifndef _MSC_VER
#else
#endif
#include "t1226MD.h"

#include "t945.h"


extern "C" void m5589 (t1226 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" t974 * m5590 (t1226 * __this, t945 * p0, t974 * p1, t47* p2, t945 * p3, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m5590((t1226 *)__this->f9,p0, p1, p2, p3, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t974 * (*FunctionPointerType) (t7 *, t7 * __this, t945 * p0, t974 * p1, t47* p2, t945 * p3, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1, p2, p3,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef t974 * (*FunctionPointerType) (t7 * __this, t945 * p0, t974 * p1, t47* p2, t945 * p3, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1, p2, p3,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef t974 * (*FunctionPointerType) (t7 * __this, t974 * p1, t47* p2, t945 * p3, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0, p1, p2, p3,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" t974 * pinvoke_delegate_wrapper_t1226(Il2CppObject* delegate, t945 * p0, t974 * p1, t47* p2, t945 * p3)
{
	// Marshaling of parameter 'p0' to native representation
	t945 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Security.Cryptography.X509Certificates.X509CertificateCollection'."));
}
extern "C" t7 * m5591 (t1226 * __this, t945 * p0, t974 * p1, t47* p2, t945 * p3, t213 * p4, t7 * p5, const MethodInfo* method)
{
	void *__d_args[5] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	__d_args[2] = p2;
	__d_args[3] = p3;
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p4, (Il2CppObject*)p5);
}
extern "C" t974 * m5592 (t1226 * __this, t7 * p0, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return (t974 *)__result;
}
#include "t1227.h"
#ifndef _MSC_VER
#else
#endif
#include "t1227MD.h"

#include "t961.h"


extern "C" void m5593 (t1227 * __this, t7 * p0, t226 p1, const MethodInfo* method)
{
	__this->f0 = (methodPointerType)((MethodInfo*)p1.f0)->method;
	__this->f3 = p1;
	__this->f2 = p0;
}
extern "C" t961 * m5594 (t1227 * __this, t974 * p0, t47* p1, const MethodInfo* method)
{
	if(__this->f9 != NULL)
	{
		m5594((t1227 *)__this->f9,p0, p1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->f3.f0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->f3.f0));
	if (__this->f2 != NULL && ___methodIsStatic)
	{
		typedef t961 * (*FunctionPointerType) (t7 *, t7 * __this, t974 * p0, t47* p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(NULL,__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else if (__this->f2 != NULL || ___methodIsStatic)
	{
		typedef t961 * (*FunctionPointerType) (t7 * __this, t974 * p0, t47* p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(__this->f2,p0, p1,(MethodInfo*)(__this->f3.f0));
	}
	else
	{
		typedef t961 * (*FunctionPointerType) (t7 * __this, t47* p1, const MethodInfo* method);
		return ((FunctionPointerType)__this->f0)(p0, p1,(MethodInfo*)(__this->f3.f0));
	}
}
extern "C" t961 * pinvoke_delegate_wrapper_t1227(Il2CppObject* delegate, t974 * p0, t47* p1)
{
	// Marshaling of parameter 'p0' to native representation
	t974 * _p0_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Security.Cryptography.X509Certificates.X509Certificate'."));
}
extern "C" t7 * m5595 (t1227 * __this, t974 * p0, t47* p1, t213 * p2, t7 * p3, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = p0;
	__d_args[1] = p1;
	return (t7 *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)p2, (Il2CppObject*)p3);
}
extern "C" t961 * m5596 (t1227 * __this, t7 * p0, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return (t961 *)__result;
}
#include "t1261.h"
#ifndef _MSC_VER
#else
#endif
#include "t1261MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$3132
void t1261_marshal(const t1261& unmarshaled, t1261_marshaled& marshaled)
{
}
void t1261_marshal_back(const t1261_marshaled& marshaled, t1261& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$3132
void t1261_marshal_cleanup(t1261_marshaled& marshaled)
{
}
#include "t1262.h"
#ifndef _MSC_VER
#else
#endif
#include "t1262MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$256
void t1262_marshal(const t1262& unmarshaled, t1262_marshaled& marshaled)
{
}
void t1262_marshal_back(const t1262_marshaled& marshaled, t1262& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$256
void t1262_marshal_cleanup(t1262_marshaled& marshaled)
{
}
#include "t1263.h"
#ifndef _MSC_VER
#else
#endif
#include "t1263MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$20
void t1263_marshal(const t1263& unmarshaled, t1263_marshaled& marshaled)
{
}
void t1263_marshal_back(const t1263_marshaled& marshaled, t1263& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$20
void t1263_marshal_cleanup(t1263_marshaled& marshaled)
{
}
#include "t1264.h"
#ifndef _MSC_VER
#else
#endif
#include "t1264MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$32
void t1264_marshal(const t1264& unmarshaled, t1264_marshaled& marshaled)
{
}
void t1264_marshal_back(const t1264_marshaled& marshaled, t1264& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$32
void t1264_marshal_cleanup(t1264_marshaled& marshaled)
{
}
#include "t1265.h"
#ifndef _MSC_VER
#else
#endif
#include "t1265MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$48
void t1265_marshal(const t1265& unmarshaled, t1265_marshaled& marshaled)
{
}
void t1265_marshal_back(const t1265_marshaled& marshaled, t1265& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$48
void t1265_marshal_cleanup(t1265_marshaled& marshaled)
{
}
#include "t1266.h"
#ifndef _MSC_VER
#else
#endif
#include "t1266MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$64
void t1266_marshal(const t1266& unmarshaled, t1266_marshaled& marshaled)
{
}
void t1266_marshal_back(const t1266_marshaled& marshaled, t1266& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$64
void t1266_marshal_cleanup(t1266_marshaled& marshaled)
{
}
#include "t1267.h"
#ifndef _MSC_VER
#else
#endif
#include "t1267MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$12
void t1267_marshal(const t1267& unmarshaled, t1267_marshaled& marshaled)
{
}
void t1267_marshal_back(const t1267_marshaled& marshaled, t1267& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$12
void t1267_marshal_cleanup(t1267_marshaled& marshaled)
{
}
#include "t1268.h"
#ifndef _MSC_VER
#else
#endif
#include "t1268MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$16
void t1268_marshal(const t1268& unmarshaled, t1268_marshaled& marshaled)
{
}
void t1268_marshal_back(const t1268_marshaled& marshaled, t1268& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$16
void t1268_marshal_cleanup(t1268_marshaled& marshaled)
{
}
#ifndef _MSC_VER
#else
#endif
#include "t1269MD.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$4
void t1269_marshal(const t1269& unmarshaled, t1269_marshaled& marshaled)
{
}
void t1269_marshal_back(const t1269_marshaled& marshaled, t1269& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$4
void t1269_marshal_cleanup(t1269_marshaled& marshaled)
{
}
#ifndef _MSC_VER
#else
#endif



#ifdef __clang__
#pragma clang diagnostic pop
#endif

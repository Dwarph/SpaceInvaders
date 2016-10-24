#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "t83.h"
#include "t83MD.h"
extern TypeInfo* t83_TI_var;
void g_replacements_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t83_TI_var = il2cpp_codegen_type_info_from_index(42);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(t7 *) * cache->count, 0);
	{
		t83 * tmp;
		tmp = (t83 *)il2cpp_codegen_object_new (t83_TI_var);
		m222(tmp, NULL);
		m223(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern const CustomAttributesCacheGenerator g_replacements_Assembly_AttributeGenerators[2] = 
{
	NULL,
	g_replacements_Assembly_CustomAttributesCacheGenerator,
};

#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.IEnumerable`1<Card>
struct IEnumerable_1_t4A05F0466776CBEF9268FCFE7B67FB1588692FD5;
// System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject>
struct IEnumerable_1_t59A95566E6FBF6B195B841B400D0A6B7264A738B;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.List`1<Card>
struct List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// Card[]
struct CardU5BU5D_t32023BF72E2560CD1EA88DF7C04357E784A64CE0;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.Animation
struct Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8;
// UnityEngine.AnimationClip
struct AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9;
// Buttons_Freeplay
struct Buttons_Freeplay_t96C3A7A5B43165E153EA5DEDEDCE76F975011EF9;
// Buttons_main_menu
struct Buttons_main_menu_tAAF359D4F7E0D32211D9F30E2E378CF322096026;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// Card
struct Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// Deck
struct Deck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// MainMenu
struct MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// column
struct column_tC27722C067C60EB3159C904F72D98C84D24D178F;
// drewCards
struct drewCards_t708EC2346243631931783D1778956BFB96B2D8B4;
// foundation_stack
struct foundation_stack_tF7696B65F2806C093FB52E859D52FD8414A73474;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;

IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* suites_t082CD66155D5506789505A9D67C4A7CA82CC5EAC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0089558FB231EAA964E53858BC9D84729EE114DF;
IL2CPP_EXTERN_C String_t* _stringLiteral067785FDC60F2E3664D42CFB10744A3A52E2E7D4;
IL2CPP_EXTERN_C String_t* _stringLiteral0984F005EFCC3DFF1064E28203D415B417B1175D;
IL2CPP_EXTERN_C String_t* _stringLiteral0AFD264A712183E84BF9A1E7EAA8F754291A4D08;
IL2CPP_EXTERN_C String_t* _stringLiteral0B5ECFF84CE073C4971D637741C560F910E4D128;
IL2CPP_EXTERN_C String_t* _stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A;
IL2CPP_EXTERN_C String_t* _stringLiteral0D6D57BEEEC9D9AD4DEBC273D6606CC0D74DC2D5;
IL2CPP_EXTERN_C String_t* _stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6;
IL2CPP_EXTERN_C String_t* _stringLiteral1B456B36734FC7645D05A7BFB6ECA6D741E1FE47;
IL2CPP_EXTERN_C String_t* _stringLiteral299E01A3C227A338CCCF7D17E88F26B036E2B8EC;
IL2CPP_EXTERN_C String_t* _stringLiteral34C62C0EA9964074E2383B62B1E943BBA2405B92;
IL2CPP_EXTERN_C String_t* _stringLiteral3E932EC7D2EEC22A51CBE84540A0DC9FD3F78E06;
IL2CPP_EXTERN_C String_t* _stringLiteral3EF38F7F2D8006E1B9DE274323AE09BFBD4E7C85;
IL2CPP_EXTERN_C String_t* _stringLiteral49D97AE80EB1A937D5C64A142DC59ECCC382A385;
IL2CPP_EXTERN_C String_t* _stringLiteral4D64A1A65691EF245013E4168E12EB8677A50B7D;
IL2CPP_EXTERN_C String_t* _stringLiteral5B176493DEC7DB4185CAE1F3B5817E7202CEC39C;
IL2CPP_EXTERN_C String_t* _stringLiteral66BE77405B0965E9F37054BDCBAC0E079EF5B734;
IL2CPP_EXTERN_C String_t* _stringLiteral6AEFF7A39C3075BB544438038483FF1B59A901E3;
IL2CPP_EXTERN_C String_t* _stringLiteral743EDCAC6A947FFD1935E497F5077BF2575811AC;
IL2CPP_EXTERN_C String_t* _stringLiteral7A454F3CAE24EF2E5829E0FC224BB0A284DC3B91;
IL2CPP_EXTERN_C String_t* _stringLiteral7DA1760BD800AD437B2EBD92CA3FC1C9F5467B58;
IL2CPP_EXTERN_C String_t* _stringLiteral83DCBC69E12F51DB4249D25D3753D2B6861E21DE;
IL2CPP_EXTERN_C String_t* _stringLiteral845E4BAC9CC930C637796D1920DD2D2F0A47D427;
IL2CPP_EXTERN_C String_t* _stringLiteral864E1583B8BD56F8699539A2F6E5328D9409B2D3;
IL2CPP_EXTERN_C String_t* _stringLiteral8B53E7132DD0569F0630DA976C7CA00A9D7E675E;
IL2CPP_EXTERN_C String_t* _stringLiteral8C72D3EED78A7734B22D8EB04F54CDD7F75A694F;
IL2CPP_EXTERN_C String_t* _stringLiteral947610918E815EA32DDFB8A4CD7A91DD72C33DE7;
IL2CPP_EXTERN_C String_t* _stringLiteral9503ABA0E56FBCC294607F28289FF7D9D940C436;
IL2CPP_EXTERN_C String_t* _stringLiteral9DAE3DAC0A5E4AD80EDB23866591E68D397DC1F7;
IL2CPP_EXTERN_C String_t* _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26;
IL2CPP_EXTERN_C String_t* _stringLiteralA8E07FAA74839C2885E54412D3FB4A19F604A3B0;
IL2CPP_EXTERN_C String_t* _stringLiteralBAA85408D3D58FCDAFE3D78B95B26DAF759B0969;
IL2CPP_EXTERN_C String_t* _stringLiteralBB0E4E0DA64B552A6DF1FD690E8A7E9867403BC7;
IL2CPP_EXTERN_C String_t* _stringLiteralBCAEDA72F17D9EA7A04BBA53EA9DCA508AF3D24A;
IL2CPP_EXTERN_C String_t* _stringLiteralC36DB4D1CE0DAB209D1A800E647286F0EAF41959;
IL2CPP_EXTERN_C String_t* _stringLiteralC5E21817FB7D5AF92C110AC50752865641AB478A;
IL2CPP_EXTERN_C String_t* _stringLiteralCF3ECE548E6E2CA5C9AC3E5C6B47CB2AA6E7CAE9;
IL2CPP_EXTERN_C String_t* _stringLiteralD27FB8C857B99AB7846237A8679B6CF0E1DEAA03;
IL2CPP_EXTERN_C String_t* _stringLiteralD3CB3A20E1CC58899D06F409AAB6232B67C0FAE8;
IL2CPP_EXTERN_C String_t* _stringLiteralD4BF7455473014D7ED03B9A85EC88FAD6731F181;
IL2CPP_EXTERN_C String_t* _stringLiteralD5EFE76FBE0C730DDF599FCFE531602021BC9FDE;
IL2CPP_EXTERN_C String_t* _stringLiteralDDED6F63A07A5FE3DC6B78EAC0D3389DBDBA03D2;
IL2CPP_EXTERN_C String_t* _stringLiteralDE9F08016CCF709F69461A29A141DA6A20FD1175;
IL2CPP_EXTERN_C String_t* _stringLiteralE9B577CAE7605B964C63995C672D6F87AF3CAF63;
IL2CPP_EXTERN_C String_t* _stringLiteralEC9CFA0D0D65B6009664422D1FD80CE503F2EA4B;
IL2CPP_EXTERN_C String_t* _stringLiteralF27CE04C2675C7C90A12E894E27EBB833C7EFAF8;
IL2CPP_EXTERN_C String_t* _stringLiteralFEF0F611D8E0D8A5B0A88BEF18F10A3E7D0343A3;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8_mACBD944B2C02DA6B1A24E69FE6501EE674A5B3F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_Tiscolumn_tC27722C067C60EB3159C904F72D98C84D24D178F_mEDF47F8FE8EAFDB77E0A5B06BDC5BACED6552B0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_Tisfoundation_stack_tF7696B65F2806C093FB52E859D52FD8414A73474_m2237D0B4BAE4635E1B82CA1F0D68786E00408376_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisDeck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520_m2DA78CAA5FF98B767257748EB92DDB68A16C0F52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m88A7E5FCDCC9023AD65A41F4BB3A5A136ABF9B77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mEEF153BD8E93627967901FFE4171B80200BD02A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetRange_mE238E7B6B204C9AB1D08A20CF9DBCB170907A34F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mAB148BF0E3CF1F336D76377BD01824F30A0582C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mAB2CE8D5995397704057D492A25E8F878664C2A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveRange_m5EB1AD0B44D5BDB9BD503E9DCF3F00833AFC21DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Reverse_m4F2EE1EFE5F10C464C9BF382C9B47A458ED9569E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Reverse_m73DFA5BC0474DF46522223788C60FB845ADBE682_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_TrimExcess_m4E71933EC666BE369F5C3A509D54040FE51619FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_TrimExcess_m75A6CB1F1742B9B6FDB55B9CB8C196516CD78CF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m53EB398B09E4467FD72A0D1A4B7F871F9240E060_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<Card>
struct List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	CardU5BU5D_t32023BF72E2560CD1EA88DF7C04357E784A64CE0* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099, ____items_1)); }
	inline CardU5BU5D_t32023BF72E2560CD1EA88DF7C04357E784A64CE0* get__items_1() const { return ____items_1; }
	inline CardU5BU5D_t32023BF72E2560CD1EA88DF7C04357E784A64CE0** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(CardU5BU5D_t32023BF72E2560CD1EA88DF7C04357E784A64CE0* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	CardU5BU5D_t32023BF72E2560CD1EA88DF7C04357E784A64CE0* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099_StaticFields, ____emptyArray_5)); }
	inline CardU5BU5D_t32023BF72E2560CD1EA88DF7C04357E784A64CE0* get__emptyArray_5() const { return ____emptyArray_5; }
	inline CardU5BU5D_t32023BF72E2560CD1EA88DF7C04357E784A64CE0** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(CardU5BU5D_t32023BF72E2560CD1EA88DF7C04357E784A64CE0* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____items_1)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields, ____emptyArray_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___list_0)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_list_0() const { return ___list_0; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___current_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_current_3() const { return ___current_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Card/suites
struct suites_t082CD66155D5506789505A9D67C4A7CA82CC5EAC 
{
public:
	// System.Int32 Card/suites::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(suites_t082CD66155D5506789505A9D67C4A7CA82CC5EAC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Motion
struct Motion_t3EAEF01D52B05F10A21CC9B54A35C8F3F6BA3A67  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// System.Boolean UnityEngine.Motion::<isAnimatorMotion>k__BackingField
	bool ___U3CisAnimatorMotionU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CisAnimatorMotionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Motion_t3EAEF01D52B05F10A21CC9B54A35C8F3F6BA3A67, ___U3CisAnimatorMotionU3Ek__BackingField_4)); }
	inline bool get_U3CisAnimatorMotionU3Ek__BackingField_4() const { return ___U3CisAnimatorMotionU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CisAnimatorMotionU3Ek__BackingField_4() { return &___U3CisAnimatorMotionU3Ek__BackingField_4; }
	inline void set_U3CisAnimatorMotionU3Ek__BackingField_4(bool value)
	{
		___U3CisAnimatorMotionU3Ek__BackingField_4 = value;
	}
};


// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.AnimationClip
struct AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178  : public Motion_t3EAEF01D52B05F10A21CC9B54A35C8F3F6BA3A67
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Animation
struct Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.BoxCollider2D
struct BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9  : public Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722
{
public:

public:
};


// Buttons_Freeplay
struct Buttons_Freeplay_t96C3A7A5B43165E153EA5DEDEDCE76F975011EF9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Buttons_main_menu
struct Buttons_main_menu_tAAF359D4F7E0D32211D9F30E2E378CF322096026  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Card
struct Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Sprite Card::fSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___fSprite_4;
	// UnityEngine.Sprite Card::bSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___bSprite_5;
	// System.Int32 Card::value
	int32_t ___value_6;
	// Card/suites Card::suite
	int32_t ___suite_7;
	// System.Boolean Card::isFaceUp
	bool ___isFaceUp_8;
	// UnityEngine.AnimationClip Card::anim
	AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * ___anim_9;
	// UnityEngine.Animation Card::anim2
	Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * ___anim2_10;

public:
	inline static int32_t get_offset_of_fSprite_4() { return static_cast<int32_t>(offsetof(Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A, ___fSprite_4)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_fSprite_4() const { return ___fSprite_4; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_fSprite_4() { return &___fSprite_4; }
	inline void set_fSprite_4(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___fSprite_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fSprite_4), (void*)value);
	}

	inline static int32_t get_offset_of_bSprite_5() { return static_cast<int32_t>(offsetof(Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A, ___bSprite_5)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_bSprite_5() const { return ___bSprite_5; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_bSprite_5() { return &___bSprite_5; }
	inline void set_bSprite_5(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___bSprite_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bSprite_5), (void*)value);
	}

	inline static int32_t get_offset_of_value_6() { return static_cast<int32_t>(offsetof(Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A, ___value_6)); }
	inline int32_t get_value_6() const { return ___value_6; }
	inline int32_t* get_address_of_value_6() { return &___value_6; }
	inline void set_value_6(int32_t value)
	{
		___value_6 = value;
	}

	inline static int32_t get_offset_of_suite_7() { return static_cast<int32_t>(offsetof(Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A, ___suite_7)); }
	inline int32_t get_suite_7() const { return ___suite_7; }
	inline int32_t* get_address_of_suite_7() { return &___suite_7; }
	inline void set_suite_7(int32_t value)
	{
		___suite_7 = value;
	}

	inline static int32_t get_offset_of_isFaceUp_8() { return static_cast<int32_t>(offsetof(Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A, ___isFaceUp_8)); }
	inline bool get_isFaceUp_8() const { return ___isFaceUp_8; }
	inline bool* get_address_of_isFaceUp_8() { return &___isFaceUp_8; }
	inline void set_isFaceUp_8(bool value)
	{
		___isFaceUp_8 = value;
	}

	inline static int32_t get_offset_of_anim_9() { return static_cast<int32_t>(offsetof(Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A, ___anim_9)); }
	inline AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * get_anim_9() const { return ___anim_9; }
	inline AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 ** get_address_of_anim_9() { return &___anim_9; }
	inline void set_anim_9(AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * value)
	{
		___anim_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anim_9), (void*)value);
	}

	inline static int32_t get_offset_of_anim2_10() { return static_cast<int32_t>(offsetof(Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A, ___anim2_10)); }
	inline Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * get_anim2_10() const { return ___anim2_10; }
	inline Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 ** get_address_of_anim2_10() { return &___anim2_10; }
	inline void set_anim2_10(Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * value)
	{
		___anim2_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anim2_10), (void*)value);
	}
};


// Deck
struct Deck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject Deck::cardPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___cardPrefab_4;
	// UnityEngine.GameObject Deck::gm
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gm_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Deck::cards
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___cards_6;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Deck::drewCards
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___drewCards_7;
	// UnityEngine.Sprite Deck::bSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___bSprite_8;
	// UnityEngine.Vector3 Deck::drawLocation
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___drawLocation_9;
	// UnityEngine.GameObject Deck::drewObj
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___drewObj_10;
	// UnityEngine.GameObject Deck::tableu
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___tableu_11;

public:
	inline static int32_t get_offset_of_cardPrefab_4() { return static_cast<int32_t>(offsetof(Deck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520, ___cardPrefab_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_cardPrefab_4() const { return ___cardPrefab_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_cardPrefab_4() { return &___cardPrefab_4; }
	inline void set_cardPrefab_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___cardPrefab_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cardPrefab_4), (void*)value);
	}

	inline static int32_t get_offset_of_gm_5() { return static_cast<int32_t>(offsetof(Deck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520, ___gm_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gm_5() const { return ___gm_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gm_5() { return &___gm_5; }
	inline void set_gm_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gm_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gm_5), (void*)value);
	}

	inline static int32_t get_offset_of_cards_6() { return static_cast<int32_t>(offsetof(Deck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520, ___cards_6)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_cards_6() const { return ___cards_6; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_cards_6() { return &___cards_6; }
	inline void set_cards_6(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___cards_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cards_6), (void*)value);
	}

	inline static int32_t get_offset_of_drewCards_7() { return static_cast<int32_t>(offsetof(Deck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520, ___drewCards_7)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_drewCards_7() const { return ___drewCards_7; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_drewCards_7() { return &___drewCards_7; }
	inline void set_drewCards_7(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___drewCards_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___drewCards_7), (void*)value);
	}

	inline static int32_t get_offset_of_bSprite_8() { return static_cast<int32_t>(offsetof(Deck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520, ___bSprite_8)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_bSprite_8() const { return ___bSprite_8; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_bSprite_8() { return &___bSprite_8; }
	inline void set_bSprite_8(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___bSprite_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bSprite_8), (void*)value);
	}

	inline static int32_t get_offset_of_drawLocation_9() { return static_cast<int32_t>(offsetof(Deck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520, ___drawLocation_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_drawLocation_9() const { return ___drawLocation_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_drawLocation_9() { return &___drawLocation_9; }
	inline void set_drawLocation_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___drawLocation_9 = value;
	}

	inline static int32_t get_offset_of_drewObj_10() { return static_cast<int32_t>(offsetof(Deck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520, ___drewObj_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_drewObj_10() const { return ___drewObj_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_drewObj_10() { return &___drewObj_10; }
	inline void set_drewObj_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___drewObj_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___drewObj_10), (void*)value);
	}

	inline static int32_t get_offset_of_tableu_11() { return static_cast<int32_t>(offsetof(Deck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520, ___tableu_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_tableu_11() const { return ___tableu_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_tableu_11() { return &___tableu_11; }
	inline void set_tableu_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___tableu_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tableu_11), (void*)value);
	}
};


// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject GameManager::winner
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___winner_7;
	// UnityEngine.GameObject GameManager::btns
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___btns_8;
	// UnityEngine.GameObject GameManager::strt
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___strt_9;
	// UnityEngine.GameObject GameManager::loser
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___loser_10;
	// UnityEngine.UI.Text GameManager::scoreTxt
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___scoreTxt_12;
	// UnityEngine.UI.Text GameManager::timeTxt
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___timeTxt_13;
	// System.Boolean GameManager::gameWon
	bool ___gameWon_16;
	// System.Int32 GameManager::t
	int32_t ___t_17;
	// System.Int32 GameManager::time
	int32_t ___time_18;
	// System.Int32 GameManager::score
	int32_t ___score_19;
	// System.Int32 GameManager::finalTime
	int32_t ___finalTime_20;

public:
	inline static int32_t get_offset_of_winner_7() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___winner_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_winner_7() const { return ___winner_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_winner_7() { return &___winner_7; }
	inline void set_winner_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___winner_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___winner_7), (void*)value);
	}

	inline static int32_t get_offset_of_btns_8() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___btns_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_btns_8() const { return ___btns_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_btns_8() { return &___btns_8; }
	inline void set_btns_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___btns_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___btns_8), (void*)value);
	}

	inline static int32_t get_offset_of_strt_9() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___strt_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_strt_9() const { return ___strt_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_strt_9() { return &___strt_9; }
	inline void set_strt_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___strt_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strt_9), (void*)value);
	}

	inline static int32_t get_offset_of_loser_10() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___loser_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_loser_10() const { return ___loser_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_loser_10() { return &___loser_10; }
	inline void set_loser_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___loser_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loser_10), (void*)value);
	}

	inline static int32_t get_offset_of_scoreTxt_12() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___scoreTxt_12)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_scoreTxt_12() const { return ___scoreTxt_12; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_scoreTxt_12() { return &___scoreTxt_12; }
	inline void set_scoreTxt_12(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___scoreTxt_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoreTxt_12), (void*)value);
	}

	inline static int32_t get_offset_of_timeTxt_13() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___timeTxt_13)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_timeTxt_13() const { return ___timeTxt_13; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_timeTxt_13() { return &___timeTxt_13; }
	inline void set_timeTxt_13(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___timeTxt_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timeTxt_13), (void*)value);
	}

	inline static int32_t get_offset_of_gameWon_16() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___gameWon_16)); }
	inline bool get_gameWon_16() const { return ___gameWon_16; }
	inline bool* get_address_of_gameWon_16() { return &___gameWon_16; }
	inline void set_gameWon_16(bool value)
	{
		___gameWon_16 = value;
	}

	inline static int32_t get_offset_of_t_17() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___t_17)); }
	inline int32_t get_t_17() const { return ___t_17; }
	inline int32_t* get_address_of_t_17() { return &___t_17; }
	inline void set_t_17(int32_t value)
	{
		___t_17 = value;
	}

	inline static int32_t get_offset_of_time_18() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___time_18)); }
	inline int32_t get_time_18() const { return ___time_18; }
	inline int32_t* get_address_of_time_18() { return &___time_18; }
	inline void set_time_18(int32_t value)
	{
		___time_18 = value;
	}

	inline static int32_t get_offset_of_score_19() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___score_19)); }
	inline int32_t get_score_19() const { return ___score_19; }
	inline int32_t* get_address_of_score_19() { return &___score_19; }
	inline void set_score_19(int32_t value)
	{
		___score_19 = value;
	}

	inline static int32_t get_offset_of_finalTime_20() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___finalTime_20)); }
	inline int32_t get_finalTime_20() const { return ___finalTime_20; }
	inline int32_t* get_address_of_finalTime_20() { return &___finalTime_20; }
	inline void set_finalTime_20(int32_t value)
	{
		___finalTime_20 = value;
	}
};

struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields
{
public:
	// UnityEngine.GameObject GameManager::deck
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___deck_4;
	// UnityEngine.GameObject GameManager::foundation
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___foundation_5;
	// UnityEngine.GameObject GameManager::tableau
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___tableau_6;
	// Card GameManager::tempCard
	Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * ___tempCard_11;
	// System.Collections.Generic.List`1<Card> GameManager::tempCards
	List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * ___tempCards_14;
	// System.Boolean GameManager::cardSet
	bool ___cardSet_15;
	// System.Int32 GameManager::lvlsCompleted
	int32_t ___lvlsCompleted_21;

public:
	inline static int32_t get_offset_of_deck_4() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields, ___deck_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_deck_4() const { return ___deck_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_deck_4() { return &___deck_4; }
	inline void set_deck_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___deck_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deck_4), (void*)value);
	}

	inline static int32_t get_offset_of_foundation_5() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields, ___foundation_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_foundation_5() const { return ___foundation_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_foundation_5() { return &___foundation_5; }
	inline void set_foundation_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___foundation_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___foundation_5), (void*)value);
	}

	inline static int32_t get_offset_of_tableau_6() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields, ___tableau_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_tableau_6() const { return ___tableau_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_tableau_6() { return &___tableau_6; }
	inline void set_tableau_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___tableau_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tableau_6), (void*)value);
	}

	inline static int32_t get_offset_of_tempCard_11() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields, ___tempCard_11)); }
	inline Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * get_tempCard_11() const { return ___tempCard_11; }
	inline Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A ** get_address_of_tempCard_11() { return &___tempCard_11; }
	inline void set_tempCard_11(Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * value)
	{
		___tempCard_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tempCard_11), (void*)value);
	}

	inline static int32_t get_offset_of_tempCards_14() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields, ___tempCards_14)); }
	inline List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * get_tempCards_14() const { return ___tempCards_14; }
	inline List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 ** get_address_of_tempCards_14() { return &___tempCards_14; }
	inline void set_tempCards_14(List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * value)
	{
		___tempCards_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tempCards_14), (void*)value);
	}

	inline static int32_t get_offset_of_cardSet_15() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields, ___cardSet_15)); }
	inline bool get_cardSet_15() const { return ___cardSet_15; }
	inline bool* get_address_of_cardSet_15() { return &___cardSet_15; }
	inline void set_cardSet_15(bool value)
	{
		___cardSet_15 = value;
	}

	inline static int32_t get_offset_of_lvlsCompleted_21() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields, ___lvlsCompleted_21)); }
	inline int32_t get_lvlsCompleted_21() const { return ___lvlsCompleted_21; }
	inline int32_t* get_address_of_lvlsCompleted_21() { return &___lvlsCompleted_21; }
	inline void set_lvlsCompleted_21(int32_t value)
	{
		___lvlsCompleted_21 = value;
	}
};


// MainMenu
struct MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// column
struct column_tC27722C067C60EB3159C904F72D98C84D24D178F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<Card> column::faceDown
	List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * ___faceDown_4;
	// System.Collections.Generic.List`1<Card> column::faceUp
	List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * ___faceUp_5;
	// UnityEngine.GameObject column::gm
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gm_6;

public:
	inline static int32_t get_offset_of_faceDown_4() { return static_cast<int32_t>(offsetof(column_tC27722C067C60EB3159C904F72D98C84D24D178F, ___faceDown_4)); }
	inline List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * get_faceDown_4() const { return ___faceDown_4; }
	inline List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 ** get_address_of_faceDown_4() { return &___faceDown_4; }
	inline void set_faceDown_4(List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * value)
	{
		___faceDown_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___faceDown_4), (void*)value);
	}

	inline static int32_t get_offset_of_faceUp_5() { return static_cast<int32_t>(offsetof(column_tC27722C067C60EB3159C904F72D98C84D24D178F, ___faceUp_5)); }
	inline List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * get_faceUp_5() const { return ___faceUp_5; }
	inline List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 ** get_address_of_faceUp_5() { return &___faceUp_5; }
	inline void set_faceUp_5(List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * value)
	{
		___faceUp_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___faceUp_5), (void*)value);
	}

	inline static int32_t get_offset_of_gm_6() { return static_cast<int32_t>(offsetof(column_tC27722C067C60EB3159C904F72D98C84D24D178F, ___gm_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gm_6() const { return ___gm_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gm_6() { return &___gm_6; }
	inline void set_gm_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gm_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gm_6), (void*)value);
	}
};


// drewCards
struct drewCards_t708EC2346243631931783D1778956BFB96B2D8B4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject drewCards::deck
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___deck_4;
	// UnityEngine.GameObject drewCards::gm
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gm_5;

public:
	inline static int32_t get_offset_of_deck_4() { return static_cast<int32_t>(offsetof(drewCards_t708EC2346243631931783D1778956BFB96B2D8B4, ___deck_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_deck_4() const { return ___deck_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_deck_4() { return &___deck_4; }
	inline void set_deck_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___deck_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deck_4), (void*)value);
	}

	inline static int32_t get_offset_of_gm_5() { return static_cast<int32_t>(offsetof(drewCards_t708EC2346243631931783D1778956BFB96B2D8B4, ___gm_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gm_5() const { return ___gm_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gm_5() { return &___gm_5; }
	inline void set_gm_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gm_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gm_5), (void*)value);
	}
};


// foundation_stack
struct foundation_stack_tF7696B65F2806C093FB52E859D52FD8414A73474  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject foundation_stack::deck
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___deck_4;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> foundation_stack::stack
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___stack_5;
	// UnityEngine.GameObject foundation_stack::gm
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gm_6;

public:
	inline static int32_t get_offset_of_deck_4() { return static_cast<int32_t>(offsetof(foundation_stack_tF7696B65F2806C093FB52E859D52FD8414A73474, ___deck_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_deck_4() const { return ___deck_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_deck_4() { return &___deck_4; }
	inline void set_deck_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___deck_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deck_4), (void*)value);
	}

	inline static int32_t get_offset_of_stack_5() { return static_cast<int32_t>(offsetof(foundation_stack_tF7696B65F2806C093FB52E859D52FD8414A73474, ___stack_5)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_stack_5() const { return ___stack_5; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_stack_5() { return &___stack_5; }
	inline void set_stack_5(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___stack_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stack_5), (void*)value);
	}

	inline static int32_t get_offset_of_gm_6() { return static_cast<int32_t>(offsetof(foundation_stack_tF7696B65F2806C093FB52E859D52FD8414A73474, ___gm_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gm_6() const { return ___gm_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gm_6() { return &___gm_6; }
	inline void set_gm_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gm_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gm_6), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::ElementAt<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_ElementAt_TisRuntimeObject_m9B801367BC637BB0D88357FECBF36BEA6E4B36CE_gshared (RuntimeObject* ___source0, int32_t ___index1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_TrimExcess_m7CEDC7A458B097D2B847BE76D0D420618F08264C_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mB2258A4FA2E91ECE197E099A7E914964C2C4D333_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mAF7297B4B349FAE1A7207530D786B3D8568C0258_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveRange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m0BBC3852B9B0719DDA7E6AFEF3C3E3CD165DF5AA_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!0> System.Collections.Generic.List`1<System.Object>::GetRange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * List_1_GetRange_mADD39D61F0A323CB4237D962CB3B2ADFC7AAFC57_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method);

// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animation>()
inline Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * Component_GetComponent_TisAnimation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8_mACBD944B2C02DA6B1A24E69FE6501EE674A5B3F3 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Animation::set_clip(UnityEngine.AnimationClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_set_clip_mCEC582FF8FE05B1F41E2BAC2C33E60D643C1E211 (Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * __this, AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animation::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animation_Play_m5588607899B9B866117A1477C696076F161BA3D4 (Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean Card::isRed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Card_isRed_mE5C7F07FFBED9BC7646CB6BAD294EBEAE82AE295 (Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C (bool* __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Card>()
inline Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void Card::setSuite(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Card_setSuite_m87900CCC57CE20CF472DAF3D8F4093F98572FC04 (Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * __this, int32_t ___s0, const RuntimeMethod* method);
// System.Void Card::setValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Card_setValue_m317DBACDF7806EF1D002B62320C934E2B055B325 (Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * __this, int32_t ___v0, const RuntimeMethod* method);
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B (String_t* ___path0, const RuntimeMethod* method);
// System.Byte[] System.IO.File::ReadAllBytes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* File_ReadAllBytes_mFB47FB50E938AE90CC822442D30E896441D95829 (String_t* ___path0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// System.Boolean UnityEngine.ImageConversion::LoadImage(UnityEngine.Texture2D,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImageConversion_LoadImage_m5BB4FBA0565E698ED5C6F25F7A0A5F83CADD7477 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___tex0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data1, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Sprite UnityEngine.Sprite::Create(UnityEngine.Texture2D,UnityEngine.Rect,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * Sprite_Create_m9817936760193300A6049A788C3446C7ADB49C6B (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___texture0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___rect1, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pivot2, const RuntimeMethod* method);
// System.Void Card::setFSprite(UnityEngine.Sprite)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Card_setFSprite_mFE65AD84BD6EED6D4F30CD087935ADA7B3B78EC5_inline (Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___f0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
inline void List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// !!0 System.Linq.Enumerable::ElementAt<UnityEngine.GameObject>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF (RuntimeObject* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_ElementAt_TisRuntimeObject_m9B801367BC637BB0D88357FECBF36BEA6E4B36CE_gshared)(___source0, ___index1, method);
}
// System.Boolean Card::equalsCard(Card)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Card_equalsCard_m625B5158BDCCA00C028E7A2844F5D45F45B7CA26 (Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * __this, Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * ___other0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void Deck::shuffle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deck_shuffle_m158D97D61B35B6FEE31E540D8263D8D96DBCA329 (Deck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<column>()
inline column_tC27722C067C60EB3159C904F72D98C84D24D178F * Component_GetComponent_Tiscolumn_tC27722C067C60EB3159C904F72D98C84D24D178F_mEDF47F8FE8EAFDB77E0A5B06BDC5BACED6552B0C (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  column_tC27722C067C60EB3159C904F72D98C84D24D178F * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void column::addCardFromDeal(Card)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void column_addCardFromDeal_m9F43B8D0BDFA540635181B13CEF2E5C97658F8E7 (column_tC27722C067C60EB3159C904F72D98C84D24D178F * __this, Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * ___card0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mAB148BF0E3CF1F336D76377BD01824F30A0582C0 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared)(__this, ___index0, method);
}
// System.Void column::addCardFaceUp(Card)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void column_addCardFaceUp_mD10970B841E7C2E686D8DCFC5B48B6CE1A8CADA1 (column_tC27722C067C60EB3159C904F72D98C84D24D178F * __this, Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * ___card0, const RuntimeMethod* method);
// System.Void column::printCards()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void column_printCards_m275604963C44F3917B82DBA0562F277F630A9729 (column_tC27722C067C60EB3159C904F72D98C84D24D178F * __this, const RuntimeMethod* method);
// System.Void Deck::draw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deck_draw_m92B4831B4A54AC21CCD79DE9C729E5E15421B302 (Deck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520 * __this, const RuntimeMethod* method);
// System.Void Deck::shuffle(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deck_shuffle_m165EABD3E79B8B2DC085B93BE119DEBD64E37730 (Deck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520 * __this, int32_t ___seed0, const RuntimeMethod* method);
// System.Boolean Card::FaceUp()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Card_FaceUp_m6F01C2B839210507DA80CC64F89137CF677219F8_inline (Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * __this, const RuntimeMethod* method);
// System.Void Card::flip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Card_flip_mCF7D888BEA36668261492B859FCD409BEEBADA46 (Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, bool ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<GameManager>()
inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void GameManager::passThroughDeck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_passThroughDeck_m5EC600733AE17A9E99F09D64718AFB4551239E10 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Clear()
inline void List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::TrimExcess()
inline void List_1_TrimExcess_m4E71933EC666BE369F5C3A509D54040FE51619FD (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1_TrimExcess_m7CEDC7A458B097D2B847BE76D0D420618F08264C_gshared)(__this, method);
}
// System.Void GameManager::removeTempCard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_removeTempCard_m3D281B0606A375C0E0C2CB5AB0E56E4078BC2509 (const RuntimeMethod* method);
// System.Void GameManager::removeTempCards()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_removeTempCards_mD09C29492548CAE8BC5005AD4EDBFC1573BBA40C (const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::get_seed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_get_seed_mF85743627F385169AE5E49B10BB6D71631C0A483 (const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Reverse()
inline void List_1_Reverse_m73DFA5BC0474DF46522223788C60FB845ADBE682 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1_Reverse_mB2258A4FA2E91ECE197E099A7E914964C2C4D333_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Reverse(System.Int32,System.Int32)
inline void List_1_Reverse_m4F2EE1EFE5F10C464C9BF382C9B47A458ED9569E (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, int32_t, int32_t, const RuntimeMethod*))List_1_Reverse_mAF7297B4B349FAE1A7207530D786B3D8568C0258_gshared)(__this, ___index0, ___count1, method);
}
// System.Void UnityEngine.Random::set_seed(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random_set_seed_m1AE91B14D0CF4A76FB7DF671A5234DC9C643820D (int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_inline (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 * __this, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7 (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9 (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4 (const RuntimeMethod* method);
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Deck>()
inline Deck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520 * GameObject_GetComponent_TisDeck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520_m2DA78CAA5FF98B767257748EB92DDB68A16C0F52 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Deck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void Deck::deal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deck_deal_mAB843DB85479973AB0BC2EF7B169A2200BF6E774 (Deck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520 * __this, int32_t ___sdd0, const RuntimeMethod* method);
// System.Void Deck::deal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deck_deal_m0FF1A6A6D0F2B4BAA730FD77739BA39C41A567AD (Deck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<foundation_stack>()
inline foundation_stack_tF7696B65F2806C093FB52E859D52FD8414A73474 * Component_GetComponent_Tisfoundation_stack_tF7696B65F2806C093FB52E859D52FD8414A73474_m2237D0B4BAE4635E1B82CA1F0D68786E00408376 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  foundation_stack_tF7696B65F2806C093FB52E859D52FD8414A73474 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Int32 foundation_stack::getSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t foundation_stack_getSize_mA97E5781B73C0C647E6D489EDDC06CA7B3655217 (foundation_stack_tF7696B65F2806C093FB52E859D52FD8414A73474 * __this, const RuntimeMethod* method);
// System.Void GameManager::winSequence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_winSequence_m732FDD6907C2312438EE0A57E905376A18C45DF6 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Void GameManager::loseSequence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_loseSequence_mA6D815B40BDA7780D2E1B0F995A2C5BE58D306CE (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Card>::get_Count()
inline int32_t List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_inline (List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !!0 System.Linq.Enumerable::ElementAt<Card>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
inline Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69 (RuntimeObject* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	return ((  Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * (*) (RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_ElementAt_TisRuntimeObject_m9B801367BC637BB0D88357FECBF36BEA6E4B36CE_gshared)(___source0, ___index1, method);
}
// System.Void System.Collections.Generic.List`1<Card>::Add(!0)
inline void List_1_Add_m88A7E5FCDCC9023AD65A41F4BB3A5A136ABF9B77 (List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * __this, Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 *, Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void column::removeTopCards(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void column_removeTopCards_m673C8B1B2432F54C0968C471F3B0BBE7E9379D55 (column_tC27722C067C60EB3159C904F72D98C84D24D178F * __this, int32_t ___numCards0, const RuntimeMethod* method);
// System.Int32 Deck::getNumDrewCards()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Deck_getNumDrewCards_mD028B9A71C4F445D5BACE77CA45DBD8DC349BDD0 (Deck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520 * __this, const RuntimeMethod* method);
// Card Deck::getTopDrewCard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * Deck_getTopDrewCard_m30C5EF6229CCD3C1689A74833C6ED94CAA26675E (Deck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520 * __this, const RuntimeMethod* method);
// System.Void Deck::removeTopDrewCard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deck_removeTopDrewCard_m37CDEB589EBEFA709259546240613A7658C99A83 (Deck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Card>::Clear()
inline void List_1_Clear_mEEF153BD8E93627967901FFE4171B80200BD02A5 (List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Card>::TrimExcess()
inline void List_1_TrimExcess_m75A6CB1F1742B9B6FDB55B9CB8C196516CD78CF0 (List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 *, const RuntimeMethod*))List_1_TrimExcess_m7CEDC7A458B097D2B847BE76D0D420618F08264C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Card>::.ctor()
inline void List_1__ctor_m53EB398B09E4467FD72A0D1A4B7F871F9240E060 (List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Card>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mAB2CE8D5995397704057D492A25E8F878664C2A2 (List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<Card>::RemoveRange(System.Int32,System.Int32)
inline void List_1_RemoveRange_m5EB1AD0B44D5BDB9BD503E9DCF3F00833AFC21DB (List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 *, int32_t, int32_t, const RuntimeMethod*))List_1_RemoveRange_m0BBC3852B9B0719DDA7E6AFEF3C3E3CD165DF5AA_gshared)(__this, ___index0, ___count1, method);
}
// System.Void GameManager::add5Points()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_add5Points_m9C82258A2B5C21BB2F70A38C0D8FD351A76D5AC8 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void GameManager::add3Points()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_add3Points_mC28AE79322209EB739FD99AA7234313BCF0BADDC (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.BoxCollider2D>()
inline BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Collider2D::set_offset(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider2D_set_offset_m496DDE5487C59E9E8D6B468E8918EE1EFC625E38 (Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.BoxCollider2D::set_size(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxCollider2D_set_size_m8460A38ADDD4BE82BE1F416DE3D7AFB87EBA6760 (BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Boolean GameManager::areTempCardsSet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameManager_areTempCardsSet_m75ADFBED6CEBA1AFDF5009744DC6F59D4C74AC83 (const RuntimeMethod* method);
// System.Collections.Generic.List`1<Card> GameManager::getTempCards()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * GameManager_getTempCards_m2F655FF3EEA60ECE88D2B7EB848FA8B323EEE58F_inline (const RuntimeMethod* method);
// System.Int32 Card::getValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Card_getValue_mE2954C21E0A9B11A8419809AE0731C15E5DAFCA9_inline (Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * __this, const RuntimeMethod* method);
// System.Void GameManager::moveTempCards(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_moveTempCards_m2A5E6618A97E2216ED2B42034EB16CC5E3E8BF18 (int32_t ___numCards0, const RuntimeMethod* method);
// System.Void column::addManyCards(System.Collections.Generic.List`1<Card>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void column_addManyCards_m19A0D567C063ADFC2B3B1F4B7637E9EB8C79515B (column_tC27722C067C60EB3159C904F72D98C84D24D178F * __this, List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * ___cards0, const RuntimeMethod* method);
// System.Boolean Card::canStackOnRun(Card)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Card_canStackOnRun_m0BA4BAE90EBCBC9B134D99378CCFEDCEA83D2E16 (Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * __this, Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * ___other0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!0> System.Collections.Generic.List`1<Card>::GetRange(System.Int32,System.Int32)
inline List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * List_1_GetRange_mE238E7B6B204C9AB1D08A20CF9DBCB170907A34F (List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method)
{
	return ((  List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * (*) (List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 *, int32_t, int32_t, const RuntimeMethod*))List_1_GetRange_mADD39D61F0A323CB4237D962CB3B2ADFC7AAFC57_gshared)(__this, ___index0, ___count1, method);
}
// System.Void GameManager::setTempCard(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_setTempCard_mE5D72141E6DB6EB6F1FE0F95578F3E3C65868664 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___otherCard0, const RuntimeMethod* method);
// System.Void GameManager::setTempCards(System.Collections.Generic.List`1<Card>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_setTempCards_m41CDEF65D38E19919A8A614471D2BC66A1004632 (List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * ___nCards0, const RuntimeMethod* method);
// System.Boolean GameManager::isTempCardSet()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GameManager_isTempCardSet_m6D086AD56B7FA576B87CACEBD8477896C56901EE_inline (const RuntimeMethod* method);
// Card GameManager::getTempCard()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * GameManager_getTempCard_mDA6C9D5098A212DF1D7E981558F973F642000BA5_inline (const RuntimeMethod* method);
// System.Void GameManager::moveTempCard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_moveTempCard_mDAD7D2C976839212869EC9650C19E4AE20043C91 (const RuntimeMethod* method);
// System.Void foundation_stack::AddCard(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void foundation_stack_AddCard_m10B276BABB6BA69827E338CCD92E7C5B990ABAF1 (foundation_stack_tF7696B65F2806C093FB52E859D52FD8414A73474 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___card0, const RuntimeMethod* method);
// System.Void GameManager::add10Points()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_add10Points_m9F357A270EBD017D57F39290414656F209E26D3D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Boolean Card::canStackOnFoundation(Card)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Card_canStackOnFoundation_m2DCD07FAB91986F597037276B97CA578DB96C349 (Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * __this, Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * ___other0, const RuntimeMethod* method);
// System.Void foundation_stack::printCards()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void foundation_stack_printCards_m8491D8B7CE5395ED7CB0037FBC7C47A9BC51226D (foundation_stack_tF7696B65F2806C093FB52E859D52FD8414A73474 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Buttons_Freeplay::backToMain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buttons_Freeplay_backToMain_m23C3D5914A9369E23022B2A7AE98B147E48D14E5 (Buttons_Freeplay_t96C3A7A5B43165E153EA5DEDEDCE76F975011EF9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Menu");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Buttons_Freeplay::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buttons_Freeplay__ctor_mA09CFD31B1A145D19F9B7582273B31DF12785EB7 (Buttons_Freeplay_t96C3A7A5B43165E153EA5DEDEDCE76F975011EF9 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Buttons_main_menu::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buttons_main_menu_Start_m62EBD65B49CFCCF22DA5A5D92C750E15F4E91DF8 (Buttons_main_menu_tAAF359D4F7E0D32211D9F30E2E378CF322096026 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Buttons_main_menu::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buttons_main_menu_Update_m4A2E6AA93DB43A3F23A3C2C6B078D4303779BA70 (Buttons_main_menu_tAAF359D4F7E0D32211D9F30E2E378CF322096026 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Buttons_main_menu::mainMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buttons_main_menu_mainMode_m67654E7A66A0AA7F6AE7AF5B57D2FF8E1CB5DF7E (Buttons_main_menu_tAAF359D4F7E0D32211D9F30E2E378CF322096026 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC36DB4D1CE0DAB209D1A800E647286F0EAF41959);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("game_main");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralC36DB4D1CE0DAB209D1A800E647286F0EAF41959, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Buttons_main_menu::classicMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buttons_main_menu_classicMode_mD8E72E4BB54CA2326967604B823323D4740D27A9 (Buttons_main_menu_tAAF359D4F7E0D32211D9F30E2E378CF322096026 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCAEDA72F17D9EA7A04BBA53EA9DCA508AF3D24A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("game_free_play");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralBCAEDA72F17D9EA7A04BBA53EA9DCA508AF3D24A, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Buttons_main_menu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buttons_main_menu__ctor_m324514655FE5336AC7032B8D010EFC3DE9C0A70F (Buttons_main_menu_tAAF359D4F7E0D32211D9F30E2E378CF322096026 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Card::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Card_Start_m2B769859BE7ABDBCD465D4E827C9BAD0C891212C (Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8_mACBD944B2C02DA6B1A24E69FE6501EE674A5B3F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameObject.GetComponent<SpriteRenderer>().sprite = bSprite;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_1;
		L_1 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_0, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_2 = __this->get_bSprite_5();
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_1, L_2, /*hidden argument*/NULL);
		// isFaceUp = false;
		__this->set_isFaceUp_8((bool)0);
		// anim2 = this.GetComponent<Animation>();
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_3;
		L_3 = Component_GetComponent_TisAnimation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8_mACBD944B2C02DA6B1A24E69FE6501EE674A5B3F3(__this, /*hidden argument*/Component_GetComponent_TisAnimation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8_mACBD944B2C02DA6B1A24E69FE6501EE674A5B3F3_RuntimeMethod_var);
		__this->set_anim2_10(L_3);
		// anim2.clip = anim;
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_4 = __this->get_anim2_10();
		AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * L_5 = __this->get_anim_9();
		Animation_set_clip_mCEC582FF8FE05B1F41E2BAC2C33E60D643C1E211(L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Card::setFSprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Card_setFSprite_mFE65AD84BD6EED6D4F30CD087935ADA7B3B78EC5 (Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___f0, const RuntimeMethod* method)
{
	{
		// fSprite = f;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_0 = ___f0;
		__this->set_fSprite_4(L_0);
		// }
		return;
	}
}
// System.Void Card::anim8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Card_anim8_mFA2FC8B3F885AE2A1A74D61585718A122F64CD18 (Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * __this, const RuntimeMethod* method)
{
	{
		// anim2.Play();
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_0 = __this->get_anim2_10();
		bool L_1;
		L_1 = Animation_Play_m5588607899B9B866117A1477C696076F161BA3D4(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Card::flip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Card_flip_mCF7D888BEA36668261492B859FCD409BEEBADA46 (Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(isFaceUp)
		bool L_0 = __this->get_isFaceUp_8();
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		// gameObject.GetComponent<SpriteRenderer>().sprite = bSprite;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_2;
		L_2 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_1, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_3 = __this->get_bSprite_5();
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_2, L_3, /*hidden argument*/NULL);
		// isFaceUp = false;
		__this->set_isFaceUp_8((bool)0);
		// }
		return;
	}

IL_0026:
	{
		// gameObject.GetComponent<SpriteRenderer>().sprite = fSprite;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_5;
		L_5 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_4, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_6 = __this->get_fSprite_4();
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_5, L_6, /*hidden argument*/NULL);
		// isFaceUp = true;
		__this->set_isFaceUp_8((bool)1);
		// }
		return;
	}
}
// System.Boolean Card::equalsCard(Card)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Card_equalsCard_m625B5158BDCCA00C028E7A2844F5D45F45B7CA26 (Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * __this, Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * ___other0, const RuntimeMethod* method)
{
	{
		// return (value == other.value) && (suite == other.suite);
		int32_t L_0 = __this->get_value_6();
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_1 = ___other0;
		int32_t L_2 = L_1->get_value_6();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = __this->get_suite_7();
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_4 = ___other0;
		int32_t L_5 = L_4->get_suite_7();
		return (bool)((((int32_t)L_3) == ((int32_t)L_5))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
// System.Boolean Card::isRed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Card_isRed_mE5C7F07FFBED9BC7646CB6BAD294EBEAE82AE295 (Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * __this, const RuntimeMethod* method)
{
	{
		// if (suite == suites.hearts || suite == suites.diamonds)
		int32_t L_0 = __this->get_suite_7();
		if ((((int32_t)L_0) == ((int32_t)3)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = __this->get_suite_7();
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0014;
		}
	}

IL_0012:
	{
		// return true;
		return (bool)1;
	}

IL_0014:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Card::canStackOnRun(Card)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Card_canStackOnRun_m0BA4BAE90EBCBC9B134D99378CCFEDCEA83D2E16 (Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * __this, Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral067785FDC60F2E3664D42CFB10744A3A52E2E7D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B456B36734FC7645D05A7BFB6ECA6D741E1FE47);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D64A1A65691EF245013E4168E12EB8677A50B7D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6AEFF7A39C3075BB544438038483FF1B59A901E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83DCBC69E12F51DB4249D25D3753D2B6861E21DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9503ABA0E56FBCC294607F28289FF7D9D940C436);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9DAE3DAC0A5E4AD80EDB23866591E68D397DC1F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB0E4E0DA64B552A6DF1FD690E8A7E9867403BC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF27CE04C2675C7C90A12E894E27EBB833C7EFAF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&suites_t082CD66155D5506789505A9D67C4A7CA82CC5EAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// Debug.Log("Checking if card can stack on run");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral067785FDC60F2E3664D42CFB10744A3A52E2E7D4, /*hidden argument*/NULL);
		// if ((other.value == (value + 1)) && other.isRed() != isRed()) {
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_0 = ___other0;
		int32_t L_1 = L_0->get_value_6();
		int32_t L_2 = __this->get_value_6();
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1))))))
		{
			goto IL_0034;
		}
	}
	{
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_3 = ___other0;
		bool L_4;
		L_4 = Card_isRed_mE5C7F07FFBED9BC7646CB6BAD294EBEAE82AE295(L_3, /*hidden argument*/NULL);
		bool L_5;
		L_5 = Card_isRed_mE5C7F07FFBED9BC7646CB6BAD294EBEAE82AE295(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0034;
		}
	}
	{
		// Debug.Log("Card can stack");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral9503ABA0E56FBCC294607F28289FF7D9D940C436, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}

IL_0034:
	{
		// Debug.Log("Card cannot stack ");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral1B456B36734FC7645D05A7BFB6ECA6D741E1FE47, /*hidden argument*/NULL);
		// Debug.Log("Card's value " + value.ToString());
		int32_t* L_6 = __this->get_address_of_value_6();
		String_t* L_7;
		L_7 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_6, /*hidden argument*/NULL);
		String_t* L_8;
		L_8 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral83DCBC69E12F51DB4249D25D3753D2B6861E21DE, L_7, /*hidden argument*/NULL);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_8, /*hidden argument*/NULL);
		// Debug.Log("Card is red " + isRed().ToString());
		bool L_9;
		L_9 = Card_isRed_mE5C7F07FFBED9BC7646CB6BAD294EBEAE82AE295(__this, /*hidden argument*/NULL);
		V_0 = L_9;
		String_t* L_10;
		L_10 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)(&V_0), /*hidden argument*/NULL);
		String_t* L_11;
		L_11 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral4D64A1A65691EF245013E4168E12EB8677A50B7D, L_10, /*hidden argument*/NULL);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_11, /*hidden argument*/NULL);
		// Debug.Log("Card's suite " + suite.ToString());
		int32_t* L_12 = __this->get_address_of_suite_7();
		RuntimeObject * L_13 = Box(suites_t082CD66155D5506789505A9D67C4A7CA82CC5EAC_il2cpp_TypeInfo_var, L_12);
		String_t* L_14;
		L_14 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
		*L_12 = *(int32_t*)UnBox(L_13);
		String_t* L_15;
		L_15 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralF27CE04C2675C7C90A12E894E27EBB833C7EFAF8, L_14, /*hidden argument*/NULL);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_15, /*hidden argument*/NULL);
		// Debug.Log("Other Card's value " + other.value.ToString());
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_16 = ___other0;
		int32_t* L_17 = L_16->get_address_of_value_6();
		String_t* L_18;
		L_18 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_17, /*hidden argument*/NULL);
		String_t* L_19;
		L_19 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral9DAE3DAC0A5E4AD80EDB23866591E68D397DC1F7, L_18, /*hidden argument*/NULL);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_19, /*hidden argument*/NULL);
		// Debug.Log("Other cards's suite " + other.suite.ToString());
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_20 = ___other0;
		int32_t* L_21 = L_20->get_address_of_suite_7();
		RuntimeObject * L_22 = Box(suites_t082CD66155D5506789505A9D67C4A7CA82CC5EAC_il2cpp_TypeInfo_var, L_21);
		String_t* L_23;
		L_23 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_22);
		*L_21 = *(int32_t*)UnBox(L_22);
		String_t* L_24;
		L_24 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralBB0E4E0DA64B552A6DF1FD690E8A7E9867403BC7, L_23, /*hidden argument*/NULL);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_24, /*hidden argument*/NULL);
		// Debug.Log("Other card is red " + other.isRed());
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_25 = ___other0;
		bool L_26;
		L_26 = Card_isRed_mE5C7F07FFBED9BC7646CB6BAD294EBEAE82AE295(L_25, /*hidden argument*/NULL);
		V_0 = L_26;
		String_t* L_27;
		L_27 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)(&V_0), /*hidden argument*/NULL);
		String_t* L_28;
		L_28 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral6AEFF7A39C3075BB544438038483FF1B59A901E3, L_27, /*hidden argument*/NULL);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_28, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}
}
// System.Int32 Card::getValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Card_getValue_mE2954C21E0A9B11A8419809AE0731C15E5DAFCA9 (Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * __this, const RuntimeMethod* method)
{
	{
		// return value;
		int32_t L_0 = __this->get_value_6();
		return L_0;
	}
}
// System.Boolean Card::canStackOnFoundation(Card)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Card_canStackOnFoundation_m2DCD07FAB91986F597037276B97CA578DB96C349 (Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * __this, Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E932EC7D2EEC22A51CBE84540A0DC9FD3F78E06);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49D97AE80EB1A937D5C64A142DC59ECCC382A385);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8E07FAA74839C2885E54412D3FB4A19F604A3B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBAA85408D3D58FCDAFE3D78B95B26DAF759B0969);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDED6F63A07A5FE3DC6B78EAC0D3389DBDBA03D2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&suites_t082CD66155D5506789505A9D67C4A7CA82CC5EAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((other.value == (value - 1)) && other.suite == suite)
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_0 = ___other0;
		int32_t L_1 = L_0->get_value_6();
		int32_t L_2 = __this->get_value_6();
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1))))))
		{
			goto IL_0020;
		}
	}
	{
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_3 = ___other0;
		int32_t L_4 = L_3->get_suite_7();
		int32_t L_5 = __this->get_suite_7();
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_0020;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0020:
	{
		// Debug.Log("cannot stafck on foundation");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralBAA85408D3D58FCDAFE3D78B95B26DAF759B0969, /*hidden argument*/NULL);
		// Debug.Log("This card's suite " + suite.ToString());
		int32_t* L_6 = __this->get_address_of_suite_7();
		RuntimeObject * L_7 = Box(suites_t082CD66155D5506789505A9D67C4A7CA82CC5EAC_il2cpp_TypeInfo_var, L_6);
		String_t* L_8;
		L_8 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
		*L_6 = *(int32_t*)UnBox(L_7);
		String_t* L_9;
		L_9 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral49D97AE80EB1A937D5C64A142DC59ECCC382A385, L_8, /*hidden argument*/NULL);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_9, /*hidden argument*/NULL);
		// Debug.Log("this card's value  is = " + value.ToString());
		int32_t* L_10 = __this->get_address_of_value_6();
		String_t* L_11;
		L_11 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_10, /*hidden argument*/NULL);
		String_t* L_12;
		L_12 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralA8E07FAA74839C2885E54412D3FB4A19F604A3B0, L_11, /*hidden argument*/NULL);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_12, /*hidden argument*/NULL);
		// Debug.Log("other cards' suite i " + other.suite.ToString());
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_13 = ___other0;
		int32_t* L_14 = L_13->get_address_of_suite_7();
		RuntimeObject * L_15 = Box(suites_t082CD66155D5506789505A9D67C4A7CA82CC5EAC_il2cpp_TypeInfo_var, L_14);
		String_t* L_16;
		L_16 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_15);
		*L_14 = *(int32_t*)UnBox(L_15);
		String_t* L_17;
		L_17 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral3E932EC7D2EEC22A51CBE84540A0DC9FD3F78E06, L_16, /*hidden argument*/NULL);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_17, /*hidden argument*/NULL);
		// Debug.Log("other cards' value is " + other.value.ToString());
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_18 = ___other0;
		int32_t* L_19 = L_18->get_address_of_value_6();
		String_t* L_20;
		L_20 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_19, /*hidden argument*/NULL);
		String_t* L_21;
		L_21 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralDDED6F63A07A5FE3DC6B78EAC0D3389DBDBA03D2, L_20, /*hidden argument*/NULL);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_21, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}
}
// System.Boolean Card::FaceUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Card_FaceUp_m6F01C2B839210507DA80CC64F89137CF677219F8 (Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * __this, const RuntimeMethod* method)
{
	{
		// return isFaceUp;
		bool L_0 = __this->get_isFaceUp_8();
		return L_0;
	}
}
// System.Void Card::setValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Card_setValue_m317DBACDF7806EF1D002B62320C934E2B055B325 (Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * __this, int32_t ___v0, const RuntimeMethod* method)
{
	{
		// if (v >= 1 && v <= 13)
		int32_t L_0 = ___v0;
		if ((((int32_t)L_0) < ((int32_t)1)))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1 = ___v0;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)13))))
		{
			goto IL_0010;
		}
	}
	{
		// value = v;
		int32_t L_2 = ___v0;
		__this->set_value_6(L_2);
	}

IL_0010:
	{
		// }
		return;
	}
}
// System.Void Card::setSuite(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Card_setSuite_m87900CCC57CE20CF472DAF3D8F4093F98572FC04 (Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * __this, int32_t ___s0, const RuntimeMethod* method)
{
	{
		// if(s >= 1 && s<= 4)
		int32_t L_0 = ___s0;
		if ((((int32_t)L_0) < ((int32_t)1)))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1 = ___s0;
		if ((((int32_t)L_1) > ((int32_t)4)))
		{
			goto IL_0010;
		}
	}
	{
		// suite = (suites)s;
		int32_t L_2 = ___s0;
		__this->set_suite_7(L_2);
		// }
		return;
	}

IL_0010:
	{
		// suite = (suites)0;
		__this->set_suite_7(0);
		// }
		return;
	}
}
// System.Void Card::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Card__ctor_m2ADE17E90583AE44842C04CD1E69AF1CC03DC8A8 (Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Deck::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deck_Start_m7B9D31952401BE90306BAE90C220CEB34B8C1AAF (Deck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EF38F7F2D8006E1B9DE274323AE09BFBD4E7C85);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral845E4BAC9CC930C637796D1920DD2D2F0A47D427);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9B577CAE7605B964C63995C672D6F87AF3CAF63);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	int32_t V_6 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_7 = NULL;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_8 = NULL;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * V_9 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_10 = NULL;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_11 = NULL;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * V_12 = NULL;
	{
		// Vector3 pos = this.transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// drawLocation.x = pos.x - 3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_2 = __this->get_address_of_drawLocation_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = V_0;
		float L_4 = L_3.get_x_2();
		L_2->set_x_2(((float)il2cpp_codegen_subtract((float)L_4, (float)(3.0f))));
		// drawLocation.y = pos.y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_5 = __this->get_address_of_drawLocation_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = V_0;
		float L_7 = L_6.get_y_3();
		L_5->set_y_3(L_7);
		// drawLocation.z = pos.z;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_8 = __this->get_address_of_drawLocation_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_0;
		float L_10 = L_9.get_z_4();
		L_8->set_z_4(L_10);
		// for (int i = 0; i < 52; i++)
		V_1 = 0;
		goto IL_0278;
	}

IL_004c:
	{
		// temp2 = Instantiate(cardPrefab);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_cardPrefab_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_11, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		V_2 = L_12;
		// var path = "../solitaire/Assets/Cards/";
		V_3 = _stringLiteral3EF38F7F2D8006E1B9DE274323AE09BFBD4E7C85;
		// var path2 = "../solitaire/Assets/Test_Assets/cards/PNG/large/";
		V_4 = _stringLiteral845E4BAC9CC930C637796D1920DD2D2F0A47D427;
		// string file = (i + 1).ToString() + ".png";
		int32_t L_13 = V_1;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
		String_t* L_14;
		L_14 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_6), /*hidden argument*/NULL);
		String_t* L_15;
		L_15 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_14, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26, /*hidden argument*/NULL);
		V_5 = L_15;
		// temp2.name = (i + 1).ToString();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = V_2;
		int32_t L_17 = V_1;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		String_t* L_18;
		L_18 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_6), /*hidden argument*/NULL);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_16, L_18, /*hidden argument*/NULL);
		// temp2.transform.parent = GameObject.Find("Deck").transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = V_2;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_19, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralE9B577CAE7605B964C63995C672D6F87AF3CAF63, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_21, /*hidden argument*/NULL);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_20, L_22, /*hidden argument*/NULL);
		// temp2.transform.position = temp2.transform.parent.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = V_2;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_23, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = V_2;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_25, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
		L_27 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_26, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_27, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_24, L_28, /*hidden argument*/NULL);
		// if (i >= 0 && i <= 12)
		int32_t L_29 = V_1;
		if ((((int32_t)L_29) < ((int32_t)0)))
		{
			goto IL_00db;
		}
	}
	{
		int32_t L_30 = V_1;
		if ((((int32_t)L_30) > ((int32_t)((int32_t)12))))
		{
			goto IL_00db;
		}
	}
	{
		// temp2.GetComponent<Card>().setSuite(1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31 = V_2;
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_32;
		L_32 = GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9(L_31, /*hidden argument*/GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9_RuntimeMethod_var);
		Card_setSuite_m87900CCC57CE20CF472DAF3D8F4093F98572FC04(L_32, 1, /*hidden argument*/NULL);
		goto IL_012a;
	}

IL_00db:
	{
		// else if (i >= 13 && i <= 25)
		int32_t L_33 = V_1;
		if ((((int32_t)L_33) < ((int32_t)((int32_t)13))))
		{
			goto IL_00f3;
		}
	}
	{
		int32_t L_34 = V_1;
		if ((((int32_t)L_34) > ((int32_t)((int32_t)25))))
		{
			goto IL_00f3;
		}
	}
	{
		// temp2.GetComponent<Card>().setSuite(2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35 = V_2;
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_36;
		L_36 = GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9(L_35, /*hidden argument*/GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9_RuntimeMethod_var);
		Card_setSuite_m87900CCC57CE20CF472DAF3D8F4093F98572FC04(L_36, 2, /*hidden argument*/NULL);
		goto IL_012a;
	}

IL_00f3:
	{
		// else if (i >= 26 && i <= 38)
		int32_t L_37 = V_1;
		if ((((int32_t)L_37) < ((int32_t)((int32_t)26))))
		{
			goto IL_010b;
		}
	}
	{
		int32_t L_38 = V_1;
		if ((((int32_t)L_38) > ((int32_t)((int32_t)38))))
		{
			goto IL_010b;
		}
	}
	{
		// temp2.GetComponent<Card>().setSuite(3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39 = V_2;
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_40;
		L_40 = GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9(L_39, /*hidden argument*/GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9_RuntimeMethod_var);
		Card_setSuite_m87900CCC57CE20CF472DAF3D8F4093F98572FC04(L_40, 3, /*hidden argument*/NULL);
		goto IL_012a;
	}

IL_010b:
	{
		// else if (i <= 51)
		int32_t L_41 = V_1;
		if ((((int32_t)L_41) > ((int32_t)((int32_t)51))))
		{
			goto IL_011e;
		}
	}
	{
		// temp2.GetComponent<Card>().setSuite(4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_42 = V_2;
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_43;
		L_43 = GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9(L_42, /*hidden argument*/GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9_RuntimeMethod_var);
		Card_setSuite_m87900CCC57CE20CF472DAF3D8F4093F98572FC04(L_43, 4, /*hidden argument*/NULL);
		goto IL_012a;
	}

IL_011e:
	{
		// temp2.GetComponent<Card>().setSuite(0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_44 = V_2;
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_45;
		L_45 = GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9(L_44, /*hidden argument*/GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9_RuntimeMethod_var);
		Card_setSuite_m87900CCC57CE20CF472DAF3D8F4093F98572FC04(L_45, 0, /*hidden argument*/NULL);
	}

IL_012a:
	{
		// if ((i + 1) % 13 == 0)
		int32_t L_46 = V_1;
		if (((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1))%(int32_t)((int32_t)13))))
		{
			goto IL_0141;
		}
	}
	{
		// temp2.GetComponent<Card>().setValue(13);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_47 = V_2;
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_48;
		L_48 = GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9(L_47, /*hidden argument*/GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9_RuntimeMethod_var);
		Card_setValue_m317DBACDF7806EF1D002B62320C934E2B055B325(L_48, ((int32_t)13), /*hidden argument*/NULL);
		goto IL_0152;
	}

IL_0141:
	{
		// temp2.GetComponent<Card>().setValue((i + 1) % 13);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_49 = V_2;
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_50;
		L_50 = GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9(L_49, /*hidden argument*/GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9_RuntimeMethod_var);
		int32_t L_51 = V_1;
		Card_setValue_m317DBACDF7806EF1D002B62320C934E2B055B325(L_50, ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)1))%(int32_t)((int32_t)13))), /*hidden argument*/NULL);
	}

IL_0152:
	{
		// if (File.Exists(path + file))
		String_t* L_52 = V_3;
		String_t* L_53 = V_5;
		String_t* L_54;
		L_54 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_52, L_53, /*hidden argument*/NULL);
		bool L_55;
		L_55 = File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B(L_54, /*hidden argument*/NULL);
		if (!L_55)
		{
			goto IL_01ee;
		}
	}
	{
		// bytes = File.ReadAllBytes(path + file);
		String_t* L_56 = V_3;
		String_t* L_57 = V_5;
		String_t* L_58;
		L_58 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_56, L_57, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_59;
		L_59 = File_ReadAllBytes_mFB47FB50E938AE90CC822442D30E896441D95829(L_58, /*hidden argument*/NULL);
		V_7 = L_59;
		// Texture2D txt1 = new Texture2D(2, 2);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_60 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4(L_60, 2, 2, /*hidden argument*/NULL);
		V_8 = L_60;
		// txt1.LoadImage(bytes);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_61 = V_8;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_62 = V_7;
		bool L_63;
		L_63 = ImageConversion_LoadImage_m5BB4FBA0565E698ED5C6F25F7A0A5F83CADD7477(L_61, L_62, /*hidden argument*/NULL);
		// Sprite nw = Sprite.Create(txt1, new Rect(0, 0, txt1.width, txt1.height), new Vector2(.5f, .5f));
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_64 = V_8;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_65 = V_8;
		int32_t L_66;
		L_66 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_65);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_67 = V_8;
		int32_t L_68;
		L_68 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_67);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_69;
		memset((&L_69), 0, sizeof(L_69));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_69), (0.0f), (0.0f), ((float)((float)L_66)), ((float)((float)L_68)), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_70;
		memset((&L_70), 0, sizeof(L_70));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_70), (0.5f), (0.5f), /*hidden argument*/NULL);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_71;
		L_71 = Sprite_Create_m9817936760193300A6049A788C3446C7ADB49C6B(L_64, L_69, L_70, /*hidden argument*/NULL);
		V_9 = L_71;
		// nw.name = (i + 1).ToString();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_72 = V_9;
		int32_t L_73 = V_1;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_73, (int32_t)1));
		String_t* L_74;
		L_74 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_6), /*hidden argument*/NULL);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_72, L_74, /*hidden argument*/NULL);
		// temp2.GetComponent<Card>().setFSprite(nw);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_75 = V_2;
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_76;
		L_76 = GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9(L_75, /*hidden argument*/GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9_RuntimeMethod_var);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_77 = V_9;
		Card_setFSprite_mFE65AD84BD6EED6D4F30CD087935ADA7B3B78EC5_inline(L_76, L_77, /*hidden argument*/NULL);
		// cards.Add(temp2);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_78 = __this->get_cards_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_79 = V_2;
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_78, L_79, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// }
		goto IL_0274;
	}

IL_01ee:
	{
		// bytes = File.ReadAllBytes(path2 + file);
		String_t* L_80 = V_4;
		String_t* L_81 = V_5;
		String_t* L_82;
		L_82 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_80, L_81, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_83;
		L_83 = File_ReadAllBytes_mFB47FB50E938AE90CC822442D30E896441D95829(L_82, /*hidden argument*/NULL);
		V_10 = L_83;
		// Texture2D txt = new Texture2D(2, 2);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_84 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4(L_84, 2, 2, /*hidden argument*/NULL);
		V_11 = L_84;
		// txt.LoadImage(bytes);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_85 = V_11;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_86 = V_10;
		bool L_87;
		L_87 = ImageConversion_LoadImage_m5BB4FBA0565E698ED5C6F25F7A0A5F83CADD7477(L_85, L_86, /*hidden argument*/NULL);
		// Sprite nw = Sprite.Create(txt, new Rect(0, 0, txt.width, txt.height), new Vector2(.5f, .5f));
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_88 = V_11;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_89 = V_11;
		int32_t L_90;
		L_90 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_89);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_91 = V_11;
		int32_t L_92;
		L_92 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_91);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_93;
		memset((&L_93), 0, sizeof(L_93));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_93), (0.0f), (0.0f), ((float)((float)L_90)), ((float)((float)L_92)), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_94;
		memset((&L_94), 0, sizeof(L_94));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_94), (0.5f), (0.5f), /*hidden argument*/NULL);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_95;
		L_95 = Sprite_Create_m9817936760193300A6049A788C3446C7ADB49C6B(L_88, L_93, L_94, /*hidden argument*/NULL);
		V_12 = L_95;
		// nw.name = (i + 1).ToString();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_96 = V_12;
		int32_t L_97 = V_1;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)1));
		String_t* L_98;
		L_98 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_6), /*hidden argument*/NULL);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_96, L_98, /*hidden argument*/NULL);
		// temp2.GetComponent<Card>().setFSprite(nw);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_99 = V_2;
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_100;
		L_100 = GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9(L_99, /*hidden argument*/GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9_RuntimeMethod_var);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_101 = V_12;
		Card_setFSprite_mFE65AD84BD6EED6D4F30CD087935ADA7B3B78EC5_inline(L_100, L_101, /*hidden argument*/NULL);
		// cards.Add(temp2);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_102 = __this->get_cards_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_103 = V_2;
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_102, L_103, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
	}

IL_0274:
	{
		// for (int i = 0; i < 52; i++)
		int32_t L_104 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_104, (int32_t)1));
	}

IL_0278:
	{
		// for (int i = 0; i < 52; i++)
		int32_t L_105 = V_1;
		if ((((int32_t)L_105) < ((int32_t)((int32_t)52))))
		{
			goto IL_004c;
		}
	}
	{
		// }
		return;
	}
}
// System.Boolean Deck::contains(Card)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Deck_contains_m0BCF5F2107B1FB5DA6BD9A7D03AB88688373EDF0 (Deck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520 * __this, Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// bool b = false;
		V_0 = (bool)0;
		// for(int i = 0; i < drewCards.Count; i ++)
		V_1 = 0;
		goto IL_0025;
	}

IL_0006:
	{
		// if (other.equalsCard(drewCards.ElementAt(i).GetComponent<Card>()))
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_0 = ___other0;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_1 = __this->get_drewCards_7();
		int32_t L_2 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF(L_1, L_2, /*hidden argument*/Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF_RuntimeMethod_var);
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_4;
		L_4 = GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9(L_3, /*hidden argument*/GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9_RuntimeMethod_var);
		bool L_5;
		L_5 = Card_equalsCard_m625B5158BDCCA00C028E7A2844F5D45F45B7CA26(L_0, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0021;
		}
	}
	{
		// b = true;
		V_0 = (bool)1;
	}

IL_0021:
	{
		// for(int i = 0; i < drewCards.Count; i ++)
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0025:
	{
		// for(int i = 0; i < drewCards.Count; i ++)
		int32_t L_7 = V_1;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_8 = __this->get_drewCards_7();
		int32_t L_9;
		L_9 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_8, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_0006;
		}
	}
	{
		// return b;
		bool L_10 = V_0;
		return L_10;
	}
}
// System.Void Deck::deal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deck_deal_m0FF1A6A6D0F2B4BAA730FD77739BA39C41A567AD (Deck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_Tiscolumn_tC27722C067C60EB3159C904F72D98C84D24D178F_mEDF47F8FE8EAFDB77E0A5B06BDC5BACED6552B0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mAB148BF0E3CF1F336D76377BD01824F30A0582C0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// shuffle();
		Deck_shuffle_m158D97D61B35B6FEE31E540D8263D8D96DBCA329(__this, /*hidden argument*/NULL);
		// for(int i = 0; i < 7; i++)
		V_0 = 0;
		goto IL_00ef;
	}

IL_000d:
	{
		// for(int j = 0; j < i; j++)
		V_1 = 0;
		goto IL_007e;
	}

IL_0011:
	{
		// tableu.transform.GetChild(i).GetComponent<column>().addCardFromDeal(cards.ElementAt(0).GetComponent<Card>());
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_tableu_11();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		int32_t L_2 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_1, L_2, /*hidden argument*/NULL);
		column_tC27722C067C60EB3159C904F72D98C84D24D178F * L_4;
		L_4 = Component_GetComponent_Tiscolumn_tC27722C067C60EB3159C904F72D98C84D24D178F_mEDF47F8FE8EAFDB77E0A5B06BDC5BACED6552B0C(L_3, /*hidden argument*/Component_GetComponent_Tiscolumn_tC27722C067C60EB3159C904F72D98C84D24D178F_mEDF47F8FE8EAFDB77E0A5B06BDC5BACED6552B0C_RuntimeMethod_var);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_5 = __this->get_cards_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF(L_5, 0, /*hidden argument*/Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF_RuntimeMethod_var);
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_7;
		L_7 = GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9(L_6, /*hidden argument*/GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9_RuntimeMethod_var);
		column_addCardFromDeal_m9F43B8D0BDFA540635181B13CEF2E5C97658F8E7(L_4, L_7, /*hidden argument*/NULL);
		// cards.ElementAt(0).transform.position = tableu.transform.GetChild(i).transform.position;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_8 = __this->get_cards_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF(L_8, 0, /*hidden argument*/Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_tableu_11();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_11, /*hidden argument*/NULL);
		int32_t L_13 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_12, L_13, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_14, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_10, L_16, /*hidden argument*/NULL);
		// cards.RemoveAt(0);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_17 = __this->get_cards_6();
		List_1_RemoveAt_mAB148BF0E3CF1F336D76377BD01824F30A0582C0(L_17, 0, /*hidden argument*/List_1_RemoveAt_mAB148BF0E3CF1F336D76377BD01824F30A0582C0_RuntimeMethod_var);
		// for(int j = 0; j < i; j++)
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_007e:
	{
		// for(int j = 0; j < i; j++)
		int32_t L_19 = V_1;
		int32_t L_20 = V_0;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0011;
		}
	}
	{
		// tableu.transform.GetChild(i).GetComponent<column>().addCardFaceUp(cards.ElementAt(0).GetComponent<Card>());
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = __this->get_tableu_11();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_21, /*hidden argument*/NULL);
		int32_t L_23 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_22, L_23, /*hidden argument*/NULL);
		column_tC27722C067C60EB3159C904F72D98C84D24D178F * L_25;
		L_25 = Component_GetComponent_Tiscolumn_tC27722C067C60EB3159C904F72D98C84D24D178F_mEDF47F8FE8EAFDB77E0A5B06BDC5BACED6552B0C(L_24, /*hidden argument*/Component_GetComponent_Tiscolumn_tC27722C067C60EB3159C904F72D98C84D24D178F_mEDF47F8FE8EAFDB77E0A5B06BDC5BACED6552B0C_RuntimeMethod_var);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_26 = __this->get_cards_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27;
		L_27 = Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF(L_26, 0, /*hidden argument*/Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF_RuntimeMethod_var);
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_28;
		L_28 = GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9(L_27, /*hidden argument*/GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9_RuntimeMethod_var);
		column_addCardFaceUp_mD10970B841E7C2E686D8DCFC5B48B6CE1A8CADA1(L_25, L_28, /*hidden argument*/NULL);
		// cards.ElementAt(0).transform.position = tableu.transform.GetChild(i).transform.position;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_29 = __this->get_cards_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30;
		L_30 = Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF(L_29, 0, /*hidden argument*/Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_30, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32 = __this->get_tableu_11();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33;
		L_33 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_32, /*hidden argument*/NULL);
		int32_t L_34 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35;
		L_35 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_33, L_34, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_36;
		L_36 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_35, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		L_37 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_36, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_31, L_37, /*hidden argument*/NULL);
		// cards.RemoveAt(0);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_38 = __this->get_cards_6();
		List_1_RemoveAt_mAB148BF0E3CF1F336D76377BD01824F30A0582C0(L_38, 0, /*hidden argument*/List_1_RemoveAt_mAB148BF0E3CF1F336D76377BD01824F30A0582C0_RuntimeMethod_var);
		// for(int i = 0; i < 7; i++)
		int32_t L_39 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
	}

IL_00ef:
	{
		// for(int i = 0; i < 7; i++)
		int32_t L_40 = V_0;
		if ((((int32_t)L_40) < ((int32_t)7)))
		{
			goto IL_000d;
		}
	}
	{
		// for(int i = 0; i < 7; i++)
		V_2 = 0;
		goto IL_0119;
	}

IL_00fa:
	{
		// tableu.transform.GetChild(i).GetComponent<column>().printCards();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_41 = __this->get_tableu_11();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42;
		L_42 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_41, /*hidden argument*/NULL);
		int32_t L_43 = V_2;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_44;
		L_44 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_42, L_43, /*hidden argument*/NULL);
		column_tC27722C067C60EB3159C904F72D98C84D24D178F * L_45;
		L_45 = Component_GetComponent_Tiscolumn_tC27722C067C60EB3159C904F72D98C84D24D178F_mEDF47F8FE8EAFDB77E0A5B06BDC5BACED6552B0C(L_44, /*hidden argument*/Component_GetComponent_Tiscolumn_tC27722C067C60EB3159C904F72D98C84D24D178F_mEDF47F8FE8EAFDB77E0A5B06BDC5BACED6552B0C_RuntimeMethod_var);
		column_printCards_m275604963C44F3917B82DBA0562F277F630A9729(L_45, /*hidden argument*/NULL);
		// for(int i = 0; i < 7; i++)
		int32_t L_46 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1));
	}

IL_0119:
	{
		// for(int i = 0; i < 7; i++)
		int32_t L_47 = V_2;
		if ((((int32_t)L_47) < ((int32_t)7)))
		{
			goto IL_00fa;
		}
	}
	{
		// draw();
		Deck_draw_m92B4831B4A54AC21CCD79DE9C729E5E15421B302(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Deck::deal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deck_deal_mAB843DB85479973AB0BC2EF7B169A2200BF6E774 (Deck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520 * __this, int32_t ___sdd0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_Tiscolumn_tC27722C067C60EB3159C904F72D98C84D24D178F_mEDF47F8FE8EAFDB77E0A5B06BDC5BACED6552B0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mAB148BF0E3CF1F336D76377BD01824F30A0582C0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// shuffle(sdd);
		int32_t L_0 = ___sdd0;
		Deck_shuffle_m165EABD3E79B8B2DC085B93BE119DEBD64E37730(__this, L_0, /*hidden argument*/NULL);
		// for (int i = 0; i < 7; i++)
		V_0 = 0;
		goto IL_00f0;
	}

IL_000e:
	{
		// for (int j = 0; j < i; j++)
		V_1 = 0;
		goto IL_007f;
	}

IL_0012:
	{
		// tableu.transform.GetChild(i).GetComponent<column>().addCardFromDeal(cards.ElementAt(0).GetComponent<Card>());
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_tableu_11();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		int32_t L_3 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_2, L_3, /*hidden argument*/NULL);
		column_tC27722C067C60EB3159C904F72D98C84D24D178F * L_5;
		L_5 = Component_GetComponent_Tiscolumn_tC27722C067C60EB3159C904F72D98C84D24D178F_mEDF47F8FE8EAFDB77E0A5B06BDC5BACED6552B0C(L_4, /*hidden argument*/Component_GetComponent_Tiscolumn_tC27722C067C60EB3159C904F72D98C84D24D178F_mEDF47F8FE8EAFDB77E0A5B06BDC5BACED6552B0C_RuntimeMethod_var);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_6 = __this->get_cards_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF(L_6, 0, /*hidden argument*/Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF_RuntimeMethod_var);
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_8;
		L_8 = GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9(L_7, /*hidden argument*/GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9_RuntimeMethod_var);
		column_addCardFromDeal_m9F43B8D0BDFA540635181B13CEF2E5C97658F8E7(L_5, L_8, /*hidden argument*/NULL);
		// cards.ElementAt(0).transform.position = tableu.transform.GetChild(i).transform.position;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_9 = __this->get_cards_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF(L_9, 0, /*hidden argument*/Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_tableu_11();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_12, /*hidden argument*/NULL);
		int32_t L_14 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_13, L_14, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_15, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_16, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_11, L_17, /*hidden argument*/NULL);
		// cards.RemoveAt(0);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_18 = __this->get_cards_6();
		List_1_RemoveAt_mAB148BF0E3CF1F336D76377BD01824F30A0582C0(L_18, 0, /*hidden argument*/List_1_RemoveAt_mAB148BF0E3CF1F336D76377BD01824F30A0582C0_RuntimeMethod_var);
		// for (int j = 0; j < i; j++)
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_007f:
	{
		// for (int j = 0; j < i; j++)
		int32_t L_20 = V_1;
		int32_t L_21 = V_0;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_0012;
		}
	}
	{
		// tableu.transform.GetChild(i).GetComponent<column>().addCardFaceUp(cards.ElementAt(0).GetComponent<Card>());
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = __this->get_tableu_11();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_22, /*hidden argument*/NULL);
		int32_t L_24 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_23, L_24, /*hidden argument*/NULL);
		column_tC27722C067C60EB3159C904F72D98C84D24D178F * L_26;
		L_26 = Component_GetComponent_Tiscolumn_tC27722C067C60EB3159C904F72D98C84D24D178F_mEDF47F8FE8EAFDB77E0A5B06BDC5BACED6552B0C(L_25, /*hidden argument*/Component_GetComponent_Tiscolumn_tC27722C067C60EB3159C904F72D98C84D24D178F_mEDF47F8FE8EAFDB77E0A5B06BDC5BACED6552B0C_RuntimeMethod_var);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_27 = __this->get_cards_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28;
		L_28 = Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF(L_27, 0, /*hidden argument*/Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF_RuntimeMethod_var);
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_29;
		L_29 = GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9(L_28, /*hidden argument*/GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9_RuntimeMethod_var);
		column_addCardFaceUp_mD10970B841E7C2E686D8DCFC5B48B6CE1A8CADA1(L_26, L_29, /*hidden argument*/NULL);
		// cards.ElementAt(0).transform.position = tableu.transform.GetChild(i).transform.position;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_30 = __this->get_cards_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31;
		L_31 = Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF(L_30, 0, /*hidden argument*/Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_31, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33 = __this->get_tableu_11();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34;
		L_34 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_33, /*hidden argument*/NULL);
		int32_t L_35 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_36;
		L_36 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_34, L_35, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37;
		L_37 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_36, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_37, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_32, L_38, /*hidden argument*/NULL);
		// cards.RemoveAt(0);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_39 = __this->get_cards_6();
		List_1_RemoveAt_mAB148BF0E3CF1F336D76377BD01824F30A0582C0(L_39, 0, /*hidden argument*/List_1_RemoveAt_mAB148BF0E3CF1F336D76377BD01824F30A0582C0_RuntimeMethod_var);
		// for (int i = 0; i < 7; i++)
		int32_t L_40 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
	}

IL_00f0:
	{
		// for (int i = 0; i < 7; i++)
		int32_t L_41 = V_0;
		if ((((int32_t)L_41) < ((int32_t)7)))
		{
			goto IL_000e;
		}
	}
	{
		// for (int i = 0; i < 7; i++)
		V_2 = 0;
		goto IL_011a;
	}

IL_00fb:
	{
		// tableu.transform.GetChild(i).GetComponent<column>().printCards();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_42 = __this->get_tableu_11();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_43;
		L_43 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_42, /*hidden argument*/NULL);
		int32_t L_44 = V_2;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_45;
		L_45 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_43, L_44, /*hidden argument*/NULL);
		column_tC27722C067C60EB3159C904F72D98C84D24D178F * L_46;
		L_46 = Component_GetComponent_Tiscolumn_tC27722C067C60EB3159C904F72D98C84D24D178F_mEDF47F8FE8EAFDB77E0A5B06BDC5BACED6552B0C(L_45, /*hidden argument*/Component_GetComponent_Tiscolumn_tC27722C067C60EB3159C904F72D98C84D24D178F_mEDF47F8FE8EAFDB77E0A5B06BDC5BACED6552B0C_RuntimeMethod_var);
		column_printCards_m275604963C44F3917B82DBA0562F277F630A9729(L_46, /*hidden argument*/NULL);
		// for (int i = 0; i < 7; i++)
		int32_t L_47 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)1));
	}

IL_011a:
	{
		// for (int i = 0; i < 7; i++)
		int32_t L_48 = V_2;
		if ((((int32_t)L_48) < ((int32_t)7)))
		{
			goto IL_00fb;
		}
	}
	{
		// draw();
		Deck_draw_m92B4831B4A54AC21CCD79DE9C729E5E15421B302(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Deck::draw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deck_draw_m92B4831B4A54AC21CCD79DE9C729E5E15421B302 (Deck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mAB148BF0E3CF1F336D76377BD01824F30A0582C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_TrimExcess_m4E71933EC666BE369F5C3A509D54040FE51619FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC9CFA0D0D65B6009664422D1FD80CE503F2EA4B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if(cards.Count > 0)
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = __this->get_cards_6();
		int32_t L_1;
		L_1 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_0, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_00d6;
		}
	}
	{
		// float y = transform.position.y;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		// float z = transform.position.z;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		// if(!cards.ElementAt(0).GetComponent<Card>().FaceUp())
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_6 = __this->get_cards_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF(L_6, 0, /*hidden argument*/Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF_RuntimeMethod_var);
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_8;
		L_8 = GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9(L_7, /*hidden argument*/GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9_RuntimeMethod_var);
		bool L_9;
		L_9 = Card_FaceUp_m6F01C2B839210507DA80CC64F89137CF677219F8_inline(L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0057;
		}
	}
	{
		// cards.ElementAt(0).GetComponent<Card>().flip();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_10 = __this->get_cards_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF(L_10, 0, /*hidden argument*/Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF_RuntimeMethod_var);
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_12;
		L_12 = GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9(L_11, /*hidden argument*/GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9_RuntimeMethod_var);
		Card_flip_mCF7D888BEA36668261492B859FCD409BEEBADA46(L_12, /*hidden argument*/NULL);
	}

IL_0057:
	{
		// cards.ElementAt(0).transform.position = drewObj.transform.position;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_13 = __this->get_cards_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF(L_13, 0, /*hidden argument*/Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_14, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_drewObj_10();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_16, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_17, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_15, L_18, /*hidden argument*/NULL);
		// if(drewCards.Count >= 1)
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_19 = __this->get_drewCards_7();
		int32_t L_20;
		L_20 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_19, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		if ((((int32_t)L_20) < ((int32_t)1)))
		{
			goto IL_00ae;
		}
	}
	{
		// drewCards.ElementAt(drewCards.Count - 1).GetComponent<Renderer>().enabled = false;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_21 = __this->get_drewCards_7();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_22 = __this->get_drewCards_7();
		int32_t L_23;
		L_23 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_22, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24;
		L_24 = Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF(L_21, ((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)1)), /*hidden argument*/Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF_RuntimeMethod_var);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_25;
		L_25 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_24, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_25, (bool)0, /*hidden argument*/NULL);
	}

IL_00ae:
	{
		// drewCards.Add(cards.ElementAt(0));
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_26 = __this->get_drewCards_7();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_27 = __this->get_cards_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28;
		L_28 = Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF(L_27, 0, /*hidden argument*/Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF_RuntimeMethod_var);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_26, L_28, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// cards.RemoveAt(0);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_29 = __this->get_cards_6();
		List_1_RemoveAt_mAB148BF0E3CF1F336D76377BD01824F30A0582C0(L_29, 0, /*hidden argument*/List_1_RemoveAt_mAB148BF0E3CF1F336D76377BD01824F30A0582C0_RuntimeMethod_var);
		// }
		goto IL_01b6;
	}

IL_00d6:
	{
		// gm.GetComponent<GameManager>().passThroughDeck();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30 = __this->get_gm_5();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_31;
		L_31 = GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0(L_30, /*hidden argument*/GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0_RuntimeMethod_var);
		GameManager_passThroughDeck_m5EC600733AE17A9E99F09D64718AFB4551239E10(L_31, /*hidden argument*/NULL);
		// for (int i = 0; i < drewCards.Count; i++)
		V_0 = 0;
		goto IL_018f;
	}

IL_00ed:
	{
		// cards.Add(drewCards.ElementAt(i));
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_32 = __this->get_cards_6();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_33 = __this->get_drewCards_7();
		int32_t L_34 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35;
		L_35 = Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF(L_33, L_34, /*hidden argument*/Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF_RuntimeMethod_var);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_32, L_35, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// cards.ElementAt(i).GetComponent<Renderer>().enabled = true;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_36 = __this->get_cards_6();
		int32_t L_37 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_38;
		L_38 = Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF(L_36, L_37, /*hidden argument*/Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF_RuntimeMethod_var);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_39;
		L_39 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_38, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_39, (bool)1, /*hidden argument*/NULL);
		// cards.ElementAt(i).transform.position = new Vector3(drawLocation.x + 3, drawLocation.y, drawLocation.z);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_40 = __this->get_cards_6();
		int32_t L_41 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_42;
		L_42 = Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF(L_40, L_41, /*hidden argument*/Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_43;
		L_43 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_42, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_44 = __this->get_address_of_drawLocation_9();
		float L_45 = L_44->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_46 = __this->get_address_of_drawLocation_9();
		float L_47 = L_46->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_48 = __this->get_address_of_drawLocation_9();
		float L_49 = L_48->get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50;
		memset((&L_50), 0, sizeof(L_50));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_50), ((float)il2cpp_codegen_add((float)L_45, (float)(3.0f))), L_47, L_49, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_43, L_50, /*hidden argument*/NULL);
		// if (cards.ElementAt(i).GetComponent<Card>().FaceUp())
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_51 = __this->get_cards_6();
		int32_t L_52 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_53;
		L_53 = Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF(L_51, L_52, /*hidden argument*/Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF_RuntimeMethod_var);
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_54;
		L_54 = GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9(L_53, /*hidden argument*/GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9_RuntimeMethod_var);
		bool L_55;
		L_55 = Card_FaceUp_m6F01C2B839210507DA80CC64F89137CF677219F8_inline(L_54, /*hidden argument*/NULL);
		if (!L_55)
		{
			goto IL_018b;
		}
	}
	{
		// cards.ElementAt(i).GetComponent<Card>().flip();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_56 = __this->get_cards_6();
		int32_t L_57 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_58;
		L_58 = Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF(L_56, L_57, /*hidden argument*/Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF_RuntimeMethod_var);
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_59;
		L_59 = GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9(L_58, /*hidden argument*/GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9_RuntimeMethod_var);
		Card_flip_mCF7D888BEA36668261492B859FCD409BEEBADA46(L_59, /*hidden argument*/NULL);
	}

IL_018b:
	{
		// for (int i = 0; i < drewCards.Count; i++)
		int32_t L_60 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)1));
	}

IL_018f:
	{
		// for (int i = 0; i < drewCards.Count; i++)
		int32_t L_61 = V_0;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_62 = __this->get_drewCards_7();
		int32_t L_63;
		L_63 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_62, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		if ((((int32_t)L_61) < ((int32_t)L_63)))
		{
			goto IL_00ed;
		}
	}
	{
		// drewCards.Clear();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_64 = __this->get_drewCards_7();
		List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432(L_64, /*hidden argument*/List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432_RuntimeMethod_var);
		// drewCards.TrimExcess();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_65 = __this->get_drewCards_7();
		List_1_TrimExcess_m4E71933EC666BE369F5C3A509D54040FE51619FD(L_65, /*hidden argument*/List_1_TrimExcess_m4E71933EC666BE369F5C3A509D54040FE51619FD_RuntimeMethod_var);
	}

IL_01b6:
	{
		// GameManager.removeTempCard();
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_removeTempCard_m3D281B0606A375C0E0C2CB5AB0E56E4078BC2509(/*hidden argument*/NULL);
		// GameManager.removeTempCards();
		GameManager_removeTempCards_mD09C29492548CAE8BC5005AD4EDBFC1573BBA40C(/*hidden argument*/NULL);
		// Debug.Log("Size of drew cards " + drewCards.Count.ToString());
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_66 = __this->get_drewCards_7();
		int32_t L_67;
		L_67 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_66, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		V_1 = L_67;
		String_t* L_68;
		L_68 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_69;
		L_69 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralEC9CFA0D0D65B6009664422D1FD80CE503F2EA4B, L_68, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_69, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Deck::shuffle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deck_shuffle_m158D97D61B35B6FEE31E540D8263D8D96DBCA329 (Deck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Reverse_m4F2EE1EFE5F10C464C9BF382C9B47A458ED9569E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Reverse_m73DFA5BC0474DF46522223788C60FB845ADBE682_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3CB3A20E1CC58899D06F409AAB6232B67C0FAE8);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// Debug.Log("init state =  " + UnityEngine.Random.seed.ToString());
		int32_t L_0;
		L_0 = Random_get_seed_mF85743627F385169AE5E49B10BB6D71631C0A483(/*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralD3CB3A20E1CC58899D06F409AAB6232B67C0FAE8, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_2, /*hidden argument*/NULL);
		// if (cards.Count == 52) {
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_3 = __this->get_cards_6();
		int32_t L_4;
		L_4 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_3, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)52)))))
		{
			goto IL_008a;
		}
	}
	{
		// for (int i = 0; i < 100; i++)
		V_3 = 0;
		goto IL_007a;
	}

IL_002f:
	{
		// t0 = UnityEngine.Random.Range(0, 51);
		int32_t L_5;
		L_5 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)51), /*hidden argument*/NULL);
		V_1 = L_5;
		// t1 = UnityEngine.Random.Range(0, 51);
		int32_t L_6;
		L_6 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)51), /*hidden argument*/NULL);
		V_2 = L_6;
		// if (t0 == t1)
		int32_t L_7 = V_1;
		int32_t L_8 = V_2;
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_0052;
		}
	}
	{
		// cards.Reverse();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_9 = __this->get_cards_6();
		List_1_Reverse_m73DFA5BC0474DF46522223788C60FB845ADBE682(L_9, /*hidden argument*/List_1_Reverse_m73DFA5BC0474DF46522223788C60FB845ADBE682_RuntimeMethod_var);
		goto IL_0076;
	}

IL_0052:
	{
		// else if (t0 < t1)
		int32_t L_10 = V_1;
		int32_t L_11 = V_2;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0067;
		}
	}
	{
		// cards.Reverse(t0, t1 - t0);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_12 = __this->get_cards_6();
		int32_t L_13 = V_1;
		int32_t L_14 = V_2;
		int32_t L_15 = V_1;
		List_1_Reverse_m4F2EE1EFE5F10C464C9BF382C9B47A458ED9569E(L_12, L_13, ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)L_15)), /*hidden argument*/List_1_Reverse_m4F2EE1EFE5F10C464C9BF382C9B47A458ED9569E_RuntimeMethod_var);
		// }
		goto IL_0076;
	}

IL_0067:
	{
		// cards.Reverse(t1, t0 - t1);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_16 = __this->get_cards_6();
		int32_t L_17 = V_2;
		int32_t L_18 = V_1;
		int32_t L_19 = V_2;
		List_1_Reverse_m4F2EE1EFE5F10C464C9BF382C9B47A458ED9569E(L_16, L_17, ((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)L_19)), /*hidden argument*/List_1_Reverse_m4F2EE1EFE5F10C464C9BF382C9B47A458ED9569E_RuntimeMethod_var);
	}

IL_0076:
	{
		// for (int i = 0; i < 100; i++)
		int32_t L_20 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_007a:
	{
		// for (int i = 0; i < 100; i++)
		int32_t L_21 = V_3;
		if ((((int32_t)L_21) < ((int32_t)((int32_t)100))))
		{
			goto IL_002f;
		}
	}
	{
		// cards.Reverse();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_22 = __this->get_cards_6();
		List_1_Reverse_m73DFA5BC0474DF46522223788C60FB845ADBE682(L_22, /*hidden argument*/List_1_Reverse_m73DFA5BC0474DF46522223788C60FB845ADBE682_RuntimeMethod_var);
	}

IL_008a:
	{
		// }
		return;
	}
}
// System.Void Deck::shuffle(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deck_shuffle_m165EABD3E79B8B2DC085B93BE119DEBD64E37730 (Deck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520 * __this, int32_t ___seed0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Reverse_m4F2EE1EFE5F10C464C9BF382C9B47A458ED9569E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Reverse_m73DFA5BC0474DF46522223788C60FB845ADBE682_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// UnityEngine.Random.seed = seed;
		int32_t L_0 = ___seed0;
		Random_set_seed_m1AE91B14D0CF4A76FB7DF671A5234DC9C643820D(L_0, /*hidden argument*/NULL);
		// if (cards.Count == 52)
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_1 = __this->get_cards_6();
		int32_t L_2;
		L_2 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_1, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)52)))))
		{
			goto IL_0074;
		}
	}
	{
		// for (int i = 0; i < 100; i++)
		V_2 = 0;
		goto IL_0064;
	}

IL_0019:
	{
		// t0 = UnityEngine.Random.Range(0, 51);
		int32_t L_3;
		L_3 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)51), /*hidden argument*/NULL);
		V_0 = L_3;
		// t1 = UnityEngine.Random.Range(0, 51);
		int32_t L_4;
		L_4 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)51), /*hidden argument*/NULL);
		V_1 = L_4;
		// if (t0 == t1)
		int32_t L_5 = V_0;
		int32_t L_6 = V_1;
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_003c;
		}
	}
	{
		// cards.Reverse();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_7 = __this->get_cards_6();
		List_1_Reverse_m73DFA5BC0474DF46522223788C60FB845ADBE682(L_7, /*hidden argument*/List_1_Reverse_m73DFA5BC0474DF46522223788C60FB845ADBE682_RuntimeMethod_var);
		goto IL_0060;
	}

IL_003c:
	{
		// else if (t0 < t1)
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		if ((((int32_t)L_8) >= ((int32_t)L_9)))
		{
			goto IL_0051;
		}
	}
	{
		// cards.Reverse(t0, t1 - t0);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_10 = __this->get_cards_6();
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		List_1_Reverse_m4F2EE1EFE5F10C464C9BF382C9B47A458ED9569E(L_10, L_11, ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)L_13)), /*hidden argument*/List_1_Reverse_m4F2EE1EFE5F10C464C9BF382C9B47A458ED9569E_RuntimeMethod_var);
		// }
		goto IL_0060;
	}

IL_0051:
	{
		// cards.Reverse(t1, t0 - t1);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_14 = __this->get_cards_6();
		int32_t L_15 = V_1;
		int32_t L_16 = V_0;
		int32_t L_17 = V_1;
		List_1_Reverse_m4F2EE1EFE5F10C464C9BF382C9B47A458ED9569E(L_14, L_15, ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)L_17)), /*hidden argument*/List_1_Reverse_m4F2EE1EFE5F10C464C9BF382C9B47A458ED9569E_RuntimeMethod_var);
	}

IL_0060:
	{
		// for (int i = 0; i < 100; i++)
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0064:
	{
		// for (int i = 0; i < 100; i++)
		int32_t L_19 = V_2;
		if ((((int32_t)L_19) < ((int32_t)((int32_t)100))))
		{
			goto IL_0019;
		}
	}
	{
		// cards.Reverse();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_20 = __this->get_cards_6();
		List_1_Reverse_m73DFA5BC0474DF46522223788C60FB845ADBE682(L_20, /*hidden argument*/List_1_Reverse_m73DFA5BC0474DF46522223788C60FB845ADBE682_RuntimeMethod_var);
	}

IL_0074:
	{
		// }
		return;
	}
}
// System.Void Deck::printCards()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deck_printCards_m190667E2355A3494BF2355052226806CB5F5D337 (Deck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	{
		// for (int i = 0; i < 52; i ++)
		V_2 = 0;
		goto IL_00b9;
	}

IL_0007:
	{
		// if (i < 12)
		int32_t L_0 = V_2;
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)12))))
		{
			goto IL_0023;
		}
	}
	{
		// y = 4f;
		V_1 = (4.0f);
		// x = -8.35f + (1.5f * i);
		int32_t L_1 = V_2;
		V_0 = ((float)il2cpp_codegen_add((float)(-8.35000038f), (float)((float)il2cpp_codegen_multiply((float)(1.5f), (float)((float)((float)L_1))))));
		// }
		goto IL_0098;
	}

IL_0023:
	{
		// else if (i < 24)
		int32_t L_2 = V_2;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)24))))
		{
			goto IL_0042;
		}
	}
	{
		// y = 2f;
		V_1 = (2.0f);
		// x = -8.35f + (1.5f * (i - 12));
		int32_t L_3 = V_2;
		V_0 = ((float)il2cpp_codegen_add((float)(-8.35000038f), (float)((float)il2cpp_codegen_multiply((float)(1.5f), (float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)((int32_t)12)))))))));
		// }
		goto IL_0098;
	}

IL_0042:
	{
		// else if (i < 36)
		int32_t L_4 = V_2;
		if ((((int32_t)L_4) >= ((int32_t)((int32_t)36))))
		{
			goto IL_0061;
		}
	}
	{
		// y = 0f;
		V_1 = (0.0f);
		// x = -8.35f + (1.5f * (i - 24));
		int32_t L_5 = V_2;
		V_0 = ((float)il2cpp_codegen_add((float)(-8.35000038f), (float)((float)il2cpp_codegen_multiply((float)(1.5f), (float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)((int32_t)24)))))))));
		// }
		goto IL_0098;
	}

IL_0061:
	{
		// else if (i < 48)
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) >= ((int32_t)((int32_t)48))))
		{
			goto IL_0080;
		}
	}
	{
		// y = -2f;
		V_1 = (-2.0f);
		// x = -8.35f + (1.5f * (i - 36));
		int32_t L_7 = V_2;
		V_0 = ((float)il2cpp_codegen_add((float)(-8.35000038f), (float)((float)il2cpp_codegen_multiply((float)(1.5f), (float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)((int32_t)36)))))))));
		// }
		goto IL_0098;
	}

IL_0080:
	{
		// y = -4f;
		V_1 = (-4.0f);
		// x = -8.35f + (1.5f * (i - 48));
		int32_t L_8 = V_2;
		V_0 = ((float)il2cpp_codegen_add((float)(-8.35000038f), (float)((float)il2cpp_codegen_multiply((float)(1.5f), (float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)((int32_t)48)))))))));
	}

IL_0098:
	{
		// cards.ElementAt(i).transform.position = new Vector3(x, y);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_9 = __this->get_cards_6();
		int32_t L_10 = V_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF(L_9, L_10, /*hidden argument*/Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_11, /*hidden argument*/NULL);
		float L_13 = V_0;
		float L_14 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_15), L_13, L_14, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_12, L_15, /*hidden argument*/NULL);
		// for (int i = 0; i < 52; i ++)
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_00b9:
	{
		// for (int i = 0; i < 52; i ++)
		int32_t L_17 = V_2;
		if ((((int32_t)L_17) < ((int32_t)((int32_t)52))))
		{
			goto IL_0007;
		}
	}
	{
		// }
		return;
	}
}
// System.Int32 Deck::getNumDrewCards()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Deck_getNumDrewCards_mD028B9A71C4F445D5BACE77CA45DBD8DC349BDD0 (Deck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return drewCards.Count;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = __this->get_drewCards_7();
		int32_t L_1;
		L_1 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_0, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		return L_1;
	}
}
// Card Deck::getTopDrewCard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * Deck_getTopDrewCard_m30C5EF6229CCD3C1689A74833C6ED94CAA26675E (Deck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B176493DEC7DB4185CAE1F3B5817E7202CEC39C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C72D3EED78A7734B22D8EB04F54CDD7F75A694F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Debug.Log("inside getTopDrewCard function \n");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral5B176493DEC7DB4185CAE1F3B5817E7202CEC39C, /*hidden argument*/NULL);
		// Debug.Log("size of drew cards " + drewCards.Count.ToString());
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = __this->get_drewCards_7();
		int32_t L_1;
		L_1 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_0, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		V_0 = L_1;
		String_t* L_2;
		L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral8C72D3EED78A7734B22D8EB04F54CDD7F75A694F, L_2, /*hidden argument*/NULL);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_3, /*hidden argument*/NULL);
		// return drewCards.ElementAt(drewCards.Count - 1).GetComponent<Card>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_4 = __this->get_drewCards_7();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_5 = __this->get_drewCards_7();
		int32_t L_6;
		L_6 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_5, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF(L_4, ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)), /*hidden argument*/Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF_RuntimeMethod_var);
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_8;
		L_8 = GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9(L_7, /*hidden argument*/GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9_RuntimeMethod_var);
		return L_8;
	}
}
// System.Void Deck::flip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deck_flip_mF3A654D6D2388849D26956BA3C2EAC8CECACA60B (Deck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach(GameObject c in cards)
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = __this->get_cards_6();
		Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  L_1;
		L_1 = List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6(L_0, /*hidden argument*/List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001f;
		}

IL_000e:
		{
			// foreach(GameObject c in cards)
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
			L_2 = Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_inline((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
			// c.GetComponent<Card>().flip();
			Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_3;
			L_3 = GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9(L_2, /*hidden argument*/GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9_RuntimeMethod_var);
			Card_flip_mCF7D888BEA36668261492B859FCD409BEEBADA46(L_3, /*hidden argument*/NULL);
		}

IL_001f:
		{
			// foreach(GameObject c in cards)
			bool L_4;
			L_4 = Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
			if (L_4)
			{
				goto IL_000e;
			}
		}

IL_0028:
		{
			IL2CPP_LEAVE(0x38, FINALLY_002a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		IL2CPP_END_FINALLY(42)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x38, IL_0038)
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void Deck::randomCard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deck_randomCard_mC3573A07CEBA773EEBD16CDFC8770199919E40F2 (Deck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520 * __this, const RuntimeMethod* method)
{
	{
		// int index = UnityEngine.Random.Range(0, 51);
		int32_t L_0;
		L_0 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)51), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Deck::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deck_OnMouseDown_mE11636B0712B8676A9746232ADE177B2D2B56648 (Deck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520 * __this, const RuntimeMethod* method)
{
	{
		// draw();
		Deck_draw_m92B4831B4A54AC21CCD79DE9C729E5E15421B302(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Deck::removeTopDrewCard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deck_removeTopDrewCard_m37CDEB589EBEFA709259546240613A7658C99A83 (Deck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mAB148BF0E3CF1F336D76377BD01824F30A0582C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// drewCards.RemoveAt(drewCards.Count - 1);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = __this->get_drewCards_7();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_1 = __this->get_drewCards_7();
		int32_t L_2;
		L_2 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_1, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		List_1_RemoveAt_mAB148BF0E3CF1F336D76377BD01824F30A0582C0(L_0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1)), /*hidden argument*/List_1_RemoveAt_mAB148BF0E3CF1F336D76377BD01824F30A0582C0_RuntimeMethod_var);
		// if (drewCards.Count > 0)
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_3 = __this->get_drewCards_7();
		int32_t L_4;
		L_4 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_3, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		// drewCards.ElementAt(drewCards.Count - 1).GetComponent<Renderer>().enabled = true;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_5 = __this->get_drewCards_7();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_6 = __this->get_drewCards_7();
		int32_t L_7;
		L_7 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_6, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF(L_5, ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1)), /*hidden argument*/Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF_RuntimeMethod_var);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_9;
		L_9 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_8, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_9, (bool)1, /*hidden argument*/NULL);
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void Deck::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Deck__ctor_m1699C8F29839AA379EA15AAE8D57B6108C6571CB (Deck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<GameObject> cards = new List<GameObject>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)il2cpp_codegen_object_new(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8(L_0, /*hidden argument*/List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		__this->set_cards_6(L_0);
		// public List<GameObject> drewCards = new List<GameObject>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_1 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)il2cpp_codegen_object_new(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8(L_1, /*hidden argument*/List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		__this->set_drewCards_7(L_1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_m26461AEF27E44DB8FECCBC19D6C9E228B658BF8E (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0984F005EFCC3DFF1064E28203D415B417B1175D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34C62C0EA9964074E2383B62B1E943BBA2405B92);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B53E7132DD0569F0630DA976C7CA00A9D7E675E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9B577CAE7605B964C63995C672D6F87AF3CAF63);
		s_Il2CppMethodInitialized = true;
	}
	{
		// deck = GameObject.Find("Deck");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralE9B577CAE7605B964C63995C672D6F87AF3CAF63, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_deck_4(L_0);
		// foundation = GameObject.Find("foundation");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral0984F005EFCC3DFF1064E28203D415B417B1175D, /*hidden argument*/NULL);
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_foundation_5(L_1);
		// tableau = GameObject.Find("runs");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral8B53E7132DD0569F0630DA976C7CA00A9D7E675E, /*hidden argument*/NULL);
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_tableau_6(L_2);
		// winner.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_winner_7();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// loser.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_loser_10();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)0, /*hidden argument*/NULL);
		// score = 0;
		__this->set_score_19(0);
		// scoreTxt.text = "Score: 0";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_scoreTxt_12();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteral34C62C0EA9964074E2383B62B1E943BBA2405B92);
		// timeTxt.gameObject.SetActive(false);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_6 = __this->get_timeTxt_13();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_6, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)0, /*hidden argument*/NULL);
		// scoreTxt.gameObject.SetActive(false);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_8 = __this->get_scoreTxt_12();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_8, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)0, /*hidden argument*/NULL);
		// btns.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_btns_8();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_10, (bool)0, /*hidden argument*/NULL);
		// t = 0;
		__this->set_t_17(0);
		// }
		return;
	}
}
// System.Void GameManager::remove20Points()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_remove20Points_m363011298451EFA4155DA998C0A18C7AD15C7392 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (score >= 20)
		int32_t L_0 = __this->get_score_19();
		if ((((int32_t)L_0) < ((int32_t)((int32_t)20))))
		{
			goto IL_001b;
		}
	}
	{
		// score -= 20;
		int32_t L_1 = __this->get_score_19();
		__this->set_score_19(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)20))));
		goto IL_0022;
	}

IL_001b:
	{
		// score = 0;
		__this->set_score_19(0);
	}

IL_0022:
	{
		// scoreTxt.text = "Score: " + score.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_scoreTxt_12();
		int32_t* L_3 = __this->get_address_of_score_19();
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_3, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6, L_4, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_5);
		// }
		return;
	}
}
// System.Void GameManager::add3Points()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_add3Points_mC28AE79322209EB739FD99AA7234313BCF0BADDC (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// score += 3;
		int32_t L_0 = __this->get_score_19();
		__this->set_score_19(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)3)));
		// scoreTxt.text = "Score: " + score.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_scoreTxt_12();
		int32_t* L_2 = __this->get_address_of_score_19();
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6, L_3, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_4);
		// }
		return;
	}
}
// System.Void GameManager::add5Points()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_add5Points_m9C82258A2B5C21BB2F70A38C0D8FD351A76D5AC8 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// score += 5;
		int32_t L_0 = __this->get_score_19();
		__this->set_score_19(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)5)));
		// scoreTxt.text = "Score: " + score.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_scoreTxt_12();
		int32_t* L_2 = __this->get_address_of_score_19();
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6, L_3, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_4);
		// }
		return;
	}
}
// System.Void GameManager::add10Points()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_add10Points_m9F357A270EBD017D57F39290414656F209E26D3D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// score += 10;
		int32_t L_0 = __this->get_score_19();
		__this->set_score_19(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)((int32_t)10))));
		// scoreTxt.text = "Score: " + score.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_scoreTxt_12();
		int32_t* L_2 = __this->get_address_of_score_19();
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6, L_3, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_4);
		// }
		return;
	}
}
// System.Void GameManager::passThroughDeck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_passThroughDeck_m5EC600733AE17A9E99F09D64718AFB4551239E10 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (score > 100)
		int32_t L_0 = __this->get_score_19();
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)100))))
		{
			goto IL_001b;
		}
	}
	{
		// score -= 100;
		int32_t L_1 = __this->get_score_19();
		__this->set_score_19(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)100))));
		goto IL_0022;
	}

IL_001b:
	{
		// score = 0;
		__this->set_score_19(0);
	}

IL_0022:
	{
		// scoreTxt.text = "Score: " + score.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_scoreTxt_12();
		int32_t* L_3 = __this->get_address_of_score_19();
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_3, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6, L_4, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_5);
		// }
		return;
	}
}
// System.Void GameManager::startLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_startLevel_mC92A7ED4BBC93537DCEF04C63F8B414E1E75CF29 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDeck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520_m2DA78CAA5FF98B767257748EB92DDB68A16C0F52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D6D57BEEEC9D9AD4DEBC273D6606CC0D74DC2D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral299E01A3C227A338CCCF7D17E88F26B036E2B8EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral743EDCAC6A947FFD1935E497F5077BF2575811AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DA1760BD800AD437B2EBD92CA3FC1C9F5467B58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral947610918E815EA32DDFB8A4CD7A91DD72C33DE7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD27FB8C857B99AB7846237A8679B6CF0E1DEAA03);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// strt.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_strt_9();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// switch (SceneManager.GetActiveScene().name)
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_1;
		L_1 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_1 = L_1;
		String_t* L_2;
		L_2 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		if (!L_3)
		{
			goto IL_00a3;
		}
	}
	{
		String_t* L_4 = V_0;
		bool L_5;
		L_5 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_4, _stringLiteral0D6D57BEEEC9D9AD4DEBC273D6606CC0D74DC2D5, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0063;
		}
	}
	{
		String_t* L_6 = V_0;
		bool L_7;
		L_7 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_6, _stringLiteral743EDCAC6A947FFD1935E497F5077BF2575811AC, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0079;
		}
	}
	{
		String_t* L_8 = V_0;
		bool L_9;
		L_9 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_8, _stringLiteral947610918E815EA32DDFB8A4CD7A91DD72C33DE7, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_008f;
		}
	}
	{
		String_t* L_10 = V_0;
		bool L_11;
		L_11 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_10, _stringLiteralD27FB8C857B99AB7846237A8679B6CF0E1DEAA03, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_00a3;
		}
	}
	{
		String_t* L_12 = V_0;
		bool L_13;
		L_13 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_12, _stringLiteral7DA1760BD800AD437B2EBD92CA3FC1C9F5467B58, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_00a3;
		}
	}
	{
		goto IL_00a3;
	}

IL_0063:
	{
		// deck.GetComponent<Deck>().deal(-53120261);
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_deck_4();
		Deck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520 * L_15;
		L_15 = GameObject_GetComponent_TisDeck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520_m2DA78CAA5FF98B767257748EB92DDB68A16C0F52(L_14, /*hidden argument*/GameObject_GetComponent_TisDeck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520_m2DA78CAA5FF98B767257748EB92DDB68A16C0F52_RuntimeMethod_var);
		Deck_deal_mAB843DB85479973AB0BC2EF7B169A2200BF6E774(L_15, ((int32_t)-53120261), /*hidden argument*/NULL);
		// break;
		goto IL_00a3;
	}

IL_0079:
	{
		// deck.GetComponent<Deck>().deal(1031606578);
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_deck_4();
		Deck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520 * L_17;
		L_17 = GameObject_GetComponent_TisDeck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520_m2DA78CAA5FF98B767257748EB92DDB68A16C0F52(L_16, /*hidden argument*/GameObject_GetComponent_TisDeck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520_m2DA78CAA5FF98B767257748EB92DDB68A16C0F52_RuntimeMethod_var);
		Deck_deal_mAB843DB85479973AB0BC2EF7B169A2200BF6E774(L_17, ((int32_t)1031606578), /*hidden argument*/NULL);
		// break;
		goto IL_00a3;
	}

IL_008f:
	{
		// deck.GetComponent<Deck>().deal(771523812);
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_deck_4();
		Deck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520 * L_19;
		L_19 = GameObject_GetComponent_TisDeck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520_m2DA78CAA5FF98B767257748EB92DDB68A16C0F52(L_18, /*hidden argument*/GameObject_GetComponent_TisDeck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520_m2DA78CAA5FF98B767257748EB92DDB68A16C0F52_RuntimeMethod_var);
		Deck_deal_mAB843DB85479973AB0BC2EF7B169A2200BF6E774(L_19, ((int32_t)771523812), /*hidden argument*/NULL);
	}

IL_00a3:
	{
		// score = 0;
		__this->set_score_19(0);
		// scoreTxt.text = "Score: " + score.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_20 = __this->get_scoreTxt_12();
		int32_t* L_21 = __this->get_address_of_score_19();
		String_t* L_22;
		L_22 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_21, /*hidden argument*/NULL);
		String_t* L_23;
		L_23 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6, L_22, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_20, L_23);
		// time = 0;
		__this->set_time_18(0);
		// timeTxt.gameObject.SetActive(true);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_24 = __this->get_timeTxt_13();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25;
		L_25 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_24, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_25, (bool)1, /*hidden argument*/NULL);
		// timeTxt.text = "Time: " + time.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_26 = __this->get_timeTxt_13();
		int32_t* L_27 = __this->get_address_of_time_18();
		String_t* L_28;
		L_28 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_27, /*hidden argument*/NULL);
		String_t* L_29;
		L_29 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral299E01A3C227A338CCCF7D17E88F26B036E2B8EC, L_28, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_26, L_29);
		// scoreTxt.gameObject.SetActive(true);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_30 = __this->get_scoreTxt_12();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31;
		L_31 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_30, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_31, (bool)1, /*hidden argument*/NULL);
		// btns.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32 = __this->get_btns_8();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_32, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::deal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_deal_m127D080A660E840B36F79003C2EFBA3BB99CBF5A (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDeck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520_m2DA78CAA5FF98B767257748EB92DDB68A16C0F52_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// deck.GetComponent<Deck>().deal();
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_deck_4();
		Deck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520 * L_1;
		L_1 = GameObject_GetComponent_TisDeck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520_m2DA78CAA5FF98B767257748EB92DDB68A16C0F52(L_0, /*hidden argument*/GameObject_GetComponent_TisDeck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520_m2DA78CAA5FF98B767257748EB92DDB68A16C0F52_RuntimeMethod_var);
		Deck_deal_m0FF1A6A6D0F2B4BAA730FD77739BA39C41A567AD(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Update_mC9303BA7C3117BD861F49F8E36151CC52117E6C1 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_Tisfoundation_stack_tF7696B65F2806C093FB52E859D52FD8414A73474_m2237D0B4BAE4635E1B82CA1F0D68786E00408376_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D6D57BEEEC9D9AD4DEBC273D6606CC0D74DC2D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral299E01A3C227A338CCCF7D17E88F26B036E2B8EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral743EDCAC6A947FFD1935E497F5077BF2575811AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DA1760BD800AD437B2EBD92CA3FC1C9F5467B58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral947610918E815EA32DDFB8A4CD7A91DD72C33DE7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCAEDA72F17D9EA7A04BBA53EA9DCA508AF3D24A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD27FB8C857B99AB7846237A8679B6CF0E1DEAA03);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// t++;
		int32_t L_0 = __this->get_t_17();
		__this->set_t_17(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// if(t % 60 == 0)
		int32_t L_1 = __this->get_t_17();
		if (((int32_t)((int32_t)L_1%(int32_t)((int32_t)60))))
		{
			goto IL_0047;
		}
	}
	{
		// time++;
		int32_t L_2 = __this->get_time_18();
		__this->set_time_18(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		// timeTxt.text = "Time: " + time.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_timeTxt_13();
		int32_t* L_4 = __this->get_address_of_time_18();
		String_t* L_5;
		L_5 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_4, /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral299E01A3C227A338CCCF7D17E88F26B036E2B8EC, L_5, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_6);
	}

IL_0047:
	{
		// if (t % 600 == 0)
		int32_t L_7 = __this->get_t_17();
		if (((int32_t)((int32_t)L_7%(int32_t)((int32_t)600))))
		{
			goto IL_0095;
		}
	}
	{
		// if (score >= 2)
		int32_t L_8 = __this->get_score_19();
		if ((((int32_t)L_8) < ((int32_t)2)))
		{
			goto IL_006e;
		}
	}
	{
		// score -= 2;
		int32_t L_9 = __this->get_score_19();
		__this->set_score_19(((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)2)));
		goto IL_0075;
	}

IL_006e:
	{
		// score = 0;
		__this->set_score_19(0);
	}

IL_0075:
	{
		// scoreTxt.text = "Score: " + score.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_10 = __this->get_scoreTxt_12();
		int32_t* L_11 = __this->get_address_of_score_19();
		String_t* L_12;
		L_12 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_11, /*hidden argument*/NULL);
		String_t* L_13;
		L_13 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6, L_12, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_13);
	}

IL_0095:
	{
		// bool b = true;
		V_0 = (bool)1;
		// if (!winner.activeSelf && !loser.activeSelf)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get_winner_7();
		bool L_15;
		L_15 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_00dd;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_loser_10();
		bool L_17;
		L_17 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_16, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_00dd;
		}
	}
	{
		// for (int i = 0; i < 4; i++)
		V_1 = 0;
		goto IL_00d9;
	}

IL_00b5:
	{
		// if (foundation.transform.GetChild(i).GetComponent<foundation_stack>().getSize() != 13)
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_foundation_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_18, /*hidden argument*/NULL);
		int32_t L_20 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_19, L_20, /*hidden argument*/NULL);
		foundation_stack_tF7696B65F2806C093FB52E859D52FD8414A73474 * L_22;
		L_22 = Component_GetComponent_Tisfoundation_stack_tF7696B65F2806C093FB52E859D52FD8414A73474_m2237D0B4BAE4635E1B82CA1F0D68786E00408376(L_21, /*hidden argument*/Component_GetComponent_Tisfoundation_stack_tF7696B65F2806C093FB52E859D52FD8414A73474_m2237D0B4BAE4635E1B82CA1F0D68786E00408376_RuntimeMethod_var);
		int32_t L_23;
		L_23 = foundation_stack_getSize_mA97E5781B73C0C647E6D489EDDC06CA7B3655217(L_22, /*hidden argument*/NULL);
		if ((((int32_t)L_23) == ((int32_t)((int32_t)13))))
		{
			goto IL_00d5;
		}
	}
	{
		// b = false;
		V_0 = (bool)0;
	}

IL_00d5:
	{
		// for (int i = 0; i < 4; i++)
		int32_t L_24 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_00d9:
	{
		// for (int i = 0; i < 4; i++)
		int32_t L_25 = V_1;
		if ((((int32_t)L_25) < ((int32_t)4)))
		{
			goto IL_00b5;
		}
	}

IL_00dd:
	{
		// if (b && !winner.activeSelf && !loser.activeSelf)
		bool L_26 = V_0;
		if (!L_26)
		{
			goto IL_01a1;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = __this->get_winner_7();
		bool L_28;
		L_28 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_27, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_01a1;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = __this->get_loser_10();
		bool L_30;
		L_30 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_29, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_01a1;
		}
	}
	{
		// switch (SceneManager.GetActiveScene().name)
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_31;
		L_31 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_3 = L_31;
		String_t* L_32;
		L_32 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_3), /*hidden argument*/NULL);
		V_2 = L_32;
		String_t* L_33 = V_2;
		if (!L_33)
		{
			goto IL_01a1;
		}
	}
	{
		String_t* L_34 = V_2;
		bool L_35;
		L_35 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_34, _stringLiteralBCAEDA72F17D9EA7A04BBA53EA9DCA508AF3D24A, /*hidden argument*/NULL);
		if (L_35)
		{
			goto IL_0165;
		}
	}
	{
		String_t* L_36 = V_2;
		bool L_37;
		L_37 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_36, _stringLiteral0D6D57BEEEC9D9AD4DEBC273D6606CC0D74DC2D5, /*hidden argument*/NULL);
		if (L_37)
		{
			goto IL_0165;
		}
	}
	{
		String_t* L_38 = V_2;
		bool L_39;
		L_39 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_38, _stringLiteral743EDCAC6A947FFD1935E497F5077BF2575811AC, /*hidden argument*/NULL);
		if (L_39)
		{
			goto IL_016c;
		}
	}
	{
		String_t* L_40 = V_2;
		bool L_41;
		L_41 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_40, _stringLiteral947610918E815EA32DDFB8A4CD7A91DD72C33DE7, /*hidden argument*/NULL);
		if (L_41)
		{
			goto IL_0187;
		}
	}
	{
		String_t* L_42 = V_2;
		bool L_43;
		L_43 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_42, _stringLiteralD27FB8C857B99AB7846237A8679B6CF0E1DEAA03, /*hidden argument*/NULL);
		if (L_43)
		{
			goto IL_01a1;
		}
	}
	{
		String_t* L_44 = V_2;
		bool L_45;
		L_45 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_44, _stringLiteral7DA1760BD800AD437B2EBD92CA3FC1C9F5467B58, /*hidden argument*/NULL);
		return;
	}

IL_0165:
	{
		// winSequence();
		GameManager_winSequence_m732FDD6907C2312438EE0A57E905376A18C45DF6(__this, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_016c:
	{
		// if (time <= 300)
		int32_t L_46 = __this->get_time_18();
		if ((((int32_t)L_46) > ((int32_t)((int32_t)300))))
		{
			goto IL_0180;
		}
	}
	{
		// winSequence();
		GameManager_winSequence_m732FDD6907C2312438EE0A57E905376A18C45DF6(__this, /*hidden argument*/NULL);
		return;
	}

IL_0180:
	{
		// loseSequence();
		GameManager_loseSequence_mA6D815B40BDA7780D2E1B0F995A2C5BE58D306CE(__this, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0187:
	{
		// if (score >= 2000)
		int32_t L_47 = __this->get_score_19();
		if ((((int32_t)L_47) < ((int32_t)((int32_t)2000))))
		{
			goto IL_019b;
		}
	}
	{
		// winSequence();
		GameManager_winSequence_m732FDD6907C2312438EE0A57E905376A18C45DF6(__this, /*hidden argument*/NULL);
		return;
	}

IL_019b:
	{
		// loseSequence();
		GameManager_loseSequence_mA6D815B40BDA7780D2E1B0F995A2C5BE58D306CE(__this, /*hidden argument*/NULL);
	}

IL_01a1:
	{
		// }
		return;
	}
}
// System.Void GameManager::nextLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_nextLevel_m137B41D8C3C299E1A2AED736B1CA5DF05C944E55 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D6D57BEEEC9D9AD4DEBC273D6606CC0D74DC2D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral743EDCAC6A947FFD1935E497F5077BF2575811AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DA1760BD800AD437B2EBD92CA3FC1C9F5467B58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral947610918E815EA32DDFB8A4CD7A91DD72C33DE7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD27FB8C857B99AB7846237A8679B6CF0E1DEAA03);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// switch(SceneManager.GetActiveScene().name)
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_1 = L_0;
		String_t* L_1;
		L_1 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_3, _stringLiteral0D6D57BEEEC9D9AD4DEBC273D6606CC0D74DC2D5, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_5 = V_0;
		bool L_6;
		L_6 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_5, _stringLiteral743EDCAC6A947FFD1935E497F5077BF2575811AC, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0051;
		}
	}
	{
		String_t* L_7 = V_0;
		bool L_8;
		L_8 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_7, _stringLiteral947610918E815EA32DDFB8A4CD7A91DD72C33DE7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_005c;
		}
	}
	{
		String_t* L_9 = V_0;
		bool L_10;
		L_10 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_9, _stringLiteralD27FB8C857B99AB7846237A8679B6CF0E1DEAA03, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0067;
		}
	}
	{
		return;
	}

IL_0046:
	{
		// SceneManager.LoadScene("level2");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral743EDCAC6A947FFD1935E497F5077BF2575811AC, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0051:
	{
		// SceneManager.LoadScene("level3");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral947610918E815EA32DDFB8A4CD7A91DD72C33DE7, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_005c:
	{
		// SceneManager.LoadScene("level4");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralD27FB8C857B99AB7846237A8679B6CF0E1DEAA03, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0067:
	{
		// SceneManager.LoadScene("level5");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral7DA1760BD800AD437B2EBD92CA3FC1C9F5467B58, /*hidden argument*/NULL);
	}

IL_0071:
	{
		// }
		return;
	}
}
// System.Void GameManager::loseSequence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_loseSequence_mA6D815B40BDA7780D2E1B0F995A2C5BE58D306CE (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// loser.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_loser_10();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// btns.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_btns_8();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// timeTxt.gameObject.SetActive(false);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_timeTxt_13();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_2, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// scoreTxt.gameObject.SetActive(false);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_scoreTxt_12();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)0, /*hidden argument*/NULL);
		// finalTime = time;
		int32_t L_6 = __this->get_time_18();
		__this->set_finalTime_20(L_6);
		// score += (int)700000 / finalTime;
		int32_t L_7 = __this->get_score_19();
		int32_t L_8 = __this->get_finalTime_20();
		__this->set_score_19(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)((int32_t)((int32_t)((int32_t)700000)/(int32_t)L_8)))));
		// }
		return;
	}
}
// System.Void GameManager::winSequence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_winSequence_m732FDD6907C2312438EE0A57E905376A18C45DF6 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0089558FB231EAA964E53858BC9D84729EE114DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4BF7455473014D7ED03B9A85EC88FAD6731F181);
		s_Il2CppMethodInitialized = true;
	}
	{
		// winner.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_winner_7();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// btns.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_btns_8();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// timeTxt.gameObject.SetActive(false);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_timeTxt_13();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_2, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// scoreTxt.gameObject.SetActive(false);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_scoreTxt_12();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)0, /*hidden argument*/NULL);
		// finalTime = time;
		int32_t L_6 = __this->get_time_18();
		__this->set_finalTime_20(L_6);
		// score += (int)700000 / finalTime;
		int32_t L_7 = __this->get_score_19();
		int32_t L_8 = __this->get_finalTime_20();
		__this->set_score_19(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)((int32_t)((int32_t)((int32_t)700000)/(int32_t)L_8)))));
		// winner.transform.GetChild(0).gameObject.GetComponent<Text>().text = "\t You've won \nFinal Score: " + score.ToString() + "\n Final Time: " + finalTime.ToString();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_winner_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_10, 0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_11, /*hidden argument*/NULL);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_13;
		L_13 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_12, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		int32_t* L_14 = __this->get_address_of_score_19();
		String_t* L_15;
		L_15 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_14, /*hidden argument*/NULL);
		int32_t* L_16 = __this->get_address_of_finalTime_20();
		String_t* L_17;
		L_17 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_16, /*hidden argument*/NULL);
		String_t* L_18;
		L_18 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteralD4BF7455473014D7ED03B9A85EC88FAD6731F181, L_15, _stringLiteral0089558FB231EAA964E53858BC9D84729EE114DF, L_17, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, L_18);
		// }
		return;
	}
}
// Card GameManager::getTempCard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * GameManager_getTempCard_mDA6C9D5098A212DF1D7E981558F973F642000BA5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return tempCard;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_tempCard_11();
		return L_0;
	}
}
// System.Collections.Generic.List`1<Card> GameManager::getTempCards()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * GameManager_getTempCards_m2F655FF3EEA60ECE88D2B7EB848FA8B323EEE58F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return tempCards;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_tempCards_14();
		return L_0;
	}
}
// System.Boolean GameManager::isTempCardSet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameManager_isTempCardSet_m6D086AD56B7FA576B87CACEBD8477896C56901EE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return cardSet;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		bool L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_cardSet_15();
		return L_0;
	}
}
// System.Boolean GameManager::areTempCardsSet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameManager_areTempCardsSet_m75ADFBED6CEBA1AFDF5009744DC6F59D4C74AC83 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return tempCards.Count > 0;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_tempCards_14();
		int32_t L_1;
		L_1 = List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_inline(L_0, /*hidden argument*/List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_RuntimeMethod_var);
		return (bool)((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
	}
}
// System.Void GameManager::setTempCard(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_setTempCard_mE5D72141E6DB6EB6F1FE0F95578F3E3C65868664 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___otherCard0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66BE77405B0965E9F37054BDCBAC0E079EF5B734);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Temp card set ");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral66BE77405B0965E9F37054BDCBAC0E079EF5B734, /*hidden argument*/NULL);
		// removeTempCards();
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_removeTempCards_mD09C29492548CAE8BC5005AD4EDBFC1573BBA40C(/*hidden argument*/NULL);
		// tempCard = otherCard.GetComponent<Card>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___otherCard0;
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_1;
		L_1 = GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9(L_0, /*hidden argument*/GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9_RuntimeMethod_var);
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_tempCard_11(L_1);
		// cardSet = true;
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_cardSet_15((bool)1);
		// }
		return;
	}
}
// System.Void GameManager::setTempCards(System.Collections.Generic.List`1<Card>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_setTempCards_m41CDEF65D38E19919A8A614471D2BC66A1004632 (List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * ___nCards0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m88A7E5FCDCC9023AD65A41F4BB3A5A136ABF9B77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// removeTempCards();
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_removeTempCards_mD09C29492548CAE8BC5005AD4EDBFC1573BBA40C(/*hidden argument*/NULL);
		// for (int i = 0; i < nCards.Count; i++)
		V_0 = 0;
		goto IL_001e;
	}

IL_0009:
	{
		// tempCards.Add(nCards.ElementAt(i));
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_tempCards_14();
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_1 = ___nCards0;
		int32_t L_2 = V_0;
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_3;
		L_3 = Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69(L_1, L_2, /*hidden argument*/Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69_RuntimeMethod_var);
		List_1_Add_m88A7E5FCDCC9023AD65A41F4BB3A5A136ABF9B77(L_0, L_3, /*hidden argument*/List_1_Add_m88A7E5FCDCC9023AD65A41F4BB3A5A136ABF9B77_RuntimeMethod_var);
		// for (int i = 0; i < nCards.Count; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_001e:
	{
		// for (int i = 0; i < nCards.Count; i++)
		int32_t L_5 = V_0;
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_6 = ___nCards0;
		int32_t L_7;
		L_7 = List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_inline(L_6, /*hidden argument*/List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_RuntimeMethod_var);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GameManager::moveTempCards(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_moveTempCards_m2A5E6618A97E2216ED2B42034EB16CC5E3E8BF18 (int32_t ___numCards0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_Tiscolumn_tC27722C067C60EB3159C904F72D98C84D24D178F_mEDF47F8FE8EAFDB77E0A5B06BDC5BACED6552B0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tempCards.ElementAt(0).transform.parent.GetComponent<column>().removeTopCards(numCards);
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_tempCards_14();
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_1;
		L_1 = Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69(L_0, 0, /*hidden argument*/Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_1, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_2, /*hidden argument*/NULL);
		column_tC27722C067C60EB3159C904F72D98C84D24D178F * L_4;
		L_4 = Component_GetComponent_Tiscolumn_tC27722C067C60EB3159C904F72D98C84D24D178F_mEDF47F8FE8EAFDB77E0A5B06BDC5BACED6552B0C(L_3, /*hidden argument*/Component_GetComponent_Tiscolumn_tC27722C067C60EB3159C904F72D98C84D24D178F_mEDF47F8FE8EAFDB77E0A5B06BDC5BACED6552B0C_RuntimeMethod_var);
		int32_t L_5 = ___numCards0;
		column_removeTopCards_m673C8B1B2432F54C0968C471F3B0BBE7E9379D55(L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::moveTempCard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_moveTempCard_mDAD7D2C976839212869EC9650C19E4AE20043C91 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_Tiscolumn_tC27722C067C60EB3159C904F72D98C84D24D178F_mEDF47F8FE8EAFDB77E0A5B06BDC5BACED6552B0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDeck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520_m2DA78CAA5FF98B767257748EB92DDB68A16C0F52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0AFD264A712183E84BF9A1E7EAA8F754291A4D08);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5E21817FB7D5AF92C110AC50752865641AB478A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5EFE76FBE0C730DDF599FCFE531602021BC9FDE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("move temp card ");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral0AFD264A712183E84BF9A1E7EAA8F754291A4D08, /*hidden argument*/NULL);
		// if(deck.GetComponent<Deck>().getNumDrewCards() > 0 && deck.GetComponent<Deck>().getTopDrewCard().equalsCard(tempCard))
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_deck_4();
		Deck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520 * L_1;
		L_1 = GameObject_GetComponent_TisDeck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520_m2DA78CAA5FF98B767257748EB92DDB68A16C0F52(L_0, /*hidden argument*/GameObject_GetComponent_TisDeck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520_m2DA78CAA5FF98B767257748EB92DDB68A16C0F52_RuntimeMethod_var);
		int32_t L_2;
		L_2 = Deck_getNumDrewCards_mD028B9A71C4F445D5BACE77CA45DBD8DC349BDD0(L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0052;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_deck_4();
		Deck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520 * L_4;
		L_4 = GameObject_GetComponent_TisDeck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520_m2DA78CAA5FF98B767257748EB92DDB68A16C0F52(L_3, /*hidden argument*/GameObject_GetComponent_TisDeck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520_m2DA78CAA5FF98B767257748EB92DDB68A16C0F52_RuntimeMethod_var);
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_5;
		L_5 = Deck_getTopDrewCard_m30C5EF6229CCD3C1689A74833C6ED94CAA26675E(L_4, /*hidden argument*/NULL);
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_6 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_tempCard_11();
		bool L_7;
		L_7 = Card_equalsCard_m625B5158BDCCA00C028E7A2844F5D45F45B7CA26(L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0052;
		}
	}
	{
		// Debug.Log("Card is a from deck");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralC5E21817FB7D5AF92C110AC50752865641AB478A, /*hidden argument*/NULL);
		// deck.GetComponent<Deck>().removeTopDrewCard();
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_deck_4();
		Deck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520 * L_9;
		L_9 = GameObject_GetComponent_TisDeck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520_m2DA78CAA5FF98B767257748EB92DDB68A16C0F52(L_8, /*hidden argument*/GameObject_GetComponent_TisDeck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520_m2DA78CAA5FF98B767257748EB92DDB68A16C0F52_RuntimeMethod_var);
		Deck_removeTopDrewCard_m37CDEB589EBEFA709259546240613A7658C99A83(L_9, /*hidden argument*/NULL);
		// }
		goto IL_00bd;
	}

IL_0052:
	{
		// else if(tempCard.transform.parent.parent == foundation)
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_10 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_tempCard_11();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_10, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_11, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_12, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_foundation_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_13, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0079;
		}
	}
	{
		// removeTempCard();
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_removeTempCard_m3D281B0606A375C0E0C2CB5AB0E56E4078BC2509(/*hidden argument*/NULL);
		// }
		goto IL_00bd;
	}

IL_0079:
	{
		// else if(tempCard.gameObject.transform.parent.GetComponent<column>())
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_16 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_tempCard_11();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_16, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_17, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_18, /*hidden argument*/NULL);
		column_tC27722C067C60EB3159C904F72D98C84D24D178F * L_20;
		L_20 = Component_GetComponent_Tiscolumn_tC27722C067C60EB3159C904F72D98C84D24D178F_mEDF47F8FE8EAFDB77E0A5B06BDC5BACED6552B0C(L_19, /*hidden argument*/Component_GetComponent_Tiscolumn_tC27722C067C60EB3159C904F72D98C84D24D178F_mEDF47F8FE8EAFDB77E0A5B06BDC5BACED6552B0C_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00bd;
		}
	}
	{
		// Debug.Log("card is from tableau");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralD5EFE76FBE0C730DDF599FCFE531602021BC9FDE, /*hidden argument*/NULL);
		// tempCard.transform.parent.GetComponent<column>().removeTopCards(1);
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_22 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_tempCard_11();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_22, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_23, /*hidden argument*/NULL);
		column_tC27722C067C60EB3159C904F72D98C84D24D178F * L_25;
		L_25 = Component_GetComponent_Tiscolumn_tC27722C067C60EB3159C904F72D98C84D24D178F_mEDF47F8FE8EAFDB77E0A5B06BDC5BACED6552B0C(L_24, /*hidden argument*/Component_GetComponent_Tiscolumn_tC27722C067C60EB3159C904F72D98C84D24D178F_mEDF47F8FE8EAFDB77E0A5B06BDC5BACED6552B0C_RuntimeMethod_var);
		column_removeTopCards_m673C8B1B2432F54C0968C471F3B0BBE7E9379D55(L_25, 1, /*hidden argument*/NULL);
	}

IL_00bd:
	{
		// removeTempCard();
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_removeTempCard_m3D281B0606A375C0E0C2CB5AB0E56E4078BC2509(/*hidden argument*/NULL);
		// removeTempCards();
		GameManager_removeTempCards_mD09C29492548CAE8BC5005AD4EDBFC1573BBA40C(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::removeTempCard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_removeTempCard_m3D281B0606A375C0E0C2CB5AB0E56E4078BC2509 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cardSet = false;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_cardSet_15((bool)0);
		// }
		return;
	}
}
// System.Void GameManager::removeTempCards()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_removeTempCards_mD09C29492548CAE8BC5005AD4EDBFC1573BBA40C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mEEF153BD8E93627967901FFE4171B80200BD02A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_TrimExcess_m75A6CB1F1742B9B6FDB55B9CB8C196516CD78CF0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tempCards.Clear();
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_tempCards_14();
		List_1_Clear_mEEF153BD8E93627967901FFE4171B80200BD02A5(L_0, /*hidden argument*/List_1_Clear_mEEF153BD8E93627967901FFE4171B80200BD02A5_RuntimeMethod_var);
		// tempCards.TrimExcess();
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_1 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_tempCards_14();
		List_1_TrimExcess_m75A6CB1F1742B9B6FDB55B9CB8C196516CD78CF0(L_1, /*hidden argument*/List_1_TrimExcess_m75A6CB1F1742B9B6FDB55B9CB8C196516CD78CF0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mE8666F6D0CA9C31E16B719F79780DC4B0245B64D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__cctor_m0872BB5B2E20B9183F004EB81D5129608114D285 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m53EB398B09E4467FD72A0D1A4B7F871F9240E060_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static List<Card> tempCards = new List<Card>();
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_0 = (List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 *)il2cpp_codegen_object_new(List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099_il2cpp_TypeInfo_var);
		List_1__ctor_m53EB398B09E4467FD72A0D1A4B7F871F9240E060(L_0, /*hidden argument*/List_1__ctor_m53EB398B09E4467FD72A0D1A4B7F871F9240E060_RuntimeMethod_var);
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_tempCards_14(L_0);
		// static bool cardSet = false;
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_cardSet_15((bool)0);
		// static int lvlsCompleted = 0;
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_lvlsCompleted_21(0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MainMenu::PlayGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_PlayGame_m96A3CE2743BCB00B665AA3AC575AE4EBD9ED40B0 (MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D6D57BEEEC9D9AD4DEBC273D6606CC0D74DC2D5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("level1");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral0D6D57BEEEC9D9AD4DEBC273D6606CC0D74DC2D5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainMenu::playClassic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_playClassic_mC12AFD927B3694D71290B3C496F1613BA77D7128 (MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCAEDA72F17D9EA7A04BBA53EA9DCA508AF3D24A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("game_free_play");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralBCAEDA72F17D9EA7A04BBA53EA9DCA508AF3D24A, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainMenu::seeDirections()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_seeDirections_m6F719B37677E03CE64E79855FA1B7482F34DA87C (MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A454F3CAE24EF2E5829E0FC224BB0A284DC3B91);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("directions");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral7A454F3CAE24EF2E5829E0FC224BB0A284DC3B91, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainMenu::backToMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_backToMenu_m9857D622A3FC756F809C3DAF7ED6E023A6DA6DC6 (MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B5ECFF84CE073C4971D637741C560F910E4D128);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("menu");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral0B5ECFF84CE073C4971D637741C560F910E4D128, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainMenu::restartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_restartGame_m24CE5A05D077F233DC7C7190F2C9CB22B2616156 (MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().name);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainMenu::QuitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_QuitGame_m9F32E266C6F6CE345067D062258362159D267030 (MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * __this, const RuntimeMethod* method)
{
	{
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu__ctor_m4D77CEC8F91682A2D9492AE815F89B178BF9717D (MainMenu_tEB11F5A993C42E93B585FBB65C9E92EC91C5707C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean column::contains(Card)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool column_contains_mAA573494E0D77467E81CC37B7B06F62BFBA687B8 (column_tC27722C067C60EB3159C904F72D98C84D24D178F * __this, Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * ___card0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// bool b = false;
		V_0 = (bool)0;
		// for (int i = 0; i < faceUp.Count - 1; i++)
		V_1 = 0;
		goto IL_0020;
	}

IL_0006:
	{
		// if (card.equalsCard(faceUp.ElementAt(i)))
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_0 = ___card0;
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_1 = __this->get_faceUp_5();
		int32_t L_2 = V_1;
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_3;
		L_3 = Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69(L_1, L_2, /*hidden argument*/Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69_RuntimeMethod_var);
		bool L_4;
		L_4 = Card_equalsCard_m625B5158BDCCA00C028E7A2844F5D45F45B7CA26(L_0, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_001c;
		}
	}
	{
		// b = true;
		V_0 = (bool)1;
	}

IL_001c:
	{
		// for (int i = 0; i < faceUp.Count - 1; i++)
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0020:
	{
		// for (int i = 0; i < faceUp.Count - 1; i++)
		int32_t L_6 = V_1;
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_7 = __this->get_faceUp_5();
		int32_t L_8;
		L_8 = List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_inline(L_7, /*hidden argument*/List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_RuntimeMethod_var);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1)))))
		{
			goto IL_0006;
		}
	}
	{
		// return b;
		bool L_9 = V_0;
		return L_9;
	}
}
// System.Void column::addCardFromDeal(Card)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void column_addCardFromDeal_m9F43B8D0BDFA540635181B13CEF2E5C97658F8E7 (column_tC27722C067C60EB3159C904F72D98C84D24D178F * __this, Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * ___card0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m88A7E5FCDCC9023AD65A41F4BB3A5A136ABF9B77_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// faceDown.Add(card);
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_0 = __this->get_faceDown_4();
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_1 = ___card0;
		List_1_Add_m88A7E5FCDCC9023AD65A41F4BB3A5A136ABF9B77(L_0, L_1, /*hidden argument*/List_1_Add_m88A7E5FCDCC9023AD65A41F4BB3A5A136ABF9B77_RuntimeMethod_var);
		// card.transform.parent = this.transform;
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_2 = ___card0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_2, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_3, L_4, /*hidden argument*/NULL);
		// if (card.FaceUp())
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_5 = ___card0;
		bool L_6;
		L_6 = Card_FaceUp_m6F01C2B839210507DA80CC64F89137CF677219F8_inline(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		// card.flip();
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_7 = ___card0;
		Card_flip_mCF7D888BEA36668261492B859FCD409BEEBADA46(L_7, /*hidden argument*/NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void column::removeTopCards()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void column_removeTopCards_m5169E4BE073B2A9E6F031F2551449109A0E25BC1 (column_tC27722C067C60EB3159C904F72D98C84D24D178F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mAB2CE8D5995397704057D492A25E8F878664C2A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// faceUp.RemoveAt(faceUp.Count - 1);
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_0 = __this->get_faceUp_5();
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_1 = __this->get_faceUp_5();
		int32_t L_2;
		L_2 = List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_inline(L_1, /*hidden argument*/List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_RuntimeMethod_var);
		List_1_RemoveAt_mAB2CE8D5995397704057D492A25E8F878664C2A2(L_0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1)), /*hidden argument*/List_1_RemoveAt_mAB2CE8D5995397704057D492A25E8F878664C2A2_RuntimeMethod_var);
		// if (faceDown.Count > 0 && faceUp.Count == 0)
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_3 = __this->get_faceDown_4();
		int32_t L_4;
		L_4 = List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_inline(L_3, /*hidden argument*/List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_RuntimeMethod_var);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_5 = __this->get_faceUp_5();
		int32_t L_6;
		L_6 = List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_inline(L_5, /*hidden argument*/List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_00cb;
		}
	}
	{
		// addCardFaceUp(faceDown.ElementAt(faceDown.Count - 1));
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_7 = __this->get_faceDown_4();
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_8 = __this->get_faceDown_4();
		int32_t L_9;
		L_9 = List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_inline(L_8, /*hidden argument*/List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_RuntimeMethod_var);
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_10;
		L_10 = Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69(L_7, ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1)), /*hidden argument*/Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69_RuntimeMethod_var);
		column_addCardFaceUp_mD10970B841E7C2E686D8DCFC5B48B6CE1A8CADA1(__this, L_10, /*hidden argument*/NULL);
		// faceDown.RemoveAt(faceDown.Count - 1);
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_11 = __this->get_faceDown_4();
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_12 = __this->get_faceDown_4();
		int32_t L_13;
		L_13 = List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_inline(L_12, /*hidden argument*/List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_RuntimeMethod_var);
		List_1_RemoveAt_mAB2CE8D5995397704057D492A25E8F878664C2A2(L_11, ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1)), /*hidden argument*/List_1_RemoveAt_mAB2CE8D5995397704057D492A25E8F878664C2A2_RuntimeMethod_var);
		// faceUp.ElementAt(0).transform.position = new Vector3(faceUp.ElementAt(0).transform.position.x, faceUp.ElementAt(0).transform.position.y, -1);
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_14 = __this->get_faceUp_5();
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_15;
		L_15 = Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69(L_14, 0, /*hidden argument*/Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_15, /*hidden argument*/NULL);
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_17 = __this->get_faceUp_5();
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_18;
		L_18 = Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69(L_17, 0, /*hidden argument*/Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_18, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_19, /*hidden argument*/NULL);
		float L_21 = L_20.get_x_2();
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_22 = __this->get_faceUp_5();
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_23;
		L_23 = Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69(L_22, 0, /*hidden argument*/Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_23, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_24, /*hidden argument*/NULL);
		float L_26 = L_25.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_27), L_21, L_26, (-1.0f), /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_16, L_27, /*hidden argument*/NULL);
		// printCards();
		column_printCards_m275604963C44F3917B82DBA0562F277F630A9729(__this, /*hidden argument*/NULL);
	}

IL_00cb:
	{
		// }
		return;
	}
}
// System.Void column::removeTopCards(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void column_removeTopCards_m673C8B1B2432F54C0968C471F3B0BBE7E9379D55 (column_tC27722C067C60EB3159C904F72D98C84D24D178F * __this, int32_t ___numCards0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mAB2CE8D5995397704057D492A25E8F878664C2A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveRange_m5EB1AD0B44D5BDB9BD503E9DCF3F00833AFC21DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(numCards <= faceUp.Count)
		int32_t L_0 = ___numCards0;
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_1 = __this->get_faceUp_5();
		int32_t L_2;
		L_2 = List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_inline(L_1, /*hidden argument*/List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_RuntimeMethod_var);
		if ((((int32_t)L_0) > ((int32_t)L_2)))
		{
			goto IL_00dd;
		}
	}
	{
		// faceUp.RemoveRange(faceUp.Count - numCards, numCards);
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_3 = __this->get_faceUp_5();
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_4 = __this->get_faceUp_5();
		int32_t L_5;
		L_5 = List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_inline(L_4, /*hidden argument*/List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_RuntimeMethod_var);
		int32_t L_6 = ___numCards0;
		int32_t L_7 = ___numCards0;
		List_1_RemoveRange_m5EB1AD0B44D5BDB9BD503E9DCF3F00833AFC21DB(L_3, ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)L_6)), L_7, /*hidden argument*/List_1_RemoveRange_m5EB1AD0B44D5BDB9BD503E9DCF3F00833AFC21DB_RuntimeMethod_var);
		// if(faceDown.Count > 0 && faceUp.Count == 0)
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_8 = __this->get_faceDown_4();
		int32_t L_9;
		L_9 = List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_inline(L_8, /*hidden argument*/List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_RuntimeMethod_var);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_00dd;
		}
	}
	{
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_10 = __this->get_faceUp_5();
		int32_t L_11;
		L_11 = List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_inline(L_10, /*hidden argument*/List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_RuntimeMethod_var);
		if (L_11)
		{
			goto IL_00dd;
		}
	}
	{
		// addCardFaceUp(faceDown.ElementAt(faceDown.Count - 1));
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_12 = __this->get_faceDown_4();
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_13 = __this->get_faceDown_4();
		int32_t L_14;
		L_14 = List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_inline(L_13, /*hidden argument*/List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_RuntimeMethod_var);
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_15;
		L_15 = Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69(L_12, ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1)), /*hidden argument*/Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69_RuntimeMethod_var);
		column_addCardFaceUp_mD10970B841E7C2E686D8DCFC5B48B6CE1A8CADA1(__this, L_15, /*hidden argument*/NULL);
		// faceDown.RemoveAt(faceDown.Count - 1);
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_16 = __this->get_faceDown_4();
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_17 = __this->get_faceDown_4();
		int32_t L_18;
		L_18 = List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_inline(L_17, /*hidden argument*/List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_RuntimeMethod_var);
		List_1_RemoveAt_mAB2CE8D5995397704057D492A25E8F878664C2A2(L_16, ((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)1)), /*hidden argument*/List_1_RemoveAt_mAB2CE8D5995397704057D492A25E8F878664C2A2_RuntimeMethod_var);
		// faceUp.ElementAt(0).transform.position = new Vector3(faceUp.ElementAt(0).transform.position.x, faceUp.ElementAt(0).transform.position.y, -1);
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_19 = __this->get_faceUp_5();
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_20;
		L_20 = Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69(L_19, 0, /*hidden argument*/Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_20, /*hidden argument*/NULL);
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_22 = __this->get_faceUp_5();
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_23;
		L_23 = Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69(L_22, 0, /*hidden argument*/Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_23, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_24, /*hidden argument*/NULL);
		float L_26 = L_25.get_x_2();
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_27 = __this->get_faceUp_5();
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_28;
		L_28 = Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69(L_27, 0, /*hidden argument*/Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_28, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_29, /*hidden argument*/NULL);
		float L_31 = L_30.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_32), L_26, L_31, (-1.0f), /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_21, L_32, /*hidden argument*/NULL);
		// printCards();
		column_printCards_m275604963C44F3917B82DBA0562F277F630A9729(__this, /*hidden argument*/NULL);
	}

IL_00dd:
	{
		// }
		return;
	}
}
// System.Void column::addCardFaceUp(Card)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void column_addCardFaceUp_mD10970B841E7C2E686D8DCFC5B48B6CE1A8CADA1 (column_tC27722C067C60EB3159C904F72D98C84D24D178F * __this, Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * ___card0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m88A7E5FCDCC9023AD65A41F4BB3A5A136ABF9B77_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gm.GetComponent<GameManager>().add5Points();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_gm_6();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_1;
		L_1 = GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0(L_0, /*hidden argument*/GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0_RuntimeMethod_var);
		GameManager_add5Points_m9C82258A2B5C21BB2F70A38C0D8FD351A76D5AC8(L_1, /*hidden argument*/NULL);
		// faceUp.Add(card);
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_2 = __this->get_faceUp_5();
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_3 = ___card0;
		List_1_Add_m88A7E5FCDCC9023AD65A41F4BB3A5A136ABF9B77(L_2, L_3, /*hidden argument*/List_1_Add_m88A7E5FCDCC9023AD65A41F4BB3A5A136ABF9B77_RuntimeMethod_var);
		// card.transform.parent = this.transform;
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_4 = ___card0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_4, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_5, L_6, /*hidden argument*/NULL);
		// if (!card.FaceUp())
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_7 = ___card0;
		bool L_8;
		L_8 = Card_FaceUp_m6F01C2B839210507DA80CC64F89137CF677219F8_inline(L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_003b;
		}
	}
	{
		// card.flip();
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_9 = ___card0;
		Card_flip_mCF7D888BEA36668261492B859FCD409BEEBADA46(L_9, /*hidden argument*/NULL);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void column::addManyCards(System.Collections.Generic.List`1<Card>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void column_addManyCards_m19A0D567C063ADFC2B3B1F4B7637E9EB8C79515B (column_tC27722C067C60EB3159C904F72D98C84D24D178F * __this, List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * ___cards0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral864E1583B8BD56F8699539A2F6E5328D9409B2D3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF3ECE548E6E2CA5C9AC3E5C6B47CB2AA6E7CAE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE9F08016CCF709F69461A29A141DA6A20FD1175);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// Debug.Log("Addding " + cards.Count.ToString() + " cards");
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_0 = ___cards0;
		int32_t L_1;
		L_1 = List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_inline(L_0, /*hidden argument*/List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_RuntimeMethod_var);
		V_0 = L_1;
		String_t* L_2;
		L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralCF3ECE548E6E2CA5C9AC3E5C6B47CB2AA6E7CAE9, L_2, _stringLiteralDE9F08016CCF709F69461A29A141DA6A20FD1175, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_3, /*hidden argument*/NULL);
		// for(int i = 0; i < cards.Count; i ++)
		V_1 = 0;
		goto IL_0051;
	}

IL_0026:
	{
		// gm.GetComponent<GameManager>().add3Points();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_gm_6();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_5;
		L_5 = GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0(L_4, /*hidden argument*/GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0_RuntimeMethod_var);
		GameManager_add3Points_mC28AE79322209EB739FD99AA7234313BCF0BADDC(L_5, /*hidden argument*/NULL);
		// addCardFaceUp(cards.ElementAt(i));
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_6 = ___cards0;
		int32_t L_7 = V_1;
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_8;
		L_8 = Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69(L_6, L_7, /*hidden argument*/Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69_RuntimeMethod_var);
		column_addCardFaceUp_mD10970B841E7C2E686D8DCFC5B48B6CE1A8CADA1(__this, L_8, /*hidden argument*/NULL);
		// Debug.Log("adding card");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral864E1583B8BD56F8699539A2F6E5328D9409B2D3, /*hidden argument*/NULL);
		// for(int i = 0; i < cards.Count; i ++)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0051:
	{
		// for(int i = 0; i < cards.Count; i ++)
		int32_t L_10 = V_1;
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_11 = ___cards0;
		int32_t L_12;
		L_12 = List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_inline(L_11, /*hidden argument*/List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_RuntimeMethod_var);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_0026;
		}
	}
	{
		// printCards();
		column_printCards_m275604963C44F3917B82DBA0562F277F630A9729(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void column::printCards()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void column_printCards_m275604963C44F3917B82DBA0562F277F630A9729 (column_tC27722C067C60EB3159C904F72D98C84D24D178F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		// float x = 0;
		V_0 = (0.0f);
		// float y = 0;
		V_1 = (0.0f);
		// float z = faceDown.Count;
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_0 = __this->get_faceDown_4();
		int32_t L_1;
		L_1 = List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_inline(L_0, /*hidden argument*/List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_RuntimeMethod_var);
		V_2 = ((float)((float)L_1));
		// for (int i = 0; i < faceDown.Count; i++)
		V_3 = 0;
		goto IL_0074;
	}

IL_001d:
	{
		// faceDown.ElementAt(i).transform.localPosition = new Vector3(x, y - (.25f * i), z);
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_2 = __this->get_faceDown_4();
		int32_t L_3 = V_3;
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_4;
		L_4 = Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69(L_2, L_3, /*hidden argument*/Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_4, /*hidden argument*/NULL);
		float L_6 = V_0;
		float L_7 = V_1;
		int32_t L_8 = V_3;
		float L_9 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_10), L_6, ((float)il2cpp_codegen_subtract((float)L_7, (float)((float)il2cpp_codegen_multiply((float)(0.25f), (float)((float)((float)L_8)))))), L_9, /*hidden argument*/NULL);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_5, L_10, /*hidden argument*/NULL);
		// if (faceDown.ElementAt(i).FaceUp())
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_11 = __this->get_faceDown_4();
		int32_t L_12 = V_3;
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_13;
		L_13 = Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69(L_11, L_12, /*hidden argument*/Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69_RuntimeMethod_var);
		bool L_14;
		L_14 = Card_FaceUp_m6F01C2B839210507DA80CC64F89137CF677219F8_inline(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0068;
		}
	}
	{
		// faceDown.ElementAt(i).flip();
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_15 = __this->get_faceDown_4();
		int32_t L_16 = V_3;
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_17;
		L_17 = Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69(L_15, L_16, /*hidden argument*/Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69_RuntimeMethod_var);
		Card_flip_mCF7D888BEA36668261492B859FCD409BEEBADA46(L_17, /*hidden argument*/NULL);
	}

IL_0068:
	{
		// z--;
		float L_18 = V_2;
		V_2 = ((float)il2cpp_codegen_subtract((float)L_18, (float)(1.0f)));
		// for (int i = 0; i < faceDown.Count; i++)
		int32_t L_19 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0074:
	{
		// for (int i = 0; i < faceDown.Count; i++)
		int32_t L_20 = V_3;
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_21 = __this->get_faceDown_4();
		int32_t L_22;
		L_22 = List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_inline(L_21, /*hidden argument*/List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_RuntimeMethod_var);
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_001d;
		}
	}
	{
		// for (int i = 0; i < faceUp.Count; i ++)
		V_4 = 0;
		goto IL_00f7;
	}

IL_0087:
	{
		// z--;
		float L_23 = V_2;
		V_2 = ((float)il2cpp_codegen_subtract((float)L_23, (float)(1.0f)));
		// faceUp.ElementAt(i).transform.localPosition = new Vector3(x, y - (.4f * i) - (.25f * (faceDown.Count)), z);
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_24 = __this->get_faceUp_5();
		int32_t L_25 = V_4;
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_26;
		L_26 = Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69(L_24, L_25, /*hidden argument*/Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
		L_27 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_26, /*hidden argument*/NULL);
		float L_28 = V_0;
		float L_29 = V_1;
		int32_t L_30 = V_4;
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_31 = __this->get_faceDown_4();
		int32_t L_32;
		L_32 = List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_inline(L_31, /*hidden argument*/List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_RuntimeMethod_var);
		float L_33 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		memset((&L_34), 0, sizeof(L_34));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_34), L_28, ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)L_29, (float)((float)il2cpp_codegen_multiply((float)(0.400000006f), (float)((float)((float)L_30)))))), (float)((float)il2cpp_codegen_multiply((float)(0.25f), (float)((float)((float)L_32)))))), L_33, /*hidden argument*/NULL);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_27, L_34, /*hidden argument*/NULL);
		// if (!faceUp.ElementAt(i).FaceUp())
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_35 = __this->get_faceUp_5();
		int32_t L_36 = V_4;
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_37;
		L_37 = Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69(L_35, L_36, /*hidden argument*/Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69_RuntimeMethod_var);
		bool L_38;
		L_38 = Card_FaceUp_m6F01C2B839210507DA80CC64F89137CF677219F8_inline(L_37, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_00f1;
		}
	}
	{
		// faceUp.ElementAt(i).flip();
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_39 = __this->get_faceUp_5();
		int32_t L_40 = V_4;
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_41;
		L_41 = Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69(L_39, L_40, /*hidden argument*/Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69_RuntimeMethod_var);
		Card_flip_mCF7D888BEA36668261492B859FCD409BEEBADA46(L_41, /*hidden argument*/NULL);
	}

IL_00f1:
	{
		// for (int i = 0; i < faceUp.Count; i ++)
		int32_t L_42 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
	}

IL_00f7:
	{
		// for (int i = 0; i < faceUp.Count; i ++)
		int32_t L_43 = V_4;
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_44 = __this->get_faceUp_5();
		int32_t L_45;
		L_45 = List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_inline(L_44, /*hidden argument*/List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_RuntimeMethod_var);
		if ((((int32_t)L_43) < ((int32_t)L_45)))
		{
			goto IL_0087;
		}
	}
	{
		// if (faceUp.Count > 0)
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_46 = __this->get_faceUp_5();
		int32_t L_47;
		L_47 = List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_inline(L_46, /*hidden argument*/List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_RuntimeMethod_var);
		if ((((int32_t)L_47) <= ((int32_t)0)))
		{
			goto IL_0211;
		}
	}
	{
		// Vector3 offset = new Vector3(0, 0, 0);
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_5), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// if (faceUp.Count % 2 == 0)
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_48 = __this->get_faceUp_5();
		int32_t L_49;
		L_49 = List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_inline(L_48, /*hidden argument*/List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_RuntimeMethod_var);
		if (((int32_t)((int32_t)L_49%(int32_t)2)))
		{
			goto IL_01a4;
		}
	}
	{
		// off1 = faceUp.ElementAt((int)faceUp.Count / 2).transform.localPosition.y;
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_50 = __this->get_faceUp_5();
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_51 = __this->get_faceUp_5();
		int32_t L_52;
		L_52 = List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_inline(L_51, /*hidden argument*/List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_RuntimeMethod_var);
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_53;
		L_53 = Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69(L_50, ((int32_t)((int32_t)L_52/(int32_t)2)), /*hidden argument*/Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_54;
		L_54 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_53, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55;
		L_55 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_54, /*hidden argument*/NULL);
		float L_56 = L_55.get_y_3();
		V_6 = L_56;
		// off2 = faceUp.ElementAt((int)(faceUp.Count / 2) - 1).transform.localPosition.y;
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_57 = __this->get_faceUp_5();
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_58 = __this->get_faceUp_5();
		int32_t L_59;
		L_59 = List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_inline(L_58, /*hidden argument*/List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_RuntimeMethod_var);
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_60;
		L_60 = Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69(L_57, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)L_59/(int32_t)2)), (int32_t)1)), /*hidden argument*/Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_61;
		L_61 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_60, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_62;
		L_62 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_61, /*hidden argument*/NULL);
		float L_63 = L_62.get_y_3();
		V_7 = L_63;
		// offset.y = (off1 + off2) / 2;
		float L_64 = V_6;
		float L_65 = V_7;
		(&V_5)->set_y_3(((float)((float)((float)il2cpp_codegen_add((float)L_64, (float)L_65))/(float)(2.0f))));
		// }
		goto IL_01cf;
	}

IL_01a4:
	{
		// offset = faceUp.ElementAt((int)Mathf.Floor(faceUp.Count / 2)).transform.localPosition;
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_66 = __this->get_faceUp_5();
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_67 = __this->get_faceUp_5();
		int32_t L_68;
		L_68 = List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_inline(L_67, /*hidden argument*/List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_RuntimeMethod_var);
		float L_69;
		L_69 = floorf(((float)((float)((int32_t)((int32_t)L_68/(int32_t)2)))));
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_70;
		L_70 = Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69(L_66, il2cpp_codegen_cast_double_to_int<int32_t>(L_69), /*hidden argument*/Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_71;
		L_71 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_70, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_72;
		L_72 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_71, /*hidden argument*/NULL);
		V_5 = L_72;
	}

IL_01cf:
	{
		// this.GetComponent<BoxCollider2D>().offset = offset;
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_73;
		L_73 = Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_74 = V_5;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_75;
		L_75 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_74, /*hidden argument*/NULL);
		Collider2D_set_offset_m496DDE5487C59E9E8D6B468E8918EE1EFC625E38(L_73, L_75, /*hidden argument*/NULL);
		// GetComponent<BoxCollider2D>().size  = new Vector2(1.5f, 2 + (.5f * (faceUp.Count - 1)));
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_76;
		L_76 = Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var);
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_77 = __this->get_faceUp_5();
		int32_t L_78;
		L_78 = List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_inline(L_77, /*hidden argument*/List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_79;
		memset((&L_79), 0, sizeof(L_79));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_79), (1.5f), ((float)il2cpp_codegen_add((float)(2.0f), (float)((float)il2cpp_codegen_multiply((float)(0.5f), (float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_78, (int32_t)1)))))))), /*hidden argument*/NULL);
		BoxCollider2D_set_size_m8460A38ADDD4BE82BE1F416DE3D7AFB87EBA6760(L_76, L_79, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0211:
	{
		// this.GetComponent<BoxCollider2D>().offset = Vector3.zero;
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_80;
		L_80 = Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_81;
		L_81 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_82;
		L_82 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_81, /*hidden argument*/NULL);
		Collider2D_set_offset_m496DDE5487C59E9E8D6B468E8918EE1EFC625E38(L_80, L_82, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void column::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void column_OnMouseDown_m0D83CFF087881D6D23F47C88B63BCA49650CE49C (column_tC27722C067C60EB3159C904F72D98C84D24D178F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetRange_mE238E7B6B204C9AB1D08A20CF9DBCB170907A34F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if(GameManager.areTempCardsSet())
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = GameManager_areTempCardsSet_m75ADFBED6CEBA1AFDF5009744DC6F59D4C74AC83(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_010c;
		}
	}
	{
		// if(faceUp.Count == 0)
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_1 = __this->get_faceUp_5();
		int32_t L_2;
		L_2 = List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_inline(L_1, /*hidden argument*/List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0057;
		}
	}
	{
		// if (GameManager.getTempCards().ElementAt(0).getValue() == 13)
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_3;
		L_3 = GameManager_getTempCards_m2F655FF3EEA60ECE88D2B7EB848FA8B323EEE58F_inline(/*hidden argument*/NULL);
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_4;
		L_4 = Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69(L_3, 0, /*hidden argument*/Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69_RuntimeMethod_var);
		int32_t L_5;
		L_5 = Card_getValue_mE2954C21E0A9B11A8419809AE0731C15E5DAFCA9_inline(L_4, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_0105;
		}
	}
	{
		// GameManager.moveTempCards(GameManager.getTempCards().Count);
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_6;
		L_6 = GameManager_getTempCards_m2F655FF3EEA60ECE88D2B7EB848FA8B323EEE58F_inline(/*hidden argument*/NULL);
		int32_t L_7;
		L_7 = List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_inline(L_6, /*hidden argument*/List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_RuntimeMethod_var);
		GameManager_moveTempCards_m2A5E6618A97E2216ED2B42034EB16CC5E3E8BF18(L_7, /*hidden argument*/NULL);
		// addManyCards(GameManager.getTempCards());
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_8;
		L_8 = GameManager_getTempCards_m2F655FF3EEA60ECE88D2B7EB848FA8B323EEE58F_inline(/*hidden argument*/NULL);
		column_addManyCards_m19A0D567C063ADFC2B3B1F4B7637E9EB8C79515B(__this, L_8, /*hidden argument*/NULL);
		// GameManager.removeTempCard();
		GameManager_removeTempCard_m3D281B0606A375C0E0C2CB5AB0E56E4078BC2509(/*hidden argument*/NULL);
		// GameManager.removeTempCards();
		GameManager_removeTempCards_mD09C29492548CAE8BC5005AD4EDBFC1573BBA40C(/*hidden argument*/NULL);
		// }
		goto IL_0105;
	}

IL_0057:
	{
		// int stackable = -1;
		V_0 = (-1);
		// for (int i = 0; i < GameManager.getTempCards().Count; i++)
		V_1 = 0;
		goto IL_008d;
	}

IL_005d:
	{
		// if (GameManager.getTempCards().ElementAt(i).canStackOnRun(faceUp.ElementAt(faceUp.Count - 1)))
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_9;
		L_9 = GameManager_getTempCards_m2F655FF3EEA60ECE88D2B7EB848FA8B323EEE58F_inline(/*hidden argument*/NULL);
		int32_t L_10 = V_1;
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_11;
		L_11 = Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69(L_9, L_10, /*hidden argument*/Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69_RuntimeMethod_var);
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_12 = __this->get_faceUp_5();
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_13 = __this->get_faceUp_5();
		int32_t L_14;
		L_14 = List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_inline(L_13, /*hidden argument*/List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_RuntimeMethod_var);
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_15;
		L_15 = Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69(L_12, ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1)), /*hidden argument*/Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69_RuntimeMethod_var);
		bool L_16;
		L_16 = Card_canStackOnRun_m0BA4BAE90EBCBC9B134D99378CCFEDCEA83D2E16(L_11, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0089;
		}
	}
	{
		// stackable = i;
		int32_t L_17 = V_1;
		V_0 = L_17;
	}

IL_0089:
	{
		// for (int i = 0; i < GameManager.getTempCards().Count; i++)
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_008d:
	{
		// for (int i = 0; i < GameManager.getTempCards().Count; i++)
		int32_t L_19 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_20;
		L_20 = GameManager_getTempCards_m2F655FF3EEA60ECE88D2B7EB848FA8B323EEE58F_inline(/*hidden argument*/NULL);
		int32_t L_21;
		L_21 = List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_inline(L_20, /*hidden argument*/List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_RuntimeMethod_var);
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_005d;
		}
	}
	{
		// if (stackable >= 0)
		int32_t L_22 = V_0;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_00d8;
		}
	}
	{
		// GameManager.moveTempCards(GameManager.getTempCards().Count - stackable);
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_23;
		L_23 = GameManager_getTempCards_m2F655FF3EEA60ECE88D2B7EB848FA8B323EEE58F_inline(/*hidden argument*/NULL);
		int32_t L_24;
		L_24 = List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_inline(L_23, /*hidden argument*/List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_RuntimeMethod_var);
		int32_t L_25 = V_0;
		GameManager_moveTempCards_m2A5E6618A97E2216ED2B42034EB16CC5E3E8BF18(((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)L_25)), /*hidden argument*/NULL);
		// addManyCards(GameManager.getTempCards().GetRange(stackable, GameManager.getTempCards().Count - stackable));
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_26;
		L_26 = GameManager_getTempCards_m2F655FF3EEA60ECE88D2B7EB848FA8B323EEE58F_inline(/*hidden argument*/NULL);
		int32_t L_27 = V_0;
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_28;
		L_28 = GameManager_getTempCards_m2F655FF3EEA60ECE88D2B7EB848FA8B323EEE58F_inline(/*hidden argument*/NULL);
		int32_t L_29;
		L_29 = List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_inline(L_28, /*hidden argument*/List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_RuntimeMethod_var);
		int32_t L_30 = V_0;
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_31;
		L_31 = List_1_GetRange_mE238E7B6B204C9AB1D08A20CF9DBCB170907A34F(L_26, L_27, ((int32_t)il2cpp_codegen_subtract((int32_t)L_29, (int32_t)L_30)), /*hidden argument*/List_1_GetRange_mE238E7B6B204C9AB1D08A20CF9DBCB170907A34F_RuntimeMethod_var);
		column_addManyCards_m19A0D567C063ADFC2B3B1F4B7637E9EB8C79515B(__this, L_31, /*hidden argument*/NULL);
		// GameManager.removeTempCard();
		GameManager_removeTempCard_m3D281B0606A375C0E0C2CB5AB0E56E4078BC2509(/*hidden argument*/NULL);
		// GameManager.removeTempCards();
		GameManager_removeTempCards_mD09C29492548CAE8BC5005AD4EDBFC1573BBA40C(/*hidden argument*/NULL);
		// }
		goto IL_0105;
	}

IL_00d8:
	{
		// GameManager.setTempCard(faceUp.ElementAt(faceUp.Count - 1).gameObject);
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_32 = __this->get_faceUp_5();
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_33 = __this->get_faceUp_5();
		int32_t L_34;
		L_34 = List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_inline(L_33, /*hidden argument*/List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_RuntimeMethod_var);
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_35;
		L_35 = Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69(L_32, ((int32_t)il2cpp_codegen_subtract((int32_t)L_34, (int32_t)1)), /*hidden argument*/Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_36;
		L_36 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_35, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_setTempCard_mE5D72141E6DB6EB6F1FE0F95578F3E3C65868664(L_36, /*hidden argument*/NULL);
		// GameManager.setTempCards(faceUp);
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_37 = __this->get_faceUp_5();
		GameManager_setTempCards_m41CDEF65D38E19919A8A614471D2BC66A1004632(L_37, /*hidden argument*/NULL);
	}

IL_0105:
	{
		// printCards();
		column_printCards_m275604963C44F3917B82DBA0562F277F630A9729(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_010c:
	{
		// else if (GameManager.isTempCardSet())
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = GameManager_isTempCardSet_m6D086AD56B7FA576B87CACEBD8477896C56901EE_inline(/*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_01b4;
		}
	}
	{
		// if (faceUp.Count == 0)
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_39 = __this->get_faceUp_5();
		int32_t L_40;
		L_40 = List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_inline(L_39, /*hidden argument*/List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_RuntimeMethod_var);
		if (L_40)
		{
			goto IL_014b;
		}
	}
	{
		// if (GameManager.getTempCard().getValue() == 13)
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_41;
		L_41 = GameManager_getTempCard_mDA6C9D5098A212DF1D7E981558F973F642000BA5_inline(/*hidden argument*/NULL);
		int32_t L_42;
		L_42 = Card_getValue_mE2954C21E0A9B11A8419809AE0731C15E5DAFCA9_inline(L_41, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_42) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_01ef;
		}
	}
	{
		// GameManager.moveTempCard();
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_moveTempCard_mDAD7D2C976839212869EC9650C19E4AE20043C91(/*hidden argument*/NULL);
		// addCardFaceUp(GameManager.getTempCard());
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_43;
		L_43 = GameManager_getTempCard_mDA6C9D5098A212DF1D7E981558F973F642000BA5_inline(/*hidden argument*/NULL);
		column_addCardFaceUp_mD10970B841E7C2E686D8DCFC5B48B6CE1A8CADA1(__this, L_43, /*hidden argument*/NULL);
		// printCards();
		column_printCards_m275604963C44F3917B82DBA0562F277F630A9729(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_014b:
	{
		// else if (GameManager.getTempCard().canStackOnRun(faceUp.ElementAt(faceUp.Count - 1)))
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_44;
		L_44 = GameManager_getTempCard_mDA6C9D5098A212DF1D7E981558F973F642000BA5_inline(/*hidden argument*/NULL);
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_45 = __this->get_faceUp_5();
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_46 = __this->get_faceUp_5();
		int32_t L_47;
		L_47 = List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_inline(L_46, /*hidden argument*/List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_RuntimeMethod_var);
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_48;
		L_48 = Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69(L_45, ((int32_t)il2cpp_codegen_subtract((int32_t)L_47, (int32_t)1)), /*hidden argument*/Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69_RuntimeMethod_var);
		bool L_49;
		L_49 = Card_canStackOnRun_m0BA4BAE90EBCBC9B134D99378CCFEDCEA83D2E16(L_44, L_48, /*hidden argument*/NULL);
		if (!L_49)
		{
			goto IL_0186;
		}
	}
	{
		// GameManager.moveTempCard();
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_moveTempCard_mDAD7D2C976839212869EC9650C19E4AE20043C91(/*hidden argument*/NULL);
		// addCardFaceUp(GameManager.getTempCard());
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_50;
		L_50 = GameManager_getTempCard_mDA6C9D5098A212DF1D7E981558F973F642000BA5_inline(/*hidden argument*/NULL);
		column_addCardFaceUp_mD10970B841E7C2E686D8DCFC5B48B6CE1A8CADA1(__this, L_50, /*hidden argument*/NULL);
		// printCards();
		column_printCards_m275604963C44F3917B82DBA0562F277F630A9729(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0186:
	{
		// GameManager.setTempCards(faceUp);
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_51 = __this->get_faceUp_5();
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_setTempCards_m41CDEF65D38E19919A8A614471D2BC66A1004632(L_51, /*hidden argument*/NULL);
		// GameManager.setTempCard(faceUp.ElementAt(faceUp.Count - 1).gameObject);
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_52 = __this->get_faceUp_5();
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_53 = __this->get_faceUp_5();
		int32_t L_54;
		L_54 = List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_inline(L_53, /*hidden argument*/List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_RuntimeMethod_var);
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_55;
		L_55 = Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69(L_52, ((int32_t)il2cpp_codegen_subtract((int32_t)L_54, (int32_t)1)), /*hidden argument*/Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_56;
		L_56 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_55, /*hidden argument*/NULL);
		GameManager_setTempCard_mE5D72141E6DB6EB6F1FE0F95578F3E3C65868664(L_56, /*hidden argument*/NULL);
		// }
		return;
	}

IL_01b4:
	{
		// else if(faceUp.Count > 0)
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_57 = __this->get_faceUp_5();
		int32_t L_58;
		L_58 = List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_inline(L_57, /*hidden argument*/List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_RuntimeMethod_var);
		if ((((int32_t)L_58) <= ((int32_t)0)))
		{
			goto IL_01ef;
		}
	}
	{
		// GameManager.setTempCard(faceUp.ElementAt(faceUp.Count - 1).gameObject);
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_59 = __this->get_faceUp_5();
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_60 = __this->get_faceUp_5();
		int32_t L_61;
		L_61 = List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_inline(L_60, /*hidden argument*/List_1_get_Count_m8D55611C3115BEA9DD6185786FDE7F259C772DB5_RuntimeMethod_var);
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_62;
		L_62 = Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69(L_59, ((int32_t)il2cpp_codegen_subtract((int32_t)L_61, (int32_t)1)), /*hidden argument*/Enumerable_ElementAt_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m142F4F7DE1B5524C07F0D0B3EA69653CC3CB8A69_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_63;
		L_63 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_62, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_setTempCard_mE5D72141E6DB6EB6F1FE0F95578F3E3C65868664(L_63, /*hidden argument*/NULL);
		// GameManager.setTempCards(faceUp);
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_64 = __this->get_faceUp_5();
		GameManager_setTempCards_m41CDEF65D38E19919A8A614471D2BC66A1004632(L_64, /*hidden argument*/NULL);
	}

IL_01ef:
	{
		// }
		return;
	}
}
// System.Void column::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void column__ctor_mEF2FA2948A045F17A64403FF8B5A3AC9A901420E (column_tC27722C067C60EB3159C904F72D98C84D24D178F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m53EB398B09E4467FD72A0D1A4B7F871F9240E060_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<Card> faceDown = new List<Card>();
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_0 = (List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 *)il2cpp_codegen_object_new(List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099_il2cpp_TypeInfo_var);
		List_1__ctor_m53EB398B09E4467FD72A0D1A4B7F871F9240E060(L_0, /*hidden argument*/List_1__ctor_m53EB398B09E4467FD72A0D1A4B7F871F9240E060_RuntimeMethod_var);
		__this->set_faceDown_4(L_0);
		// List<Card> faceUp = new List<Card>();
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_1 = (List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 *)il2cpp_codegen_object_new(List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099_il2cpp_TypeInfo_var);
		List_1__ctor_m53EB398B09E4467FD72A0D1A4B7F871F9240E060(L_1, /*hidden argument*/List_1__ctor_m53EB398B09E4467FD72A0D1A4B7F871F9240E060_RuntimeMethod_var);
		__this->set_faceUp_5(L_1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void drewCards::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void drewCards_Start_mB42E59265A02EA512DBF32CCE34C75752FD104B3 (drewCards_t708EC2346243631931783D1778956BFB96B2D8B4 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void drewCards::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void drewCards_OnMouseDown_m6CC0F4E64F34A0EFE4947A63F164052B345C3C23 (drewCards_t708EC2346243631931783D1778956BFB96B2D8B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDeck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520_m2DA78CAA5FF98B767257748EB92DDB68A16C0F52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * V_0 = NULL;
	{
		// if (deck.GetComponent<Deck>().getNumDrewCards() > 0)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_deck_4();
		Deck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520 * L_1;
		L_1 = GameObject_GetComponent_TisDeck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520_m2DA78CAA5FF98B767257748EB92DDB68A16C0F52(L_0, /*hidden argument*/GameObject_GetComponent_TisDeck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520_m2DA78CAA5FF98B767257748EB92DDB68A16C0F52_RuntimeMethod_var);
		int32_t L_2;
		L_2 = Deck_getNumDrewCards_mD028B9A71C4F445D5BACE77CA45DBD8DC349BDD0(L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		// Card tmp = deck.GetComponent<Deck>().getTopDrewCard();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_deck_4();
		Deck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520 * L_4;
		L_4 = GameObject_GetComponent_TisDeck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520_m2DA78CAA5FF98B767257748EB92DDB68A16C0F52(L_3, /*hidden argument*/GameObject_GetComponent_TisDeck_t7CD5F97A0038F6F72A7F55E965E5F25FE6384520_m2DA78CAA5FF98B767257748EB92DDB68A16C0F52_RuntimeMethod_var);
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_5;
		L_5 = Deck_getTopDrewCard_m30C5EF6229CCD3C1689A74833C6ED94CAA26675E(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// if (tmp)
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0037;
		}
	}
	{
		// GameManager.setTempCard(tmp.gameObject);
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_8 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_setTempCard_mE5D72141E6DB6EB6F1FE0F95578F3E3C65868664(L_9, /*hidden argument*/NULL);
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void drewCards::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void drewCards__ctor_m100E8363A8FCC195459FF5BCE65B4D22654E857E (drewCards_t708EC2346243631931783D1778956BFB96B2D8B4 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void foundation_stack::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void foundation_stack_OnMouseDown_m9AEC3844B5F2ED73C96F38261F3CB9151456BE18 (foundation_stack_tF7696B65F2806C093FB52E859D52FD8414A73474 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GameManager.isTempCardSet())
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = GameManager_isTempCardSet_m6D086AD56B7FA576B87CACEBD8477896C56901EE_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		// AddCard(GameManager.getTempCard().gameObject);
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_1;
		L_1 = GameManager_getTempCard_mDA6C9D5098A212DF1D7E981558F973F642000BA5_inline(/*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_1, /*hidden argument*/NULL);
		foundation_stack_AddCard_m10B276BABB6BA69827E338CCD92E7C5B990ABAF1(__this, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void foundation_stack::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void foundation_stack_Update_mEFF2053DB3A761AD74C6D52A07E8BCD71F993EC1 (foundation_stack_tF7696B65F2806C093FB52E859D52FD8414A73474 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Int32 foundation_stack::getSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t foundation_stack_getSize_mA97E5781B73C0C647E6D489EDDC06CA7B3655217 (foundation_stack_tF7696B65F2806C093FB52E859D52FD8414A73474 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return stack.Count;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = __this->get_stack_5();
		int32_t L_1;
		L_1 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_0, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void foundation_stack::printCards()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void foundation_stack_printCards_m8491D8B7CE5395ED7CB0037FBC7C47A9BC51226D (foundation_stack_tF7696B65F2806C093FB52E859D52FD8414A73474 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// if(stack.Count != 0)
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = __this->get_stack_5();
		int32_t L_1;
		L_1 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_0, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_00a8;
		}
	}
	{
		// Vector3 pos = this.transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// for (int i = 0; i < stack.Count - 1; i ++ )
		V_1 = 0;
		goto IL_0069;
	}

IL_0020:
	{
		// stack.ElementAt(i).transform.position = pos;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_4 = __this->get_stack_5();
		int32_t L_5 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF(L_4, L_5, /*hidden argument*/Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = V_0;
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_7, L_8, /*hidden argument*/NULL);
		// if (!stack.ElementAt(i).GetComponent<Card>().FaceUp())
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_9 = __this->get_stack_5();
		int32_t L_10 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF(L_9, L_10, /*hidden argument*/Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF_RuntimeMethod_var);
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_12;
		L_12 = GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9(L_11, /*hidden argument*/GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9_RuntimeMethod_var);
		bool L_13;
		L_13 = Card_FaceUp_m6F01C2B839210507DA80CC64F89137CF677219F8_inline(L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0065;
		}
	}
	{
		// stack.ElementAt(i).GetComponent<Card>().flip();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_14 = __this->get_stack_5();
		int32_t L_15 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF(L_14, L_15, /*hidden argument*/Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF_RuntimeMethod_var);
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_17;
		L_17 = GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9(L_16, /*hidden argument*/GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9_RuntimeMethod_var);
		Card_flip_mCF7D888BEA36668261492B859FCD409BEEBADA46(L_17, /*hidden argument*/NULL);
	}

IL_0065:
	{
		// for (int i = 0; i < stack.Count - 1; i ++ )
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0069:
	{
		// for (int i = 0; i < stack.Count - 1; i ++ )
		int32_t L_19 = V_1;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_20 = __this->get_stack_5();
		int32_t L_21;
		L_21 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_20, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)))))
		{
			goto IL_0020;
		}
	}
	{
		// pos.z = -1;
		(&V_0)->set_z_4((-1.0f));
		// stack.ElementAt(stack.Count - 1).transform.position = pos;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_22 = __this->get_stack_5();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_23 = __this->get_stack_5();
		int32_t L_24;
		L_24 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_23, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25;
		L_25 = Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF(L_22, ((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1)), /*hidden argument*/Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_25, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = V_0;
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_26, L_27, /*hidden argument*/NULL);
	}

IL_00a8:
	{
		// }
		return;
	}
}
// System.Void foundation_stack::AddCard(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void foundation_stack_AddCard_m10B276BABB6BA69827E338CCD92E7C5B990ABAF1 (foundation_stack_tF7696B65F2806C093FB52E859D52FD8414A73474 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___card0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFEF0F611D8E0D8A5B0A88BEF18F10A3E7D0343A3);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (stack.Count == 0 && card.GetComponent<Card>().getValue() == 1)
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = __this->get_stack_5();
		int32_t L_1;
		L_1 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_0, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0069;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = ___card0;
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_3;
		L_3 = GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9(L_2, /*hidden argument*/GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9_RuntimeMethod_var);
		int32_t L_4;
		L_4 = Card_getValue_mE2954C21E0A9B11A8419809AE0731C15E5DAFCA9_inline(L_3, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0069;
		}
	}
	{
		// GameManager.moveTempCard();
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_moveTempCard_mDAD7D2C976839212869EC9650C19E4AE20043C91(/*hidden argument*/NULL);
		// stack.Add(card);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_5 = __this->get_stack_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = ___card0;
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_5, L_6, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// stack.ElementAt(stack.Count - 1).transform.parent = this.transform;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_7 = __this->get_stack_5();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_8 = __this->get_stack_5();
		int32_t L_9;
		L_9 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_8, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF(L_7, ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1)), /*hidden argument*/Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_11, L_12, /*hidden argument*/NULL);
		// gm.GetComponent<GameManager>().add10Points();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_gm_6();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_14;
		L_14 = GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0(L_13, /*hidden argument*/GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0_RuntimeMethod_var);
		GameManager_add10Points_m9F357A270EBD017D57F39290414656F209E26D3D(L_14, /*hidden argument*/NULL);
		// }
		goto IL_00ea;
	}

IL_0069:
	{
		// else if (stack.Count >= 1 && card.GetComponent<Card>().canStackOnFoundation(stack.ElementAt(stack.Count - 1).GetComponent<Card>()))
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_15 = __this->get_stack_5();
		int32_t L_16;
		L_16 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_15, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		if ((((int32_t)L_16) < ((int32_t)1)))
		{
			goto IL_00ea;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = ___card0;
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_18;
		L_18 = GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9(L_17, /*hidden argument*/GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9_RuntimeMethod_var);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_19 = __this->get_stack_5();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_20 = __this->get_stack_5();
		int32_t L_21;
		L_21 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_20, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22;
		L_22 = Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF(L_19, ((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)), /*hidden argument*/Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF_RuntimeMethod_var);
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_23;
		L_23 = GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9(L_22, /*hidden argument*/GameObject_GetComponent_TisCard_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A_m67C62156CBB86BAC697A7053F8C3A0DC99FA05A9_RuntimeMethod_var);
		bool L_24;
		L_24 = Card_canStackOnFoundation_m2DCD07FAB91986F597037276B97CA578DB96C349(L_18, L_23, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00ea;
		}
	}
	{
		// stack.Add(card);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_25 = __this->get_stack_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26 = ___card0;
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_25, L_26, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// GameManager.moveTempCard();
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_moveTempCard_mDAD7D2C976839212869EC9650C19E4AE20043C91(/*hidden argument*/NULL);
		// stack.ElementAt(stack.Count - 1).transform.parent = this.transform;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_27 = __this->get_stack_5();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_28 = __this->get_stack_5();
		int32_t L_29;
		L_29 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_28, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30;
		L_30 = Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF(L_27, ((int32_t)il2cpp_codegen_subtract((int32_t)L_29, (int32_t)1)), /*hidden argument*/Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_30, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_31, L_32, /*hidden argument*/NULL);
		// gm.GetComponent<GameManager>().add10Points();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33 = __this->get_gm_6();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_34;
		L_34 = GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0(L_33, /*hidden argument*/GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0_RuntimeMethod_var);
		GameManager_add10Points_m9F357A270EBD017D57F39290414656F209E26D3D(L_34, /*hidden argument*/NULL);
	}

IL_00ea:
	{
		// if (stack.Count != 0)
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_35 = __this->get_stack_5();
		int32_t L_36;
		L_36 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_35, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		if (!L_36)
		{
			goto IL_0124;
		}
	}
	{
		// stack.ElementAt(stack.Count - 1).transform.position = this.transform.position;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_37 = __this->get_stack_5();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_38 = __this->get_stack_5();
		int32_t L_39;
		L_39 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_38, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40;
		L_40 = Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF(L_37, ((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)1)), /*hidden argument*/Enumerable_ElementAt_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m3F275EC4EBE274C768E645DB8B43FFC5FE8A96CF_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_41;
		L_41 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_40, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42;
		L_42 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
		L_43 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_42, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_41, L_43, /*hidden argument*/NULL);
	}

IL_0124:
	{
		// Debug.Log("Stack size = " + stack.Count.ToString());
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_44 = __this->get_stack_5();
		int32_t L_45;
		L_45 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_44, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		V_0 = L_45;
		String_t* L_46;
		L_46 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_47;
		L_47 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralFEF0F611D8E0D8A5B0A88BEF18F10A3E7D0343A3, L_46, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_47, /*hidden argument*/NULL);
		// printCards();
		foundation_stack_printCards_m8491D8B7CE5395ED7CB0037FBC7C47A9BC51226D(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void foundation_stack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void foundation_stack__ctor_mE7795A13999EA57E8C5E837396DAE78174285EB1 (foundation_stack_tF7696B65F2806C093FB52E859D52FD8414A73474 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<GameObject> stack = new List<GameObject>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)il2cpp_codegen_object_new(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8(L_0, /*hidden argument*/List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		__this->set_stack_5(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Card_setFSprite_mFE65AD84BD6EED6D4F30CD087935ADA7B3B78EC5_inline (Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___f0, const RuntimeMethod* method)
{
	{
		// fSprite = f;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_0 = ___f0;
		__this->set_fSprite_4(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Card_FaceUp_m6F01C2B839210507DA80CC64F89137CF677219F8_inline (Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * __this, const RuntimeMethod* method)
{
	{
		// return isFaceUp;
		bool L_0 = __this->get_isFaceUp_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		__this->set_z_4((0.0f));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * GameManager_getTempCards_m2F655FF3EEA60ECE88D2B7EB848FA8B323EEE58F_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return tempCards;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		List_1_t77853C3DC110F6F5725CB0367AC457999D9E5099 * L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_tempCards_14();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Card_getValue_mE2954C21E0A9B11A8419809AE0731C15E5DAFCA9_inline (Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * __this, const RuntimeMethod* method)
{
	{
		// return value;
		int32_t L_0 = __this->get_value_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GameManager_isTempCardSet_m6D086AD56B7FA576B87CACEBD8477896C56901EE_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return cardSet;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		bool L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_cardSet_15();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * GameManager_getTempCard_mDA6C9D5098A212DF1D7E981558F973F642000BA5_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return tempCard;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		Card_tB23FD1CFF0E901BF020E0A7ADA98E5CEF3D1B98A * L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_tempCard_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}

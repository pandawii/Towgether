#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Single>
struct Dictionary_2_t8D5BC3EE868F5A69127B67EF92B01E5681B0732E;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Queue`1<UnityEngine.GameObject>>
struct Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F;
// System.Collections.Generic.Dictionary`2<SoundManager/Sound,System.Single>
struct Dictionary_2_tA516C4BF8CC04CFE1F6BF38F3DE3D8A246BE2BC5;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.IEqualityComparer`1<SoundManager/Sound>
struct IEqualityComparer_1_t6D212D5795B4F91F87AB5D6E88B8CC4C03FC3E28;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.Queue`1<UnityEngine.GameObject>>
struct KeyCollection_t47FFDBDA052BA25EBBE7B1AAD324D29257951CF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<SoundManager/Sound,System.Single>
struct KeyCollection_tFEF3EC0EBB32B7A5C9F362E3773B6E687A964B44;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<Tile>
struct List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8;
// System.Collections.Generic.List`1<TilePooler/Pool>
struct List_1_t60B1C7F49F58BA19849B441B785A5925F5D4F0DF;
// System.Collections.Generic.List`1<levelgen/Platform>
struct List_1_t1962AE351C867A2D55EBF2EF233FE6F05086E474;
// System.Collections.Generic.Queue`1<UnityEngine.GameObject>
struct Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.Queue`1<UnityEngine.GameObject>>
struct ValueCollection_t4258B35F0EBB3B6F0E2F80D4F993788844F3D518;
// System.Collections.Generic.Dictionary`2/ValueCollection<SoundManager/Sound,System.Single>
struct ValueCollection_tB9698D8CADD9E3990C0248246530EFC26E0FB2CB;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Collections.Generic.Queue`1<UnityEngine.GameObject>>[]
struct EntryU5BU5D_tBB92B9C5EE0355A3EAD3872FDE7F096B860FDA7F;
// System.Collections.Generic.Dictionary`2/Entry<SoundManager/Sound,System.Single>[]
struct EntryU5BU5D_t7A9FAF2110ED1F878731F9F7DFDFE007D5ACAECF;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77;
// Tile[]
struct TileU5BU5D_tE21E3527F7A406A2700E4462B254F023CB4EA707;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// GameAssets/SoundAudioCLip[]
struct SoundAudioCLipU5BU5D_tC99FE4DDA1016FE55480E06D2270114003FFBE52;
// TilePooler/Pool[]
struct PoolU5BU5D_tD0FF7FA93CD28522E6F09D9D81759782649B84BE;
// levelgen/Platform[]
struct PlatformU5BU5D_t6AC4B25037CA9E287733A91E3F613DBE217C4E70;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// Arrow
struct Arrow_t98BA45BD73ADFAD1B38830B6D6D48588A96AC86A;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// BoostBar
struct BoostBar_t248D99B7988BF361E572025F1E7D66B05DBACDA0;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// Destryo
struct Destryo_tA5642D17DCE618B8501DEC93EB8C63E9F9B31455;
// DissolvingPlatform
struct DissolvingPlatform_t80328620960009E895363AFDF8DABD99D1147D7E;
// Endless2D
struct Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981;
// FillValueNumber
struct FillValueNumber_t4A061AFCFC2F33F366B5E6EDD6EBA44A5D83BFC9;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// GameAssets
struct GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.Gradient
struct Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// HighScore
struct HighScore_tE521702BF43BC092726A498168F5E00DAC878753;
// IPooledObject
struct IPooledObject_tE7663415C24E026BDC5E1F701CFA64DF8AF572E8;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// Jump
struct Jump_t84C2E1E5FF2AB21C80DDF1A2B25D5D42B47A4F2A;
// JumpPad
struct JumpPad_t68137B46D24D8602AEC84E66F261E70F68F545A4;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// OutlinePlatform
struct OutlinePlatform_t9B3367CC5A544A93C6D78ADE7A049AC4AB381DF9;
// UnityEngine.ParticleSystem
struct ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E;
// PinkPlatform
struct PinkPlatform_t1394AF1AECF177B9BF5EF553FD30B1BE9D09FE6B;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// RedPlatform
struct RedPlatform_t154514DE85EC8B16C56E5DCB223CD625ABDF1F86;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// Score
struct Score_tE07CBD9780DFC212BE43719819F512E8861103C7;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// Singleton
struct Singleton_t85C95C878D42548878AD1318351EC6E51A48162F;
// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF;
// StartManager
struct StartManager_t63287E6205CC25B9ED02CDE8D1FAFEDF2DD907A9;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// Tile
struct Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2;
// TilePooler
struct TilePooler_tDED87420D8B326269BDE0F491CDCC4A240A5C518;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// Trap
struct Trap_t403C39666EA113E958CF61C5E83353C6041A3D0B;
// TryHarder
struct TryHarder_t4F3E8B956FBC349BDA6DAF1D7B6D03C3211721AF;
// UIManager
struct UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// camera
struct camera_t35DE2139B547B353CFA724AB7439D7A92165C646;
// levelgen
struct levelgen_t61ACD1EBFCB7594B9AE7934E46DF321EEB517845;
// player
struct player_tA80E0022C279849EE513BB6A4017ED62943ADC71;
// woodenPlatForm
struct woodenPlatForm_t9681D2559C55471E6D631C1D7D7A901395BEF628;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// GameAssets/SoundAudioCLip
struct SoundAudioCLip_tAB30A76E0CD7C69194C05CDBF49214309CDDF88F;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780;
// StartManager/DissolveItem
struct DissolveItem_tF0D838FD17619E13535458DE54D8F2EA5AC0264E;
// TilePooler/Pool
struct Pool_t848F75427F6865029793B7C163370BDC346C6D8C;
// levelgen/Platform
struct Platform_tE9E6AC72071AF6BACAF02519C6C0AED83456CB3D;

IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA516C4BF8CC04CFE1F6BF38F3DE3D8A246BE2BC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DissolveItem_tF0D838FD17619E13535458DE54D8F2EA5AC0264E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPooledObject_tE7663415C24E026BDC5E1F701CFA64DF8AF572E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1962AE351C867A2D55EBF2EF233FE6F05086E474_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Platform_tE9E6AC72071AF6BACAF02519C6C0AED83456CB3D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pool_t848F75427F6865029793B7C163370BDC346C6D8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Singleton_t85C95C878D42548878AD1318351EC6E51A48162F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Sound_tA0535EE7716E13A5443BE415CDC0B4090DCB72F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TilePooler_tDED87420D8B326269BDE0F491CDCC4A240A5C518_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral043D4951829A8C30075641EC8EF266F007FB1E5A;
IL2CPP_EXTERN_C String_t* _stringLiteral169CFE7A5DDAAD5DF9058C20416103A4111BC401;
IL2CPP_EXTERN_C String_t* _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6;
IL2CPP_EXTERN_C String_t* _stringLiteral201B4CC12B23B577262E3440C3DACB9F16A5500B;
IL2CPP_EXTERN_C String_t* _stringLiteral240BE9B5E609F0DD8657150691504C4DE92A0925;
IL2CPP_EXTERN_C String_t* _stringLiteral2E0CD92D8AA75E349688E376EED12EC22E2047A1;
IL2CPP_EXTERN_C String_t* _stringLiteral3618AD4590B5AEEAF5022BE929B8BA84D836466C;
IL2CPP_EXTERN_C String_t* _stringLiteral3A7476E2F54EFE64D5B840CD32F4EB1A2482F7C1;
IL2CPP_EXTERN_C String_t* _stringLiteral3AEC9F6AA595DACEC6A33301B760F4E3F9EEA975;
IL2CPP_EXTERN_C String_t* _stringLiteral3CB4F1E278673C46B76919E625B53B869ABFBB25;
IL2CPP_EXTERN_C String_t* _stringLiteral40F5431A5203B1B661E92C45EF446F7D326E2C50;
IL2CPP_EXTERN_C String_t* _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865;
IL2CPP_EXTERN_C String_t* _stringLiteral461E3E44AE80BC4E861DB32ED3691F004543C3A2;
IL2CPP_EXTERN_C String_t* _stringLiteral482076BAC3F3FADED12D16D24E45F24AF817C27B;
IL2CPP_EXTERN_C String_t* _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C;
IL2CPP_EXTERN_C String_t* _stringLiteral54EB7BE360CE07E04E290740C9750E9F3C5D606E;
IL2CPP_EXTERN_C String_t* _stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89;
IL2CPP_EXTERN_C String_t* _stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32;
IL2CPP_EXTERN_C String_t* _stringLiteral64E1DFF6A99A2080E32F5F545CB94F03448289D3;
IL2CPP_EXTERN_C String_t* _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral726C16D64FB2C371710A236299507CB4089D1426;
IL2CPP_EXTERN_C String_t* _stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B;
IL2CPP_EXTERN_C String_t* _stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A;
IL2CPP_EXTERN_C String_t* _stringLiteral8F76B1FC9730393F7922EF641199DABB6F88C9EE;
IL2CPP_EXTERN_C String_t* _stringLiteralA12DF7E063F9EDD6CB3B99E1A6200411CA060DEE;
IL2CPP_EXTERN_C String_t* _stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralCDC8479299DA5AF310F6552C9DFB4C2CB6A0FA4C;
IL2CPP_EXTERN_C String_t* _stringLiteralD8431B5D5BBDD13458B95AC3252777089DFF7F0A;
IL2CPP_EXTERN_C String_t* _stringLiteralDCB5978FAAD5566C1F56CD9C4A85EB24D32482BB;
IL2CPP_EXTERN_C String_t* _stringLiteralF5BE77FACA9FE78BB042EAA19D02D318560BA5DD;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTilePooler_tDED87420D8B326269BDE0F491CDCC4A240A5C518_m064119F6F1DF84E6F7FACD4C5783034079B830BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m0C5D895ACF50E41367BBB10271D5F9F98A83C8C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mAADFBF4527E50115B977ACC9E4694BEE070DF705_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mD44130AAE05C4770AEE0647D364D22BF835707A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m42BDA71D46CB3D62A8EF6483F70B93D0A33243E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m9855F31661557D2E7ACD8FBBFB501CF407440712_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m1B6834942CDBB0BDC039EE9A393028BABFE38D31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m250063473D2FECA30827552033CEF780DBE2B3DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m3A1F77DF9178C4D3B820AFBDE48026A2B6B15FB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m19574318147DEC45769F276ECD6CB1EE3C8DF28E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m7C78A270AF8D3C688AB49342CBEF99DFA0004E9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m675CF2AFA05DEB00916DBCA5A57088D3BC288843_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mB6A53870EA7BF331E44BA58DB74970BAD3E3A3E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m88B0415CE5394B8672BCB08D59C8625FD3BD586B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mC13B60E1D796F31B52E6108D085EBB5014082324_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mAA495A9AAD3FB4D260B3E2B6DDBAFEC18DC49C3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisIPooledObject_tE7663415C24E026BDC5E1F701CFA64DF8AF572E8_m40ED4A72A4B9B85180FB52CACE4E1A56684A1F39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_Tislevelgen_t61ACD1EBFCB7594B9AE7934E46DF321EEB517845_m7C45F45119C9A2E89FEED636BF53F9A62D5B602C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_Tisplayer_tA80E0022C279849EE513BB6A4017ED62943ADC71_mE90B93F4F17B66FE4BD5D7D41AB060243E5E2AD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m708216AF149088C3FBB2EDF789ACA5A4346A994E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m8B4FD71859B61A4F5242DB3A5860268CEE176BB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF17950E2203154D00E6509D508BBB8E2EB642F3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m4C0543F5BF9ED1002F54BADBD15E5F92FFD4089B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mD9E1BADE21D5D1FD44458F9E0DF52E87649411A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m6AFEC997356969D51F00638902D831A0E6DA322F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mA50F7BE5265E4B1700A658B4F92ED79062732083_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m31DF99DCE36CBA9DFC542F91879C9D2BB2E98557_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m691E17B1E746E8C0EDECE883EFCEC2A77344EB87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m3C4A3F5F867B2AC8C03C59E1663BDD30D896EEBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m24B3F08332B1C52FD508480451080C0B886C18FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m590D55CDD380D61B8E49847623BD97E6EA9D9762_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mC13E8DA0CA1DFD88310E2E066C5479E3994BAA30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_mAB7D03D5E1E8D5574DB751A04534E90B970BE0CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mBF3F677E8FA5E61DFEF3209F9DDA278775BDD513_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m989302E3AE90AD39E5B892C79B3A6365966D1852_RuntimeMethod_var;
struct ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 ;

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77;
struct SoundAudioCLipU5BU5D_tC99FE4DDA1016FE55480E06D2270114003FFBE52;

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


// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Queue`1<UnityEngine.GameObject>>
struct Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tBB92B9C5EE0355A3EAD3872FDE7F096B860FDA7F* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t47FFDBDA052BA25EBBE7B1AAD324D29257951CF7 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t4258B35F0EBB3B6F0E2F80D4F993788844F3D518 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F, ___entries_1)); }
	inline EntryU5BU5D_tBB92B9C5EE0355A3EAD3872FDE7F096B860FDA7F* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tBB92B9C5EE0355A3EAD3872FDE7F096B860FDA7F** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tBB92B9C5EE0355A3EAD3872FDE7F096B860FDA7F* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F, ___keys_7)); }
	inline KeyCollection_t47FFDBDA052BA25EBBE7B1AAD324D29257951CF7 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t47FFDBDA052BA25EBBE7B1AAD324D29257951CF7 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t47FFDBDA052BA25EBBE7B1AAD324D29257951CF7 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F, ___values_8)); }
	inline ValueCollection_t4258B35F0EBB3B6F0E2F80D4F993788844F3D518 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t4258B35F0EBB3B6F0E2F80D4F993788844F3D518 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t4258B35F0EBB3B6F0E2F80D4F993788844F3D518 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<SoundManager/Sound,System.Single>
struct Dictionary_2_tA516C4BF8CC04CFE1F6BF38F3DE3D8A246BE2BC5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t7A9FAF2110ED1F878731F9F7DFDFE007D5ACAECF* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tFEF3EC0EBB32B7A5C9F362E3773B6E687A964B44 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB9698D8CADD9E3990C0248246530EFC26E0FB2CB * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tA516C4BF8CC04CFE1F6BF38F3DE3D8A246BE2BC5, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tA516C4BF8CC04CFE1F6BF38F3DE3D8A246BE2BC5, ___entries_1)); }
	inline EntryU5BU5D_t7A9FAF2110ED1F878731F9F7DFDFE007D5ACAECF* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t7A9FAF2110ED1F878731F9F7DFDFE007D5ACAECF** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t7A9FAF2110ED1F878731F9F7DFDFE007D5ACAECF* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tA516C4BF8CC04CFE1F6BF38F3DE3D8A246BE2BC5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tA516C4BF8CC04CFE1F6BF38F3DE3D8A246BE2BC5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tA516C4BF8CC04CFE1F6BF38F3DE3D8A246BE2BC5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tA516C4BF8CC04CFE1F6BF38F3DE3D8A246BE2BC5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tA516C4BF8CC04CFE1F6BF38F3DE3D8A246BE2BC5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tA516C4BF8CC04CFE1F6BF38F3DE3D8A246BE2BC5, ___keys_7)); }
	inline KeyCollection_tFEF3EC0EBB32B7A5C9F362E3773B6E687A964B44 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tFEF3EC0EBB32B7A5C9F362E3773B6E687A964B44 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tFEF3EC0EBB32B7A5C9F362E3773B6E687A964B44 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tA516C4BF8CC04CFE1F6BF38F3DE3D8A246BE2BC5, ___values_8)); }
	inline ValueCollection_tB9698D8CADD9E3990C0248246530EFC26E0FB2CB * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB9698D8CADD9E3990C0248246530EFC26E0FB2CB ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB9698D8CADD9E3990C0248246530EFC26E0FB2CB * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tA516C4BF8CC04CFE1F6BF38F3DE3D8A246BE2BC5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
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


// System.Collections.Generic.List`1<Tile>
struct List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TileU5BU5D_tE21E3527F7A406A2700E4462B254F023CB4EA707* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8, ____items_1)); }
	inline TileU5BU5D_tE21E3527F7A406A2700E4462B254F023CB4EA707* get__items_1() const { return ____items_1; }
	inline TileU5BU5D_tE21E3527F7A406A2700E4462B254F023CB4EA707** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TileU5BU5D_tE21E3527F7A406A2700E4462B254F023CB4EA707* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TileU5BU5D_tE21E3527F7A406A2700E4462B254F023CB4EA707* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8_StaticFields, ____emptyArray_5)); }
	inline TileU5BU5D_tE21E3527F7A406A2700E4462B254F023CB4EA707* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TileU5BU5D_tE21E3527F7A406A2700E4462B254F023CB4EA707** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TileU5BU5D_tE21E3527F7A406A2700E4462B254F023CB4EA707* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<TilePooler/Pool>
struct List_1_t60B1C7F49F58BA19849B441B785A5925F5D4F0DF  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PoolU5BU5D_tD0FF7FA93CD28522E6F09D9D81759782649B84BE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t60B1C7F49F58BA19849B441B785A5925F5D4F0DF, ____items_1)); }
	inline PoolU5BU5D_tD0FF7FA93CD28522E6F09D9D81759782649B84BE* get__items_1() const { return ____items_1; }
	inline PoolU5BU5D_tD0FF7FA93CD28522E6F09D9D81759782649B84BE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PoolU5BU5D_tD0FF7FA93CD28522E6F09D9D81759782649B84BE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t60B1C7F49F58BA19849B441B785A5925F5D4F0DF, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t60B1C7F49F58BA19849B441B785A5925F5D4F0DF, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t60B1C7F49F58BA19849B441B785A5925F5D4F0DF, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t60B1C7F49F58BA19849B441B785A5925F5D4F0DF_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	PoolU5BU5D_tD0FF7FA93CD28522E6F09D9D81759782649B84BE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t60B1C7F49F58BA19849B441B785A5925F5D4F0DF_StaticFields, ____emptyArray_5)); }
	inline PoolU5BU5D_tD0FF7FA93CD28522E6F09D9D81759782649B84BE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline PoolU5BU5D_tD0FF7FA93CD28522E6F09D9D81759782649B84BE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(PoolU5BU5D_tD0FF7FA93CD28522E6F09D9D81759782649B84BE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<levelgen/Platform>
struct List_1_t1962AE351C867A2D55EBF2EF233FE6F05086E474  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PlatformU5BU5D_t6AC4B25037CA9E287733A91E3F613DBE217C4E70* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1962AE351C867A2D55EBF2EF233FE6F05086E474, ____items_1)); }
	inline PlatformU5BU5D_t6AC4B25037CA9E287733A91E3F613DBE217C4E70* get__items_1() const { return ____items_1; }
	inline PlatformU5BU5D_t6AC4B25037CA9E287733A91E3F613DBE217C4E70** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PlatformU5BU5D_t6AC4B25037CA9E287733A91E3F613DBE217C4E70* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1962AE351C867A2D55EBF2EF233FE6F05086E474, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1962AE351C867A2D55EBF2EF233FE6F05086E474, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1962AE351C867A2D55EBF2EF233FE6F05086E474, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t1962AE351C867A2D55EBF2EF233FE6F05086E474_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	PlatformU5BU5D_t6AC4B25037CA9E287733A91E3F613DBE217C4E70* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1962AE351C867A2D55EBF2EF233FE6F05086E474_StaticFields, ____emptyArray_5)); }
	inline PlatformU5BU5D_t6AC4B25037CA9E287733A91E3F613DBE217C4E70* get__emptyArray_5() const { return ____emptyArray_5; }
	inline PlatformU5BU5D_t6AC4B25037CA9E287733A91E3F613DBE217C4E70** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(PlatformU5BU5D_t6AC4B25037CA9E287733A91E3F613DBE217C4E70* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<UnityEngine.GameObject>
struct Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92, ____array_0)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__array_0() const { return ____array_0; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// SoundManager
struct SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62  : public RuntimeObject
{
public:

public:
};

struct SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<SoundManager/Sound,System.Single> SoundManager::soundtimerDictionary
	Dictionary_2_tA516C4BF8CC04CFE1F6BF38F3DE3D8A246BE2BC5 * ___soundtimerDictionary_0;

public:
	inline static int32_t get_offset_of_soundtimerDictionary_0() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields, ___soundtimerDictionary_0)); }
	inline Dictionary_2_tA516C4BF8CC04CFE1F6BF38F3DE3D8A246BE2BC5 * get_soundtimerDictionary_0() const { return ___soundtimerDictionary_0; }
	inline Dictionary_2_tA516C4BF8CC04CFE1F6BF38F3DE3D8A246BE2BC5 ** get_address_of_soundtimerDictionary_0() { return &___soundtimerDictionary_0; }
	inline void set_soundtimerDictionary_0(Dictionary_2_tA516C4BF8CC04CFE1F6BF38F3DE3D8A246BE2BC5 * value)
	{
		___soundtimerDictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___soundtimerDictionary_0), (void*)value);
	}
};


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

// TilePooler/Pool
struct Pool_t848F75427F6865029793B7C163370BDC346C6D8C  : public RuntimeObject
{
public:
	// System.String TilePooler/Pool::tag
	String_t* ___tag_0;
	// UnityEngine.GameObject TilePooler/Pool::prefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___prefab_1;
	// System.Int32 TilePooler/Pool::size
	int32_t ___size_2;

public:
	inline static int32_t get_offset_of_tag_0() { return static_cast<int32_t>(offsetof(Pool_t848F75427F6865029793B7C163370BDC346C6D8C, ___tag_0)); }
	inline String_t* get_tag_0() const { return ___tag_0; }
	inline String_t** get_address_of_tag_0() { return &___tag_0; }
	inline void set_tag_0(String_t* value)
	{
		___tag_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tag_0), (void*)value);
	}

	inline static int32_t get_offset_of_prefab_1() { return static_cast<int32_t>(offsetof(Pool_t848F75427F6865029793B7C163370BDC346C6D8C, ___prefab_1)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_prefab_1() const { return ___prefab_1; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_prefab_1() { return &___prefab_1; }
	inline void set_prefab_1(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___prefab_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prefab_1), (void*)value);
	}

	inline static int32_t get_offset_of_size_2() { return static_cast<int32_t>(offsetof(Pool_t848F75427F6865029793B7C163370BDC346C6D8C, ___size_2)); }
	inline int32_t get_size_2() const { return ___size_2; }
	inline int32_t* get_address_of_size_2() { return &___size_2; }
	inline void set_size_2(int32_t value)
	{
		___size_2 = value;
	}
};


// levelgen/Platform
struct Platform_tE9E6AC72071AF6BACAF02519C6C0AED83456CB3D  : public RuntimeObject
{
public:
	// UnityEngine.Transform levelgen/Platform::platform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___platform_0;

public:
	inline static int32_t get_offset_of_platform_0() { return static_cast<int32_t>(offsetof(Platform_tE9E6AC72071AF6BACAF02519C6C0AED83456CB3D, ___platform_0)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_platform_0() const { return ___platform_0; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_platform_0() { return &___platform_0; }
	inline void set_platform_0(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___platform_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___platform_0), (void*)value);
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


// System.Collections.Generic.List`1/Enumerator<Tile>
struct Enumerator_tB1C7C4A9D6D39DD878989E93E7F1603AA275F388 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB1C7C4A9D6D39DD878989E93E7F1603AA275F388, ___list_0)); }
	inline List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8 * get_list_0() const { return ___list_0; }
	inline List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB1C7C4A9D6D39DD878989E93E7F1603AA275F388, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB1C7C4A9D6D39DD878989E93E7F1603AA275F388, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB1C7C4A9D6D39DD878989E93E7F1603AA275F388, ___current_3)); }
	inline Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * get_current_3() const { return ___current_3; }
	inline Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<TilePooler/Pool>
struct Enumerator_t2A9658835FECB4EFF29D9F6685404336DC4C60EE 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t60B1C7F49F58BA19849B441B785A5925F5D4F0DF * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Pool_t848F75427F6865029793B7C163370BDC346C6D8C * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t2A9658835FECB4EFF29D9F6685404336DC4C60EE, ___list_0)); }
	inline List_1_t60B1C7F49F58BA19849B441B785A5925F5D4F0DF * get_list_0() const { return ___list_0; }
	inline List_1_t60B1C7F49F58BA19849B441B785A5925F5D4F0DF ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t60B1C7F49F58BA19849B441B785A5925F5D4F0DF * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t2A9658835FECB4EFF29D9F6685404336DC4C60EE, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t2A9658835FECB4EFF29D9F6685404336DC4C60EE, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2A9658835FECB4EFF29D9F6685404336DC4C60EE, ___current_3)); }
	inline Pool_t848F75427F6865029793B7C163370BDC346C6D8C * get_current_3() const { return ___current_3; }
	inline Pool_t848F75427F6865029793B7C163370BDC346C6D8C ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Pool_t848F75427F6865029793B7C163370BDC346C6D8C * value)
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


// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2__padding[1];
	};

public:
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


// UnityEngine.LayerMask
struct LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
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


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
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


// UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* ___m_LegacyContacts_8;

public:
	inline static int32_t get_offset_of_m_Collider_0() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Collider_0)); }
	inline int32_t get_m_Collider_0() const { return ___m_Collider_0; }
	inline int32_t* get_address_of_m_Collider_0() { return &___m_Collider_0; }
	inline void set_m_Collider_0(int32_t value)
	{
		___m_Collider_0 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_1() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_OtherCollider_1)); }
	inline int32_t get_m_OtherCollider_1() const { return ___m_OtherCollider_1; }
	inline int32_t* get_address_of_m_OtherCollider_1() { return &___m_OtherCollider_1; }
	inline void set_m_OtherCollider_1(int32_t value)
	{
		___m_OtherCollider_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Rigidbody_2)); }
	inline int32_t get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline int32_t* get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(int32_t value)
	{
		___m_Rigidbody_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_3() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_OtherRigidbody_3)); }
	inline int32_t get_m_OtherRigidbody_3() const { return ___m_OtherRigidbody_3; }
	inline int32_t* get_address_of_m_OtherRigidbody_3() { return &___m_OtherRigidbody_3; }
	inline void set_m_OtherRigidbody_3(int32_t value)
	{
		___m_OtherRigidbody_3 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_4() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_RelativeVelocity_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RelativeVelocity_4() const { return ___m_RelativeVelocity_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RelativeVelocity_4() { return &___m_RelativeVelocity_4; }
	inline void set_m_RelativeVelocity_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RelativeVelocity_4 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_5() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Enabled_5)); }
	inline int32_t get_m_Enabled_5() const { return ___m_Enabled_5; }
	inline int32_t* get_address_of_m_Enabled_5() { return &___m_Enabled_5; }
	inline void set_m_Enabled_5(int32_t value)
	{
		___m_Enabled_5 = value;
	}

	inline static int32_t get_offset_of_m_ContactCount_6() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_ContactCount_6)); }
	inline int32_t get_m_ContactCount_6() const { return ___m_ContactCount_6; }
	inline int32_t* get_address_of_m_ContactCount_6() { return &___m_ContactCount_6; }
	inline void set_m_ContactCount_6(int32_t value)
	{
		___m_ContactCount_6 = value;
	}

	inline static int32_t get_offset_of_m_ReusedContacts_7() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_ReusedContacts_7)); }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* get_m_ReusedContacts_7() const { return ___m_ReusedContacts_7; }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277** get_address_of_m_ReusedContacts_7() { return &___m_ReusedContacts_7; }
	inline void set_m_ReusedContacts_7(ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* value)
	{
		___m_ReusedContacts_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReusedContacts_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyContacts_8() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_LegacyContacts_8)); }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* get_m_LegacyContacts_8() const { return ___m_LegacyContacts_8; }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277** get_address_of_m_LegacyContacts_8() { return &___m_LegacyContacts_8; }
	inline void set_m_LegacyContacts_8(ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* value)
	{
		___m_LegacyContacts_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyContacts_8), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_ReusedContacts_7;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_ReusedContacts_7;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_LegacyContacts_8;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// UnityEngine.ForceMode2D
struct ForceMode2D_tAD695DED33FB7C591354430C88D220D71109ABF4 
{
public:
	// System.Int32 UnityEngine.ForceMode2D::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ForceMode2D_tAD695DED33FB7C591354430C88D220D71109ABF4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Gradient
struct Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Gradient::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Gradient
struct Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Gradient
struct Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// UnityEngine.RigidbodyType2D
struct RigidbodyType2D_tEF016AC6D4D54AF47773D68E833159CC995DF1E9 
{
public:
	// System.Int32 UnityEngine.RigidbodyType2D::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RigidbodyType2D_tEF016AC6D4D54AF47773D68E833159CC995DF1E9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Endless2D/center
struct center_tBA4171CE28D102D8CC4F23E39952468BD95D506D 
{
public:
	// System.Int32 Endless2D/center::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(center_tBA4171CE28D102D8CC4F23E39952468BD95D506D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Endless2D/tileDir
struct tileDir_t5DF2056180AA94F9AE65EDE25408B7AD2A8F6F0D 
{
public:
	// System.Int32 Endless2D/tileDir::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(tileDir_t5DF2056180AA94F9AE65EDE25408B7AD2A8F6F0D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Slider/Direction
struct Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961 
{
public:
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// SoundManager/Sound
struct Sound_tA0535EE7716E13A5443BE415CDC0B4090DCB72F3 
{
public:
	// System.Int32 SoundManager/Sound::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Sound_tA0535EE7716E13A5443BE415CDC0B4090DCB72F3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// StartManager/DissolveItem
struct DissolveItem_tF0D838FD17619E13535458DE54D8F2EA5AC0264E  : public RuntimeObject
{
public:
	// UnityEngine.UI.Image StartManager/DissolveItem::image
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___image_0;
	// UnityEngine.Vector4 StartManager/DissolveItem::dissolveitemVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___dissolveitemVector_1;
	// System.Single StartManager/DissolveItem::A_Dissolveitem
	float ___A_Dissolveitem_2;

public:
	inline static int32_t get_offset_of_image_0() { return static_cast<int32_t>(offsetof(DissolveItem_tF0D838FD17619E13535458DE54D8F2EA5AC0264E, ___image_0)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_image_0() const { return ___image_0; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_image_0() { return &___image_0; }
	inline void set_image_0(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___image_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___image_0), (void*)value);
	}

	inline static int32_t get_offset_of_dissolveitemVector_1() { return static_cast<int32_t>(offsetof(DissolveItem_tF0D838FD17619E13535458DE54D8F2EA5AC0264E, ___dissolveitemVector_1)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_dissolveitemVector_1() const { return ___dissolveitemVector_1; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_dissolveitemVector_1() { return &___dissolveitemVector_1; }
	inline void set_dissolveitemVector_1(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___dissolveitemVector_1 = value;
	}

	inline static int32_t get_offset_of_A_Dissolveitem_2() { return static_cast<int32_t>(offsetof(DissolveItem_tF0D838FD17619E13535458DE54D8F2EA5AC0264E, ___A_Dissolveitem_2)); }
	inline float get_A_Dissolveitem_2() const { return ___A_Dissolveitem_2; }
	inline float* get_address_of_A_Dissolveitem_2() { return &___A_Dissolveitem_2; }
	inline void set_A_Dissolveitem_2(float value)
	{
		___A_Dissolveitem_2 = value;
	}
};


// camera/Diffculty
struct Diffculty_t44F161FD3C50DC7A76A8D803E308E6A5269DBCA6 
{
public:
	// System.Int32 camera/Diffculty::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Diffculty_t44F161FD3C50DC7A76A8D803E308E6A5269DBCA6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// levelgen/PlatformEnum
struct PlatformEnum_tA3CD16D15BAA7B5F2CCC2AB0A0D00194A41A66BC 
{
public:
	// System.Int32 levelgen/PlatformEnum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlatformEnum_tA3CD16D15BAA7B5F2CCC2AB0A0D00194A41A66BC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
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


// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// GameAssets/SoundAudioCLip
struct SoundAudioCLip_tAB30A76E0CD7C69194C05CDBF49214309CDDF88F  : public RuntimeObject
{
public:
	// SoundManager/Sound GameAssets/SoundAudioCLip::sound
	int32_t ___sound_0;
	// UnityEngine.AudioClip GameAssets/SoundAudioCLip::audioclip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___audioclip_1;

public:
	inline static int32_t get_offset_of_sound_0() { return static_cast<int32_t>(offsetof(SoundAudioCLip_tAB30A76E0CD7C69194C05CDBF49214309CDDF88F, ___sound_0)); }
	inline int32_t get_sound_0() const { return ___sound_0; }
	inline int32_t* get_address_of_sound_0() { return &___sound_0; }
	inline void set_sound_0(int32_t value)
	{
		___sound_0 = value;
	}

	inline static int32_t get_offset_of_audioclip_1() { return static_cast<int32_t>(offsetof(SoundAudioCLip_tAB30A76E0CD7C69194C05CDBF49214309CDDF88F, ___audioclip_1)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_audioclip_1() const { return ___audioclip_1; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_audioclip_1() { return &___audioclip_1; }
	inline void set_audioclip_1(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___audioclip_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioclip_1), (void*)value);
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.ParticleSystem
struct ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
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


// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
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


// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
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


// Arrow
struct Arrow_t98BA45BD73ADFAD1B38830B6D6D48588A96AC86A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// BoostBar
struct BoostBar_t248D99B7988BF361E572025F1E7D66B05DBACDA0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Slider BoostBar::slider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___slider_4;
	// UnityEngine.Gradient BoostBar::gradient
	Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * ___gradient_5;
	// UnityEngine.UI.Image BoostBar::Fill
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___Fill_6;

public:
	inline static int32_t get_offset_of_slider_4() { return static_cast<int32_t>(offsetof(BoostBar_t248D99B7988BF361E572025F1E7D66B05DBACDA0, ___slider_4)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_slider_4() const { return ___slider_4; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_slider_4() { return &___slider_4; }
	inline void set_slider_4(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___slider_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slider_4), (void*)value);
	}

	inline static int32_t get_offset_of_gradient_5() { return static_cast<int32_t>(offsetof(BoostBar_t248D99B7988BF361E572025F1E7D66B05DBACDA0, ___gradient_5)); }
	inline Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * get_gradient_5() const { return ___gradient_5; }
	inline Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 ** get_address_of_gradient_5() { return &___gradient_5; }
	inline void set_gradient_5(Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * value)
	{
		___gradient_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gradient_5), (void*)value);
	}

	inline static int32_t get_offset_of_Fill_6() { return static_cast<int32_t>(offsetof(BoostBar_t248D99B7988BF361E572025F1E7D66B05DBACDA0, ___Fill_6)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_Fill_6() const { return ___Fill_6; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_Fill_6() { return &___Fill_6; }
	inline void set_Fill_6(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___Fill_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Fill_6), (void*)value);
	}
};


// UnityEngine.BoxCollider2D
struct BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9  : public Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722
{
public:

public:
};


// Destryo
struct Destryo_tA5642D17DCE618B8501DEC93EB8C63E9F9B31455  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// DissolvingPlatform
struct DissolvingPlatform_t80328620960009E895363AFDF8DABD99D1147D7E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.SpriteRenderer DissolvingPlatform::sp
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___sp_4;
	// System.Single DissolvingPlatform::alpha
	float ___alpha_5;
	// System.Boolean DissolvingPlatform::IsUsed
	bool ___IsUsed_6;

public:
	inline static int32_t get_offset_of_sp_4() { return static_cast<int32_t>(offsetof(DissolvingPlatform_t80328620960009E895363AFDF8DABD99D1147D7E, ___sp_4)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_sp_4() const { return ___sp_4; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_sp_4() { return &___sp_4; }
	inline void set_sp_4(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___sp_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sp_4), (void*)value);
	}

	inline static int32_t get_offset_of_alpha_5() { return static_cast<int32_t>(offsetof(DissolvingPlatform_t80328620960009E895363AFDF8DABD99D1147D7E, ___alpha_5)); }
	inline float get_alpha_5() const { return ___alpha_5; }
	inline float* get_address_of_alpha_5() { return &___alpha_5; }
	inline void set_alpha_5(float value)
	{
		___alpha_5 = value;
	}

	inline static int32_t get_offset_of_IsUsed_6() { return static_cast<int32_t>(offsetof(DissolvingPlatform_t80328620960009E895363AFDF8DABD99D1147D7E, ___IsUsed_6)); }
	inline bool get_IsUsed_6() const { return ___IsUsed_6; }
	inline bool* get_address_of_IsUsed_6() { return &___IsUsed_6; }
	inline void set_IsUsed_6(bool value)
	{
		___IsUsed_6 = value;
	}
};


// FillValueNumber
struct FillValueNumber_t4A061AFCFC2F33F366B5E6EDD6EBA44A5D83BFC9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Image FillValueNumber::TargetImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___TargetImage_4;

public:
	inline static int32_t get_offset_of_TargetImage_4() { return static_cast<int32_t>(offsetof(FillValueNumber_t4A061AFCFC2F33F366B5E6EDD6EBA44A5D83BFC9, ___TargetImage_4)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_TargetImage_4() const { return ___TargetImage_4; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_TargetImage_4() { return &___TargetImage_4; }
	inline void set_TargetImage_4(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___TargetImage_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TargetImage_4), (void*)value);
	}
};


// GameAssets
struct GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform GameAssets::platform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___platform_5;
	// UnityEngine.Transform GameAssets::RedPlatform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___RedPlatform_6;
	// UnityEngine.Transform GameAssets::PinkPlatform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___PinkPlatform_7;
	// UnityEngine.Transform GameAssets::WoodPlatform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___WoodPlatform_8;
	// UnityEngine.Transform GameAssets::OutlinePlatformPlatform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___OutlinePlatformPlatform_9;
	// UnityEngine.Transform GameAssets::DissolvingPlatform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___DissolvingPlatform_10;
	// UnityEngine.Transform GameAssets::Jump_pad
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___Jump_pad_11;
	// UnityEngine.Transform GameAssets::Trap
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___Trap_12;
	// UnityEngine.Transform GameAssets::Explosion
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___Explosion_13;
	// UnityEngine.Transform GameAssets::PowerUp
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___PowerUp_14;
	// GameAssets/SoundAudioCLip[] GameAssets::SoundAudioArray
	SoundAudioCLipU5BU5D_tC99FE4DDA1016FE55480E06D2270114003FFBE52* ___SoundAudioArray_15;

public:
	inline static int32_t get_offset_of_platform_5() { return static_cast<int32_t>(offsetof(GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191, ___platform_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_platform_5() const { return ___platform_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_platform_5() { return &___platform_5; }
	inline void set_platform_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___platform_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___platform_5), (void*)value);
	}

	inline static int32_t get_offset_of_RedPlatform_6() { return static_cast<int32_t>(offsetof(GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191, ___RedPlatform_6)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_RedPlatform_6() const { return ___RedPlatform_6; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_RedPlatform_6() { return &___RedPlatform_6; }
	inline void set_RedPlatform_6(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___RedPlatform_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RedPlatform_6), (void*)value);
	}

	inline static int32_t get_offset_of_PinkPlatform_7() { return static_cast<int32_t>(offsetof(GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191, ___PinkPlatform_7)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_PinkPlatform_7() const { return ___PinkPlatform_7; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_PinkPlatform_7() { return &___PinkPlatform_7; }
	inline void set_PinkPlatform_7(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___PinkPlatform_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PinkPlatform_7), (void*)value);
	}

	inline static int32_t get_offset_of_WoodPlatform_8() { return static_cast<int32_t>(offsetof(GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191, ___WoodPlatform_8)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_WoodPlatform_8() const { return ___WoodPlatform_8; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_WoodPlatform_8() { return &___WoodPlatform_8; }
	inline void set_WoodPlatform_8(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___WoodPlatform_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WoodPlatform_8), (void*)value);
	}

	inline static int32_t get_offset_of_OutlinePlatformPlatform_9() { return static_cast<int32_t>(offsetof(GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191, ___OutlinePlatformPlatform_9)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_OutlinePlatformPlatform_9() const { return ___OutlinePlatformPlatform_9; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_OutlinePlatformPlatform_9() { return &___OutlinePlatformPlatform_9; }
	inline void set_OutlinePlatformPlatform_9(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___OutlinePlatformPlatform_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OutlinePlatformPlatform_9), (void*)value);
	}

	inline static int32_t get_offset_of_DissolvingPlatform_10() { return static_cast<int32_t>(offsetof(GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191, ___DissolvingPlatform_10)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_DissolvingPlatform_10() const { return ___DissolvingPlatform_10; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_DissolvingPlatform_10() { return &___DissolvingPlatform_10; }
	inline void set_DissolvingPlatform_10(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___DissolvingPlatform_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DissolvingPlatform_10), (void*)value);
	}

	inline static int32_t get_offset_of_Jump_pad_11() { return static_cast<int32_t>(offsetof(GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191, ___Jump_pad_11)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_Jump_pad_11() const { return ___Jump_pad_11; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_Jump_pad_11() { return &___Jump_pad_11; }
	inline void set_Jump_pad_11(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___Jump_pad_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Jump_pad_11), (void*)value);
	}

	inline static int32_t get_offset_of_Trap_12() { return static_cast<int32_t>(offsetof(GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191, ___Trap_12)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_Trap_12() const { return ___Trap_12; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_Trap_12() { return &___Trap_12; }
	inline void set_Trap_12(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___Trap_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Trap_12), (void*)value);
	}

	inline static int32_t get_offset_of_Explosion_13() { return static_cast<int32_t>(offsetof(GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191, ___Explosion_13)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_Explosion_13() const { return ___Explosion_13; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_Explosion_13() { return &___Explosion_13; }
	inline void set_Explosion_13(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___Explosion_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Explosion_13), (void*)value);
	}

	inline static int32_t get_offset_of_PowerUp_14() { return static_cast<int32_t>(offsetof(GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191, ___PowerUp_14)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_PowerUp_14() const { return ___PowerUp_14; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_PowerUp_14() { return &___PowerUp_14; }
	inline void set_PowerUp_14(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___PowerUp_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PowerUp_14), (void*)value);
	}

	inline static int32_t get_offset_of_SoundAudioArray_15() { return static_cast<int32_t>(offsetof(GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191, ___SoundAudioArray_15)); }
	inline SoundAudioCLipU5BU5D_tC99FE4DDA1016FE55480E06D2270114003FFBE52* get_SoundAudioArray_15() const { return ___SoundAudioArray_15; }
	inline SoundAudioCLipU5BU5D_tC99FE4DDA1016FE55480E06D2270114003FFBE52** get_address_of_SoundAudioArray_15() { return &___SoundAudioArray_15; }
	inline void set_SoundAudioArray_15(SoundAudioCLipU5BU5D_tC99FE4DDA1016FE55480E06D2270114003FFBE52* value)
	{
		___SoundAudioArray_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SoundAudioArray_15), (void*)value);
	}
};

struct GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191_StaticFields
{
public:
	// GameAssets GameAssets::instance
	GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191_StaticFields, ___instance_4)); }
	inline GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191 * get_instance_4() const { return ___instance_4; }
	inline GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}
};


// HighScore
struct HighScore_tE521702BF43BC092726A498168F5E00DAC878753  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Jump
struct Jump_t84C2E1E5FF2AB21C80DDF1A2B25D5D42B47A4F2A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// JumpPad
struct JumpPad_t68137B46D24D8602AEC84E66F261E70F68F545A4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Animator JumpPad::anim
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___anim_4;
	// System.Single JumpPad::bounce
	float ___bounce_5;

public:
	inline static int32_t get_offset_of_anim_4() { return static_cast<int32_t>(offsetof(JumpPad_t68137B46D24D8602AEC84E66F261E70F68F545A4, ___anim_4)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_anim_4() const { return ___anim_4; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_anim_4() { return &___anim_4; }
	inline void set_anim_4(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___anim_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anim_4), (void*)value);
	}

	inline static int32_t get_offset_of_bounce_5() { return static_cast<int32_t>(offsetof(JumpPad_t68137B46D24D8602AEC84E66F261E70F68F545A4, ___bounce_5)); }
	inline float get_bounce_5() const { return ___bounce_5; }
	inline float* get_address_of_bounce_5() { return &___bounce_5; }
	inline void set_bounce_5(float value)
	{
		___bounce_5 = value;
	}
};


// OutlinePlatform
struct OutlinePlatform_t9B3367CC5A544A93C6D78ADE7A049AC4AB381DF9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single OutlinePlatform::speed
	float ___speed_4;
	// System.Int32 OutlinePlatform::direction
	int32_t ___direction_5;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(OutlinePlatform_t9B3367CC5A544A93C6D78ADE7A049AC4AB381DF9, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_direction_5() { return static_cast<int32_t>(offsetof(OutlinePlatform_t9B3367CC5A544A93C6D78ADE7A049AC4AB381DF9, ___direction_5)); }
	inline int32_t get_direction_5() const { return ___direction_5; }
	inline int32_t* get_address_of_direction_5() { return &___direction_5; }
	inline void set_direction_5(int32_t value)
	{
		___direction_5 = value;
	}
};


// PinkPlatform
struct PinkPlatform_t1394AF1AECF177B9BF5EF553FD30B1BE9D09FE6B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single PinkPlatform::Jumpforce
	float ___Jumpforce_4;
	// UnityEngine.GameObject PinkPlatform::player
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player_5;
	// UnityEngine.Animator PinkPlatform::anim
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___anim_6;

public:
	inline static int32_t get_offset_of_Jumpforce_4() { return static_cast<int32_t>(offsetof(PinkPlatform_t1394AF1AECF177B9BF5EF553FD30B1BE9D09FE6B, ___Jumpforce_4)); }
	inline float get_Jumpforce_4() const { return ___Jumpforce_4; }
	inline float* get_address_of_Jumpforce_4() { return &___Jumpforce_4; }
	inline void set_Jumpforce_4(float value)
	{
		___Jumpforce_4 = value;
	}

	inline static int32_t get_offset_of_player_5() { return static_cast<int32_t>(offsetof(PinkPlatform_t1394AF1AECF177B9BF5EF553FD30B1BE9D09FE6B, ___player_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_player_5() const { return ___player_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_player_5() { return &___player_5; }
	inline void set_player_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___player_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_5), (void*)value);
	}

	inline static int32_t get_offset_of_anim_6() { return static_cast<int32_t>(offsetof(PinkPlatform_t1394AF1AECF177B9BF5EF553FD30B1BE9D09FE6B, ___anim_6)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_anim_6() const { return ___anim_6; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_anim_6() { return &___anim_6; }
	inline void set_anim_6(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___anim_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anim_6), (void*)value);
	}
};


// RedPlatform
struct RedPlatform_t154514DE85EC8B16C56E5DCB223CD625ABDF1F86  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Score
struct Score_tE07CBD9780DFC212BE43719819F512E8861103C7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform Score::player
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___player_4;
	// UnityEngine.UI.Text Score::HighScoreText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___HighScoreText_5;
	// UnityEngine.UI.Text Score::score
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___score_6;
	// System.Int32 Score::highScore
	int32_t ___highScore_7;
	// System.Int32 Score::scorenum
	int32_t ___scorenum_8;
	// System.String Score::highScoreKey
	String_t* ___highScoreKey_9;

public:
	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(Score_tE07CBD9780DFC212BE43719819F512E8861103C7, ___player_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_player_4() const { return ___player_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_4), (void*)value);
	}

	inline static int32_t get_offset_of_HighScoreText_5() { return static_cast<int32_t>(offsetof(Score_tE07CBD9780DFC212BE43719819F512E8861103C7, ___HighScoreText_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_HighScoreText_5() const { return ___HighScoreText_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_HighScoreText_5() { return &___HighScoreText_5; }
	inline void set_HighScoreText_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___HighScoreText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HighScoreText_5), (void*)value);
	}

	inline static int32_t get_offset_of_score_6() { return static_cast<int32_t>(offsetof(Score_tE07CBD9780DFC212BE43719819F512E8861103C7, ___score_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_score_6() const { return ___score_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_score_6() { return &___score_6; }
	inline void set_score_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___score_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___score_6), (void*)value);
	}

	inline static int32_t get_offset_of_highScore_7() { return static_cast<int32_t>(offsetof(Score_tE07CBD9780DFC212BE43719819F512E8861103C7, ___highScore_7)); }
	inline int32_t get_highScore_7() const { return ___highScore_7; }
	inline int32_t* get_address_of_highScore_7() { return &___highScore_7; }
	inline void set_highScore_7(int32_t value)
	{
		___highScore_7 = value;
	}

	inline static int32_t get_offset_of_scorenum_8() { return static_cast<int32_t>(offsetof(Score_tE07CBD9780DFC212BE43719819F512E8861103C7, ___scorenum_8)); }
	inline int32_t get_scorenum_8() const { return ___scorenum_8; }
	inline int32_t* get_address_of_scorenum_8() { return &___scorenum_8; }
	inline void set_scorenum_8(int32_t value)
	{
		___scorenum_8 = value;
	}

	inline static int32_t get_offset_of_highScoreKey_9() { return static_cast<int32_t>(offsetof(Score_tE07CBD9780DFC212BE43719819F512E8861103C7, ___highScoreKey_9)); }
	inline String_t* get_highScoreKey_9() const { return ___highScoreKey_9; }
	inline String_t** get_address_of_highScoreKey_9() { return &___highScoreKey_9; }
	inline void set_highScoreKey_9(String_t* value)
	{
		___highScoreKey_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___highScoreKey_9), (void*)value);
	}
};


// Singleton
struct Singleton_t85C95C878D42548878AD1318351EC6E51A48162F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct Singleton_t85C95C878D42548878AD1318351EC6E51A48162F_StaticFields
{
public:
	// Singleton Singleton::<Instance>k__BackingField
	Singleton_t85C95C878D42548878AD1318351EC6E51A48162F * ___U3CInstanceU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Singleton_t85C95C878D42548878AD1318351EC6E51A48162F_StaticFields, ___U3CInstanceU3Ek__BackingField_4)); }
	inline Singleton_t85C95C878D42548878AD1318351EC6E51A48162F * get_U3CInstanceU3Ek__BackingField_4() const { return ___U3CInstanceU3Ek__BackingField_4; }
	inline Singleton_t85C95C878D42548878AD1318351EC6E51A48162F ** get_address_of_U3CInstanceU3Ek__BackingField_4() { return &___U3CInstanceU3Ek__BackingField_4; }
	inline void set_U3CInstanceU3Ek__BackingField_4(Singleton_t85C95C878D42548878AD1318351EC6E51A48162F * value)
	{
		___U3CInstanceU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_4), (void*)value);
	}
};


// StartManager
struct StartManager_t63287E6205CC25B9ED02CDE8D1FAFEDF2DD907A9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean StartManager::started
	bool ___started_4;
	// UnityEngine.UI.Image StartManager::StartMenu
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___StartMenu_5;
	// UnityEngine.UI.Text StartManager::StartText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___StartText_6;
	// UnityEngine.UI.Image StartManager::Facebook
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___Facebook_7;
	// UnityEngine.UI.Image StartManager::Instgram
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___Instgram_8;
	// UnityEngine.UI.Image StartManager::Reddit
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___Reddit_9;
	// UnityEngine.UI.Image StartManager::Settings
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___Settings_10;

public:
	inline static int32_t get_offset_of_started_4() { return static_cast<int32_t>(offsetof(StartManager_t63287E6205CC25B9ED02CDE8D1FAFEDF2DD907A9, ___started_4)); }
	inline bool get_started_4() const { return ___started_4; }
	inline bool* get_address_of_started_4() { return &___started_4; }
	inline void set_started_4(bool value)
	{
		___started_4 = value;
	}

	inline static int32_t get_offset_of_StartMenu_5() { return static_cast<int32_t>(offsetof(StartManager_t63287E6205CC25B9ED02CDE8D1FAFEDF2DD907A9, ___StartMenu_5)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_StartMenu_5() const { return ___StartMenu_5; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_StartMenu_5() { return &___StartMenu_5; }
	inline void set_StartMenu_5(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___StartMenu_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StartMenu_5), (void*)value);
	}

	inline static int32_t get_offset_of_StartText_6() { return static_cast<int32_t>(offsetof(StartManager_t63287E6205CC25B9ED02CDE8D1FAFEDF2DD907A9, ___StartText_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_StartText_6() const { return ___StartText_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_StartText_6() { return &___StartText_6; }
	inline void set_StartText_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___StartText_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StartText_6), (void*)value);
	}

	inline static int32_t get_offset_of_Facebook_7() { return static_cast<int32_t>(offsetof(StartManager_t63287E6205CC25B9ED02CDE8D1FAFEDF2DD907A9, ___Facebook_7)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_Facebook_7() const { return ___Facebook_7; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_Facebook_7() { return &___Facebook_7; }
	inline void set_Facebook_7(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___Facebook_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Facebook_7), (void*)value);
	}

	inline static int32_t get_offset_of_Instgram_8() { return static_cast<int32_t>(offsetof(StartManager_t63287E6205CC25B9ED02CDE8D1FAFEDF2DD907A9, ___Instgram_8)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_Instgram_8() const { return ___Instgram_8; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_Instgram_8() { return &___Instgram_8; }
	inline void set_Instgram_8(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___Instgram_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instgram_8), (void*)value);
	}

	inline static int32_t get_offset_of_Reddit_9() { return static_cast<int32_t>(offsetof(StartManager_t63287E6205CC25B9ED02CDE8D1FAFEDF2DD907A9, ___Reddit_9)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_Reddit_9() const { return ___Reddit_9; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_Reddit_9() { return &___Reddit_9; }
	inline void set_Reddit_9(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___Reddit_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Reddit_9), (void*)value);
	}

	inline static int32_t get_offset_of_Settings_10() { return static_cast<int32_t>(offsetof(StartManager_t63287E6205CC25B9ED02CDE8D1FAFEDF2DD907A9, ___Settings_10)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_Settings_10() const { return ___Settings_10; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_Settings_10() { return &___Settings_10; }
	inline void set_Settings_10(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___Settings_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Settings_10), (void*)value);
	}
};


// Tile
struct Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector3 Tile::direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction_4;
	// System.Single Tile::speed
	float ___speed_5;
	// System.Boolean Tile::shouldMove
	bool ___shouldMove_6;
	// System.Int32 Tile::nRows
	int32_t ___nRows_7;
	// System.Int32 Tile::nColumns
	int32_t ___nColumns_8;
	// UnityEngine.SpriteRenderer Tile::spriteRenderer
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___spriteRenderer_9;

public:
	inline static int32_t get_offset_of_direction_4() { return static_cast<int32_t>(offsetof(Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2, ___direction_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_direction_4() const { return ___direction_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_direction_4() { return &___direction_4; }
	inline void set_direction_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___direction_4 = value;
	}

	inline static int32_t get_offset_of_speed_5() { return static_cast<int32_t>(offsetof(Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2, ___speed_5)); }
	inline float get_speed_5() const { return ___speed_5; }
	inline float* get_address_of_speed_5() { return &___speed_5; }
	inline void set_speed_5(float value)
	{
		___speed_5 = value;
	}

	inline static int32_t get_offset_of_shouldMove_6() { return static_cast<int32_t>(offsetof(Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2, ___shouldMove_6)); }
	inline bool get_shouldMove_6() const { return ___shouldMove_6; }
	inline bool* get_address_of_shouldMove_6() { return &___shouldMove_6; }
	inline void set_shouldMove_6(bool value)
	{
		___shouldMove_6 = value;
	}

	inline static int32_t get_offset_of_nRows_7() { return static_cast<int32_t>(offsetof(Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2, ___nRows_7)); }
	inline int32_t get_nRows_7() const { return ___nRows_7; }
	inline int32_t* get_address_of_nRows_7() { return &___nRows_7; }
	inline void set_nRows_7(int32_t value)
	{
		___nRows_7 = value;
	}

	inline static int32_t get_offset_of_nColumns_8() { return static_cast<int32_t>(offsetof(Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2, ___nColumns_8)); }
	inline int32_t get_nColumns_8() const { return ___nColumns_8; }
	inline int32_t* get_address_of_nColumns_8() { return &___nColumns_8; }
	inline void set_nColumns_8(int32_t value)
	{
		___nColumns_8 = value;
	}

	inline static int32_t get_offset_of_spriteRenderer_9() { return static_cast<int32_t>(offsetof(Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2, ___spriteRenderer_9)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_spriteRenderer_9() const { return ___spriteRenderer_9; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_spriteRenderer_9() { return &___spriteRenderer_9; }
	inline void set_spriteRenderer_9(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___spriteRenderer_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteRenderer_9), (void*)value);
	}
};


// TilePooler
struct TilePooler_tDED87420D8B326269BDE0F491CDCC4A240A5C518  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<TilePooler/Pool> TilePooler::pools
	List_1_t60B1C7F49F58BA19849B441B785A5925F5D4F0DF * ___pools_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Queue`1<UnityEngine.GameObject>> TilePooler::poolDictionary
	Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F * ___poolDictionary_6;
	// UnityEngine.GameObject TilePooler::Tile
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Tile_7;
	// System.Int32 TilePooler::nOfTiles
	int32_t ___nOfTiles_8;

public:
	inline static int32_t get_offset_of_pools_5() { return static_cast<int32_t>(offsetof(TilePooler_tDED87420D8B326269BDE0F491CDCC4A240A5C518, ___pools_5)); }
	inline List_1_t60B1C7F49F58BA19849B441B785A5925F5D4F0DF * get_pools_5() const { return ___pools_5; }
	inline List_1_t60B1C7F49F58BA19849B441B785A5925F5D4F0DF ** get_address_of_pools_5() { return &___pools_5; }
	inline void set_pools_5(List_1_t60B1C7F49F58BA19849B441B785A5925F5D4F0DF * value)
	{
		___pools_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pools_5), (void*)value);
	}

	inline static int32_t get_offset_of_poolDictionary_6() { return static_cast<int32_t>(offsetof(TilePooler_tDED87420D8B326269BDE0F491CDCC4A240A5C518, ___poolDictionary_6)); }
	inline Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F * get_poolDictionary_6() const { return ___poolDictionary_6; }
	inline Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F ** get_address_of_poolDictionary_6() { return &___poolDictionary_6; }
	inline void set_poolDictionary_6(Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F * value)
	{
		___poolDictionary_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___poolDictionary_6), (void*)value);
	}

	inline static int32_t get_offset_of_Tile_7() { return static_cast<int32_t>(offsetof(TilePooler_tDED87420D8B326269BDE0F491CDCC4A240A5C518, ___Tile_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Tile_7() const { return ___Tile_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Tile_7() { return &___Tile_7; }
	inline void set_Tile_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Tile_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Tile_7), (void*)value);
	}

	inline static int32_t get_offset_of_nOfTiles_8() { return static_cast<int32_t>(offsetof(TilePooler_tDED87420D8B326269BDE0F491CDCC4A240A5C518, ___nOfTiles_8)); }
	inline int32_t get_nOfTiles_8() const { return ___nOfTiles_8; }
	inline int32_t* get_address_of_nOfTiles_8() { return &___nOfTiles_8; }
	inline void set_nOfTiles_8(int32_t value)
	{
		___nOfTiles_8 = value;
	}
};

struct TilePooler_tDED87420D8B326269BDE0F491CDCC4A240A5C518_StaticFields
{
public:
	// TilePooler TilePooler::Instance
	TilePooler_tDED87420D8B326269BDE0F491CDCC4A240A5C518 * ___Instance_4;

public:
	inline static int32_t get_offset_of_Instance_4() { return static_cast<int32_t>(offsetof(TilePooler_tDED87420D8B326269BDE0F491CDCC4A240A5C518_StaticFields, ___Instance_4)); }
	inline TilePooler_tDED87420D8B326269BDE0F491CDCC4A240A5C518 * get_Instance_4() const { return ___Instance_4; }
	inline TilePooler_tDED87420D8B326269BDE0F491CDCC4A240A5C518 ** get_address_of_Instance_4() { return &___Instance_4; }
	inline void set_Instance_4(TilePooler_tDED87420D8B326269BDE0F491CDCC4A240A5C518 * value)
	{
		___Instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_4), (void*)value);
	}
};


// Trap
struct Trap_t403C39666EA113E958CF61C5E83353C6041A3D0B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// TryHarder
struct TryHarder_t4F3E8B956FBC349BDA6DAF1D7B6D03C3211721AF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean TryHarder::GameStarted
	bool ___GameStarted_4;
	// System.Single TryHarder::timer
	float ___timer_5;
	// UnityEngine.UI.Text TryHarder::StartText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___StartText_6;
	// UnityEngine.GameObject TryHarder::PressAnykeyObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___PressAnykeyObject_7;
	// player TryHarder::player
	player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * ___player_8;

public:
	inline static int32_t get_offset_of_GameStarted_4() { return static_cast<int32_t>(offsetof(TryHarder_t4F3E8B956FBC349BDA6DAF1D7B6D03C3211721AF, ___GameStarted_4)); }
	inline bool get_GameStarted_4() const { return ___GameStarted_4; }
	inline bool* get_address_of_GameStarted_4() { return &___GameStarted_4; }
	inline void set_GameStarted_4(bool value)
	{
		___GameStarted_4 = value;
	}

	inline static int32_t get_offset_of_timer_5() { return static_cast<int32_t>(offsetof(TryHarder_t4F3E8B956FBC349BDA6DAF1D7B6D03C3211721AF, ___timer_5)); }
	inline float get_timer_5() const { return ___timer_5; }
	inline float* get_address_of_timer_5() { return &___timer_5; }
	inline void set_timer_5(float value)
	{
		___timer_5 = value;
	}

	inline static int32_t get_offset_of_StartText_6() { return static_cast<int32_t>(offsetof(TryHarder_t4F3E8B956FBC349BDA6DAF1D7B6D03C3211721AF, ___StartText_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_StartText_6() const { return ___StartText_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_StartText_6() { return &___StartText_6; }
	inline void set_StartText_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___StartText_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StartText_6), (void*)value);
	}

	inline static int32_t get_offset_of_PressAnykeyObject_7() { return static_cast<int32_t>(offsetof(TryHarder_t4F3E8B956FBC349BDA6DAF1D7B6D03C3211721AF, ___PressAnykeyObject_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_PressAnykeyObject_7() const { return ___PressAnykeyObject_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_PressAnykeyObject_7() { return &___PressAnykeyObject_7; }
	inline void set_PressAnykeyObject_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___PressAnykeyObject_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PressAnykeyObject_7), (void*)value);
	}

	inline static int32_t get_offset_of_player_8() { return static_cast<int32_t>(offsetof(TryHarder_t4F3E8B956FBC349BDA6DAF1D7B6D03C3211721AF, ___player_8)); }
	inline player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * get_player_8() const { return ___player_8; }
	inline player_tA80E0022C279849EE513BB6A4017ED62943ADC71 ** get_address_of_player_8() { return &___player_8; }
	inline void set_player_8(player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * value)
	{
		___player_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_8), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UIManager
struct UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// player UIManager::PlayerScript
	player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * ___PlayerScript_4;
	// levelgen UIManager::lvlgenscript
	levelgen_t61ACD1EBFCB7594B9AE7934E46DF321EEB517845 * ___lvlgenscript_5;
	// UnityEngine.GameObject UIManager::GameOverMenu
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___GameOverMenu_6;
	// UnityEngine.GameObject UIManager::PauseMenu
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___PauseMenu_7;
	// UnityEngine.GameObject UIManager::Tilt
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Tilt_8;
	// UnityEngine.GameObject UIManager::FirstPlatform
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___FirstPlatform_9;
	// UnityEngine.GameObject UIManager::PauseButtonObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___PauseButtonObject_10;
	// UnityEngine.Transform UIManager::positionTORestart
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___positionTORestart_11;
	// UnityEngine.Transform UIManager::Player_transform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___Player_transform_12;
	// UnityEngine.Rigidbody2D UIManager::rb
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rb_13;
	// System.Boolean UIManager::IsGameLost
	bool ___IsGameLost_14;

public:
	inline static int32_t get_offset_of_PlayerScript_4() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___PlayerScript_4)); }
	inline player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * get_PlayerScript_4() const { return ___PlayerScript_4; }
	inline player_tA80E0022C279849EE513BB6A4017ED62943ADC71 ** get_address_of_PlayerScript_4() { return &___PlayerScript_4; }
	inline void set_PlayerScript_4(player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * value)
	{
		___PlayerScript_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlayerScript_4), (void*)value);
	}

	inline static int32_t get_offset_of_lvlgenscript_5() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___lvlgenscript_5)); }
	inline levelgen_t61ACD1EBFCB7594B9AE7934E46DF321EEB517845 * get_lvlgenscript_5() const { return ___lvlgenscript_5; }
	inline levelgen_t61ACD1EBFCB7594B9AE7934E46DF321EEB517845 ** get_address_of_lvlgenscript_5() { return &___lvlgenscript_5; }
	inline void set_lvlgenscript_5(levelgen_t61ACD1EBFCB7594B9AE7934E46DF321EEB517845 * value)
	{
		___lvlgenscript_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lvlgenscript_5), (void*)value);
	}

	inline static int32_t get_offset_of_GameOverMenu_6() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___GameOverMenu_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_GameOverMenu_6() const { return ___GameOverMenu_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_GameOverMenu_6() { return &___GameOverMenu_6; }
	inline void set_GameOverMenu_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___GameOverMenu_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GameOverMenu_6), (void*)value);
	}

	inline static int32_t get_offset_of_PauseMenu_7() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___PauseMenu_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_PauseMenu_7() const { return ___PauseMenu_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_PauseMenu_7() { return &___PauseMenu_7; }
	inline void set_PauseMenu_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___PauseMenu_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PauseMenu_7), (void*)value);
	}

	inline static int32_t get_offset_of_Tilt_8() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___Tilt_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Tilt_8() const { return ___Tilt_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Tilt_8() { return &___Tilt_8; }
	inline void set_Tilt_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Tilt_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Tilt_8), (void*)value);
	}

	inline static int32_t get_offset_of_FirstPlatform_9() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___FirstPlatform_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_FirstPlatform_9() const { return ___FirstPlatform_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_FirstPlatform_9() { return &___FirstPlatform_9; }
	inline void set_FirstPlatform_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___FirstPlatform_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FirstPlatform_9), (void*)value);
	}

	inline static int32_t get_offset_of_PauseButtonObject_10() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___PauseButtonObject_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_PauseButtonObject_10() const { return ___PauseButtonObject_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_PauseButtonObject_10() { return &___PauseButtonObject_10; }
	inline void set_PauseButtonObject_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___PauseButtonObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PauseButtonObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_positionTORestart_11() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___positionTORestart_11)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_positionTORestart_11() const { return ___positionTORestart_11; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_positionTORestart_11() { return &___positionTORestart_11; }
	inline void set_positionTORestart_11(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___positionTORestart_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positionTORestart_11), (void*)value);
	}

	inline static int32_t get_offset_of_Player_transform_12() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___Player_transform_12)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_Player_transform_12() const { return ___Player_transform_12; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_Player_transform_12() { return &___Player_transform_12; }
	inline void set_Player_transform_12(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___Player_transform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Player_transform_12), (void*)value);
	}

	inline static int32_t get_offset_of_rb_13() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___rb_13)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rb_13() const { return ___rb_13; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rb_13() { return &___rb_13; }
	inline void set_rb_13(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rb_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_13), (void*)value);
	}

	inline static int32_t get_offset_of_IsGameLost_14() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___IsGameLost_14)); }
	inline bool get_IsGameLost_14() const { return ___IsGameLost_14; }
	inline bool* get_address_of_IsGameLost_14() { return &___IsGameLost_14; }
	inline void set_IsGameLost_14(bool value)
	{
		___IsGameLost_14 = value;
	}
};


// camera
struct camera_t35DE2139B547B353CFA724AB7439D7A92165C646  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform camera::player
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___player_4;
	// UnityEngine.Transform camera::Position_For_Camera_To_start_Moving
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___Position_For_Camera_To_start_Moving_5;
	// UnityEngine.UI.Text camera::SpeedText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___SpeedText_6;
	// System.Single camera::SmoothSpeed
	float ___SmoothSpeed_7;
	// UnityEngine.Vector3 camera::currentvelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___currentvelocity_8;
	// System.Boolean camera::playerStartedPlaying
	bool ___playerStartedPlaying_9;
	// System.Single camera::timer
	float ___timer_10;
	// System.Single camera::CameraMoveSpeed
	float ___CameraMoveSpeed_11;

public:
	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(camera_t35DE2139B547B353CFA724AB7439D7A92165C646, ___player_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_player_4() const { return ___player_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_4), (void*)value);
	}

	inline static int32_t get_offset_of_Position_For_Camera_To_start_Moving_5() { return static_cast<int32_t>(offsetof(camera_t35DE2139B547B353CFA724AB7439D7A92165C646, ___Position_For_Camera_To_start_Moving_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_Position_For_Camera_To_start_Moving_5() const { return ___Position_For_Camera_To_start_Moving_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_Position_For_Camera_To_start_Moving_5() { return &___Position_For_Camera_To_start_Moving_5; }
	inline void set_Position_For_Camera_To_start_Moving_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___Position_For_Camera_To_start_Moving_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Position_For_Camera_To_start_Moving_5), (void*)value);
	}

	inline static int32_t get_offset_of_SpeedText_6() { return static_cast<int32_t>(offsetof(camera_t35DE2139B547B353CFA724AB7439D7A92165C646, ___SpeedText_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_SpeedText_6() const { return ___SpeedText_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_SpeedText_6() { return &___SpeedText_6; }
	inline void set_SpeedText_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___SpeedText_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SpeedText_6), (void*)value);
	}

	inline static int32_t get_offset_of_SmoothSpeed_7() { return static_cast<int32_t>(offsetof(camera_t35DE2139B547B353CFA724AB7439D7A92165C646, ___SmoothSpeed_7)); }
	inline float get_SmoothSpeed_7() const { return ___SmoothSpeed_7; }
	inline float* get_address_of_SmoothSpeed_7() { return &___SmoothSpeed_7; }
	inline void set_SmoothSpeed_7(float value)
	{
		___SmoothSpeed_7 = value;
	}

	inline static int32_t get_offset_of_currentvelocity_8() { return static_cast<int32_t>(offsetof(camera_t35DE2139B547B353CFA724AB7439D7A92165C646, ___currentvelocity_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_currentvelocity_8() const { return ___currentvelocity_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_currentvelocity_8() { return &___currentvelocity_8; }
	inline void set_currentvelocity_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___currentvelocity_8 = value;
	}

	inline static int32_t get_offset_of_playerStartedPlaying_9() { return static_cast<int32_t>(offsetof(camera_t35DE2139B547B353CFA724AB7439D7A92165C646, ___playerStartedPlaying_9)); }
	inline bool get_playerStartedPlaying_9() const { return ___playerStartedPlaying_9; }
	inline bool* get_address_of_playerStartedPlaying_9() { return &___playerStartedPlaying_9; }
	inline void set_playerStartedPlaying_9(bool value)
	{
		___playerStartedPlaying_9 = value;
	}

	inline static int32_t get_offset_of_timer_10() { return static_cast<int32_t>(offsetof(camera_t35DE2139B547B353CFA724AB7439D7A92165C646, ___timer_10)); }
	inline float get_timer_10() const { return ___timer_10; }
	inline float* get_address_of_timer_10() { return &___timer_10; }
	inline void set_timer_10(float value)
	{
		___timer_10 = value;
	}

	inline static int32_t get_offset_of_CameraMoveSpeed_11() { return static_cast<int32_t>(offsetof(camera_t35DE2139B547B353CFA724AB7439D7A92165C646, ___CameraMoveSpeed_11)); }
	inline float get_CameraMoveSpeed_11() const { return ___CameraMoveSpeed_11; }
	inline float* get_address_of_CameraMoveSpeed_11() { return &___CameraMoveSpeed_11; }
	inline void set_CameraMoveSpeed_11(float value)
	{
		___CameraMoveSpeed_11 = value;
	}
};


// levelgen
struct levelgen_t61ACD1EBFCB7594B9AE7934E46DF321EEB517845  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector3 levelgen::startPosition1
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___startPosition1_4;
	// UnityEngine.Vector3 levelgen::firstPlatforms
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___firstPlatforms_5;
	// System.Single levelgen::Timer
	float ___Timer_6;
	// System.Single levelgen::maxTimer
	float ___maxTimer_7;
	// System.Collections.Generic.List`1<levelgen/Platform> levelgen::PlatformList
	List_1_t1962AE351C867A2D55EBF2EF233FE6F05086E474 * ___PlatformList_8;
	// System.Boolean levelgen::GameStarted
	bool ___GameStarted_9;
	// UnityEngine.Transform levelgen::PositionToDelete
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___PositionToDelete_10;
	// UnityEngine.Transform levelgen::player
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___player_11;
	// System.Int32 levelgen::counter_To_Spawn_JumpPad
	int32_t ___counter_To_Spawn_JumpPad_12;
	// System.Int32 levelgen::random_num_to_spawn_ToChoose_jumppad
	int32_t ___random_num_to_spawn_ToChoose_jumppad_13;
	// System.Int32 levelgen::Counter_for_platforms
	int32_t ___Counter_for_platforms_14;
	// System.Int32 levelgen::RandomForTypeOfPlatform
	int32_t ___RandomForTypeOfPlatform_15;
	// System.Single levelgen::yRangeRandom
	float ___yRangeRandom_16;
	// System.Single levelgen::yRangeRandom2
	float ___yRangeRandom2_17;
	// UnityEngine.Rigidbody2D levelgen::rb
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rb_18;
	// System.Single levelgen::timerForGapSize
	float ___timerForGapSize_19;

public:
	inline static int32_t get_offset_of_startPosition1_4() { return static_cast<int32_t>(offsetof(levelgen_t61ACD1EBFCB7594B9AE7934E46DF321EEB517845, ___startPosition1_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_startPosition1_4() const { return ___startPosition1_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_startPosition1_4() { return &___startPosition1_4; }
	inline void set_startPosition1_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___startPosition1_4 = value;
	}

	inline static int32_t get_offset_of_firstPlatforms_5() { return static_cast<int32_t>(offsetof(levelgen_t61ACD1EBFCB7594B9AE7934E46DF321EEB517845, ___firstPlatforms_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_firstPlatforms_5() const { return ___firstPlatforms_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_firstPlatforms_5() { return &___firstPlatforms_5; }
	inline void set_firstPlatforms_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___firstPlatforms_5 = value;
	}

	inline static int32_t get_offset_of_Timer_6() { return static_cast<int32_t>(offsetof(levelgen_t61ACD1EBFCB7594B9AE7934E46DF321EEB517845, ___Timer_6)); }
	inline float get_Timer_6() const { return ___Timer_6; }
	inline float* get_address_of_Timer_6() { return &___Timer_6; }
	inline void set_Timer_6(float value)
	{
		___Timer_6 = value;
	}

	inline static int32_t get_offset_of_maxTimer_7() { return static_cast<int32_t>(offsetof(levelgen_t61ACD1EBFCB7594B9AE7934E46DF321EEB517845, ___maxTimer_7)); }
	inline float get_maxTimer_7() const { return ___maxTimer_7; }
	inline float* get_address_of_maxTimer_7() { return &___maxTimer_7; }
	inline void set_maxTimer_7(float value)
	{
		___maxTimer_7 = value;
	}

	inline static int32_t get_offset_of_PlatformList_8() { return static_cast<int32_t>(offsetof(levelgen_t61ACD1EBFCB7594B9AE7934E46DF321EEB517845, ___PlatformList_8)); }
	inline List_1_t1962AE351C867A2D55EBF2EF233FE6F05086E474 * get_PlatformList_8() const { return ___PlatformList_8; }
	inline List_1_t1962AE351C867A2D55EBF2EF233FE6F05086E474 ** get_address_of_PlatformList_8() { return &___PlatformList_8; }
	inline void set_PlatformList_8(List_1_t1962AE351C867A2D55EBF2EF233FE6F05086E474 * value)
	{
		___PlatformList_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlatformList_8), (void*)value);
	}

	inline static int32_t get_offset_of_GameStarted_9() { return static_cast<int32_t>(offsetof(levelgen_t61ACD1EBFCB7594B9AE7934E46DF321EEB517845, ___GameStarted_9)); }
	inline bool get_GameStarted_9() const { return ___GameStarted_9; }
	inline bool* get_address_of_GameStarted_9() { return &___GameStarted_9; }
	inline void set_GameStarted_9(bool value)
	{
		___GameStarted_9 = value;
	}

	inline static int32_t get_offset_of_PositionToDelete_10() { return static_cast<int32_t>(offsetof(levelgen_t61ACD1EBFCB7594B9AE7934E46DF321EEB517845, ___PositionToDelete_10)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_PositionToDelete_10() const { return ___PositionToDelete_10; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_PositionToDelete_10() { return &___PositionToDelete_10; }
	inline void set_PositionToDelete_10(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___PositionToDelete_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PositionToDelete_10), (void*)value);
	}

	inline static int32_t get_offset_of_player_11() { return static_cast<int32_t>(offsetof(levelgen_t61ACD1EBFCB7594B9AE7934E46DF321EEB517845, ___player_11)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_player_11() const { return ___player_11; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_player_11() { return &___player_11; }
	inline void set_player_11(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___player_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_11), (void*)value);
	}

	inline static int32_t get_offset_of_counter_To_Spawn_JumpPad_12() { return static_cast<int32_t>(offsetof(levelgen_t61ACD1EBFCB7594B9AE7934E46DF321EEB517845, ___counter_To_Spawn_JumpPad_12)); }
	inline int32_t get_counter_To_Spawn_JumpPad_12() const { return ___counter_To_Spawn_JumpPad_12; }
	inline int32_t* get_address_of_counter_To_Spawn_JumpPad_12() { return &___counter_To_Spawn_JumpPad_12; }
	inline void set_counter_To_Spawn_JumpPad_12(int32_t value)
	{
		___counter_To_Spawn_JumpPad_12 = value;
	}

	inline static int32_t get_offset_of_random_num_to_spawn_ToChoose_jumppad_13() { return static_cast<int32_t>(offsetof(levelgen_t61ACD1EBFCB7594B9AE7934E46DF321EEB517845, ___random_num_to_spawn_ToChoose_jumppad_13)); }
	inline int32_t get_random_num_to_spawn_ToChoose_jumppad_13() const { return ___random_num_to_spawn_ToChoose_jumppad_13; }
	inline int32_t* get_address_of_random_num_to_spawn_ToChoose_jumppad_13() { return &___random_num_to_spawn_ToChoose_jumppad_13; }
	inline void set_random_num_to_spawn_ToChoose_jumppad_13(int32_t value)
	{
		___random_num_to_spawn_ToChoose_jumppad_13 = value;
	}

	inline static int32_t get_offset_of_Counter_for_platforms_14() { return static_cast<int32_t>(offsetof(levelgen_t61ACD1EBFCB7594B9AE7934E46DF321EEB517845, ___Counter_for_platforms_14)); }
	inline int32_t get_Counter_for_platforms_14() const { return ___Counter_for_platforms_14; }
	inline int32_t* get_address_of_Counter_for_platforms_14() { return &___Counter_for_platforms_14; }
	inline void set_Counter_for_platforms_14(int32_t value)
	{
		___Counter_for_platforms_14 = value;
	}

	inline static int32_t get_offset_of_RandomForTypeOfPlatform_15() { return static_cast<int32_t>(offsetof(levelgen_t61ACD1EBFCB7594B9AE7934E46DF321EEB517845, ___RandomForTypeOfPlatform_15)); }
	inline int32_t get_RandomForTypeOfPlatform_15() const { return ___RandomForTypeOfPlatform_15; }
	inline int32_t* get_address_of_RandomForTypeOfPlatform_15() { return &___RandomForTypeOfPlatform_15; }
	inline void set_RandomForTypeOfPlatform_15(int32_t value)
	{
		___RandomForTypeOfPlatform_15 = value;
	}

	inline static int32_t get_offset_of_yRangeRandom_16() { return static_cast<int32_t>(offsetof(levelgen_t61ACD1EBFCB7594B9AE7934E46DF321EEB517845, ___yRangeRandom_16)); }
	inline float get_yRangeRandom_16() const { return ___yRangeRandom_16; }
	inline float* get_address_of_yRangeRandom_16() { return &___yRangeRandom_16; }
	inline void set_yRangeRandom_16(float value)
	{
		___yRangeRandom_16 = value;
	}

	inline static int32_t get_offset_of_yRangeRandom2_17() { return static_cast<int32_t>(offsetof(levelgen_t61ACD1EBFCB7594B9AE7934E46DF321EEB517845, ___yRangeRandom2_17)); }
	inline float get_yRangeRandom2_17() const { return ___yRangeRandom2_17; }
	inline float* get_address_of_yRangeRandom2_17() { return &___yRangeRandom2_17; }
	inline void set_yRangeRandom2_17(float value)
	{
		___yRangeRandom2_17 = value;
	}

	inline static int32_t get_offset_of_rb_18() { return static_cast<int32_t>(offsetof(levelgen_t61ACD1EBFCB7594B9AE7934E46DF321EEB517845, ___rb_18)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rb_18() const { return ___rb_18; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rb_18() { return &___rb_18; }
	inline void set_rb_18(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rb_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_18), (void*)value);
	}

	inline static int32_t get_offset_of_timerForGapSize_19() { return static_cast<int32_t>(offsetof(levelgen_t61ACD1EBFCB7594B9AE7934E46DF321EEB517845, ___timerForGapSize_19)); }
	inline float get_timerForGapSize_19() const { return ___timerForGapSize_19; }
	inline float* get_address_of_timerForGapSize_19() { return &___timerForGapSize_19; }
	inline void set_timerForGapSize_19(float value)
	{
		___timerForGapSize_19 = value;
	}
};


// player
struct player_tA80E0022C279849EE513BB6A4017ED62943ADC71  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.ParticleSystem player::Dust
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___Dust_4;
	// UnityEngine.ParticleSystem player::Dust2
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___Dust2_5;
	// UnityEngine.Rigidbody2D player::rb
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rb_6;
	// UnityEngine.Animator player::anim
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___anim_7;
	// UnityEngine.SpriteRenderer player::sp
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___sp_8;
	// UnityEngine.Transform player::GroundCheckPosition
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___GroundCheckPosition_9;
	// UnityEngine.LayerMask player::WhatIsGround
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___WhatIsGround_10;
	// System.Single player::CheckRaidus
	float ___CheckRaidus_11;
	// System.Boolean player::isGrounded
	bool ___isGrounded_12;
	// System.Single player::movementSpeed
	float ___movementSpeed_13;
	// System.Single player::movement
	float ___movement_14;
	// System.Single player::jumpforce
	float ___jumpforce_15;
	// System.Boolean player::Jumprequest
	bool ___Jumprequest_16;
	// System.Single player::timerForPowerUp
	float ___timerForPowerUp_17;
	// System.Single player::timerForPowerUpMax
	float ___timerForPowerUpMax_18;
	// System.Single player::BoostCapacity
	float ___BoostCapacity_19;
	// System.Single player::BoostCapacityMax
	float ___BoostCapacityMax_20;
	// BoostBar player::boostScript
	BoostBar_t248D99B7988BF361E572025F1E7D66B05DBACDA0 * ___boostScript_21;
	// System.Single player::BoostCooldown
	float ___BoostCooldown_22;
	// System.Single player::BoostCooldownMax
	float ___BoostCooldownMax_23;
	// System.Boolean player::increaseBoost
	bool ___increaseBoost_24;

public:
	inline static int32_t get_offset_of_Dust_4() { return static_cast<int32_t>(offsetof(player_tA80E0022C279849EE513BB6A4017ED62943ADC71, ___Dust_4)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_Dust_4() const { return ___Dust_4; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_Dust_4() { return &___Dust_4; }
	inline void set_Dust_4(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___Dust_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Dust_4), (void*)value);
	}

	inline static int32_t get_offset_of_Dust2_5() { return static_cast<int32_t>(offsetof(player_tA80E0022C279849EE513BB6A4017ED62943ADC71, ___Dust2_5)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_Dust2_5() const { return ___Dust2_5; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_Dust2_5() { return &___Dust2_5; }
	inline void set_Dust2_5(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___Dust2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Dust2_5), (void*)value);
	}

	inline static int32_t get_offset_of_rb_6() { return static_cast<int32_t>(offsetof(player_tA80E0022C279849EE513BB6A4017ED62943ADC71, ___rb_6)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rb_6() const { return ___rb_6; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rb_6() { return &___rb_6; }
	inline void set_rb_6(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rb_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_6), (void*)value);
	}

	inline static int32_t get_offset_of_anim_7() { return static_cast<int32_t>(offsetof(player_tA80E0022C279849EE513BB6A4017ED62943ADC71, ___anim_7)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_anim_7() const { return ___anim_7; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_anim_7() { return &___anim_7; }
	inline void set_anim_7(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___anim_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anim_7), (void*)value);
	}

	inline static int32_t get_offset_of_sp_8() { return static_cast<int32_t>(offsetof(player_tA80E0022C279849EE513BB6A4017ED62943ADC71, ___sp_8)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_sp_8() const { return ___sp_8; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_sp_8() { return &___sp_8; }
	inline void set_sp_8(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___sp_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sp_8), (void*)value);
	}

	inline static int32_t get_offset_of_GroundCheckPosition_9() { return static_cast<int32_t>(offsetof(player_tA80E0022C279849EE513BB6A4017ED62943ADC71, ___GroundCheckPosition_9)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_GroundCheckPosition_9() const { return ___GroundCheckPosition_9; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_GroundCheckPosition_9() { return &___GroundCheckPosition_9; }
	inline void set_GroundCheckPosition_9(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___GroundCheckPosition_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GroundCheckPosition_9), (void*)value);
	}

	inline static int32_t get_offset_of_WhatIsGround_10() { return static_cast<int32_t>(offsetof(player_tA80E0022C279849EE513BB6A4017ED62943ADC71, ___WhatIsGround_10)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_WhatIsGround_10() const { return ___WhatIsGround_10; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_WhatIsGround_10() { return &___WhatIsGround_10; }
	inline void set_WhatIsGround_10(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___WhatIsGround_10 = value;
	}

	inline static int32_t get_offset_of_CheckRaidus_11() { return static_cast<int32_t>(offsetof(player_tA80E0022C279849EE513BB6A4017ED62943ADC71, ___CheckRaidus_11)); }
	inline float get_CheckRaidus_11() const { return ___CheckRaidus_11; }
	inline float* get_address_of_CheckRaidus_11() { return &___CheckRaidus_11; }
	inline void set_CheckRaidus_11(float value)
	{
		___CheckRaidus_11 = value;
	}

	inline static int32_t get_offset_of_isGrounded_12() { return static_cast<int32_t>(offsetof(player_tA80E0022C279849EE513BB6A4017ED62943ADC71, ___isGrounded_12)); }
	inline bool get_isGrounded_12() const { return ___isGrounded_12; }
	inline bool* get_address_of_isGrounded_12() { return &___isGrounded_12; }
	inline void set_isGrounded_12(bool value)
	{
		___isGrounded_12 = value;
	}

	inline static int32_t get_offset_of_movementSpeed_13() { return static_cast<int32_t>(offsetof(player_tA80E0022C279849EE513BB6A4017ED62943ADC71, ___movementSpeed_13)); }
	inline float get_movementSpeed_13() const { return ___movementSpeed_13; }
	inline float* get_address_of_movementSpeed_13() { return &___movementSpeed_13; }
	inline void set_movementSpeed_13(float value)
	{
		___movementSpeed_13 = value;
	}

	inline static int32_t get_offset_of_movement_14() { return static_cast<int32_t>(offsetof(player_tA80E0022C279849EE513BB6A4017ED62943ADC71, ___movement_14)); }
	inline float get_movement_14() const { return ___movement_14; }
	inline float* get_address_of_movement_14() { return &___movement_14; }
	inline void set_movement_14(float value)
	{
		___movement_14 = value;
	}

	inline static int32_t get_offset_of_jumpforce_15() { return static_cast<int32_t>(offsetof(player_tA80E0022C279849EE513BB6A4017ED62943ADC71, ___jumpforce_15)); }
	inline float get_jumpforce_15() const { return ___jumpforce_15; }
	inline float* get_address_of_jumpforce_15() { return &___jumpforce_15; }
	inline void set_jumpforce_15(float value)
	{
		___jumpforce_15 = value;
	}

	inline static int32_t get_offset_of_Jumprequest_16() { return static_cast<int32_t>(offsetof(player_tA80E0022C279849EE513BB6A4017ED62943ADC71, ___Jumprequest_16)); }
	inline bool get_Jumprequest_16() const { return ___Jumprequest_16; }
	inline bool* get_address_of_Jumprequest_16() { return &___Jumprequest_16; }
	inline void set_Jumprequest_16(bool value)
	{
		___Jumprequest_16 = value;
	}

	inline static int32_t get_offset_of_timerForPowerUp_17() { return static_cast<int32_t>(offsetof(player_tA80E0022C279849EE513BB6A4017ED62943ADC71, ___timerForPowerUp_17)); }
	inline float get_timerForPowerUp_17() const { return ___timerForPowerUp_17; }
	inline float* get_address_of_timerForPowerUp_17() { return &___timerForPowerUp_17; }
	inline void set_timerForPowerUp_17(float value)
	{
		___timerForPowerUp_17 = value;
	}

	inline static int32_t get_offset_of_timerForPowerUpMax_18() { return static_cast<int32_t>(offsetof(player_tA80E0022C279849EE513BB6A4017ED62943ADC71, ___timerForPowerUpMax_18)); }
	inline float get_timerForPowerUpMax_18() const { return ___timerForPowerUpMax_18; }
	inline float* get_address_of_timerForPowerUpMax_18() { return &___timerForPowerUpMax_18; }
	inline void set_timerForPowerUpMax_18(float value)
	{
		___timerForPowerUpMax_18 = value;
	}

	inline static int32_t get_offset_of_BoostCapacity_19() { return static_cast<int32_t>(offsetof(player_tA80E0022C279849EE513BB6A4017ED62943ADC71, ___BoostCapacity_19)); }
	inline float get_BoostCapacity_19() const { return ___BoostCapacity_19; }
	inline float* get_address_of_BoostCapacity_19() { return &___BoostCapacity_19; }
	inline void set_BoostCapacity_19(float value)
	{
		___BoostCapacity_19 = value;
	}

	inline static int32_t get_offset_of_BoostCapacityMax_20() { return static_cast<int32_t>(offsetof(player_tA80E0022C279849EE513BB6A4017ED62943ADC71, ___BoostCapacityMax_20)); }
	inline float get_BoostCapacityMax_20() const { return ___BoostCapacityMax_20; }
	inline float* get_address_of_BoostCapacityMax_20() { return &___BoostCapacityMax_20; }
	inline void set_BoostCapacityMax_20(float value)
	{
		___BoostCapacityMax_20 = value;
	}

	inline static int32_t get_offset_of_boostScript_21() { return static_cast<int32_t>(offsetof(player_tA80E0022C279849EE513BB6A4017ED62943ADC71, ___boostScript_21)); }
	inline BoostBar_t248D99B7988BF361E572025F1E7D66B05DBACDA0 * get_boostScript_21() const { return ___boostScript_21; }
	inline BoostBar_t248D99B7988BF361E572025F1E7D66B05DBACDA0 ** get_address_of_boostScript_21() { return &___boostScript_21; }
	inline void set_boostScript_21(BoostBar_t248D99B7988BF361E572025F1E7D66B05DBACDA0 * value)
	{
		___boostScript_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boostScript_21), (void*)value);
	}

	inline static int32_t get_offset_of_BoostCooldown_22() { return static_cast<int32_t>(offsetof(player_tA80E0022C279849EE513BB6A4017ED62943ADC71, ___BoostCooldown_22)); }
	inline float get_BoostCooldown_22() const { return ___BoostCooldown_22; }
	inline float* get_address_of_BoostCooldown_22() { return &___BoostCooldown_22; }
	inline void set_BoostCooldown_22(float value)
	{
		___BoostCooldown_22 = value;
	}

	inline static int32_t get_offset_of_BoostCooldownMax_23() { return static_cast<int32_t>(offsetof(player_tA80E0022C279849EE513BB6A4017ED62943ADC71, ___BoostCooldownMax_23)); }
	inline float get_BoostCooldownMax_23() const { return ___BoostCooldownMax_23; }
	inline float* get_address_of_BoostCooldownMax_23() { return &___BoostCooldownMax_23; }
	inline void set_BoostCooldownMax_23(float value)
	{
		___BoostCooldownMax_23 = value;
	}

	inline static int32_t get_offset_of_increaseBoost_24() { return static_cast<int32_t>(offsetof(player_tA80E0022C279849EE513BB6A4017ED62943ADC71, ___increaseBoost_24)); }
	inline bool get_increaseBoost_24() const { return ___increaseBoost_24; }
	inline bool* get_address_of_increaseBoost_24() { return &___increaseBoost_24; }
	inline void set_increaseBoost_24(bool value)
	{
		___increaseBoost_24 = value;
	}
};


// woodenPlatForm
struct woodenPlatForm_t9681D2559C55471E6D631C1D7D7A901395BEF628  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Endless2D
struct Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981  : public Singleton_t85C95C878D42548878AD1318351EC6E51A48162F
{
public:
	// UnityEngine.Sprite[] Endless2D::availableSprites
	SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* ___availableSprites_5;
	// Endless2D/center Endless2D::gridCenter
	int32_t ___gridCenter_6;
	// System.Int32 Endless2D::nColumns
	int32_t ___nColumns_7;
	// System.Int32 Endless2D::nRows
	int32_t ___nRows_8;
	// System.Single Endless2D::tileSize
	float ___tileSize_9;
	// System.Single Endless2D::movementSpeed
	float ___movementSpeed_10;
	// Endless2D/tileDir Endless2D::tileDirection
	int32_t ___tileDirection_11;
	// UnityEngine.Vector3 Endless2D::movementDirection
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___movementDirection_12;
	// TilePooler Endless2D::tilePooler
	TilePooler_tDED87420D8B326269BDE0F491CDCC4A240A5C518 * ___tilePooler_13;
	// UnityEngine.Vector3 Endless2D::HDirectionVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___HDirectionVector_14;
	// UnityEngine.Vector3 Endless2D::VDirectionVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___VDirectionVector_15;
	// UnityEngine.Vector3 Endless2D::FirstTile
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___FirstTile_16;
	// UnityEngine.Vector3 Endless2D::LastTile
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___LastTile_17;

public:
	inline static int32_t get_offset_of_availableSprites_5() { return static_cast<int32_t>(offsetof(Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981, ___availableSprites_5)); }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* get_availableSprites_5() const { return ___availableSprites_5; }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77** get_address_of_availableSprites_5() { return &___availableSprites_5; }
	inline void set_availableSprites_5(SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* value)
	{
		___availableSprites_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___availableSprites_5), (void*)value);
	}

	inline static int32_t get_offset_of_gridCenter_6() { return static_cast<int32_t>(offsetof(Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981, ___gridCenter_6)); }
	inline int32_t get_gridCenter_6() const { return ___gridCenter_6; }
	inline int32_t* get_address_of_gridCenter_6() { return &___gridCenter_6; }
	inline void set_gridCenter_6(int32_t value)
	{
		___gridCenter_6 = value;
	}

	inline static int32_t get_offset_of_nColumns_7() { return static_cast<int32_t>(offsetof(Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981, ___nColumns_7)); }
	inline int32_t get_nColumns_7() const { return ___nColumns_7; }
	inline int32_t* get_address_of_nColumns_7() { return &___nColumns_7; }
	inline void set_nColumns_7(int32_t value)
	{
		___nColumns_7 = value;
	}

	inline static int32_t get_offset_of_nRows_8() { return static_cast<int32_t>(offsetof(Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981, ___nRows_8)); }
	inline int32_t get_nRows_8() const { return ___nRows_8; }
	inline int32_t* get_address_of_nRows_8() { return &___nRows_8; }
	inline void set_nRows_8(int32_t value)
	{
		___nRows_8 = value;
	}

	inline static int32_t get_offset_of_tileSize_9() { return static_cast<int32_t>(offsetof(Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981, ___tileSize_9)); }
	inline float get_tileSize_9() const { return ___tileSize_9; }
	inline float* get_address_of_tileSize_9() { return &___tileSize_9; }
	inline void set_tileSize_9(float value)
	{
		___tileSize_9 = value;
	}

	inline static int32_t get_offset_of_movementSpeed_10() { return static_cast<int32_t>(offsetof(Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981, ___movementSpeed_10)); }
	inline float get_movementSpeed_10() const { return ___movementSpeed_10; }
	inline float* get_address_of_movementSpeed_10() { return &___movementSpeed_10; }
	inline void set_movementSpeed_10(float value)
	{
		___movementSpeed_10 = value;
	}

	inline static int32_t get_offset_of_tileDirection_11() { return static_cast<int32_t>(offsetof(Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981, ___tileDirection_11)); }
	inline int32_t get_tileDirection_11() const { return ___tileDirection_11; }
	inline int32_t* get_address_of_tileDirection_11() { return &___tileDirection_11; }
	inline void set_tileDirection_11(int32_t value)
	{
		___tileDirection_11 = value;
	}

	inline static int32_t get_offset_of_movementDirection_12() { return static_cast<int32_t>(offsetof(Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981, ___movementDirection_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_movementDirection_12() const { return ___movementDirection_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_movementDirection_12() { return &___movementDirection_12; }
	inline void set_movementDirection_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___movementDirection_12 = value;
	}

	inline static int32_t get_offset_of_tilePooler_13() { return static_cast<int32_t>(offsetof(Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981, ___tilePooler_13)); }
	inline TilePooler_tDED87420D8B326269BDE0F491CDCC4A240A5C518 * get_tilePooler_13() const { return ___tilePooler_13; }
	inline TilePooler_tDED87420D8B326269BDE0F491CDCC4A240A5C518 ** get_address_of_tilePooler_13() { return &___tilePooler_13; }
	inline void set_tilePooler_13(TilePooler_tDED87420D8B326269BDE0F491CDCC4A240A5C518 * value)
	{
		___tilePooler_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tilePooler_13), (void*)value);
	}

	inline static int32_t get_offset_of_HDirectionVector_14() { return static_cast<int32_t>(offsetof(Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981, ___HDirectionVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_HDirectionVector_14() const { return ___HDirectionVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_HDirectionVector_14() { return &___HDirectionVector_14; }
	inline void set_HDirectionVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___HDirectionVector_14 = value;
	}

	inline static int32_t get_offset_of_VDirectionVector_15() { return static_cast<int32_t>(offsetof(Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981, ___VDirectionVector_15)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_VDirectionVector_15() const { return ___VDirectionVector_15; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_VDirectionVector_15() { return &___VDirectionVector_15; }
	inline void set_VDirectionVector_15(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___VDirectionVector_15 = value;
	}

	inline static int32_t get_offset_of_FirstTile_16() { return static_cast<int32_t>(offsetof(Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981, ___FirstTile_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_FirstTile_16() const { return ___FirstTile_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_FirstTile_16() { return &___FirstTile_16; }
	inline void set_FirstTile_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___FirstTile_16 = value;
	}

	inline static int32_t get_offset_of_LastTile_17() { return static_cast<int32_t>(offsetof(Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981, ___LastTile_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_LastTile_17() const { return ___LastTile_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_LastTile_17() { return &___LastTile_17; }
	inline void set_LastTile_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___LastTile_17 = value;
	}
};

struct Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981_StaticFields
{
public:
	// System.Collections.Generic.List`1<Tile> Endless2D::availableTiles
	List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8 * ___availableTiles_18;

public:
	inline static int32_t get_offset_of_availableTiles_18() { return static_cast<int32_t>(offsetof(Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981_StaticFields, ___availableTiles_18)); }
	inline List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8 * get_availableTiles_18() const { return ___availableTiles_18; }
	inline List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8 ** get_address_of_availableTiles_18() { return &___availableTiles_18; }
	inline void set_availableTiles_18(List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8 * value)
	{
		___availableTiles_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___availableTiles_18), (void*)value);
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


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
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


// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;

public:
	inline static int32_t get_offset_of_m_FillRect_20() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillRect_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillRect_20() const { return ___m_FillRect_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillRect_20() { return &___m_FillRect_20; }
	inline void set_m_FillRect_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillRect_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillRect_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleRect_21() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleRect_21)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleRect_21() const { return ___m_HandleRect_21; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleRect_21() { return &___m_HandleRect_21; }
	inline void set_m_HandleRect_21(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleRect_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleRect_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Direction_22() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Direction_22)); }
	inline int32_t get_m_Direction_22() const { return ___m_Direction_22; }
	inline int32_t* get_address_of_m_Direction_22() { return &___m_Direction_22; }
	inline void set_m_Direction_22(int32_t value)
	{
		___m_Direction_22 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_23() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MinValue_23)); }
	inline float get_m_MinValue_23() const { return ___m_MinValue_23; }
	inline float* get_address_of_m_MinValue_23() { return &___m_MinValue_23; }
	inline void set_m_MinValue_23(float value)
	{
		___m_MinValue_23 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_24() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MaxValue_24)); }
	inline float get_m_MaxValue_24() const { return ___m_MaxValue_24; }
	inline float* get_address_of_m_MaxValue_24() { return &___m_MaxValue_24; }
	inline void set_m_MaxValue_24(float value)
	{
		___m_MaxValue_24 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_25() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_WholeNumbers_25)); }
	inline bool get_m_WholeNumbers_25() const { return ___m_WholeNumbers_25; }
	inline bool* get_address_of_m_WholeNumbers_25() { return &___m_WholeNumbers_25; }
	inline void set_m_WholeNumbers_25(bool value)
	{
		___m_WholeNumbers_25 = value;
	}

	inline static int32_t get_offset_of_m_Value_26() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Value_26)); }
	inline float get_m_Value_26() const { return ___m_Value_26; }
	inline float* get_address_of_m_Value_26() { return &___m_Value_26; }
	inline void set_m_Value_26(float value)
	{
		___m_Value_26 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_OnValueChanged_27)); }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillImage_28() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillImage_28)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_FillImage_28() const { return ___m_FillImage_28; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_FillImage_28() { return &___m_FillImage_28; }
	inline void set_m_FillImage_28(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_FillImage_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillImage_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillTransform_29() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillTransform_29)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_FillTransform_29() const { return ___m_FillTransform_29; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_FillTransform_29() { return &___m_FillTransform_29; }
	inline void set_m_FillTransform_29(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_FillTransform_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillTransform_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillContainerRect_30() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillContainerRect_30)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillContainerRect_30() const { return ___m_FillContainerRect_30; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillContainerRect_30() { return &___m_FillContainerRect_30; }
	inline void set_m_FillContainerRect_30(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillContainerRect_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillContainerRect_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_31() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleTransform_31)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_HandleTransform_31() const { return ___m_HandleTransform_31; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_HandleTransform_31() { return &___m_HandleTransform_31; }
	inline void set_m_HandleTransform_31(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_HandleTransform_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleTransform_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_32() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleContainerRect_32)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleContainerRect_32() const { return ___m_HandleContainerRect_32; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleContainerRect_32() { return &___m_HandleContainerRect_32; }
	inline void set_m_HandleContainerRect_32(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleContainerRect_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleContainerRect_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_Offset_33() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Offset_33)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Offset_33() const { return ___m_Offset_33; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Offset_33() { return &___m_Offset_33; }
	inline void set_m_Offset_33(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Offset_33 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_34() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Tracker_34)); }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  get_m_Tracker_34() const { return ___m_Tracker_34; }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * get_address_of_m_Tracker_34() { return &___m_Tracker_34; }
	inline void set_m_Tracker_34(DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  value)
	{
		___m_Tracker_34 = value;
	}

	inline static int32_t get_offset_of_m_DelayedUpdateVisuals_35() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_DelayedUpdateVisuals_35)); }
	inline bool get_m_DelayedUpdateVisuals_35() const { return ___m_DelayedUpdateVisuals_35; }
	inline bool* get_address_of_m_DelayedUpdateVisuals_35() { return &___m_DelayedUpdateVisuals_35; }
	inline void set_m_DelayedUpdateVisuals_35(bool value)
	{
		___m_DelayedUpdateVisuals_35 = value;
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
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
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * m_Items[1];

public:
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// GameAssets/SoundAudioCLip[]
struct SoundAudioCLipU5BU5D_tC99FE4DDA1016FE55480E06D2270114003FFBE52  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SoundAudioCLip_tAB30A76E0CD7C69194C05CDBF49214309CDDF88F * m_Items[1];

public:
	inline SoundAudioCLip_tAB30A76E0CD7C69194C05CDBF49214309CDDF88F * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SoundAudioCLip_tAB30A76E0CD7C69194C05CDBF49214309CDDF88F ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SoundAudioCLip_tAB30A76E0CD7C69194C05CDBF49214309CDDF88F * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SoundAudioCLip_tAB30A76E0CD7C69194C05CDBF49214309CDDF88F * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SoundAudioCLip_tAB30A76E0CD7C69194C05CDBF49214309CDDF88F ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SoundAudioCLip_tAB30A76E0CD7C69194C05CDBF49214309CDDF88F * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
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
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCD926FC30344C798257AE0FD8F6A779EEF9EAB19_gshared (Dictionary_2_t8D5BC3EE868F5A69127B67EF92B01E5681B0732E * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Single>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mD415F256512625A44EDF80C9E2E744977C9DA5DC_gshared (Dictionary_2_t8D5BC3EE868F5A69127B67EF92B01E5681B0732E * __this, int32_t ___key0, float ___value1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Single>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mC2EACDF5FEE8E1D456E37A9CD964E044DCA95D3A_gshared (Dictionary_2_t8D5BC3EE868F5A69127B67EF92B01E5681B0732E * __this, int32_t ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Single>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Dictionary_2_get_Item_mAC3C993C28AC91549B24A35740A1A728D3685068_gshared (Dictionary_2_t8D5BC3EE868F5A69127B67EF92B01E5681B0732E * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// GameAssets GameAssets::Getinstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191 * GameAssets_Getinstance_mF8747563EFDDFA3B04BAAF1A80721A1FAB2631F8 (const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.Transform>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mC13E8DA0CA1DFD88310E2E066C5479E3994BAA30 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * (*) (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Slider::set_maxValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_set_maxValue_m5CDA3D451B68CF2D3FCFF43D1738D1DCC1C6425B (Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Gradient::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Gradient_Evaluate_m02EA0BFD41864C8673A29333EBC4569C9DAA3E37 (Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * __this, float ___time0, const RuntimeMethod* method);
// System.Single UnityEngine.UI.Slider::get_normalizedValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Slider_get_normalizedValue_m09A06767F3E8064200CA1C954AF5C362C5138EC3 (Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, float ___t1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33 (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.BoxCollider2D>()
inline BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * GameObject_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mAA495A9AAD3FB4D260B3E2B6DDBAFEC18DC49C3C (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F (Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___tag0, const RuntimeMethod* method);
// System.Void Singleton::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Singleton_Awake_m0A89173E19255DD606C8D23B2938D46E841BF76D (Singleton_t85C95C878D42548878AD1318351EC6E51A48162F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<TilePooler>()
inline TilePooler_tDED87420D8B326269BDE0F491CDCC4A240A5C518 * Component_GetComponent_TisTilePooler_tDED87420D8B326269BDE0F491CDCC4A240A5C518_m064119F6F1DF84E6F7FACD4C5783034079B830BF (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  TilePooler_tDED87420D8B326269BDE0F491CDCC4A240A5C518 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Vector3 Endless2D::getTileDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Endless2D_getTileDirection_m09F6D6E6C1DCC8B62CDE7CE239E87828E6D2F814 (Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981 * __this, const RuntimeMethod* method);
// System.Void Endless2D::getPositionVectors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Endless2D_getPositionVectors_mAC383D1E77FF17CB52FD360BB728D2A23E8E1F33 (Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Boolean Endless2D::checkIfTilesExist()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Endless2D_checkIfTilesExist_m9A5A6E48790BFC85ADBB712F3592C5A99959829B (Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981 * __this, const RuntimeMethod* method);
// System.Void Endless2D::spawnTiles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Endless2D_spawnTiles_mD4B8E273DD6F93D3DB70FA7FDBA4844F0ABDFC99 (Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981 * __this, const RuntimeMethod* method);
// System.Void Endless2D::startTileMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Endless2D_startTileMovement_m365981C7AAB1EDE392E33089292FBE32C61E4294 (Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_cyan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_cyan_m0C608BC083FD98C45C1F4F15AE803D288C647686 (const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___from0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___to1, const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::DrawSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawSphere_m50414CF8E502F4D93FC133091DA5E39543D69E91 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___center0, float ___radius1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB (const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::DrawWireCube(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawWireCube_mC526244E50C6E5793D4066C9C99023D5FF8424BF (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___center0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___size1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_blue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_blue_m6D62D515CA10A6E760848E1BFB997E27B90BD07B (const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Tile>::GetEnumerator()
inline Enumerator_tB1C7C4A9D6D39DD878989E93E7F1603AA275F388  List_1_GetEnumerator_mD9E1BADE21D5D1FD44458F9E0DF52E87649411A3 (List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB1C7C4A9D6D39DD878989E93E7F1603AA275F388  (*) (List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Tile>::get_Current()
inline Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * Enumerator_get_Current_mC13B60E1D796F31B52E6108D085EBB5014082324_inline (Enumerator_tB1C7C4A9D6D39DD878989E93E7F1603AA275F388 * __this, const RuntimeMethod* method)
{
	return ((  Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * (*) (Enumerator_tB1C7C4A9D6D39DD878989E93E7F1603AA275F388 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// UnityEngine.Color UnityEngine.Color::get_gray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_gray_m34BEEC2EEF30819B433125EF748CE22BE17C9B6E (const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<Tile>::MoveNext()
inline bool Enumerator_MoveNext_mB6A53870EA7BF331E44BA58DB74970BAD3E3A3E4 (Enumerator_tB1C7C4A9D6D39DD878989E93E7F1603AA275F388 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB1C7C4A9D6D39DD878989E93E7F1603AA275F388 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Tile>::Dispose()
inline void Enumerator_Dispose_m19574318147DEC45769F276ECD6CB1EE3C8DF28E (Enumerator_tB1C7C4A9D6D39DD878989E93E7F1603AA275F388 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB1C7C4A9D6D39DD878989E93E7F1603AA275F388 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Void Tile::moveTileInDirectionOf(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_moveTileInDirectionOf_mEC7E303547637D4673E8163463C46C29FD30AB62 (Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction0, float ___speed1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// UnityEngine.GameObject TilePooler::SpawnFromPool(System.String,UnityEngine.Vector2,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * TilePooler_SpawnFromPool_mE8A226B186790A28B996E6432728618DB6CD8B6B (TilePooler_tDED87420D8B326269BDE0F491CDCC4A240A5C518 * __this, String_t* ___tag0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void Singleton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Singleton__ctor_m2FEA2A78A603EE38F9D8CE185C2ACCF63EEE9752 (Singleton_t85C95C878D42548878AD1318351EC6E51A48162F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Tile>::.ctor()
inline void List_1__ctor_m31DF99DCE36CBA9DFC542F91879C9D2BB2E98557 (List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Single UnityEngine.UI.Image::get_fillAmount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Image_get_fillAmount_mA6F275C1167931E2F166EA85058EF181D8008B09 (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7 (float* __this, String_t* ___format0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2,UnityEngine.ForceMode2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___force0, int32_t ___mode1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void SoundManager::PlaySound(SoundManager/Sound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlaySound_m94F56384BAFC1A000ED8B6E5BC9A90DA615F248D (int32_t ___sound0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Collision2D::get_relativeVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Collision2D_get_relativeVelocity_m021626A3853F4D1E2DA016479096DB6CE9999628 (Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Collision2D::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Collision2D_get_transform_mC5A1F1938F67668E8B6BDE1048C727C8578AD827 (Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// UnityEngine.Collider2D UnityEngine.Collision2D::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * Collision2D_get_collider_mA7687EDB0D47A2F211BFE8DB89266B9AA05CFDDD (Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14 (String_t* ___key0, int32_t ___defaultValue1, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.Void Score::AddScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_AddScore_m8F16DF5BFB491421A589DF9C70B36CD56012DAC1 (Score_tE07CBD9780DFC212BE43719819F512E8861103C7 * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m5398ED0B6625B75CAF70C63B3CF2CE47D3C1B184 (int32_t* __this, String_t* ___format0, const RuntimeMethod* method);
// System.String System.String::Normalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Normalize_mE1B6B3D1A5A0A05548C1B91D7B02C4861827ABCD (String_t* __this, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC (const RuntimeMethod* method);
// System.Void Singleton::set_Instance(Singleton)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Singleton_set_Instance_mB373669F29D79E1C3EC3332D4388AC38C45A9D74_inline (Singleton_t85C95C878D42548878AD1318351EC6E51A48162F * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<SoundManager/Sound,System.Single>::.ctor()
inline void Dictionary_2__ctor_m42BDA71D46CB3D62A8EF6483F70B93D0A33243E1 (Dictionary_2_tA516C4BF8CC04CFE1F6BF38F3DE3D8A246BE2BC5 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA516C4BF8CC04CFE1F6BF38F3DE3D8A246BE2BC5 *, const RuntimeMethod*))Dictionary_2__ctor_mCD926FC30344C798257AE0FD8F6A779EEF9EAB19_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<SoundManager/Sound,System.Single>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m3A1F77DF9178C4D3B820AFBDE48026A2B6B15FB6 (Dictionary_2_tA516C4BF8CC04CFE1F6BF38F3DE3D8A246BE2BC5 * __this, int32_t ___key0, float ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA516C4BF8CC04CFE1F6BF38F3DE3D8A246BE2BC5 *, int32_t, float, const RuntimeMethod*))Dictionary_2_set_Item_mD415F256512625A44EDF80C9E2E744977C9DA5DC_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean SoundManager::canPlaySound(SoundManager/Sound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SoundManager_canPlaySound_m09BEE2A4EE2A5C0A17EDF39F0640F7363D50BECD (int32_t ___sound0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.AudioClip SoundManager::GetAudioClip(SoundManager/Sound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * SoundManager_GetAudioClip_mEC5A2BD5355ADD48A2E2EE850B735B9AD7B21D24 (int32_t ___sound0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<SoundManager/Sound,System.Single>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mD44130AAE05C4770AEE0647D364D22BF835707A7 (Dictionary_2_tA516C4BF8CC04CFE1F6BF38F3DE3D8A246BE2BC5 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA516C4BF8CC04CFE1F6BF38F3DE3D8A246BE2BC5 *, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mC2EACDF5FEE8E1D456E37A9CD964E044DCA95D3A_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<SoundManager/Sound,System.Single>::get_Item(!0)
inline float Dictionary_2_get_Item_m1B6834942CDBB0BDC039EE9A393028BABFE38D31 (Dictionary_2_tA516C4BF8CC04CFE1F6BF38F3DE3D8A246BE2BC5 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  float (*) (Dictionary_2_tA516C4BF8CC04CFE1F6BF38F3DE3D8A246BE2BC5 *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mAC3C993C28AC91549B24A35740A1A728D3685068_gshared)(__this, ___key0, method);
}
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void StartManager::Dissolve_Start_Menu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartManager_Dissolve_Start_Menu_m3C8116DE56D93BCD00AB7D72A4E32E4CEB14BE5E (StartManager_t63287E6205CC25B9ED02CDE8D1FAFEDF2DD907A9 * __this, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Color_op_Implicit_mECB4D0C812888ADAEE478E633B2ECF8F8FDB96C5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___c0, const RuntimeMethod* method);
// System.Void StartManager/DissolveItem::.ctor(UnityEngine.UI.Image,UnityEngine.Vector4,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DissolveItem__ctor_m1D889D9FBDEC626873FE04F4C948F60AF1DC0333 (DissolveItem_tF0D838FD17619E13535458DE54D8F2EA5AC0264E * __this, Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___image0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___dissolveitemVector1, float ___A_Dissolveitem2, const RuntimeMethod* method);
// System.Void StartManager/DissolveItem::Alphadecrease()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DissolveItem_Alphadecrease_m923A8583244926D0F3B527D5AC1C213F3D755F17 (DissolveItem_tF0D838FD17619E13535458DE54D8F2EA5AC0264E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Tile>::Add(!0)
inline void List_1_Add_mF17950E2203154D00E6509D508BBB8E2EB642F3B (List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8 * __this, Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8 *, Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// Singleton Singleton::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Singleton_t85C95C878D42548878AD1318351EC6E51A48162F * Singleton_get_Instance_mB8C346F100DF5857F9C494F32762FB403864BDEC_inline (const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void Tile::changeTile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_changeTile_mC76F2B7B51692B78D7F7313824ECAB8735FB535B (Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<Tile>::Remove(!0)
inline bool List_1_Remove_m6AFEC997356969D51F00638902D831A0E6DA322F (List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8 * __this, Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8 *, Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___translation0, const RuntimeMethod* method);
// System.Boolean Tile::isOutOfBounds(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tile_isOutOfBounds_m066D31204F5EFABAC76FA16996E2D717E233E54F (Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___start0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___end1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void TilePooler/Pool::.ctor(System.String,UnityEngine.GameObject,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pool__ctor_mD6EC19319EB7070189A6DA260C0EFBF4BDBF6292 (Pool_t848F75427F6865029793B7C163370BDC346C6D8C * __this, String_t* ___tag0, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___prefab1, int32_t ___size2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<TilePooler/Pool>::Add(!0)
inline void List_1_Add_m8B4FD71859B61A4F5242DB3A5860268CEE176BB5 (List_1_t60B1C7F49F58BA19849B441B785A5925F5D4F0DF * __this, Pool_t848F75427F6865029793B7C163370BDC346C6D8C * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t60B1C7F49F58BA19849B441B785A5925F5D4F0DF *, Pool_t848F75427F6865029793B7C163370BDC346C6D8C *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Queue`1<UnityEngine.GameObject>>::.ctor()
inline void Dictionary_2__ctor_m9855F31661557D2E7ACD8FBBFB501CF407440712 (Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<TilePooler/Pool>::GetEnumerator()
inline Enumerator_t2A9658835FECB4EFF29D9F6685404336DC4C60EE  List_1_GetEnumerator_m4C0543F5BF9ED1002F54BADBD15E5F92FFD4089B (List_1_t60B1C7F49F58BA19849B441B785A5925F5D4F0DF * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2A9658835FECB4EFF29D9F6685404336DC4C60EE  (*) (List_1_t60B1C7F49F58BA19849B441B785A5925F5D4F0DF *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<TilePooler/Pool>::get_Current()
inline Pool_t848F75427F6865029793B7C163370BDC346C6D8C * Enumerator_get_Current_m88B0415CE5394B8672BCB08D59C8625FD3BD586B_inline (Enumerator_t2A9658835FECB4EFF29D9F6685404336DC4C60EE * __this, const RuntimeMethod* method)
{
	return ((  Pool_t848F75427F6865029793B7C163370BDC346C6D8C * (*) (Enumerator_t2A9658835FECB4EFF29D9F6685404336DC4C60EE *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<UnityEngine.GameObject>::.ctor()
inline void Queue_1__ctor_m989302E3AE90AD39E5B892C79B3A6365966D1852 (Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 *, const RuntimeMethod*))Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared)(__this, method);
}
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<UnityEngine.GameObject>::Enqueue(!0)
inline void Queue_1_Enqueue_mBF3F677E8FA5E61DFEF3209F9DDA278775BDD513 (Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Queue`1<UnityEngine.GameObject>>::Add(!0,!1)
inline void Dictionary_2_Add_m0C5D895ACF50E41367BBB10271D5F9F98A83C8C1 (Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F * __this, String_t* ___key0, Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F *, String_t*, Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 *, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<TilePooler/Pool>::MoveNext()
inline bool Enumerator_MoveNext_m675CF2AFA05DEB00916DBCA5A57088D3BC288843 (Enumerator_t2A9658835FECB4EFF29D9F6685404336DC4C60EE * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t2A9658835FECB4EFF29D9F6685404336DC4C60EE *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<TilePooler/Pool>::Dispose()
inline void Enumerator_Dispose_m7C78A270AF8D3C688AB49342CBEF99DFA0004E9C (Enumerator_t2A9658835FECB4EFF29D9F6685404336DC4C60EE * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2A9658835FECB4EFF29D9F6685404336DC4C60EE *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Queue`1<UnityEngine.GameObject>>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mAADFBF4527E50115B977ACC9E4694BEE070DF705 (Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Queue`1<UnityEngine.GameObject>>::get_Item(!0)
inline Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 * Dictionary_2_get_Item_m250063473D2FECA30827552033CEF780DBE2B3DB (Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 * (*) (Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// !0 System.Collections.Generic.Queue`1<UnityEngine.GameObject>::Dequeue()
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Queue_1_Dequeue_mAB7D03D5E1E8D5574DB751A04534E90B970BE0CC (Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 * __this, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 *, const RuntimeMethod*))Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<IPooledObject>()
inline RuntimeObject* GameObject_GetComponent_TisIPooledObject_tE7663415C24E026BDC5E1F701CFA64DF8AF572E8_m40ED4A72A4B9B85180FB52CACE4E1A56684A1F39 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Boolean UnityEngine.Input::get_anyKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_get_anyKey_mF484987F7619AE4EB70CF96CB40AFBEF721986EB (const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<player>()
inline player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * GameObject_GetComponent_Tisplayer_tA80E0022C279849EE513BB6A4017ED62943ADC71_mE90B93F4F17B66FE4BD5D7D41AB060243E5E2AD7 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<levelgen>()
inline levelgen_t61ACD1EBFCB7594B9AE7934E46DF321EEB517845 * GameObject_GetComponent_Tislevelgen_t61ACD1EBFCB7594B9AE7934E46DF321EEB517845_m7C45F45119C9A2E89FEED636BF53F9A62D5B602C (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  levelgen_t61ACD1EBFCB7594B9AE7934E46DF321EEB517845 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody2D::set_bodyType(UnityEngine.RigidbodyType2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_bodyType_m8D34999918D42B2DF16FAAB4F237A8663EA8406B (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UIManager::GameStarted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_GameStarted_m30D1B4655F57F8048A5B5F64EA0A8B3FA658F836 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method);
// System.Void UIManager::GameLost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_GameLost_mE13BBA2239E7D666F7204B68F2D924958EC90AAB (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA (float ___value0, const RuntimeMethod* method);
// System.Void camera::setDiffculty(camera/Diffculty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void camera_setDiffculty_mEFDE8DD611D75FAD50A22A24374042280FDC7348 (camera_t35DE2139B547B353CFA724AB7439D7A92165C646 * __this, int32_t ___diffculty0, const RuntimeMethod* method);
// camera/Diffculty camera::GetDiffculty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t camera_GetDiffculty_m64B90BA74BC00C9E3FAF61F734BC45DBBF5AFFD4 (camera_t35DE2139B547B353CFA724AB7439D7A92165C646 * __this, const RuntimeMethod* method);
// System.Void camera::UpdateCameraPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void camera_UpdateCameraPosition_m5B13D5A28DC6C4B4BAA234D9C8F646100ADCB824 (camera_t35DE2139B547B353CFA724AB7439D7A92165C646 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_SmoothDamp_m4655944DBD5B44125F8F4B5A15E31DE94CB0F627 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___current0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___currentVelocity2, float ___smoothTime3, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<levelgen/Platform>::.ctor()
inline void List_1__ctor_m691E17B1E746E8C0EDECE883EFCEC2A77344EB87 (List_1_t1962AE351C867A2D55EBF2EF233FE6F05086E474 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1962AE351C867A2D55EBF2EF233FE6F05086E474 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void levelgen::setPlatform(levelgen/PlatformEnum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void levelgen_setPlatform_mC14E7ACECC513CA8077C3B17DD84C1EEAAB15141 (levelgen_t61ACD1EBFCB7594B9AE7934E46DF321EEB517845 * __this, int32_t ___diffculty0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.BoxCollider2D>()
inline BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_size(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_size_m92E5651D28AC04743795244ACC1E3F5FABCF1B49 (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.BoxCollider2D::set_size(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxCollider2D_set_size_m8460A38ADDD4BE82BE1F416DE3D7AFB87EBA6760 (BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Collider2D::set_offset(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider2D_set_offset_m496DDE5487C59E9E8D6B468E8918EE1EFC625E38 (Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void levelgen/Platform::.ctor(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform__ctor_m9935F152B1FF9D4B5F6C11C67183CDD5FEC6ACB3 (Platform_tE9E6AC72071AF6BACAF02519C6C0AED83456CB3D * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___platform0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<levelgen/Platform>::Add(!0)
inline void List_1_Add_m708216AF149088C3FBB2EDF789ACA5A4346A994E (List_1_t1962AE351C867A2D55EBF2EF233FE6F05086E474 * __this, Platform_tE9E6AC72071AF6BACAF02519C6C0AED83456CB3D * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1962AE351C867A2D55EBF2EF233FE6F05086E474 *, Platform_tE9E6AC72071AF6BACAF02519C6C0AED83456CB3D *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void levelgen::HandleJumpPadSpawn(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void levelgen_HandleJumpPadSpawn_m284D204F41D42744792363EEA7F28B33FC939522 (levelgen_t61ACD1EBFCB7594B9AE7934E46DF321EEB517845 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___platform10, const RuntimeMethod* method);
// System.Void levelgen::HandlePlatFormDeletion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void levelgen_HandlePlatFormDeletion_mC1A08ACABCC70100EF2ACC0C8C240C6ED6AD666F (levelgen_t61ACD1EBFCB7594B9AE7934E46DF321EEB517845 * __this, const RuntimeMethod* method);
// System.Void levelgen::SpawnTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void levelgen_SpawnTimer_m41E1046E26A7BB7B3AF564CF96DD1B32B71CF784 (levelgen_t61ACD1EBFCB7594B9AE7934E46DF321EEB517845 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 levelgen::RandomGap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  levelgen_RandomGap_m6E9A2FC63A12D68DA3CF9B5819CA91F6CEEE1D43 (levelgen_t61ACD1EBFCB7594B9AE7934E46DF321EEB517845 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<levelgen/Platform>::get_Item(System.Int32)
inline Platform_tE9E6AC72071AF6BACAF02519C6C0AED83456CB3D * List_1_get_Item_m24B3F08332B1C52FD508480451080C0B886C18FC_inline (List_1_t1962AE351C867A2D55EBF2EF233FE6F05086E474 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Platform_tE9E6AC72071AF6BACAF02519C6C0AED83456CB3D * (*) (List_1_t1962AE351C867A2D55EBF2EF233FE6F05086E474 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Single levelgen/Platform::GetYposition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Platform_GetYposition_m3DCA56E6EFC006156C5E537B3D38B3EDC133DB8A (Platform_tE9E6AC72071AF6BACAF02519C6C0AED83456CB3D * __this, const RuntimeMethod* method);
// System.Void levelgen/Platform::DestroySelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_DestroySelf_mDBC6DADAFCCFE5DD770CFE283D0D4D4F71EDCAC3 (Platform_tE9E6AC72071AF6BACAF02519C6C0AED83456CB3D * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<levelgen/Platform>::Remove(!0)
inline bool List_1_Remove_mA50F7BE5265E4B1700A658B4F92ED79062732083 (List_1_t1962AE351C867A2D55EBF2EF233FE6F05086E474 * __this, Platform_tE9E6AC72071AF6BACAF02519C6C0AED83456CB3D * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t1962AE351C867A2D55EBF2EF233FE6F05086E474 *, Platform_tE9E6AC72071AF6BACAF02519C6C0AED83456CB3D *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<levelgen/Platform>::get_Count()
inline int32_t List_1_get_Count_m3C4A3F5F867B2AC8C03C59E1663BDD30D896EEBD_inline (List_1_t1962AE351C867A2D55EBF2EF233FE6F05086E474 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t1962AE351C867A2D55EBF2EF233FE6F05086E474 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// levelgen/PlatformEnum levelgen::GetPlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t levelgen_GetPlatform_m660E7800E75A5DF210AD4C3E108B7796D352F23C (levelgen_t61ACD1EBFCB7594B9AE7934E46DF321EEB517845 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.Transform>(!!0)
inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m590D55CDD380D61B8E49847623BD97E6EA9D9762 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___original0, const RuntimeMethod* method)
{
	return ((  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * (*) (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___p0, const RuntimeMethod* method);
// System.Void levelgen::CreatePlatform(UnityEngine.Vector3,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void levelgen_CreatePlatform_mDE7C6B9B30F74C5DA850DF1D904362BCF8E4FDCD (levelgen_t61ACD1EBFCB7594B9AE7934E46DF321EEB517845 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___SpawnPosition10, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___platform11, const RuntimeMethod* method);
// System.Void BoostBar::SetMaxBoost(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoostBar_SetMaxBoost_m20CA0FF2518E5ADF0D702E5C71BC0A58935F4355 (BoostBar_t248D99B7988BF361E572025F1E7D66B05DBACDA0 * __this, float ___boost0, const RuntimeMethod* method);
// System.Void SoundManager::initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_initialize_m32C6167EF99FD105660A911D42022DC9673B8BDF (const RuntimeMethod* method);
// System.Void BoostBar::setboost(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoostBar_setboost_mD74AE9C94F5BBE6245C986D8FA9018DC7013DC51 (BoostBar_t248D99B7988BF361E572025F1E7D66B05DBACDA0 * __this, float ___boost0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1 (int32_t ___button0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_gravityScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_gravityScale_mEDC82EE2ED74DA9C5AB8A0C4A929B09149522BBF (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(System.Single,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_m841D5292C48DAD9746A2F4EED9CE7A76CDB652EA_inline (float ___d0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a1, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Stop_m8CBF9268DE7B5A40952B4977462B857B5F5AFB9D (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rigidbody2D::get_gravityScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rigidbody2D_get_gravityScale_mD07E728DCAEF0E011CB2D43D6B8E5C700BC0ACDD (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022 (int32_t ___button0, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0 (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___mask0, const RuntimeMethod* method);
// UnityEngine.Collider2D UnityEngine.Physics2D::OverlapCircle(UnityEngine.Vector2,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * Physics2D_OverlapCircle_mA13E0B8B40964C93CD1E8BB9B4FE32B19B52BC07 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___point0, float ___radius1, int32_t ___layerMask2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_acceleration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_acceleration_mE04EFD6EDBEBA7B29231FAE71149899AB94B3361 (const RuntimeMethod* method);
// System.Void player::Handlingflip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void player_Handlingflip_m09901F7871319B3A40797F8B347FF841257CF25A (player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_mD731F47ED44C2D629F8E1C6DB15629C3E1B992A0 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method);
// System.Void player::HandleBoostUsage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void player_HandleBoostUsage_mBD3EE26F6AB3FA0D897482AA429A9F2AAC829F03 (player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * __this, const RuntimeMethod* method);
// System.Void player::timeForPowerUpHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void player_timeForPowerUpHandler_m6D27A3CDC06000034364AED67976008AFFD2862C (player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * __this, const RuntimeMethod* method);
// System.Void player::flip(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void player_flip_mC3381EDA4B9BA26F63526408D604AED51BAADE50 (player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * __this, bool ___IsLookingLeft0, const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_flipX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_flipX_mD3AB83CC6D742A69F1B52376D1636CAA2E44B67E (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::op_Implicit(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_op_Implicit_m9B1A4B721726FCDA1844A0DC505C2FF8F8C50FC0 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___v0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void Arrow::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Arrow_OnTriggerEnter2D_m10D1F66E752F11F60C8E464781BEBB7B861B8511 (Arrow_t98BA45BD73ADFAD1B38830B6D6D48588A96AC86A * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___col0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mC13E8DA0CA1DFD88310E2E066C5479E3994BAA30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40F5431A5203B1B661E92C45EF446F7D326E2C50);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Arrow");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral40F5431A5203B1B661E92C45EF446F7D326E2C50, /*hidden argument*/NULL);
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_0, /*hidden argument*/NULL);
		// Instantiate(GameAssets.Getinstance().Explosion, gameObject.transform.position, Quaternion.identity);
		GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191 * L_1;
		L_1 = GameAssets_Getinstance_mF8747563EFDDFA3B04BAAF1A80721A1FAB2631F8(/*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = L_1->get_Explosion_13();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6;
		L_6 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mC13E8DA0CA1DFD88310E2E066C5479E3994BAA30(L_2, L_5, L_6, /*hidden argument*/Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mC13E8DA0CA1DFD88310E2E066C5479E3994BAA30_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Arrow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Arrow__ctor_m5142CD3440C6AF4782993D2409B9FD785577892C (Arrow_t98BA45BD73ADFAD1B38830B6D6D48588A96AC86A * __this, const RuntimeMethod* method)
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
// System.Void BoostBar::SetMaxBoost(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoostBar_SetMaxBoost_m20CA0FF2518E5ADF0D702E5C71BC0A58935F4355 (BoostBar_t248D99B7988BF361E572025F1E7D66B05DBACDA0 * __this, float ___boost0, const RuntimeMethod* method)
{
	{
		// slider.maxValue = boost;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_0 = __this->get_slider_4();
		float L_1 = ___boost0;
		NullCheck(L_0);
		Slider_set_maxValue_m5CDA3D451B68CF2D3FCFF43D1738D1DCC1C6425B(L_0, L_1, /*hidden argument*/NULL);
		// slider.value = boost;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_2 = __this->get_slider_4();
		float L_3 = ___boost0;
		NullCheck(L_2);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_2, L_3);
		// Fill.color = gradient.Evaluate(1f);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_Fill_6();
		Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * L_5 = __this->get_gradient_5();
		NullCheck(L_5);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6;
		L_6 = Gradient_Evaluate_m02EA0BFD41864C8673A29333EBC4569C9DAA3E37(L_5, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_4, L_6);
		// }
		return;
	}
}
// System.Void BoostBar::setboost(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoostBar_setboost_mD74AE9C94F5BBE6245C986D8FA9018DC7013DC51 (BoostBar_t248D99B7988BF361E572025F1E7D66B05DBACDA0 * __this, float ___boost0, const RuntimeMethod* method)
{
	{
		// slider.value = boost;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_0 = __this->get_slider_4();
		float L_1 = ___boost0;
		NullCheck(L_0);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, L_1);
		// Fill.color = gradient.Evaluate(slider.normalizedValue);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_2 = __this->get_Fill_6();
		Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * L_3 = __this->get_gradient_5();
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_4 = __this->get_slider_4();
		NullCheck(L_4);
		float L_5;
		L_5 = Slider_get_normalizedValue_m09A06767F3E8064200CA1C954AF5C362C5138EC3(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6;
		L_6 = Gradient_Evaluate_m02EA0BFD41864C8673A29333EBC4569C9DAA3E37(L_3, L_5, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_6);
		// }
		return;
	}
}
// System.Void BoostBar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoostBar__ctor_m0912A2504C8E9F86D67137B5E77A8F3FB36DA960 (BoostBar_t248D99B7988BF361E572025F1E7D66B05DBACDA0 * __this, const RuntimeMethod* method)
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
// System.Void Destryo::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Destryo_Start_m09F9B2BA5E71A0C8C405EB8F57245021C2B17F55 (Destryo_tA5642D17DCE618B8501DEC93EB8C63E9F9B31455 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject,1f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_0, (1.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Destryo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Destryo__ctor_m118610FECF5BAC8F8275397EC0036DE2302DE49D (Destryo_tA5642D17DCE618B8501DEC93EB8C63E9F9B31455 * __this, const RuntimeMethod* method)
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
// System.Void DissolvingPlatform::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DissolvingPlatform_Awake_m7C19C4DCFD4CA1A2B5FE33ABD7C576DB591B9DA1 (DissolvingPlatform_t80328620960009E895363AFDF8DABD99D1147D7E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sp = GetComponent<SpriteRenderer>();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0;
		L_0 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		__this->set_sp_4(L_0);
		// alpha = 1;
		__this->set_alpha_5((1.0f));
		// IsUsed = false;
		__this->set_IsUsed_6((bool)0);
		// sp.color = new Color(1, 1, 1, 0.5f);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_1 = __this->get_sp_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_2), (1.0f), (1.0f), (1.0f), (0.5f), /*hidden argument*/NULL);
		NullCheck(L_1);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DissolvingPlatform::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DissolvingPlatform_Update_m1B5BFAF7371F059738A23A0A77706F93977C1CEB (DissolvingPlatform_t80328620960009E895363AFDF8DABD99D1147D7E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mAA495A9AAD3FB4D260B3E2B6DDBAFEC18DC49C3C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (IsUsed)
		bool L_0 = __this->get_IsUsed_6();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0045;
		}
	}
	{
		// alpha -= Time.deltaTime;
		float L_2 = __this->get_alpha_5();
		float L_3;
		L_3 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_alpha_5(((float)il2cpp_codegen_subtract((float)L_2, (float)L_3)));
		// sp.color = new Color(1, 1, 1, alpha);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_4 = __this->get_sp_4();
		float L_5 = __this->get_alpha_5();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_6), (1.0f), (1.0f), (1.0f), L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_4, L_6, /*hidden argument*/NULL);
	}

IL_0045:
	{
		// if (alpha <= 0)
		float L_7 = __this->get_alpha_5();
		V_1 = (bool)((((int32_t)((!(((float)L_7) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_006d;
		}
	}
	{
		// gameObject.GetComponent<BoxCollider2D>().enabled = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_10;
		L_10 = GameObject_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mAA495A9AAD3FB4D260B3E2B6DDBAFEC18DC49C3C(L_9, /*hidden argument*/GameObject_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mAA495A9AAD3FB4D260B3E2B6DDBAFEC18DC49C3C_RuntimeMethod_var);
		NullCheck(L_10);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_10, (bool)0, /*hidden argument*/NULL);
	}

IL_006d:
	{
		// }
		return;
	}
}
// System.Void DissolvingPlatform::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DissolvingPlatform_OnCollisionEnter2D_m748F0F67F4EC99F1614199CCC0D7AE9691C532B8 (DissolvingPlatform_t80328620960009E895363AFDF8DABD99D1147D7E * __this, Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___col0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (col.gameObject.CompareTag("Player"))
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_0 = ___col0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// IsUsed = true;
		__this->set_IsUsed_6((bool)1);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void DissolvingPlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DissolvingPlatform__ctor_m983F6CD224643E14CC0E805766D0842CBD79EBA1 (DissolvingPlatform_t80328620960009E895363AFDF8DABD99D1147D7E * __this, const RuntimeMethod* method)
{
	{
		// float alpha = 0.5f;
		__this->set_alpha_5((0.5f));
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
// System.Void Endless2D::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Endless2D_Awake_m90646F67F7F611CB3D0A40A811DE9BC5EFE79758 (Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTilePooler_tDED87420D8B326269BDE0F491CDCC4A240A5C518_m064119F6F1DF84E6F7FACD4C5783034079B830BF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Awake();
		Singleton_Awake_m0A89173E19255DD606C8D23B2938D46E841BF76D(__this, /*hidden argument*/NULL);
		// tilePooler = GetComponent<TilePooler>();           //Gets the pooler component
		TilePooler_tDED87420D8B326269BDE0F491CDCC4A240A5C518 * L_0;
		L_0 = Component_GetComponent_TisTilePooler_tDED87420D8B326269BDE0F491CDCC4A240A5C518_m064119F6F1DF84E6F7FACD4C5783034079B830BF(__this, /*hidden argument*/Component_GetComponent_TisTilePooler_tDED87420D8B326269BDE0F491CDCC4A240A5C518_m064119F6F1DF84E6F7FACD4C5783034079B830BF_RuntimeMethod_var);
		__this->set_tilePooler_13(L_0);
		// tilePooler.nOfTiles = nColumns * nRows;            //Gets the number of tiles used.
		TilePooler_tDED87420D8B326269BDE0F491CDCC4A240A5C518 * L_1 = __this->get_tilePooler_13();
		int32_t L_2 = __this->get_nColumns_7();
		int32_t L_3 = __this->get_nRows_8();
		NullCheck(L_1);
		L_1->set_nOfTiles_8(((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)L_3)));
		// }
		return;
	}
}
// System.Void Endless2D::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Endless2D_Start_mFF4FD80227015628703363A60C4228C9578A3CFF (Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3CB4F1E278673C46B76919E625B53B869ABFBB25);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// movementDirection = getTileDirection();                //Sets the directions of the tiles
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Endless2D_getTileDirection_m09F6D6E6C1DCC8B62CDE7CE239E87828E6D2F814(__this, /*hidden argument*/NULL);
		__this->set_movementDirection_12(L_0);
		// getPositionVectors();                                  //Gets the vectors used to center the grid, last and firts tile
		Endless2D_getPositionVectors_mAC383D1E77FF17CB52FD360BB728D2A23E8E1F33(__this, /*hidden argument*/NULL);
		// FirstTile = transform.position + FirstTile * tileSize; //
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = __this->get_FirstTile_16();
		float L_4 = __this->get_tileSize_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_3, L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_2, L_5, /*hidden argument*/NULL);
		__this->set_FirstTile_16(L_6);
		// LastTile = transform.position + LastTile * tileSize;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = __this->get_LastTile_17();
		float L_10 = __this->get_tileSize_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_9, L_10, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_8, L_11, /*hidden argument*/NULL);
		__this->set_LastTile_17(L_12);
		// if (checkIfTilesExist())
		bool L_13;
		L_13 = Endless2D_checkIfTilesExist_m9A5A6E48790BFC85ADBB712F3592C5A99959829B(__this, /*hidden argument*/NULL);
		V_0 = L_13;
		bool L_14 = V_0;
		if (!L_14)
		{
			goto IL_007e;
		}
	}
	{
		// spawnTiles();
		Endless2D_spawnTiles_mD4B8E273DD6F93D3DB70FA7FDBA4844F0ABDFC99(__this, /*hidden argument*/NULL);
		// startTileMovement();
		Endless2D_startTileMovement_m365981C7AAB1EDE392E33089292FBE32C61E4294(__this, /*hidden argument*/NULL);
		goto IL_008b;
	}

IL_007e:
	{
		// Debug.LogWarning("No Tiles Attached!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral3CB4F1E278673C46B76919E625B53B869ABFBB25, /*hidden argument*/NULL);
	}

IL_008b:
	{
		// }
		return;
	}
}
// System.Void Endless2D::OnDrawGizmosSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Endless2D_OnDrawGizmosSelected_m3B8C6C3255D5C7DB74C45C06AB8B2E7340B37402 (Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m19574318147DEC45769F276ECD6CB1EE3C8DF28E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB6A53870EA7BF331E44BA58DB74970BAD3E3A3E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC13B60E1D796F31B52E6108D085EBB5014082324_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mD9E1BADE21D5D1FD44458F9E0DF52E87649411A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3CB4F1E278673C46B76919E625B53B869ABFBB25);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	Enumerator_tB1C7C4A9D6D39DD878989E93E7F1603AA275F388  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * V_6 = NULL;
	bool V_7 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// getPositionVectors();                               //Vectors used to center the grid, last and firts tile
		Endless2D_getPositionVectors_mAC383D1E77FF17CB52FD360BB728D2A23E8E1F33(__this, /*hidden argument*/NULL);
		// FirstTile = transform.position + FirstTile * tileSize;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = __this->get_FirstTile_16();
		float L_3 = __this->get_tileSize_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_2, L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_1, L_4, /*hidden argument*/NULL);
		__this->set_FirstTile_16(L_5);
		// LastTile = transform.position + LastTile * tileSize;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = __this->get_LastTile_17();
		float L_9 = __this->get_tileSize_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_8, L_9, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_7, L_10, /*hidden argument*/NULL);
		__this->set_LastTile_17(L_11);
		// movementDirection = getTileDirection();              //Gets the direction of the Tiles
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Endless2D_getTileDirection_m09F6D6E6C1DCC8B62CDE7CE239E87828E6D2F814(__this, /*hidden argument*/NULL);
		__this->set_movementDirection_12(L_12);
		// Gizmos.color = Color.cyan;                          //Vector used to visualize the direction of the tiles.
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_13;
		L_13 = Color_get_cyan_m0C608BC083FD98C45C1F4F15AE803D288C647686(/*hidden argument*/NULL);
		Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(L_13, /*hidden argument*/NULL);
		// Gizmos.DrawLine(gameObject.transform.position, gameObject.transform.position + movementDirection * 2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_18, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = __this->get_movementDirection_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_20, (2.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_19, L_21, /*hidden argument*/NULL);
		Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823(L_16, L_22, /*hidden argument*/NULL);
		// Gizmos.DrawSphere(transform.position, 0.2f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_23);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_23, /*hidden argument*/NULL);
		Gizmos_DrawSphere_m50414CF8E502F4D93FC133091DA5E39543D69E91(L_24, (0.200000003f), /*hidden argument*/NULL);
		// Gizmos.color = Color.white;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_25;
		L_25 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(L_25, /*hidden argument*/NULL);
		// for (int r = 0; r < nRows; r++)
		V_0 = 0;
		goto IL_0147;
	}

IL_00cd:
	{
		// for (int c = 0; c < nColumns; c++)
		V_1 = 0;
		goto IL_0135;
	}

IL_00d2:
	{
		// Vector3 currentPos = transform.position + HDirectionVector * c * tileSize + VDirectionVector * r * tileSize; //Position vector where the current tile will be
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_26, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28 = __this->get_HDirectionVector_14();
		int32_t L_29 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_28, ((float)((float)L_29)), /*hidden argument*/NULL);
		float L_31 = __this->get_tileSize_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_30, L_31, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_27, L_32, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34 = __this->get_VDirectionVector_15();
		int32_t L_35 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_34, ((float)((float)L_35)), /*hidden argument*/NULL);
		float L_37 = __this->get_tileSize_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_36, L_37, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		L_39 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_33, L_38, /*hidden argument*/NULL);
		V_2 = L_39;
		// Gizmos.DrawWireCube(currentPos, Vector3.one * tileSize);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		L_41 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		float L_42 = __this->get_tileSize_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
		L_43 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_41, L_42, /*hidden argument*/NULL);
		Gizmos_DrawWireCube_mC526244E50C6E5793D4066C9C99023D5FF8424BF(L_40, L_43, /*hidden argument*/NULL);
		// for (int c = 0; c < nColumns; c++)
		int32_t L_44 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
	}

IL_0135:
	{
		// for (int c = 0; c < nColumns; c++)
		int32_t L_45 = V_1;
		int32_t L_46 = __this->get_nColumns_7();
		V_3 = (bool)((((int32_t)L_45) < ((int32_t)L_46))? 1 : 0);
		bool L_47 = V_3;
		if (L_47)
		{
			goto IL_00d2;
		}
	}
	{
		// for (int r = 0; r < nRows; r++)
		int32_t L_48 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1));
	}

IL_0147:
	{
		// for (int r = 0; r < nRows; r++)
		int32_t L_49 = V_0;
		int32_t L_50 = __this->get_nRows_8();
		V_4 = (bool)((((int32_t)L_49) < ((int32_t)L_50))? 1 : 0);
		bool L_51 = V_4;
		if (L_51)
		{
			goto IL_00cd;
		}
	}
	{
		// Gizmos.color = Color.red;//Red Sphere is the "origin" of the matrix
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_52;
		L_52 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(L_52, /*hidden argument*/NULL);
		// Gizmos.DrawSphere(FirstTile, 1 * tileSize / 10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53 = __this->get_FirstTile_16();
		float L_54 = __this->get_tileSize_9();
		Gizmos_DrawSphere_m50414CF8E502F4D93FC133091DA5E39543D69E91(L_53, ((float)((float)((float)il2cpp_codegen_multiply((float)(1.0f), (float)L_54))/(float)(10.0f))), /*hidden argument*/NULL);
		// Gizmos.color = Color.blue;//Blue sphere is the "end" of the matrix
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_55;
		L_55 = Color_get_blue_m6D62D515CA10A6E760848E1BFB997E27B90BD07B(/*hidden argument*/NULL);
		Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(L_55, /*hidden argument*/NULL);
		// Gizmos.DrawSphere(LastTile, 1 * tileSize / 10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_56 = __this->get_LastTile_17();
		float L_57 = __this->get_tileSize_9();
		Gizmos_DrawSphere_m50414CF8E502F4D93FC133091DA5E39543D69E91(L_56, ((float)((float)((float)il2cpp_codegen_multiply((float)(1.0f), (float)L_57))/(float)(10.0f))), /*hidden argument*/NULL);
		// Gizmos.color = Color.white;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_58;
		L_58 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(L_58, /*hidden argument*/NULL);
		// foreach (Tile T in availableTiles)
		IL2CPP_RUNTIME_CLASS_INIT(Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981_il2cpp_TypeInfo_var);
		List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8 * L_59 = ((Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981_StaticFields*)il2cpp_codegen_static_fields_for(Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981_il2cpp_TypeInfo_var))->get_availableTiles_18();
		NullCheck(L_59);
		Enumerator_tB1C7C4A9D6D39DD878989E93E7F1603AA275F388  L_60;
		L_60 = List_1_GetEnumerator_mD9E1BADE21D5D1FD44458F9E0DF52E87649411A3(L_59, /*hidden argument*/List_1_GetEnumerator_mD9E1BADE21D5D1FD44458F9E0DF52E87649411A3_RuntimeMethod_var);
		V_5 = L_60;
	}

IL_01c3:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0203;
		}

IL_01c5:
		{
			// foreach (Tile T in availableTiles)
			Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_61;
			L_61 = Enumerator_get_Current_mC13B60E1D796F31B52E6108D085EBB5014082324_inline((Enumerator_tB1C7C4A9D6D39DD878989E93E7F1603AA275F388 *)(&V_5), /*hidden argument*/Enumerator_get_Current_mC13B60E1D796F31B52E6108D085EBB5014082324_RuntimeMethod_var);
			V_6 = L_61;
			// Gizmos.color = Color.gray;
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_62;
			L_62 = Color_get_gray_m34BEEC2EEF30819B433125EF748CE22BE17C9B6E(/*hidden argument*/NULL);
			Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(L_62, /*hidden argument*/NULL);
			// Gizmos.DrawLine(T.transform.position, transform.position);
			Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_63 = V_6;
			NullCheck(L_63);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_64;
			L_64 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_63, /*hidden argument*/NULL);
			NullCheck(L_64);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_65;
			L_65 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_64, /*hidden argument*/NULL);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_66;
			L_66 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
			NullCheck(L_66);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_67;
			L_67 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_66, /*hidden argument*/NULL);
			Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823(L_65, L_67, /*hidden argument*/NULL);
			// Gizmos.color = Color.white;
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_68;
			L_68 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
			Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(L_68, /*hidden argument*/NULL);
		}

IL_0203:
		{
			// foreach (Tile T in availableTiles)
			bool L_69;
			L_69 = Enumerator_MoveNext_mB6A53870EA7BF331E44BA58DB74970BAD3E3A3E4((Enumerator_tB1C7C4A9D6D39DD878989E93E7F1603AA275F388 *)(&V_5), /*hidden argument*/Enumerator_MoveNext_mB6A53870EA7BF331E44BA58DB74970BAD3E3A3E4_RuntimeMethod_var);
			if (L_69)
			{
				goto IL_01c5;
			}
		}

IL_020c:
		{
			IL2CPP_LEAVE(0x21D, FINALLY_020e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_020e;
	}

FINALLY_020e:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m19574318147DEC45769F276ECD6CB1EE3C8DF28E((Enumerator_tB1C7C4A9D6D39DD878989E93E7F1603AA275F388 *)(&V_5), /*hidden argument*/Enumerator_Dispose_m19574318147DEC45769F276ECD6CB1EE3C8DF28E_RuntimeMethod_var);
		IL2CPP_END_FINALLY(526)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(526)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x21D, IL_021d)
	}

IL_021d:
	{
		// if(!checkIfTilesExist())
		bool L_70;
		L_70 = Endless2D_checkIfTilesExist_m9A5A6E48790BFC85ADBB712F3592C5A99959829B(__this, /*hidden argument*/NULL);
		V_7 = (bool)((((int32_t)L_70) == ((int32_t)0))? 1 : 0);
		bool L_71 = V_7;
		if (!L_71)
		{
			goto IL_0237;
		}
	}
	{
		// Debug.LogWarning("No Tiles Attached!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral3CB4F1E278673C46B76919E625B53B869ABFBB25, /*hidden argument*/NULL);
	}

IL_0237:
	{
		// }
		return;
	}
}
// System.Void Endless2D::getPositionVectors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Endless2D_getPositionVectors_mAC383D1E77FF17CB52FD360BB728D2A23E8E1F33 (Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (gridCenter == center.UpLeft)
		int32_t L_0 = __this->get_gridCenter_6();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_007a;
		}
	}
	{
		// HDirectionVector = Vector3.right;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44(/*hidden argument*/NULL);
		__this->set_HDirectionVector_14(L_2);
		// VDirectionVector = -Vector3.up;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_3, /*hidden argument*/NULL);
		__this->set_VDirectionVector_15(L_4);
		// FirstTile = new Vector3(-0.5f, 0.5f ,0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_5), (-0.5f), (0.5f), (0.0f), /*hidden argument*/NULL);
		__this->set_FirstTile_16(L_5);
		// LastTile = new Vector3(1 * (nColumns -1 ) + 0.5f,-1 * (nRows -1) - 0.5f ,0);
		int32_t L_6 = __this->get_nColumns_7();
		int32_t L_7 = __this->get_nRows_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_8), ((float)il2cpp_codegen_add((float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)))), (float)(0.5f))), ((float)il2cpp_codegen_subtract((float)((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)(-1), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1)))))), (float)(0.5f))), (0.0f), /*hidden argument*/NULL);
		__this->set_LastTile_17(L_8);
		goto IL_0200;
	}

IL_007a:
	{
		// else if (gridCenter == center.UpRight)
		int32_t L_9 = __this->get_gridCenter_6();
		V_1 = (bool)((((int32_t)L_9) == ((int32_t)2))? 1 : 0);
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_00fb;
		}
	}
	{
		// HDirectionVector = -Vector3.right;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_11, /*hidden argument*/NULL);
		__this->set_HDirectionVector_14(L_12);
		// VDirectionVector = -Vector3.up;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_13, /*hidden argument*/NULL);
		__this->set_VDirectionVector_15(L_14);
		// FirstTile = new Vector3(-1 * (nColumns - 1) - 0.5f, 0.5f, 0); ;
		int32_t L_15 = __this->get_nColumns_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_16), ((float)il2cpp_codegen_subtract((float)((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)(-1), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1)))))), (float)(0.5f))), (0.5f), (0.0f), /*hidden argument*/NULL);
		__this->set_FirstTile_16(L_16);
		// LastTile = new Vector3(0.5f, -1 * (nRows-1) - 0.5f, 0);
		int32_t L_17 = __this->get_nRows_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_18), (0.5f), ((float)il2cpp_codegen_subtract((float)((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)(-1), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1)))))), (float)(0.5f))), (0.0f), /*hidden argument*/NULL);
		__this->set_LastTile_17(L_18);
		goto IL_0200;
	}

IL_00fb:
	{
		// else if (gridCenter == center.DownLeft)
		int32_t L_19 = __this->get_gridCenter_6();
		V_2 = (bool)((((int32_t)L_19) == ((int32_t)1))? 1 : 0);
		bool L_20 = V_2;
		if (!L_20)
		{
			goto IL_016d;
		}
	}
	{
		// HDirectionVector = Vector3.right;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44(/*hidden argument*/NULL);
		__this->set_HDirectionVector_14(L_21);
		// VDirectionVector = Vector3.up;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		__this->set_VDirectionVector_15(L_22);
		// FirstTile = new Vector3 (-0.5f, 1 * (nRows-1) + 0.5f, 0);
		int32_t L_23 = __this->get_nRows_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_24), (-0.5f), ((float)il2cpp_codegen_add((float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)1)))), (float)(0.5f))), (0.0f), /*hidden argument*/NULL);
		__this->set_FirstTile_16(L_24);
		// LastTile = new Vector3(1 * (nColumns-1) + 0.5f, -0.5f, 0);
		int32_t L_25 = __this->get_nColumns_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_26), ((float)il2cpp_codegen_add((float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)1)))), (float)(0.5f))), (-0.5f), (0.0f), /*hidden argument*/NULL);
		__this->set_LastTile_17(L_26);
		goto IL_0200;
	}

IL_016d:
	{
		// else if (gridCenter == center.DownRight)
		int32_t L_27 = __this->get_gridCenter_6();
		V_3 = (bool)((((int32_t)L_27) == ((int32_t)3))? 1 : 0);
		bool L_28 = V_3;
		if (!L_28)
		{
			goto IL_01e3;
		}
	}
	{
		// HDirectionVector = -Vector3.right;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_29, /*hidden argument*/NULL);
		__this->set_HDirectionVector_14(L_30);
		// VDirectionVector = Vector3.up;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		__this->set_VDirectionVector_15(L_31);
		// FirstTile = new Vector3(-1 * (nColumns-1) - 0.5f, 1 * (nRows-1) + 0.5f , 0);
		int32_t L_32 = __this->get_nColumns_7();
		int32_t L_33 = __this->get_nRows_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		memset((&L_34), 0, sizeof(L_34));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_34), ((float)il2cpp_codegen_subtract((float)((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)(-1), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)1)))))), (float)(0.5f))), ((float)il2cpp_codegen_add((float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_33, (int32_t)1)))), (float)(0.5f))), (0.0f), /*hidden argument*/NULL);
		__this->set_FirstTile_16(L_34);
		// LastTile = new Vector3(0.5f, -0.5f, 0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		memset((&L_35), 0, sizeof(L_35));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_35), (0.5f), (-0.5f), (0.0f), /*hidden argument*/NULL);
		__this->set_LastTile_17(L_35);
		goto IL_0200;
	}

IL_01e3:
	{
		// HDirectionVector = Vector3.right;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44(/*hidden argument*/NULL);
		__this->set_HDirectionVector_14(L_36);
		// VDirectionVector = -Vector3.up;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		L_37 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_37, /*hidden argument*/NULL);
		__this->set_VDirectionVector_15(L_38);
	}

IL_0200:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 Endless2D::getTileDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Endless2D_getTileDirection_m09F6D6E6C1DCC8B62CDE7CE239E87828E6D2F814 (Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// if (tileDirection == tileDir.Up)
		int32_t L_0 = __this->get_tileDirection_11();
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// result = new Vector3(0, 1, 0);
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		goto IL_009d;
	}

IL_0026:
	{
		// else if (tileDirection == tileDir.Right)
		int32_t L_2 = __this->get_tileDirection_11();
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)1))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_004b;
		}
	}
	{
		// result = new Vector3(1, 0, 0);
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		goto IL_009d;
	}

IL_004b:
	{
		// else if (tileDirection == tileDir.Down)
		int32_t L_4 = __this->get_tileDirection_11();
		V_3 = (bool)((((int32_t)L_4) == ((int32_t)3))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0070;
		}
	}
	{
		// result = new Vector3(0, -1, 0);
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), (0.0f), (-1.0f), (0.0f), /*hidden argument*/NULL);
		goto IL_009d;
	}

IL_0070:
	{
		// else if (tileDirection == tileDir.Left)
		int32_t L_6 = __this->get_tileDirection_11();
		V_4 = (bool)((((int32_t)L_6) == ((int32_t)2))? 1 : 0);
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_0097;
		}
	}
	{
		// result = new Vector3(-1, 0, 0);
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), (-1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		goto IL_009d;
	}

IL_0097:
	{
		// result = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		V_0 = L_8;
	}

IL_009d:
	{
		// return result;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_0;
		V_5 = L_9;
		goto IL_00a2;
	}

IL_00a2:
	{
		// }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_5;
		return L_10;
	}
}
// System.Void Endless2D::startTileMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Endless2D_startTileMovement_m365981C7AAB1EDE392E33089292FBE32C61E4294 (Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m19574318147DEC45769F276ECD6CB1EE3C8DF28E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB6A53870EA7BF331E44BA58DB74970BAD3E3A3E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC13B60E1D796F31B52E6108D085EBB5014082324_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mD9E1BADE21D5D1FD44458F9E0DF52E87649411A3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tB1C7C4A9D6D39DD878989E93E7F1603AA275F388  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (Tile T in availableTiles)
		IL2CPP_RUNTIME_CLASS_INIT(Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981_il2cpp_TypeInfo_var);
		List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8 * L_0 = ((Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981_StaticFields*)il2cpp_codegen_static_fields_for(Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981_il2cpp_TypeInfo_var))->get_availableTiles_18();
		NullCheck(L_0);
		Enumerator_tB1C7C4A9D6D39DD878989E93E7F1603AA275F388  L_1;
		L_1 = List_1_GetEnumerator_mD9E1BADE21D5D1FD44458F9E0DF52E87649411A3(L_0, /*hidden argument*/List_1_GetEnumerator_mD9E1BADE21D5D1FD44458F9E0DF52E87649411A3_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002c;
		}

IL_000f:
		{
			// foreach (Tile T in availableTiles)
			Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_2;
			L_2 = Enumerator_get_Current_mC13B60E1D796F31B52E6108D085EBB5014082324_inline((Enumerator_tB1C7C4A9D6D39DD878989E93E7F1603AA275F388 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mC13B60E1D796F31B52E6108D085EBB5014082324_RuntimeMethod_var);
			V_1 = L_2;
			// T.moveTileInDirectionOf(movementDirection, movementSpeed);
			Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_3 = V_1;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = __this->get_movementDirection_12();
			float L_5 = __this->get_movementSpeed_10();
			NullCheck(L_3);
			Tile_moveTileInDirectionOf_mEC7E303547637D4673E8163463C46C29FD30AB62(L_3, L_4, L_5, /*hidden argument*/NULL);
		}

IL_002c:
		{
			// foreach (Tile T in availableTiles)
			bool L_6;
			L_6 = Enumerator_MoveNext_mB6A53870EA7BF331E44BA58DB74970BAD3E3A3E4((Enumerator_tB1C7C4A9D6D39DD878989E93E7F1603AA275F388 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mB6A53870EA7BF331E44BA58DB74970BAD3E3A3E4_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_000f;
			}
		}

IL_0035:
		{
			IL2CPP_LEAVE(0x46, FINALLY_0037);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0037;
	}

FINALLY_0037:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m19574318147DEC45769F276ECD6CB1EE3C8DF28E((Enumerator_tB1C7C4A9D6D39DD878989E93E7F1603AA275F388 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m19574318147DEC45769F276ECD6CB1EE3C8DF28E_RuntimeMethod_var);
		IL2CPP_END_FINALLY(55)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(55)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x46, IL_0046)
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void Endless2D::spawnTiles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Endless2D_spawnTiles_mD4B8E273DD6F93D3DB70FA7FDBA4844F0ABDFC99 (Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral169CFE7A5DDAAD5DF9058C20416103A4111BC401);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	{
		// for (int r = 0; r < nRows; r++)
		V_1 = 0;
		goto IL_00a7;
	}

IL_0008:
	{
		// for (int c = 0; c < nColumns; c++)
		V_2 = 0;
		goto IL_0092;
	}

IL_0010:
	{
		// temp = tilePooler.SpawnFromPool("layer01", transform.position + HDirectionVector * c * tileSize + VDirectionVector * r * tileSize, Quaternion.identity);
		TilePooler_tDED87420D8B326269BDE0F491CDCC4A240A5C518 * L_0 = __this->get_tilePooler_13();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = __this->get_HDirectionVector_14();
		int32_t L_4 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_3, ((float)((float)L_4)), /*hidden argument*/NULL);
		float L_6 = __this->get_tileSize_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_5, L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_2, L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = __this->get_VDirectionVector_15();
		int32_t L_10 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_9, ((float)((float)L_10)), /*hidden argument*/NULL);
		float L_12 = __this->get_tileSize_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_11, L_12, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_8, L_13, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15;
		L_15 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_14, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_16;
		L_16 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = TilePooler_SpawnFromPool_mE8A226B186790A28B996E6432728618DB6CD8B6B(L_0, _stringLiteral169CFE7A5DDAAD5DF9058C20416103A4111BC401, L_15, L_16, /*hidden argument*/NULL);
		V_0 = L_17;
		// temp.transform.localScale = Vector3.one * tileSize;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = V_0;
		NullCheck(L_18);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_18, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		float L_21 = __this->get_tileSize_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_20, L_21, /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_19, L_22, /*hidden argument*/NULL);
		// for (int c = 0; c < nColumns; c++)
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0092:
	{
		// for (int c = 0; c < nColumns; c++)
		int32_t L_24 = V_2;
		int32_t L_25 = __this->get_nColumns_7();
		V_3 = (bool)((((int32_t)L_24) < ((int32_t)L_25))? 1 : 0);
		bool L_26 = V_3;
		if (L_26)
		{
			goto IL_0010;
		}
	}
	{
		// for (int r = 0; r < nRows; r++)
		int32_t L_27 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_00a7:
	{
		// for (int r = 0; r < nRows; r++)
		int32_t L_28 = V_1;
		int32_t L_29 = __this->get_nRows_8();
		V_4 = (bool)((((int32_t)L_28) < ((int32_t)L_29))? 1 : 0);
		bool L_30 = V_4;
		if (L_30)
		{
			goto IL_0008;
		}
	}
	{
		// }
		return;
	}
}
// System.Boolean Endless2D::checkIfTilesExist()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Endless2D_checkIfTilesExist_m9A5A6E48790BFC85ADBB712F3592C5A99959829B (Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* V_2 = NULL;
	int32_t V_3 = 0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	{
		// bool tilesExist = true;
		V_0 = (bool)1;
		// if (availableSprites.Length == 0) { //Checks if the array exists
		SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* L_0 = __this->get_availableSprites_5();
		NullCheck(L_0);
		V_1 = (bool)((((int32_t)(((RuntimeArray*)L_0)->max_length)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// tilesExist = false;
		V_0 = (bool)0;
		goto IL_004a;
	}

IL_0017:
	{
		// foreach (Sprite t in availableSprites)
		SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* L_2 = __this->get_availableSprites_5();
		V_2 = L_2;
		V_3 = 0;
		goto IL_0043;
	}

IL_0024:
	{
		// foreach (Sprite t in availableSprites)
		SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* L_3 = V_2;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_4 = L_6;
		// if (t == null) {
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_7 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_7, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_5 = L_8;
		bool L_9 = V_5;
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		// return false;
		V_6 = (bool)0;
		goto IL_004f;
	}

IL_003e:
	{
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0043:
	{
		// foreach (Sprite t in availableSprites)
		int32_t L_11 = V_3;
		SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* L_12 = V_2;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))))
		{
			goto IL_0024;
		}
	}
	{
	}

IL_004a:
	{
		// return tilesExist;
		bool L_13 = V_0;
		V_6 = L_13;
		goto IL_004f;
	}

IL_004f:
	{
		// }
		bool L_14 = V_6;
		return L_14;
	}
}
// System.Void Endless2D::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Endless2D__ctor_m7A7F66F5309460105B8AC3D4234741628EBB48FD (Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981 * __this, const RuntimeMethod* method)
{
	{
		Singleton__ctor_m2FEA2A78A603EE38F9D8CE185C2ACCF63EEE9752(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Endless2D::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Endless2D__cctor_m39B688ED40BC5F24B0187A03AC5116E0BD76EF02 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m31DF99DCE36CBA9DFC542F91879C9D2BB2E98557_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static List<Tile> availableTiles = new List<Tile>(); //List that will access all the Tiles in order to modifit them.
		List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8 * L_0 = (List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8 *)il2cpp_codegen_object_new(List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8_il2cpp_TypeInfo_var);
		List_1__ctor_m31DF99DCE36CBA9DFC542F91879C9D2BB2E98557(L_0, /*hidden argument*/List_1__ctor_m31DF99DCE36CBA9DFC542F91879C9D2BB2E98557_RuntimeMethod_var);
		((Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981_StaticFields*)il2cpp_codegen_static_fields_for(Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981_il2cpp_TypeInfo_var))->set_availableTiles_18(L_0);
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
// System.Void FillValueNumber::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FillValueNumber_Update_mDBB13EC17C64DDB915F05CA76882935624750365 (FillValueNumber_t4A061AFCFC2F33F366B5E6EDD6EBA44A5D83BFC9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float amount = TargetImage.fillAmount * 100;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = __this->get_TargetImage_4();
		NullCheck(L_0);
		float L_1;
		L_1 = Image_get_fillAmount_mA6F275C1167931E2F166EA85058EF181D8008B09(L_0, /*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_multiply((float)L_1, (float)(100.0f)));
		// gameObject.GetComponent<Text>().text = amount.ToString("F0");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3;
		L_3 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_2, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		String_t* L_4;
		L_4 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)(&V_0), _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_4);
		// }
		return;
	}
}
// System.Void FillValueNumber::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FillValueNumber__ctor_m52906A55EB0F3193088F1A75A14FD9388D28120B (FillValueNumber_t4A061AFCFC2F33F366B5E6EDD6EBA44A5D83BFC9 * __this, const RuntimeMethod* method)
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
// GameAssets GameAssets::Getinstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191 * GameAssets_Getinstance_mF8747563EFDDFA3B04BAAF1A80721A1FAB2631F8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191 * V_0 = NULL;
	{
		// return instance;
		GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191 * L_0 = ((GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191_StaticFields*)il2cpp_codegen_static_fields_for(GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191_il2cpp_TypeInfo_var))->get_instance_4();
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191 * L_1 = V_0;
		return L_1;
	}
}
// System.Void GameAssets::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameAssets_Awake_mD6B51A0C92826F2F7E8FA9A71C17EF7FD4571049 (GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191_StaticFields*)il2cpp_codegen_static_fields_for(GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191_il2cpp_TypeInfo_var))->set_instance_4(__this);
		// }
		return;
	}
}
// System.Void GameAssets::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameAssets__ctor_mAC95D70B1B0407D5FDC330BAA4E0B7B2EAFFA40A (GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191 * __this, const RuntimeMethod* method)
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
// System.Void HighScore::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighScore__ctor_m08C4FD9898F0CF2B94238FF78936055265C6A981 (HighScore_tE521702BF43BC092726A498168F5E00DAC878753 * __this, const RuntimeMethod* method)
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
// System.Void Jump::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jump_Update_m311E242D2C301F7F6752CEEE853BE4C3B112D233 (Jump_t84C2E1E5FF2AB21C80DDF1A2B25D5D42B47A4F2A * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Jump::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jump_FixedUpdate_m6B171D03C78662E954722A22A93AC70A97B59633 (Jump_t84C2E1E5FF2AB21C80DDF1A2B25D5D42B47A4F2A * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Jump::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jump__ctor_m96D00015D1BAF98B236420BDC523FF00BF623E40 (Jump_t84C2E1E5FF2AB21C80DDF1A2B25D5D42B47A4F2A * __this, const RuntimeMethod* method)
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
// System.Void JumpPad::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JumpPad_Awake_m0DFCA00758BFFD35DC30626D55075E4541EE0AFC (JumpPad_t68137B46D24D8602AEC84E66F261E70F68F545A4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim = GetComponent<Animator>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0;
		L_0 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set_anim_4(L_0);
		// }
		return;
	}
}
// System.Void JumpPad::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JumpPad_Update_mA5F9064B80CF45FEF0F120100A0F5A3B28895A17 (JumpPad_t68137B46D24D8602AEC84E66F261E70F68F545A4 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void JumpPad::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JumpPad_OnCollisionEnter2D_mF614C31403D8195937BA11AA24249CDB8DC25A5D (JumpPad_t68137B46D24D8602AEC84E66F261E70F68F545A4 * __this, Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E0CD92D8AA75E349688E376EED12EC22E2047A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (collision.gameObject.CompareTag("Player"))
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0051;
		}
	}
	{
		// collision.gameObject.GetComponent<Rigidbody2D>().AddForce(Vector2.up * bounce, ForceMode2D.Impulse);
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_4 = ___collision0;
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_6;
		L_6 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_5, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C(/*hidden argument*/NULL);
		float L_8 = __this->get_bounce_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		L_9 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_7, L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_6, L_9, 1, /*hidden argument*/NULL);
		// anim.SetTrigger("Jumped");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_10 = __this->get_anim_4();
		NullCheck(L_10);
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_10, _stringLiteral2E0CD92D8AA75E349688E376EED12EC22E2047A1, /*hidden argument*/NULL);
		// SoundManager.PlaySound(SoundManager.Sound.JumpPad);
		SoundManager_PlaySound_m94F56384BAFC1A000ED8B6E5BC9A90DA615F248D(2, /*hidden argument*/NULL);
	}

IL_0051:
	{
		// }
		return;
	}
}
// System.Void JumpPad::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JumpPad__ctor_m16EE3E22911EFA602808118979FA589F3046C7BD (JumpPad_t68137B46D24D8602AEC84E66F261E70F68F545A4 * __this, const RuntimeMethod* method)
{
	{
		// float bounce = 120f;
		__this->set_bounce_5((120.0f));
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
// System.Void OutlinePlatform::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutlinePlatform_Update_m7F4BE79121EBF97EDFE22C6F629029BC6A2E865D (OutlinePlatform_t9B3367CC5A544A93C6D78ADE7A049AC4AB381DF9 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (transform.position.x > 10f)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_x_2();
		V_0 = (bool)((((float)L_2) > ((float)(10.0f)))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		// direction = -1;
		__this->set_direction_5((-1));
	}

IL_0025:
	{
		// if (transform.position.x < -10f)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_x_2();
		V_1 = (bool)((((float)L_6) < ((float)(-10.0f)))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		// direction = 1;
		__this->set_direction_5(1);
	}

IL_0049:
	{
		// transform.position += new Vector3(1, 0, 0) * direction * speed * Time.deltaTime;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = L_8;
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_11), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		int32_t L_12 = __this->get_direction_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_11, ((float)((float)L_12)), /*hidden argument*/NULL);
		float L_14 = __this->get_speed_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_13, L_14, /*hidden argument*/NULL);
		float L_16;
		L_16 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_15, L_16, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_10, L_17, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_9, L_18, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OutlinePlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutlinePlatform__ctor_m025844A2D68171DD6D9B94FC0528D454E9ECBB5D (OutlinePlatform_t9B3367CC5A544A93C6D78ADE7A049AC4AB381DF9 * __this, const RuntimeMethod* method)
{
	{
		// float speed = 5f;
		__this->set_speed_4((5.0f));
		// int direction = 1;
		__this->set_direction_5(1);
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
// System.Void PinkPlatform::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinkPlatform_Awake_mA7E10B15AE589B45A69F7D008A8908A1F1C5247C (PinkPlatform_t1394AF1AECF177B9BF5EF553FD30B1BE9D09FE6B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player = GameObject.Find("Player");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		__this->set_player_5(L_0);
		// anim = player.GetComponent<Animator>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_player_5();
		NullCheck(L_1);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_2;
		L_2 = GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36(L_1, /*hidden argument*/GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		__this->set_anim_6(L_2);
		// }
		return;
	}
}
// System.Void PinkPlatform::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinkPlatform_OnCollisionEnter2D_m210BA4EF8CE90260B85798F6FF72A2435C66E705 (PinkPlatform_t1394AF1AECF177B9BF5EF553FD30B1BE9D09FE6B * __this, Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * V_1 = NULL;
	bool V_2 = false;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t G_B3_0 = 0;
	{
		// if (collision.relativeVelocity.y<=0f&&collision.transform.tag=="Player")
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_0 = ___collision0;
		NullCheck(L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Collision2D_get_relativeVelocity_m021626A3853F4D1E2DA016479096DB6CE9999628(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_y_1();
		if ((!(((float)L_2) <= ((float)(0.0f)))))
		{
			goto IL_002a;
		}
	}
	{
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_3 = ___collision0;
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Collision2D_get_transform_mC5A1F1938F67668E8B6BDE1048C727C8578AD827(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_4, /*hidden argument*/NULL);
		bool L_6;
		L_6 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_5, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_002b;
	}

IL_002a:
	{
		G_B3_0 = 0;
	}

IL_002b:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_007e;
		}
	}
	{
		// Rigidbody2D rb = collision.collider.GetComponent<Rigidbody2D>();
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_8 = ___collision0;
		NullCheck(L_8);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_9;
		L_9 = Collision2D_get_collider_mA7687EDB0D47A2F211BFE8DB89266B9AA05CFDDD(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_10;
		L_10 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(L_9, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		V_1 = L_10;
		// if (rb != null)
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_11 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_11, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_2 = L_12;
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_007d;
		}
	}
	{
		// Vector2 velocity = rb.velocity;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_14 = V_1;
		NullCheck(L_14);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15;
		L_15 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_14, /*hidden argument*/NULL);
		V_3 = L_15;
		// velocity.y = Jumpforce;
		float L_16 = __this->get_Jumpforce_4();
		(&V_3)->set_y_1(L_16);
		// rb.velocity = velocity;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_17 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18 = V_3;
		NullCheck(L_17);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_17, L_18, /*hidden argument*/NULL);
		// anim.SetTrigger("Jump");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_19 = __this->get_anim_6();
		NullCheck(L_19);
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_19, _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, /*hidden argument*/NULL);
		// SoundManager.PlaySound(SoundManager.Sound.Jump);
		SoundManager_PlaySound_m94F56384BAFC1A000ED8B6E5BC9A90DA615F248D(0, /*hidden argument*/NULL);
	}

IL_007d:
	{
	}

IL_007e:
	{
		// }
		return;
	}
}
// System.Void PinkPlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinkPlatform__ctor_m98235AE050E127FE7508FA1644E258E8BEC6E9B5 (PinkPlatform_t1394AF1AECF177B9BF5EF553FD30B1BE9D09FE6B * __this, const RuntimeMethod* method)
{
	{
		// float Jumpforce = 64f;
		__this->set_Jumpforce_4((64.0f));
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
// System.Void RedPlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RedPlatform__ctor_mAE59E0D9167EF1A163DB1A5B0C25C5C62C6F5DC9 (RedPlatform_t154514DE85EC8B16C56E5DCB223CD625ABDF1F86 * __this, const RuntimeMethod* method)
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
// System.Void Score::AddScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_AddScore_m8F16DF5BFB491421A589DF9C70B36CD56012DAC1 (Score_tE07CBD9780DFC212BE43719819F512E8861103C7 * __this, const RuntimeMethod* method)
{
	{
		// scorenum++;
		int32_t L_0 = __this->get_scorenum_8();
		__this->set_scorenum_8(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// }
		return;
	}
}
// System.Void Score::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_Awake_m2AD70D4907B6876F5CC8545C26A1F9C8EFE77195 (Score_tE07CBD9780DFC212BE43719819F512E8861103C7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// score = GetComponent<Text>();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0;
		L_0 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(__this, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		__this->set_score_6(L_0);
		// highScore = PlayerPrefs.GetInt(highScoreKey, 0);
		String_t* L_1 = __this->get_highScoreKey_9();
		int32_t L_2;
		L_2 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(L_1, 0, /*hidden argument*/NULL);
		__this->set_highScore_7(L_2);
		// HighScoreText.text = highScore.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_HighScoreText_5();
		int32_t* L_4 = __this->get_address_of_highScore_7();
		String_t* L_5;
		L_5 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_5);
		// }
		return;
	}
}
// System.Void Score::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_Update_mB696B161F91F1AE220BCD4F47028DE039D9697D2 (Score_tE07CBD9780DFC212BE43719819F512E8861103C7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// if (player.position.y > 0 && player.position.y > scorenum)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_player_4();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_y_3();
		if ((!(((float)L_2) > ((float)(0.0f)))))
		{
			goto IL_0033;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = __this->get_player_4();
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_y_3();
		int32_t L_6 = __this->get_scorenum_8();
		G_B3_0 = ((((float)L_5) > ((float)((float)((float)L_6))))? 1 : 0);
		goto IL_0034;
	}

IL_0033:
	{
		G_B3_0 = 0;
	}

IL_0034:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0041;
		}
	}
	{
		// AddScore();
		Score_AddScore_m8F16DF5BFB491421A589DF9C70B36CD56012DAC1(__this, /*hidden argument*/NULL);
	}

IL_0041:
	{
		// score.text = scorenum.ToString("0").Normalize();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_8 = __this->get_score_6();
		int32_t* L_9 = __this->get_address_of_scorenum_8();
		String_t* L_10;
		L_10 = Int32_ToString_m5398ED0B6625B75CAF70C63B3CF2CE47D3C1B184((int32_t*)L_9, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, /*hidden argument*/NULL);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = String_Normalize_mE1B6B3D1A5A0A05548C1B91D7B02C4861827ABCD(L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_11);
		// if (scorenum > highScore)
		int32_t L_12 = __this->get_scorenum_8();
		int32_t L_13 = __this->get_highScore_7();
		V_1 = (bool)((((int32_t)L_12) > ((int32_t)L_13))? 1 : 0);
		bool L_14 = V_1;
		if (!L_14)
		{
			goto IL_00a5;
		}
	}
	{
		// PlayerPrefs.SetInt(highScoreKey, scorenum);
		String_t* L_15 = __this->get_highScoreKey_9();
		int32_t L_16 = __this->get_scorenum_8();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(L_15, L_16, /*hidden argument*/NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC(/*hidden argument*/NULL);
		// HighScoreText.text = scorenum.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_17 = __this->get_HighScoreText_5();
		int32_t* L_18 = __this->get_address_of_scorenum_8();
		String_t* L_19;
		L_19 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_17, L_19);
	}

IL_00a5:
	{
		// }
		return;
	}
}
// System.Void Score::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score__ctor_mEE9186D20D9B28A735262B29AB6E8D9FF1380FB6 (Score_tE07CBD9780DFC212BE43719819F512E8861103C7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string highScoreKey = "HighScore";
		__this->set_highScoreKey_9(_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B);
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
// Singleton Singleton::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Singleton_t85C95C878D42548878AD1318351EC6E51A48162F * Singleton_get_Instance_mB8C346F100DF5857F9C494F32762FB403864BDEC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_t85C95C878D42548878AD1318351EC6E51A48162F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get;
		Singleton_t85C95C878D42548878AD1318351EC6E51A48162F * L_0 = ((Singleton_t85C95C878D42548878AD1318351EC6E51A48162F_StaticFields*)il2cpp_codegen_static_fields_for(Singleton_t85C95C878D42548878AD1318351EC6E51A48162F_il2cpp_TypeInfo_var))->get_U3CInstanceU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Singleton::set_Instance(Singleton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Singleton_set_Instance_mB373669F29D79E1C3EC3332D4388AC38C45A9D74 (Singleton_t85C95C878D42548878AD1318351EC6E51A48162F * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_t85C95C878D42548878AD1318351EC6E51A48162F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private set;
		Singleton_t85C95C878D42548878AD1318351EC6E51A48162F * L_0 = ___value0;
		((Singleton_t85C95C878D42548878AD1318351EC6E51A48162F_StaticFields*)il2cpp_codegen_static_fields_for(Singleton_t85C95C878D42548878AD1318351EC6E51A48162F_il2cpp_TypeInfo_var))->set_U3CInstanceU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void Singleton::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Singleton_Awake_m0A89173E19255DD606C8D23B2938D46E841BF76D (Singleton_t85C95C878D42548878AD1318351EC6E51A48162F * __this, const RuntimeMethod* method)
{
	{
		// Instance = this;
		Singleton_set_Instance_mB373669F29D79E1C3EC3332D4388AC38C45A9D74_inline(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Singleton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Singleton__ctor_m2FEA2A78A603EE38F9D8CE185C2ACCF63EEE9752 (Singleton_t85C95C878D42548878AD1318351EC6E51A48162F * __this, const RuntimeMethod* method)
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
// System.Void SoundManager::initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_initialize_m32C6167EF99FD105660A911D42022DC9673B8BDF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m42BDA71D46CB3D62A8EF6483F70B93D0A33243E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m3A1F77DF9178C4D3B820AFBDE48026A2B6B15FB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA516C4BF8CC04CFE1F6BF38F3DE3D8A246BE2BC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// soundtimerDictionary = new Dictionary<Sound, float>();
		Dictionary_2_tA516C4BF8CC04CFE1F6BF38F3DE3D8A246BE2BC5 * L_0 = (Dictionary_2_tA516C4BF8CC04CFE1F6BF38F3DE3D8A246BE2BC5 *)il2cpp_codegen_object_new(Dictionary_2_tA516C4BF8CC04CFE1F6BF38F3DE3D8A246BE2BC5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m42BDA71D46CB3D62A8EF6483F70B93D0A33243E1(L_0, /*hidden argument*/Dictionary_2__ctor_m42BDA71D46CB3D62A8EF6483F70B93D0A33243E1_RuntimeMethod_var);
		((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->set_soundtimerDictionary_0(L_0);
		// soundtimerDictionary[Sound.PowerUp] = 0f;
		Dictionary_2_tA516C4BF8CC04CFE1F6BF38F3DE3D8A246BE2BC5 * L_1 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_soundtimerDictionary_0();
		NullCheck(L_1);
		Dictionary_2_set_Item_m3A1F77DF9178C4D3B820AFBDE48026A2B6B15FB6(L_1, 1, (0.0f), /*hidden argument*/Dictionary_2_set_Item_m3A1F77DF9178C4D3B820AFBDE48026A2B6B15FB6_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void SoundManager::PlaySound(SoundManager/Sound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlaySound_m94F56384BAFC1A000ED8B6E5BC9A90DA615F248D (int32_t ___sound0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * V_2 = NULL;
	{
		// if (canPlaySound(sound))
		int32_t L_0 = ___sound0;
		bool L_1;
		L_1 = SoundManager_canPlaySound_m09BEE2A4EE2A5C0A17EDF39F0640F7363D50BECD(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0044;
		}
	}
	{
		// GameObject soundGameObject = new GameObject("Sound");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_3, _stringLiteralB3C34217CBB8F650ED8F6E70B410A604371E2EF1, /*hidden argument*/NULL);
		V_1 = L_3;
		// AudioSource audioSource = soundGameObject.AddComponent<AudioSource>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = V_1;
		NullCheck(L_4);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_5;
		L_5 = GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76(L_4, /*hidden argument*/GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76_RuntimeMethod_var);
		V_2 = L_5;
		// audioSource.volume = 0.5f;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_6 = V_2;
		NullCheck(L_6);
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_6, (0.5f), /*hidden argument*/NULL);
		// audioSource.PlayOneShot(GetAudioClip(sound));
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_7 = V_2;
		int32_t L_8 = ___sound0;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_9;
		L_9 = SoundManager_GetAudioClip_mEC5A2BD5355ADD48A2E2EE850B735B9AD7B21D24(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_7, L_9, /*hidden argument*/NULL);
		// Object.Destroy(soundGameObject, 1f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_10, (1.0f), /*hidden argument*/NULL);
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Boolean SoundManager::canPlaySound(SoundManager/Sound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SoundManager_canPlaySound_m09BEE2A4EE2A5C0A17EDF39F0640F7363D50BECD (int32_t ___sound0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD44130AAE05C4770AEE0647D364D22BF835707A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m1B6834942CDBB0BDC039EE9A393028BABFE38D31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m3A1F77DF9178C4D3B820AFBDE48026A2B6B15FB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	bool V_6 = false;
	{
		// switch (sound)
		int32_t L_0 = ___sound0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_000f;
		}
	}
	{
		goto IL_000b;
	}

IL_000b:
	{
		// return true;
		V_2 = (bool)1;
		goto IL_0065;
	}

IL_000f:
	{
		// if (soundtimerDictionary.ContainsKey(sound))
		Dictionary_2_tA516C4BF8CC04CFE1F6BF38F3DE3D8A246BE2BC5 * L_3 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_soundtimerDictionary_0();
		int32_t L_4 = ___sound0;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_ContainsKey_mD44130AAE05C4770AEE0647D364D22BF835707A7(L_3, L_4, /*hidden argument*/Dictionary_2_ContainsKey_mD44130AAE05C4770AEE0647D364D22BF835707A7_RuntimeMethod_var);
		V_3 = L_5;
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0060;
		}
	}
	{
		// float lasttimePlayed = soundtimerDictionary[sound];
		Dictionary_2_tA516C4BF8CC04CFE1F6BF38F3DE3D8A246BE2BC5 * L_7 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_soundtimerDictionary_0();
		int32_t L_8 = ___sound0;
		NullCheck(L_7);
		float L_9;
		L_9 = Dictionary_2_get_Item_m1B6834942CDBB0BDC039EE9A393028BABFE38D31(L_7, L_8, /*hidden argument*/Dictionary_2_get_Item_m1B6834942CDBB0BDC039EE9A393028BABFE38D31_RuntimeMethod_var);
		V_4 = L_9;
		// float poweruptimemax = 0.5f;
		V_5 = (0.5f);
		// if(lasttimePlayed+ poweruptimemax < Time.time)
		float L_10 = V_4;
		float L_11 = V_5;
		float L_12;
		L_12 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		V_6 = (bool)((((float)((float)il2cpp_codegen_add((float)L_10, (float)L_11))) < ((float)L_12))? 1 : 0);
		bool L_13 = V_6;
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		// soundtimerDictionary[sound] = Time.time;
		Dictionary_2_tA516C4BF8CC04CFE1F6BF38F3DE3D8A246BE2BC5 * L_14 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_soundtimerDictionary_0();
		int32_t L_15 = ___sound0;
		float L_16;
		L_16 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		NullCheck(L_14);
		Dictionary_2_set_Item_m3A1F77DF9178C4D3B820AFBDE48026A2B6B15FB6(L_14, L_15, L_16, /*hidden argument*/Dictionary_2_set_Item_m3A1F77DF9178C4D3B820AFBDE48026A2B6B15FB6_RuntimeMethod_var);
		// return true;
		V_2 = (bool)1;
		goto IL_0065;
	}

IL_005b:
	{
		// return false;
		V_2 = (bool)0;
		goto IL_0065;
	}

IL_0060:
	{
		// return true;
		V_2 = (bool)1;
		goto IL_0065;
	}

IL_0065:
	{
		// }
		bool L_17 = V_2;
		return L_17;
	}
}
// UnityEngine.AudioClip SoundManager::GetAudioClip(SoundManager/Sound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * SoundManager_GetAudioClip_mEC5A2BD5355ADD48A2E2EE850B735B9AD7B21D24 (int32_t ___sound0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sound_tA0535EE7716E13A5443BE415CDC0B4090DCB72F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral240BE9B5E609F0DD8657150691504C4DE92A0925);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral482076BAC3F3FADED12D16D24E45F24AF817C27B);
		s_Il2CppMethodInitialized = true;
	}
	SoundAudioCLipU5BU5D_tC99FE4DDA1016FE55480E06D2270114003FFBE52* V_0 = NULL;
	int32_t V_1 = 0;
	SoundAudioCLip_tAB30A76E0CD7C69194C05CDBF49214309CDDF88F * V_2 = NULL;
	bool V_3 = false;
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * V_4 = NULL;
	{
		// foreach(GameAssets.SoundAudioCLip soundaudioclip in GameAssets.Getinstance().SoundAudioArray)
		GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191 * L_0;
		L_0 = GameAssets_Getinstance_mF8747563EFDDFA3B04BAAF1A80721A1FAB2631F8(/*hidden argument*/NULL);
		NullCheck(L_0);
		SoundAudioCLipU5BU5D_tC99FE4DDA1016FE55480E06D2270114003FFBE52* L_1 = L_0->get_SoundAudioArray_15();
		V_0 = L_1;
		V_1 = 0;
		goto IL_0033;
	}

IL_0011:
	{
		// foreach(GameAssets.SoundAudioCLip soundaudioclip in GameAssets.Getinstance().SoundAudioArray)
		SoundAudioCLipU5BU5D_tC99FE4DDA1016FE55480E06D2270114003FFBE52* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		SoundAudioCLip_tAB30A76E0CD7C69194C05CDBF49214309CDDF88F * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// if (soundaudioclip.sound == sound)
		SoundAudioCLip_tAB30A76E0CD7C69194C05CDBF49214309CDDF88F * L_6 = V_2;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_sound_0();
		int32_t L_8 = ___sound0;
		V_3 = (bool)((((int32_t)L_7) == ((int32_t)L_8))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_002e;
		}
	}
	{
		// return soundaudioclip.audioclip;
		SoundAudioCLip_tAB30A76E0CD7C69194C05CDBF49214309CDDF88F * L_10 = V_2;
		NullCheck(L_10);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_11 = L_10->get_audioclip_1();
		V_4 = L_11;
		goto IL_0060;
	}

IL_002e:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0033:
	{
		// foreach(GameAssets.SoundAudioCLip soundaudioclip in GameAssets.Getinstance().SoundAudioArray)
		int32_t L_13 = V_1;
		SoundAudioCLipU5BU5D_tC99FE4DDA1016FE55480E06D2270114003FFBE52* L_14 = V_0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0011;
		}
	}
	{
		// Debug.LogError("sound" + sound + "notfound");
		RuntimeObject * L_15 = Box(Sound_tA0535EE7716E13A5443BE415CDC0B4090DCB72F3_il2cpp_TypeInfo_var, (&___sound0));
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_15);
		___sound0 = *(int32_t*)UnBox(L_15);
		String_t* L_17;
		L_17 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral240BE9B5E609F0DD8657150691504C4DE92A0925, L_16, _stringLiteral482076BAC3F3FADED12D16D24E45F24AF817C27B, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_17, /*hidden argument*/NULL);
		// return null;
		V_4 = (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *)NULL;
		goto IL_0060;
	}

IL_0060:
	{
		// }
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_18 = V_4;
		return L_18;
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
// System.Void StartManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartManager_Awake_mEB494659C03571A954F3FA76B93872E877250F5B (StartManager_t63287E6205CC25B9ED02CDE8D1FAFEDF2DD907A9 * __this, const RuntimeMethod* method)
{
	{
		// started = false;
		__this->set_started_4((bool)0);
		// }
		return;
	}
}
// System.Void StartManager::StartButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartManager_StartButton_m4346A0C28C7EC1E3B5E72BCA700CA84612E3C68E (StartManager_t63287E6205CC25B9ED02CDE8D1FAFEDF2DD907A9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral461E3E44AE80BC4E861DB32ED3691F004543C3A2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// started = true;
		__this->set_started_4((bool)1);
		// Debug.Log("Pressed");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral461E3E44AE80BC4E861DB32ED3691F004543C3A2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StartManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartManager_Update_m51C07B2009BA93129B3A887E274013F2EB02DFBD (StartManager_t63287E6205CC25B9ED02CDE8D1FAFEDF2DD907A9 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (started)
		bool L_0 = __this->get_started_4();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// Dissolve_Start_Menu();
		StartManager_Dissolve_Start_Menu_m3C8116DE56D93BCD00AB7D72A4E32E4CEB14BE5E(__this, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void StartManager::Dissolve_Start_Menu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartManager_Dissolve_Start_Menu_m3C8116DE56D93BCD00AB7D72A4E32E4CEB14BE5E (StartManager_t63287E6205CC25B9ED02CDE8D1FAFEDF2DD907A9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DissolveItem_tF0D838FD17619E13535458DE54D8F2EA5AC0264E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3618AD4590B5AEEAF5022BE929B8BA84D836466C);
		s_Il2CppMethodInitialized = true;
	}
	DissolveItem_tF0D838FD17619E13535458DE54D8F2EA5AC0264E * V_0 = NULL;
	DissolveItem_tF0D838FD17619E13535458DE54D8F2EA5AC0264E * V_1 = NULL;
	DissolveItem_tF0D838FD17619E13535458DE54D8F2EA5AC0264E * V_2 = NULL;
	DissolveItem_tF0D838FD17619E13535458DE54D8F2EA5AC0264E * V_3 = NULL;
	DissolveItem_tF0D838FD17619E13535458DE54D8F2EA5AC0264E * V_4 = NULL;
	bool V_5 = false;
	{
		// DissolveItem startmenu  = new DissolveItem (StartMenu, StartMenu.color, StartMenu.color.a);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = __this->get_StartMenu_5();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1 = __this->get_StartMenu_5();
		NullCheck(L_1);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		L_2 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_1);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_3;
		L_3 = Color_op_Implicit_mECB4D0C812888ADAEE478E633B2ECF8F8FDB96C5(L_2, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_StartMenu_5();
		NullCheck(L_4);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5;
		L_5 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_4);
		float L_6 = L_5.get_a_3();
		DissolveItem_tF0D838FD17619E13535458DE54D8F2EA5AC0264E * L_7 = (DissolveItem_tF0D838FD17619E13535458DE54D8F2EA5AC0264E *)il2cpp_codegen_object_new(DissolveItem_tF0D838FD17619E13535458DE54D8F2EA5AC0264E_il2cpp_TypeInfo_var);
		DissolveItem__ctor_m1D889D9FBDEC626873FE04F4C948F60AF1DC0333(L_7, L_0, L_3, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// startmenu.Alphadecrease();
		DissolveItem_tF0D838FD17619E13535458DE54D8F2EA5AC0264E * L_8 = V_0;
		NullCheck(L_8);
		DissolveItem_Alphadecrease_m923A8583244926D0F3B527D5AC1C213F3D755F17(L_8, /*hidden argument*/NULL);
		// DissolveItem facebook = new DissolveItem(Facebook, Facebook.color, Facebook.color.a);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_9 = __this->get_Facebook_7();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_10 = __this->get_Facebook_7();
		NullCheck(L_10);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_11;
		L_11 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_10);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_12;
		L_12 = Color_op_Implicit_mECB4D0C812888ADAEE478E633B2ECF8F8FDB96C5(L_11, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_13 = __this->get_Facebook_7();
		NullCheck(L_13);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_14;
		L_14 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_13);
		float L_15 = L_14.get_a_3();
		DissolveItem_tF0D838FD17619E13535458DE54D8F2EA5AC0264E * L_16 = (DissolveItem_tF0D838FD17619E13535458DE54D8F2EA5AC0264E *)il2cpp_codegen_object_new(DissolveItem_tF0D838FD17619E13535458DE54D8F2EA5AC0264E_il2cpp_TypeInfo_var);
		DissolveItem__ctor_m1D889D9FBDEC626873FE04F4C948F60AF1DC0333(L_16, L_9, L_12, L_15, /*hidden argument*/NULL);
		V_1 = L_16;
		// facebook.Alphadecrease();
		DissolveItem_tF0D838FD17619E13535458DE54D8F2EA5AC0264E * L_17 = V_1;
		NullCheck(L_17);
		DissolveItem_Alphadecrease_m923A8583244926D0F3B527D5AC1C213F3D755F17(L_17, /*hidden argument*/NULL);
		// DissolveItem instgram = new DissolveItem(Instgram, Instgram.color, Instgram.color.a);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_18 = __this->get_Instgram_8();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_19 = __this->get_Instgram_8();
		NullCheck(L_19);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_20;
		L_20 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_19);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_21;
		L_21 = Color_op_Implicit_mECB4D0C812888ADAEE478E633B2ECF8F8FDB96C5(L_20, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_22 = __this->get_Instgram_8();
		NullCheck(L_22);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_23;
		L_23 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_22);
		float L_24 = L_23.get_a_3();
		DissolveItem_tF0D838FD17619E13535458DE54D8F2EA5AC0264E * L_25 = (DissolveItem_tF0D838FD17619E13535458DE54D8F2EA5AC0264E *)il2cpp_codegen_object_new(DissolveItem_tF0D838FD17619E13535458DE54D8F2EA5AC0264E_il2cpp_TypeInfo_var);
		DissolveItem__ctor_m1D889D9FBDEC626873FE04F4C948F60AF1DC0333(L_25, L_18, L_21, L_24, /*hidden argument*/NULL);
		V_2 = L_25;
		// instgram.Alphadecrease();
		DissolveItem_tF0D838FD17619E13535458DE54D8F2EA5AC0264E * L_26 = V_2;
		NullCheck(L_26);
		DissolveItem_Alphadecrease_m923A8583244926D0F3B527D5AC1C213F3D755F17(L_26, /*hidden argument*/NULL);
		// DissolveItem reddit = new DissolveItem(Reddit, Reddit.color, Reddit.color.a);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_27 = __this->get_Reddit_9();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_28 = __this->get_Reddit_9();
		NullCheck(L_28);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_29;
		L_29 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_28);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_30;
		L_30 = Color_op_Implicit_mECB4D0C812888ADAEE478E633B2ECF8F8FDB96C5(L_29, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_31 = __this->get_Reddit_9();
		NullCheck(L_31);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_32;
		L_32 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_31);
		float L_33 = L_32.get_a_3();
		DissolveItem_tF0D838FD17619E13535458DE54D8F2EA5AC0264E * L_34 = (DissolveItem_tF0D838FD17619E13535458DE54D8F2EA5AC0264E *)il2cpp_codegen_object_new(DissolveItem_tF0D838FD17619E13535458DE54D8F2EA5AC0264E_il2cpp_TypeInfo_var);
		DissolveItem__ctor_m1D889D9FBDEC626873FE04F4C948F60AF1DC0333(L_34, L_27, L_30, L_33, /*hidden argument*/NULL);
		V_3 = L_34;
		// reddit.Alphadecrease();
		DissolveItem_tF0D838FD17619E13535458DE54D8F2EA5AC0264E * L_35 = V_3;
		NullCheck(L_35);
		DissolveItem_Alphadecrease_m923A8583244926D0F3B527D5AC1C213F3D755F17(L_35, /*hidden argument*/NULL);
		// DissolveItem settings = new DissolveItem(Settings, Settings.color, Settings.color.a);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_36 = __this->get_Settings_10();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_37 = __this->get_Settings_10();
		NullCheck(L_37);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_38;
		L_38 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_37);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_39;
		L_39 = Color_op_Implicit_mECB4D0C812888ADAEE478E633B2ECF8F8FDB96C5(L_38, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_40 = __this->get_Settings_10();
		NullCheck(L_40);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_41;
		L_41 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_40);
		float L_42 = L_41.get_a_3();
		DissolveItem_tF0D838FD17619E13535458DE54D8F2EA5AC0264E * L_43 = (DissolveItem_tF0D838FD17619E13535458DE54D8F2EA5AC0264E *)il2cpp_codegen_object_new(DissolveItem_tF0D838FD17619E13535458DE54D8F2EA5AC0264E_il2cpp_TypeInfo_var);
		DissolveItem__ctor_m1D889D9FBDEC626873FE04F4C948F60AF1DC0333(L_43, L_36, L_39, L_42, /*hidden argument*/NULL);
		V_4 = L_43;
		// settings.Alphadecrease();
		DissolveItem_tF0D838FD17619E13535458DE54D8F2EA5AC0264E * L_44 = V_4;
		NullCheck(L_44);
		DissolveItem_Alphadecrease_m923A8583244926D0F3B527D5AC1C213F3D755F17(L_44, /*hidden argument*/NULL);
		// if (Settings.color.a <= 0)
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_45 = __this->get_Settings_10();
		NullCheck(L_45);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_46;
		L_46 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_45);
		float L_47 = L_46.get_a_3();
		V_5 = (bool)((((int32_t)((!(((float)L_47) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_48 = V_5;
		if (!L_48)
		{
			goto IL_012f;
		}
	}
	{
		// SceneManager.LoadScene("base");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral3618AD4590B5AEEAF5022BE929B8BA84D836466C, /*hidden argument*/NULL);
	}

IL_012f:
	{
		// }
		return;
	}
}
// System.Void StartManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartManager__ctor_m7EA49C132CAD3A83660F2BF5290E6B2661D5559E (StartManager_t63287E6205CC25B9ED02CDE8D1FAFEDF2DD907A9 * __this, const RuntimeMethod* method)
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
// System.Void Tile::onObjectSpawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_onObjectSpawn_m7F8488E820CE0A96123346B7070E632224A3A385 (Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF17950E2203154D00E6509D508BBB8E2EB642F3B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Endless2D.availableTiles.Add(this);
		IL2CPP_RUNTIME_CLASS_INIT(Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981_il2cpp_TypeInfo_var);
		List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8 * L_0 = ((Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981_StaticFields*)il2cpp_codegen_static_fields_for(Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981_il2cpp_TypeInfo_var))->get_availableTiles_18();
		NullCheck(L_0);
		List_1_Add_mF17950E2203154D00E6509D508BBB8E2EB642F3B(L_0, __this, /*hidden argument*/List_1_Add_mF17950E2203154D00E6509D508BBB8E2EB642F3B_RuntimeMethod_var);
		// nRows = ((Endless2D)Endless2D.Instance).nRows;
		Singleton_t85C95C878D42548878AD1318351EC6E51A48162F * L_1;
		L_1 = Singleton_get_Instance_mB8C346F100DF5857F9C494F32762FB403864BDEC_inline(/*hidden argument*/NULL);
		NullCheck(((Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981 *)CastclassClass((RuntimeObject*)L_1, Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981_il2cpp_TypeInfo_var)));
		int32_t L_2 = ((Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981 *)CastclassClass((RuntimeObject*)L_1, Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981_il2cpp_TypeInfo_var))->get_nRows_8();
		__this->set_nRows_7(L_2);
		// nColumns =   ((Endless2D)Endless2D.Instance).nColumns;
		Singleton_t85C95C878D42548878AD1318351EC6E51A48162F * L_3;
		L_3 = Singleton_get_Instance_mB8C346F100DF5857F9C494F32762FB403864BDEC_inline(/*hidden argument*/NULL);
		NullCheck(((Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981 *)CastclassClass((RuntimeObject*)L_3, Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981_il2cpp_TypeInfo_var)));
		int32_t L_4 = ((Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981 *)CastclassClass((RuntimeObject*)L_3, Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981_il2cpp_TypeInfo_var))->get_nColumns_7();
		__this->set_nColumns_8(L_4);
		// spriteRenderer = gameObject.GetComponent<SpriteRenderer>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_6;
		L_6 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_5, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		__this->set_spriteRenderer_9(L_6);
		// changeTile();
		Tile_changeTile_mC76F2B7B51692B78D7F7313824ECAB8735FB535B(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Tile::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_OnDisable_mAE8AEA964B31B0B2AE814EF55B26E692A4A5B748 (Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m6AFEC997356969D51F00638902D831A0E6DA322F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Endless2D.availableTiles.Remove(this);
		IL2CPP_RUNTIME_CLASS_INIT(Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981_il2cpp_TypeInfo_var);
		List_1_tCDEE25B3CAB486874F24587FFEFA9B943DCD5DB8 * L_0 = ((Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981_StaticFields*)il2cpp_codegen_static_fields_for(Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981_il2cpp_TypeInfo_var))->get_availableTiles_18();
		NullCheck(L_0);
		bool L_1;
		L_1 = List_1_Remove_m6AFEC997356969D51F00638902D831A0E6DA322F(L_0, __this, /*hidden argument*/List_1_Remove_m6AFEC997356969D51F00638902D831A0E6DA322F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Tile::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_FixedUpdate_m948A671786CB83F75C0584D9D2A044112782FF32 (Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (shouldMove)
		bool L_0 = __this->get_shouldMove_6();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_006e;
		}
	}
	{
		// speed = ((Endless2D)Endless2D.Instance).movementSpeed;
		Singleton_t85C95C878D42548878AD1318351EC6E51A48162F * L_2;
		L_2 = Singleton_get_Instance_mB8C346F100DF5857F9C494F32762FB403864BDEC_inline(/*hidden argument*/NULL);
		NullCheck(((Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981 *)CastclassClass((RuntimeObject*)L_2, Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981_il2cpp_TypeInfo_var)));
		float L_3 = ((Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981 *)CastclassClass((RuntimeObject*)L_2, Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981_il2cpp_TypeInfo_var))->get_movementSpeed_10();
		__this->set_speed_5(L_3);
		// transform.Translate(direction * Time.deltaTime * speed); //Moves the tile
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = __this->get_direction_4();
		float L_6;
		L_6 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_5, L_6, /*hidden argument*/NULL);
		float L_8 = __this->get_speed_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_7, L_8, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0(L_4, L_9, /*hidden argument*/NULL);
		// isOutOfBounds(((Endless2D)Endless2D.Instance).FirstTile, ((Endless2D)Endless2D.Instance).LastTile);  //Checks if the tile is still in the grid.
		Singleton_t85C95C878D42548878AD1318351EC6E51A48162F * L_10;
		L_10 = Singleton_get_Instance_mB8C346F100DF5857F9C494F32762FB403864BDEC_inline(/*hidden argument*/NULL);
		NullCheck(((Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981 *)CastclassClass((RuntimeObject*)L_10, Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981_il2cpp_TypeInfo_var)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ((Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981 *)CastclassClass((RuntimeObject*)L_10, Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981_il2cpp_TypeInfo_var))->get_FirstTile_16();
		Singleton_t85C95C878D42548878AD1318351EC6E51A48162F * L_12;
		L_12 = Singleton_get_Instance_mB8C346F100DF5857F9C494F32762FB403864BDEC_inline(/*hidden argument*/NULL);
		NullCheck(((Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981 *)CastclassClass((RuntimeObject*)L_12, Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981_il2cpp_TypeInfo_var)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ((Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981 *)CastclassClass((RuntimeObject*)L_12, Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981_il2cpp_TypeInfo_var))->get_LastTile_17();
		bool L_14;
		L_14 = Tile_isOutOfBounds_m066D31204F5EFABAC76FA16996E2D717E233E54F(__this, L_11, L_13, /*hidden argument*/NULL);
	}

IL_006e:
	{
		// }
		return;
	}
}
// System.Void Tile::moveTileInDirectionOf(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_moveTileInDirectionOf_mEC7E303547637D4673E8163463C46C29FD30AB62 (Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction0, float ___speed1, const RuntimeMethod* method)
{
	{
		// this.speed = speed;
		float L_0 = ___speed1;
		__this->set_speed_5(L_0);
		// this.direction = direction;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___direction0;
		__this->set_direction_4(L_1);
		// shouldMove = true;
		__this->set_shouldMove_6((bool)1);
		// }
		return;
	}
}
// System.Boolean Tile::isOutOfBounds(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tile_isOutOfBounds_m066D31204F5EFABAC76FA16996E2D717E233E54F (Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___start0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___end1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B11_0 = 0;
	{
		// float speedDirection = speed < 0 ? -1 : 1;
		float L_0 = __this->get_speed_5();
		if ((((float)L_0) < ((float)(0.0f))))
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = (-1);
	}

IL_0012:
	{
		V_0 = ((float)((float)G_B3_0));
		// bool isOutofBounds = false;
		V_1 = (bool)0;
		// if (transform.position.x < start.x || transform.position.x > end.x)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___start0;
		float L_5 = L_4.get_x_2();
		if ((((float)L_3) < ((float)L_5)))
		{
			goto IL_0048;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___end1;
		float L_10 = L_9.get_x_2();
		G_B6_0 = ((((float)L_8) > ((float)L_10))? 1 : 0);
		goto IL_0049;
	}

IL_0048:
	{
		G_B6_0 = 1;
	}

IL_0049:
	{
		V_2 = (bool)G_B6_0;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_00ba;
		}
	}
	{
		// isOutofBounds = true;
		V_1 = (bool)1;
		// transform.position =  transform.position - new Vector3(direction.x * nColumns, direction.y * nRows) * transform.localScale.x *speedDirection;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_13, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_15 = __this->get_address_of_direction_4();
		float L_16 = L_15->get_x_2();
		int32_t L_17 = __this->get_nColumns_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_18 = __this->get_address_of_direction_4();
		float L_19 = L_18->get_y_3();
		int32_t L_20 = __this->get_nRows_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_21), ((float)il2cpp_codegen_multiply((float)L_16, (float)((float)((float)L_17)))), ((float)il2cpp_codegen_multiply((float)L_19, (float)((float)((float)L_20)))), /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_22, /*hidden argument*/NULL);
		float L_24 = L_23.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_21, L_24, /*hidden argument*/NULL);
		float L_26 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_25, L_26, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_14, L_27, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_12, L_28, /*hidden argument*/NULL);
		// changeTile();
		Tile_changeTile_mC76F2B7B51692B78D7F7313824ECAB8735FB535B(__this, /*hidden argument*/NULL);
	}

IL_00ba:
	{
		// if (transform.position.y > start.y || transform.position.y < end.y)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_29);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_29, /*hidden argument*/NULL);
		float L_31 = L_30.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32 = ___start0;
		float L_33 = L_32.get_y_3();
		if ((((float)L_31) > ((float)L_33)))
		{
			goto IL_00ec;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34;
		L_34 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_34);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_34, /*hidden argument*/NULL);
		float L_36 = L_35.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37 = ___end1;
		float L_38 = L_37.get_y_3();
		G_B11_0 = ((((float)L_36) < ((float)L_38))? 1 : 0);
		goto IL_00ed;
	}

IL_00ec:
	{
		G_B11_0 = 1;
	}

IL_00ed:
	{
		V_3 = (bool)G_B11_0;
		bool L_39 = V_3;
		if (!L_39)
		{
			goto IL_015e;
		}
	}
	{
		// isOutofBounds = true;
		V_1 = (bool)1;
		// transform.position = transform.position - new Vector3(direction.x * nColumns, direction.y * nRows) * transform.localScale.x * speedDirection;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40;
		L_40 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_41;
		L_41 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_41);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
		L_42 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_41, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_43 = __this->get_address_of_direction_4();
		float L_44 = L_43->get_x_2();
		int32_t L_45 = __this->get_nColumns_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_46 = __this->get_address_of_direction_4();
		float L_47 = L_46->get_y_3();
		int32_t L_48 = __this->get_nRows_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49;
		memset((&L_49), 0, sizeof(L_49));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_49), ((float)il2cpp_codegen_multiply((float)L_44, (float)((float)((float)L_45)))), ((float)il2cpp_codegen_multiply((float)L_47, (float)((float)((float)L_48)))), /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_50;
		L_50 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_50);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51;
		L_51 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_50, /*hidden argument*/NULL);
		float L_52 = L_51.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53;
		L_53 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_49, L_52, /*hidden argument*/NULL);
		float L_54 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55;
		L_55 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_53, L_54, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_56;
		L_56 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_42, L_55, /*hidden argument*/NULL);
		NullCheck(L_40);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_40, L_56, /*hidden argument*/NULL);
		// changeTile();
		Tile_changeTile_mC76F2B7B51692B78D7F7313824ECAB8735FB535B(__this, /*hidden argument*/NULL);
	}

IL_015e:
	{
		// return isOutofBounds;
		bool L_57 = V_1;
		V_4 = L_57;
		goto IL_0163;
	}

IL_0163:
	{
		// }
		bool L_58 = V_4;
		return L_58;
	}
}
// System.Void Tile::changeTile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_changeTile_mC76F2B7B51692B78D7F7313824ECAB8735FB535B (Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int rand = Random.Range(0, ((Endless2D)Endless2D.Instance).availableSprites.Length);
		Singleton_t85C95C878D42548878AD1318351EC6E51A48162F * L_0;
		L_0 = Singleton_get_Instance_mB8C346F100DF5857F9C494F32762FB403864BDEC_inline(/*hidden argument*/NULL);
		NullCheck(((Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981 *)CastclassClass((RuntimeObject*)L_0, Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981_il2cpp_TypeInfo_var)));
		SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* L_1 = ((Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981 *)CastclassClass((RuntimeObject*)L_0, Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981_il2cpp_TypeInfo_var))->get_availableSprites_5();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))), /*hidden argument*/NULL);
		V_0 = L_2;
		// spriteRenderer.sprite = ((Endless2D)Endless2D.Instance).availableSprites[rand];
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_3 = __this->get_spriteRenderer_9();
		Singleton_t85C95C878D42548878AD1318351EC6E51A48162F * L_4;
		L_4 = Singleton_get_Instance_mB8C346F100DF5857F9C494F32762FB403864BDEC_inline(/*hidden argument*/NULL);
		NullCheck(((Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981 *)CastclassClass((RuntimeObject*)L_4, Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981_il2cpp_TypeInfo_var)));
		SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* L_5 = ((Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981 *)CastclassClass((RuntimeObject*)L_4, Endless2D_t1209C9D1F796D67B34926140E7F56A9A04AE1981_il2cpp_TypeInfo_var))->get_availableSprites_5();
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_3);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_3, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Tile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile__ctor_m35C285926E99EBF627F2B82BEA77909A233BE1ED (Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * __this, const RuntimeMethod* method)
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
// System.Void TilePooler::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TilePooler_Awake_m428DBD38FEA8E27D706DC9DECA8CF7C811822690 (TilePooler_tDED87420D8B326269BDE0F491CDCC4A240A5C518 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TilePooler_tDED87420D8B326269BDE0F491CDCC4A240A5C518_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance = this;
		((TilePooler_tDED87420D8B326269BDE0F491CDCC4A240A5C518_StaticFields*)il2cpp_codegen_static_fields_for(TilePooler_tDED87420D8B326269BDE0F491CDCC4A240A5C518_il2cpp_TypeInfo_var))->set_Instance_4(__this);
		// }
		return;
	}
}
// System.Void TilePooler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TilePooler_Start_m7AA4F2068F3A85A9AD210DCA86DE863C23CA765A (TilePooler_tDED87420D8B326269BDE0F491CDCC4A240A5C518 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m0C5D895ACF50E41367BBB10271D5F9F98A83C8C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m9855F31661557D2E7ACD8FBBFB501CF407440712_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7C78A270AF8D3C688AB49342CBEF99DFA0004E9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m675CF2AFA05DEB00916DBCA5A57088D3BC288843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m88B0415CE5394B8672BCB08D59C8625FD3BD586B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m8B4FD71859B61A4F5242DB3A5860268CEE176BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m4C0543F5BF9ED1002F54BADBD15E5F92FFD4089B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pool_t848F75427F6865029793B7C163370BDC346C6D8C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mBF3F677E8FA5E61DFEF3209F9DDA278775BDD513_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m989302E3AE90AD39E5B892C79B3A6365966D1852_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral169CFE7A5DDAAD5DF9058C20416103A4111BC401);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA12DF7E063F9EDD6CB3B99E1A6200411CA060DEE);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t2A9658835FECB4EFF29D9F6685404336DC4C60EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Pool_t848F75427F6865029793B7C163370BDC346C6D8C * V_1 = NULL;
	Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 * V_2 = NULL;
	int32_t V_3 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_4 = NULL;
	bool V_5 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// Tile.name = "Tile";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_Tile_7();
		NullCheck(L_0);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_0, _stringLiteralA12DF7E063F9EDD6CB3B99E1A6200411CA060DEE, /*hidden argument*/NULL);
		// pools.Add(new Pool("layer01", Tile, nOfTiles)); //Creates a pool of one layer of tiles
		List_1_t60B1C7F49F58BA19849B441B785A5925F5D4F0DF * L_1 = __this->get_pools_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_Tile_7();
		int32_t L_3 = __this->get_nOfTiles_8();
		Pool_t848F75427F6865029793B7C163370BDC346C6D8C * L_4 = (Pool_t848F75427F6865029793B7C163370BDC346C6D8C *)il2cpp_codegen_object_new(Pool_t848F75427F6865029793B7C163370BDC346C6D8C_il2cpp_TypeInfo_var);
		Pool__ctor_mD6EC19319EB7070189A6DA260C0EFBF4BDBF6292(L_4, _stringLiteral169CFE7A5DDAAD5DF9058C20416103A4111BC401, L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		List_1_Add_m8B4FD71859B61A4F5242DB3A5860268CEE176BB5(L_1, L_4, /*hidden argument*/List_1_Add_m8B4FD71859B61A4F5242DB3A5860268CEE176BB5_RuntimeMethod_var);
		// poolDictionary = new Dictionary<string, Queue<GameObject>>(); //Dictionary initialized
		Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F * L_5 = (Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F *)il2cpp_codegen_object_new(Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9855F31661557D2E7ACD8FBBFB501CF407440712(L_5, /*hidden argument*/Dictionary_2__ctor_m9855F31661557D2E7ACD8FBBFB501CF407440712_RuntimeMethod_var);
		__this->set_poolDictionary_6(L_5);
		// foreach (Pool pool in pools)//Loops threw the list to add it the pools to the dictionary
		List_1_t60B1C7F49F58BA19849B441B785A5925F5D4F0DF * L_6 = __this->get_pools_5();
		NullCheck(L_6);
		Enumerator_t2A9658835FECB4EFF29D9F6685404336DC4C60EE  L_7;
		L_7 = List_1_GetEnumerator_m4C0543F5BF9ED1002F54BADBD15E5F92FFD4089B(L_6, /*hidden argument*/List_1_GetEnumerator_m4C0543F5BF9ED1002F54BADBD15E5F92FFD4089B_RuntimeMethod_var);
		V_0 = L_7;
	}

IL_004c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00a9;
		}

IL_004e:
		{
			// foreach (Pool pool in pools)//Loops threw the list to add it the pools to the dictionary
			Pool_t848F75427F6865029793B7C163370BDC346C6D8C * L_8;
			L_8 = Enumerator_get_Current_m88B0415CE5394B8672BCB08D59C8625FD3BD586B_inline((Enumerator_t2A9658835FECB4EFF29D9F6685404336DC4C60EE *)(&V_0), /*hidden argument*/Enumerator_get_Current_m88B0415CE5394B8672BCB08D59C8625FD3BD586B_RuntimeMethod_var);
			V_1 = L_8;
			// Queue<GameObject> objectPool = new Queue<GameObject>();
			Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 * L_9 = (Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 *)il2cpp_codegen_object_new(Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92_il2cpp_TypeInfo_var);
			Queue_1__ctor_m989302E3AE90AD39E5B892C79B3A6365966D1852(L_9, /*hidden argument*/Queue_1__ctor_m989302E3AE90AD39E5B892C79B3A6365966D1852_RuntimeMethod_var);
			V_2 = L_9;
			// for (int i = 0; i < pool.size; i++)//Loops threw every object in each pool
			V_3 = 0;
			goto IL_0086;
		}

IL_0061:
		{
			// GameObject obj = Instantiate(pool.prefab);
			Pool_t848F75427F6865029793B7C163370BDC346C6D8C * L_10 = V_1;
			NullCheck(L_10);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = L_10->get_prefab_1();
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
			L_12 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_11, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
			V_4 = L_12;
			// obj.SetActive(false);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = V_4;
			NullCheck(L_13);
			GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_13, (bool)0, /*hidden argument*/NULL);
			// objectPool.Enqueue(obj);
			Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 * L_14 = V_2;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = V_4;
			NullCheck(L_14);
			Queue_1_Enqueue_mBF3F677E8FA5E61DFEF3209F9DDA278775BDD513(L_14, L_15, /*hidden argument*/Queue_1_Enqueue_mBF3F677E8FA5E61DFEF3209F9DDA278775BDD513_RuntimeMethod_var);
			// for (int i = 0; i < pool.size; i++)//Loops threw every object in each pool
			int32_t L_16 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
		}

IL_0086:
		{
			// for (int i = 0; i < pool.size; i++)//Loops threw every object in each pool
			int32_t L_17 = V_3;
			Pool_t848F75427F6865029793B7C163370BDC346C6D8C * L_18 = V_1;
			NullCheck(L_18);
			int32_t L_19 = L_18->get_size_2();
			V_5 = (bool)((((int32_t)L_17) < ((int32_t)L_19))? 1 : 0);
			bool L_20 = V_5;
			if (L_20)
			{
				goto IL_0061;
			}
		}

IL_0095:
		{
			// poolDictionary.Add(pool.tag, objectPool); //The queue is added to the pool.
			Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F * L_21 = __this->get_poolDictionary_6();
			Pool_t848F75427F6865029793B7C163370BDC346C6D8C * L_22 = V_1;
			NullCheck(L_22);
			String_t* L_23 = L_22->get_tag_0();
			Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 * L_24 = V_2;
			NullCheck(L_21);
			Dictionary_2_Add_m0C5D895ACF50E41367BBB10271D5F9F98A83C8C1(L_21, L_23, L_24, /*hidden argument*/Dictionary_2_Add_m0C5D895ACF50E41367BBB10271D5F9F98A83C8C1_RuntimeMethod_var);
		}

IL_00a9:
		{
			// foreach (Pool pool in pools)//Loops threw the list to add it the pools to the dictionary
			bool L_25;
			L_25 = Enumerator_MoveNext_m675CF2AFA05DEB00916DBCA5A57088D3BC288843((Enumerator_t2A9658835FECB4EFF29D9F6685404336DC4C60EE *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m675CF2AFA05DEB00916DBCA5A57088D3BC288843_RuntimeMethod_var);
			if (L_25)
			{
				goto IL_004e;
			}
		}

IL_00b2:
		{
			IL2CPP_LEAVE(0xC3, FINALLY_00b4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b4;
	}

FINALLY_00b4:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m7C78A270AF8D3C688AB49342CBEF99DFA0004E9C((Enumerator_t2A9658835FECB4EFF29D9F6685404336DC4C60EE *)(&V_0), /*hidden argument*/Enumerator_Dispose_m7C78A270AF8D3C688AB49342CBEF99DFA0004E9C_RuntimeMethod_var);
		IL2CPP_END_FINALLY(180)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(180)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xC3, IL_00c3)
	}

IL_00c3:
	{
		// }
		return;
	}
}
// UnityEngine.GameObject TilePooler::SpawnFromPool(System.String,UnityEngine.Vector2,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * TilePooler_SpawnFromPool_mE8A226B186790A28B996E6432728618DB6CD8B6B (TilePooler_tDED87420D8B326269BDE0F491CDCC4A240A5C518 * __this, String_t* ___tag0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mAADFBF4527E50115B977ACC9E4694BEE070DF705_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m250063473D2FECA30827552033CEF780DBE2B3DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisIPooledObject_tE7663415C24E026BDC5E1F701CFA64DF8AF572E8_m40ED4A72A4B9B85180FB52CACE4E1A56684A1F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPooledObject_tE7663415C24E026BDC5E1F701CFA64DF8AF572E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mAB7D03D5E1E8D5574DB751A04534E90B970BE0CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mBF3F677E8FA5E61DFEF3209F9DDA278775BDD513_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral201B4CC12B23B577262E3440C3DACB9F16A5500B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCB5978FAAD5566C1F56CD9C4A85EB24D32482BB);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_3 = NULL;
	bool V_4 = false;
	{
		// if (!poolDictionary.ContainsKey(tag)) //Checks that the object is in the pool.
		Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F * L_0 = __this->get_poolDictionary_6();
		String_t* L_1 = ___tag0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mAADFBF4527E50115B977ACC9E4694BEE070DF705(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mAADFBF4527E50115B977ACC9E4694BEE070DF705_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// Debug.LogWarning("The tag " + tag + "does not exist in the pool");
		String_t* L_4 = ___tag0;
		String_t* L_5;
		L_5 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral201B4CC12B23B577262E3440C3DACB9F16A5500B, L_4, _stringLiteralDCB5978FAAD5566C1F56CD9C4A85EB24D32482BB, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_5, /*hidden argument*/NULL);
		// return null;
		V_3 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL;
		goto IL_0099;
	}

IL_002f:
	{
		// GameObject objectToSpawn = poolDictionary[tag].Dequeue(); //Dequeues the wanted object of one list of the dictionary.
		Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F * L_6 = __this->get_poolDictionary_6();
		String_t* L_7 = ___tag0;
		NullCheck(L_6);
		Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 * L_8;
		L_8 = Dictionary_2_get_Item_m250063473D2FECA30827552033CEF780DBE2B3DB(L_6, L_7, /*hidden argument*/Dictionary_2_get_Item_m250063473D2FECA30827552033CEF780DBE2B3DB_RuntimeMethod_var);
		NullCheck(L_8);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Queue_1_Dequeue_mAB7D03D5E1E8D5574DB751A04534E90B970BE0CC(L_8, /*hidden argument*/Queue_1_Dequeue_mAB7D03D5E1E8D5574DB751A04534E90B970BE0CC_RuntimeMethod_var);
		V_0 = L_9;
		// objectToSpawn.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = V_0;
		NullCheck(L_10);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_10, (bool)1, /*hidden argument*/NULL);
		// objectToSpawn.transform.position = position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = V_0;
		NullCheck(L_11);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_11, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13 = ___position1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_12, L_14, /*hidden argument*/NULL);
		// objectToSpawn.transform.rotation = rotation; //Locates the object on the scene.
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = V_0;
		NullCheck(L_15);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_15, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_17 = ___rotation2;
		NullCheck(L_16);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_16, L_17, /*hidden argument*/NULL);
		// IPooledObject pooledObj = objectToSpawn.GetComponent<IPooledObject>();//Calls the interface that is called each time an object is needed.
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = V_0;
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = GameObject_GetComponent_TisIPooledObject_tE7663415C24E026BDC5E1F701CFA64DF8AF572E8_m40ED4A72A4B9B85180FB52CACE4E1A56684A1F39(L_18, /*hidden argument*/GameObject_GetComponent_TisIPooledObject_tE7663415C24E026BDC5E1F701CFA64DF8AF572E8_m40ED4A72A4B9B85180FB52CACE4E1A56684A1F39_RuntimeMethod_var);
		V_1 = L_19;
		// if(pooledObj != null)
		RuntimeObject* L_20 = V_1;
		V_4 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_20) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_21 = V_4;
		if (!L_21)
		{
			goto IL_0082;
		}
	}
	{
		// pooledObj.onObjectSpawn(); //Se mete a la interfaz del objeto
		RuntimeObject* L_22 = V_1;
		NullCheck(L_22);
		InterfaceActionInvoker0::Invoke(0 /* System.Void IPooledObject::onObjectSpawn() */, IPooledObject_tE7663415C24E026BDC5E1F701CFA64DF8AF572E8_il2cpp_TypeInfo_var, L_22);
	}

IL_0082:
	{
		// poolDictionary[tag].Enqueue(objectToSpawn); //Regresa a otro objeto a la lista
		Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F * L_23 = __this->get_poolDictionary_6();
		String_t* L_24 = ___tag0;
		NullCheck(L_23);
		Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 * L_25;
		L_25 = Dictionary_2_get_Item_m250063473D2FECA30827552033CEF780DBE2B3DB(L_23, L_24, /*hidden argument*/Dictionary_2_get_Item_m250063473D2FECA30827552033CEF780DBE2B3DB_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26 = V_0;
		NullCheck(L_25);
		Queue_1_Enqueue_mBF3F677E8FA5E61DFEF3209F9DDA278775BDD513(L_25, L_26, /*hidden argument*/Queue_1_Enqueue_mBF3F677E8FA5E61DFEF3209F9DDA278775BDD513_RuntimeMethod_var);
		// return objectToSpawn;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = V_0;
		V_3 = L_27;
		goto IL_0099;
	}

IL_0099:
	{
		// }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28 = V_3;
		return L_28;
	}
}
// System.Void TilePooler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TilePooler__ctor_m0156E8414944532446E56ADF738ABB34725783AE (TilePooler_tDED87420D8B326269BDE0F491CDCC4A240A5C518 * __this, const RuntimeMethod* method)
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
// System.Void Trap::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Trap_OnCollisionEnter2D_m90FDF3FBB968812CFA43FB9F4FC60F356D0042FF (Trap_t403C39666EA113E958CF61C5E83353C6041A3D0B * __this, Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___col0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64E1DFF6A99A2080E32F5F545CB94F03448289D3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (col.gameObject.CompareTag("Player"))
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_0 = ___col0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// Debug.Log("Deadl");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral64E1DFF6A99A2080E32F5F545CB94F03448289D3, /*hidden argument*/NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Trap::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Trap__ctor_m4DF12D5114A2686843A4BB3EBF3FEA5FF63AF3C9 (Trap_t403C39666EA113E958CF61C5E83353C6041A3D0B * __this, const RuntimeMethod* method)
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
// System.Void TryHarder::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TryHarder_Awake_m4F559830B7AAC3A910EEEBE4F34A255DCC1FDF53 (TryHarder_t4F3E8B956FBC349BDA6DAF1D7B6D03C3211721AF * __this, const RuntimeMethod* method)
{
	{
		// PressAnykeyObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_PressAnykeyObject_7();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// GameStarted = false;
		__this->set_GameStarted_4((bool)0);
		// timer = 0.1f;
		__this->set_timer_5((0.100000001f));
		// }
		return;
	}
}
// System.Void TryHarder::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TryHarder_Update_mC170220BF2F7929693A3C53E972DEC7A01E400B1 (TryHarder_t4F3E8B956FBC349BDA6DAF1D7B6D03C3211721AF * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (Input.anyKey) {
		bool L_0;
		L_0 = Input_get_anyKey_mF484987F7619AE4EB70CF96CB40AFBEF721986EB(/*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// GameStarted=true;
		__this->set_GameStarted_4((bool)1);
	}

IL_0013:
	{
		// if (GameStarted)
		bool L_2 = __this->get_GameStarted_4();
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		// timer-= Time.deltaTime;
		float L_4 = __this->get_timer_5();
		float L_5;
		L_5 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_timer_5(((float)il2cpp_codegen_subtract((float)L_4, (float)L_5)));
	}

IL_0031:
	{
		// if (timer <= 0)
		float L_6 = __this->get_timer_5();
		V_2 = (bool)((((int32_t)((!(((float)L_6) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0054;
		}
	}
	{
		// PressAnykeyObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_PressAnykeyObject_7();
		NullCheck(L_8);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)0, /*hidden argument*/NULL);
	}

IL_0054:
	{
		// }
		return;
	}
}
// System.Void TryHarder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TryHarder__ctor_m42FFCEEB9E6BB95F8564BA4646D5251E246A4DE3 (TryHarder_t4F3E8B956FBC349BDA6DAF1D7B6D03C3211721AF * __this, const RuntimeMethod* method)
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
// System.Void UIManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_Awake_mCED93604270B1E209B4E0D32F6A26DDC5AB06E30 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_Tislevelgen_t61ACD1EBFCB7594B9AE7934E46DF321EEB517845_m7C45F45119C9A2E89FEED636BF53F9A62D5B602C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_Tisplayer_tA80E0022C279849EE513BB6A4017ED62943ADC71_mE90B93F4F17B66FE4BD5D7D41AB060243E5E2AD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A7476E2F54EFE64D5B840CD32F4EB1A2482F7C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3AEC9F6AA595DACEC6A33301B760F4E3F9EEA975);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerScript = GameObject.Find("Player").GetComponent<player>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		NullCheck(L_0);
		player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * L_1;
		L_1 = GameObject_GetComponent_Tisplayer_tA80E0022C279849EE513BB6A4017ED62943ADC71_mE90B93F4F17B66FE4BD5D7D41AB060243E5E2AD7(L_0, /*hidden argument*/GameObject_GetComponent_Tisplayer_tA80E0022C279849EE513BB6A4017ED62943ADC71_mE90B93F4F17B66FE4BD5D7D41AB060243E5E2AD7_RuntimeMethod_var);
		__this->set_PlayerScript_4(L_1);
		// positionTORestart = GameObject.Find("PositionToRestart").transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral3A7476E2F54EFE64D5B840CD32F4EB1A2482F7C1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		__this->set_positionTORestart_11(L_3);
		// Player_transform = GameObject.Find("Player").transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		__this->set_Player_transform_12(L_5);
		// rb = GameObject.Find("Player").GetComponent<Rigidbody2D>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		NullCheck(L_6);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_7;
		L_7 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_6, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		__this->set_rb_13(L_7);
		// lvlgenscript = GameObject.Find("LevelGenerator").GetComponent<levelgen>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral3AEC9F6AA595DACEC6A33301B760F4E3F9EEA975, /*hidden argument*/NULL);
		NullCheck(L_8);
		levelgen_t61ACD1EBFCB7594B9AE7934E46DF321EEB517845 * L_9;
		L_9 = GameObject_GetComponent_Tislevelgen_t61ACD1EBFCB7594B9AE7934E46DF321EEB517845_m7C45F45119C9A2E89FEED636BF53F9A62D5B602C(L_8, /*hidden argument*/GameObject_GetComponent_Tislevelgen_t61ACD1EBFCB7594B9AE7934E46DF321EEB517845_m7C45F45119C9A2E89FEED636BF53F9A62D5B602C_RuntimeMethod_var);
		__this->set_lvlgenscript_5(L_9);
		// PlayerScript.enabled = true;
		player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * L_10 = __this->get_PlayerScript_4();
		NullCheck(L_10);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_10, (bool)1, /*hidden argument*/NULL);
		// rb.bodyType = RigidbodyType2D.Dynamic;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_11 = __this->get_rb_13();
		NullCheck(L_11);
		Rigidbody2D_set_bodyType_m8D34999918D42B2DF16FAAB4F237A8663EA8406B(L_11, 0, /*hidden argument*/NULL);
		// GameOverMenu.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_GameOverMenu_6();
		NullCheck(L_12);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_12, (bool)0, /*hidden argument*/NULL);
		// lvlgenscript.enabled = false;
		levelgen_t61ACD1EBFCB7594B9AE7934E46DF321EEB517845 * L_13 = __this->get_lvlgenscript_5();
		NullCheck(L_13);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_13, (bool)0, /*hidden argument*/NULL);
		// Tilt.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get_Tilt_8();
		NullCheck(L_14);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_14, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_Update_m8A7C5DF1B797CFD6937FD6961AB9CC7B1A90D385 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (Input.anyKey)
		bool L_0;
		L_0 = Input_get_anyKey_mF484987F7619AE4EB70CF96CB40AFBEF721986EB(/*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		// GameStarted();
		UIManager_GameStarted_m30D1B4655F57F8048A5B5F64EA0A8B3FA658F836(__this, /*hidden argument*/NULL);
		// lvlgenscript.enabled = true;
		levelgen_t61ACD1EBFCB7594B9AE7934E46DF321EEB517845 * L_2 = __this->get_lvlgenscript_5();
		NullCheck(L_2);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_2, (bool)1, /*hidden argument*/NULL);
		// Tilt.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_Tilt_8();
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
	}

IL_002d:
	{
		// if (Player_transform.transform.position.y < positionTORestart.position.y)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = __this->get_Player_transform_12();
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		float L_7 = L_6.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = __this->get_positionTORestart_11();
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		float L_10 = L_9.get_y_3();
		V_1 = (bool)((((float)L_7) < ((float)L_10))? 1 : 0);
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_0061;
		}
	}
	{
		// GameLost();
		UIManager_GameLost_mE13BBA2239E7D666F7204B68F2D924958EC90AAB(__this, /*hidden argument*/NULL);
	}

IL_0061:
	{
		// }
		return;
	}
}
// System.Void UIManager::GameStarted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_GameStarted_m30D1B4655F57F8048A5B5F64EA0A8B3FA658F836 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5BE77FACA9FE78BB042EAA19D02D318560BA5DD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("GameStarted");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralF5BE77FACA9FE78BB042EAA19D02D318560BA5DD, /*hidden argument*/NULL);
		// Time.timeScale = 1f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// rb.bodyType = RigidbodyType2D.Dynamic;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0 = __this->get_rb_13();
		NullCheck(L_0);
		Rigidbody2D_set_bodyType_m8D34999918D42B2DF16FAAB4F237A8663EA8406B(L_0, 0, /*hidden argument*/NULL);
		// PauseButtonObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_PauseButtonObject_10();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::GameLost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_GameLost_mE13BBA2239E7D666F7204B68F2D924958EC90AAB (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral726C16D64FB2C371710A236299507CB4089D1426);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameOverMenu.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_GameOverMenu_6();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// Debug.Log("Lost");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral726C16D64FB2C371710A236299507CB4089D1426, /*hidden argument*/NULL);
		// PlayerScript.enabled = false;
		player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * L_1 = __this->get_PlayerScript_4();
		NullCheck(L_1);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_1, (bool)0, /*hidden argument*/NULL);
		// rb.bodyType = RigidbodyType2D.Static;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_2 = __this->get_rb_13();
		NullCheck(L_2);
		Rigidbody2D_set_bodyType_m8D34999918D42B2DF16FAAB4F237A8663EA8406B(L_2, 2, /*hidden argument*/NULL);
		// IsGameLost = true;
		__this->set_IsGameLost_14((bool)1);
		// PauseButtonObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_PauseButtonObject_10();
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::PauseButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_PauseButton_mE63E62F6A6E331AD7D9A7A856F03EF28E1EAD3BD (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (!IsGameLost)
		bool L_0 = __this->get_IsGameLost_14();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_004f;
		}
	}
	{
		// Time.timeScale = 0f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.0f), /*hidden argument*/NULL);
		// PlayerScript.enabled = false;
		player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * L_2 = __this->get_PlayerScript_4();
		NullCheck(L_2);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_2, (bool)0, /*hidden argument*/NULL);
		// rb.bodyType = RigidbodyType2D.Static;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_3 = __this->get_rb_13();
		NullCheck(L_3);
		Rigidbody2D_set_bodyType_m8D34999918D42B2DF16FAAB4F237A8663EA8406B(L_3, 2, /*hidden argument*/NULL);
		// PauseMenu.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_PauseMenu_7();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)1, /*hidden argument*/NULL);
		// PauseButtonObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_PauseButtonObject_10();
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)0, /*hidden argument*/NULL);
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Void UIManager::ResumeButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_ResumeButton_mACD5F3CB96BC77CDC3954A461A1C30827BDCC4B1 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	{
		// Time.timeScale = 1f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// PlayerScript.enabled = true;
		player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * L_0 = __this->get_PlayerScript_4();
		NullCheck(L_0);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_0, (bool)1, /*hidden argument*/NULL);
		// rb.bodyType = RigidbodyType2D.Dynamic;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_1 = __this->get_rb_13();
		NullCheck(L_1);
		Rigidbody2D_set_bodyType_m8D34999918D42B2DF16FAAB4F237A8663EA8406B(L_1, 0, /*hidden argument*/NULL);
		// PauseMenu.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_PauseMenu_7();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		// PauseButtonObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_PauseButtonObject_10();
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::RestartButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_RestartButton_m5BD5C07C533DBC047D34631FA2D86F7945FBEC15 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3618AD4590B5AEEAF5022BE929B8BA84D836466C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Time.timeScale = 1f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// SceneManager.LoadScene("base");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral3618AD4590B5AEEAF5022BE929B8BA84D836466C, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::MainMenuButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_MainMenuButton_m519DD9B002808D7DF1C1602327BBA5244B121C04 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F76B1FC9730393F7922EF641199DABB6F88C9EE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("StartMenu");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral8F76B1FC9730393F7922EF641199DABB6F88C9EE, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager__ctor_mDADE1D724D40AF63AE78D51FC1CF1FE4784B4D4B (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
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
// System.Void camera::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void camera_Awake_m7B704785F556C4CDE77E4950BD80AC35B377473A (camera_t35DE2139B547B353CFA724AB7439D7A92165C646 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerStartedPlaying = false;
		__this->set_playerStartedPlaying_9((bool)0);
		// timer = 0f;
		__this->set_timer_10((0.0f));
		// setDiffculty(Diffculty.easy);
		camera_setDiffculty_mEFDE8DD611D75FAD50A22A24374042280FDC7348(__this, 0, /*hidden argument*/NULL);
		// SpeedText.text = "0x";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_SpeedText_6();
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89);
		// }
		return;
	}
}
// System.Void camera::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void camera_LateUpdate_m3B5E4BB2A3E34A42B19CE42ABF32305D017772FA (camera_t35DE2139B547B353CFA724AB7439D7A92165C646 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// timer += Time.deltaTime;
		float L_0 = __this->get_timer_10();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_timer_10(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		// if (player.position.y >= Position_For_Camera_To_start_Moving.position.y)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = __this->get_player_4();
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		float L_4 = L_3.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = __this->get_Position_For_Camera_To_start_Moving_5();
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		float L_7 = L_6.get_y_3();
		V_0 = (bool)((((int32_t)((!(((float)L_4) >= ((float)L_7)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_0;
		if (!L_8)
		{
			goto IL_005c;
		}
	}
	{
		// playerStartedPlaying = true;
		__this->set_playerStartedPlaying_9((bool)1);
		// if (playerStartedPlaying)
		bool L_9 = __this->get_playerStartedPlaying_9();
		V_1 = L_9;
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_005b;
		}
	}
	{
		// setDiffculty(GetDiffculty());
		int32_t L_11;
		L_11 = camera_GetDiffculty_m64B90BA74BC00C9E3FAF61F734BC45DBBF5AFFD4(__this, /*hidden argument*/NULL);
		camera_setDiffculty_mEFDE8DD611D75FAD50A22A24374042280FDC7348(__this, L_11, /*hidden argument*/NULL);
	}

IL_005b:
	{
	}

IL_005c:
	{
		// UpdateCameraPosition();
		camera_UpdateCameraPosition_m5B13D5A28DC6C4B4BAA234D9C8F646100ADCB824(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void camera::UpdateCameraPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void camera_UpdateCameraPosition_m5B13D5A28DC6C4B4BAA234D9C8F646100ADCB824 (camera_t35DE2139B547B353CFA724AB7439D7A92165C646 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (player.position.y > transform.position.y)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_player_4();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_y_3();
		V_0 = (bool)((((float)L_2) > ((float)L_5))? 1 : 0);
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_008f;
		}
	}
	{
		// Vector3 newPos = new Vector3(transform.position.x, player.position.y, transform.position.z);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = __this->get_player_4();
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_13, /*hidden argument*/NULL);
		float L_15 = L_14.get_z_4();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), L_9, L_12, L_15, /*hidden argument*/NULL);
		// transform.position = Vector3.SmoothDamp(transform.position, newPos, ref currentvelocity, SmoothSpeed * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_17, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_20 = __this->get_address_of_currentvelocity_8();
		float L_21 = __this->get_SmoothSpeed_7();
		float L_22;
		L_22 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Vector3_SmoothDamp_m4655944DBD5B44125F8F4B5A15E31DE94CB0F627(L_18, L_19, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_20, ((float)il2cpp_codegen_multiply((float)L_21, (float)L_22)), /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_16, L_23, /*hidden argument*/NULL);
	}

IL_008f:
	{
		// }
		return;
	}
}
// System.Void camera::setDiffculty(camera/Diffculty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void camera_setDiffculty_mEFDE8DD611D75FAD50A22A24374042280FDC7348 (camera_t35DE2139B547B353CFA724AB7439D7A92165C646 * __this, int32_t ___diffculty0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54EB7BE360CE07E04E290740C9750E9F3C5D606E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDC8479299DA5AF310F6552C9DFB4C2CB6A0FA4C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// switch (diffculty)
		int32_t L_0 = ___diffculty0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0020;
			}
			case 1:
			{
				goto IL_006c;
			}
			case 2:
			{
				goto IL_00be;
			}
			case 3:
			{
				goto IL_010d;
			}
		}
	}
	{
		goto IL_015c;
	}

IL_0020:
	{
		// transform.position += new Vector3(0, CameraMoveSpeed, 0) * Time.deltaTime;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = L_3;
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		float L_6 = __this->get_CameraMoveSpeed_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_7), (0.0f), L_6, (0.0f), /*hidden argument*/NULL);
		float L_8;
		L_8 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_7, L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_5, L_9, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_4, L_10, /*hidden argument*/NULL);
		// SpeedText.text = "1x";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_11 = __this->get_SpeedText_6();
		NullCheck(L_11);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, _stringLiteral54EB7BE360CE07E04E290740C9750E9F3C5D606E);
		// break;
		goto IL_015c;
	}

IL_006c:
	{
		// transform.position += new Vector3(0, CameraMoveSpeed+2f, 0) * Time.deltaTime;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13 = L_12;
		NullCheck(L_13);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_13, /*hidden argument*/NULL);
		float L_15 = __this->get_CameraMoveSpeed_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_16), (0.0f), ((float)il2cpp_codegen_add((float)L_15, (float)(2.0f))), (0.0f), /*hidden argument*/NULL);
		float L_17;
		L_17 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_16, L_17, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_14, L_18, /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_13, L_19, /*hidden argument*/NULL);
		// SpeedText.text = "2x";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_20 = __this->get_SpeedText_6();
		NullCheck(L_20);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_20, _stringLiteral44372068DD09C8F6A18B8B85ED7BDB2934104865);
		// break;
		goto IL_015c;
	}

IL_00be:
	{
		// transform.position += new Vector3(0, CameraMoveSpeed + 3f, 0) * Time.deltaTime;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22 = L_21;
		NullCheck(L_22);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_22, /*hidden argument*/NULL);
		float L_24 = __this->get_CameraMoveSpeed_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_25), (0.0f), ((float)il2cpp_codegen_add((float)L_24, (float)(3.0f))), (0.0f), /*hidden argument*/NULL);
		float L_26;
		L_26 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_25, L_26, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_23, L_27, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_22, L_28, /*hidden argument*/NULL);
		// SpeedText.text = "3x";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_29 = __this->get_SpeedText_6();
		NullCheck(L_29);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_29, _stringLiteral4DFA7D8ABA8B4F70B013F69ED61B13DDD20B833C);
		// break;
		goto IL_015c;
	}

IL_010d:
	{
		// transform.position += new Vector3(0, CameraMoveSpeed + 5f, 0) * Time.deltaTime;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31 = L_30;
		NullCheck(L_31);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_31, /*hidden argument*/NULL);
		float L_33 = __this->get_CameraMoveSpeed_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		memset((&L_34), 0, sizeof(L_34));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_34), (0.0f), ((float)il2cpp_codegen_add((float)L_33, (float)(5.0f))), (0.0f), /*hidden argument*/NULL);
		float L_35;
		L_35 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_34, L_35, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		L_37 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_32, L_36, /*hidden argument*/NULL);
		NullCheck(L_31);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_31, L_37, /*hidden argument*/NULL);
		// SpeedText.text = "4x";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_38 = __this->get_SpeedText_6();
		NullCheck(L_38);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_38, _stringLiteralCDC8479299DA5AF310F6552C9DFB4C2CB6A0FA4C);
		// break;
		goto IL_015c;
	}

IL_015c:
	{
		// }
		return;
	}
}
// camera/Diffculty camera::GetDiffculty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t camera_GetDiffculty_m64B90BA74BC00C9E3FAF61F734BC45DBBF5AFFD4 (camera_t35DE2139B547B353CFA724AB7439D7A92165C646 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (timer >= 44) return Diffculty.impossible;
		float L_0 = __this->get_timer_10();
		V_0 = (bool)((((int32_t)((!(((float)L_0) >= ((float)(44.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// if (timer >= 44) return Diffculty.impossible;
		V_1 = 3;
		goto IL_004d;
	}

IL_0019:
	{
		// if (timer >= 25) return Diffculty.hard;
		float L_2 = __this->get_timer_10();
		V_2 = (bool)((((int32_t)((!(((float)L_2) >= ((float)(25.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		// if (timer >= 25) return Diffculty.hard;
		V_1 = 2;
		goto IL_004d;
	}

IL_0031:
	{
		// if (timer  >= 10) return Diffculty.medium;
		float L_4 = __this->get_timer_10();
		V_3 = (bool)((((int32_t)((!(((float)L_4) >= ((float)(10.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		// if (timer  >= 10) return Diffculty.medium;
		V_1 = 1;
		goto IL_004d;
	}

IL_0049:
	{
		// return Diffculty.easy;
		V_1 = 0;
		goto IL_004d;
	}

IL_004d:
	{
		// }
		int32_t L_6 = V_1;
		return L_6;
	}
}
// System.Void camera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void camera__ctor_m22FDB3F503469B62CFDE8A72B79A83839BDBC566 (camera_t35DE2139B547B353CFA724AB7439D7A92165C646 * __this, const RuntimeMethod* method)
{
	{
		// float SmoothSpeed = .3f;
		__this->set_SmoothSpeed_7((0.300000012f));
		// float CameraMoveSpeed = 9f;
		__this->set_CameraMoveSpeed_11((9.0f));
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
// System.Void levelgen::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void levelgen_Awake_m1170ACA54AF3C24C413B76B07F6DDEFC457C8EE1 (levelgen_t61ACD1EBFCB7594B9AE7934E46DF321EEB517845 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m691E17B1E746E8C0EDECE883EFCEC2A77344EB87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1962AE351C867A2D55EBF2EF233FE6F05086E474_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlatformList = new List<Platform>();
		List_1_t1962AE351C867A2D55EBF2EF233FE6F05086E474 * L_0 = (List_1_t1962AE351C867A2D55EBF2EF233FE6F05086E474 *)il2cpp_codegen_object_new(List_1_t1962AE351C867A2D55EBF2EF233FE6F05086E474_il2cpp_TypeInfo_var);
		List_1__ctor_m691E17B1E746E8C0EDECE883EFCEC2A77344EB87(L_0, /*hidden argument*/List_1__ctor_m691E17B1E746E8C0EDECE883EFCEC2A77344EB87_RuntimeMethod_var);
		__this->set_PlatformList_8(L_0);
		// maxTimer = 0.20f;
		__this->set_maxTimer_7((0.200000003f));
		// GameStarted = false;
		__this->set_GameStarted_9((bool)0);
		// Counter_for_platforms = 0;
		__this->set_Counter_for_platforms_14(0);
		// RandomForTypeOfPlatform = 0;
		__this->set_RandomForTypeOfPlatform_15(0);
		// setPlatform(PlatformEnum.platform);
		levelgen_setPlatform_mC14E7ACECC513CA8077C3B17DD84C1EEAAB15141(__this, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Vector2 levelgen::RandomGap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  levelgen_RandomGap_m6E9A2FC63A12D68DA3CF9B5819CA91F6CEEE1D43 (levelgen_t61ACD1EBFCB7594B9AE7934E46DF321EEB517845 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (Counter_for_platforms > 180) return new Vector2(5.5f, 6.5f);
		int32_t L_0 = __this->get_Counter_for_platforms_14();
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)((int32_t)180)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// if (Counter_for_platforms > 180) return new Vector2(5.5f, 6.5f);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_2), (5.5f), (6.5f), /*hidden argument*/NULL);
		V_1 = L_2;
		goto IL_0076;
	}

IL_0024:
	{
		// if (Counter_for_platforms > 120) return new Vector2(6.5f,7f );
		int32_t L_3 = __this->get_Counter_for_platforms_14();
		V_2 = (bool)((((int32_t)L_3) > ((int32_t)((int32_t)120)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0044;
		}
	}
	{
		// if (Counter_for_platforms > 120) return new Vector2(6.5f,7f );
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_5), (6.5f), (7.0f), /*hidden argument*/NULL);
		V_1 = L_5;
		goto IL_0076;
	}

IL_0044:
	{
		// if (Counter_for_platforms > 40)return new Vector2(7,8);
		int32_t L_6 = __this->get_Counter_for_platforms_14();
		V_3 = (bool)((((int32_t)L_6) > ((int32_t)((int32_t)40)))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0064;
		}
	}
	{
		// if (Counter_for_platforms > 40)return new Vector2(7,8);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), (7.0f), (8.0f), /*hidden argument*/NULL);
		V_1 = L_8;
		goto IL_0076;
	}

IL_0064:
	{
		// return new Vector2(10, 11);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_9), (10.0f), (11.0f), /*hidden argument*/NULL);
		V_1 = L_9;
		goto IL_0076;
	}

IL_0076:
	{
		// }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10 = V_1;
		return L_10;
	}
}
// System.Void levelgen::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void levelgen_Start_m36E1C9DF5F47E62FA328D379826017B2E3B59991 (levelgen_t61ACD1EBFCB7594B9AE7934E46DF321EEB517845 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m708216AF149088C3FBB2EDF789ACA5A4346A994E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mC13E8DA0CA1DFD88310E2E066C5479E3994BAA30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_tE9E6AC72071AF6BACAF02519C6C0AED83456CB3D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_1 = NULL;
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * V_2 = NULL;
	BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * V_3 = NULL;
	float V_4 = 0.0f;
	Platform_tE9E6AC72071AF6BACAF02519C6C0AED83456CB3D * V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	{
		// for (int i = 0; i < 10; i++)
		V_0 = 0;
		goto IL_00f2;
	}

IL_0008:
	{
		// Transform platform1 = Instantiate(GameAssets.Getinstance().platform, firstPlatforms, Quaternion.identity);
		GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191 * L_0;
		L_0 = GameAssets_Getinstance_mF8747563EFDDFA3B04BAAF1A80721A1FAB2631F8(/*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = L_0->get_platform_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = __this->get_firstPlatforms_5();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3;
		L_3 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mC13E8DA0CA1DFD88310E2E066C5479E3994BAA30(L_1, L_2, L_3, /*hidden argument*/Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mC13E8DA0CA1DFD88310E2E066C5479E3994BAA30_RuntimeMethod_var);
		V_1 = L_4;
		// SpriteRenderer sp = platform1.GetComponent<SpriteRenderer>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = V_1;
		NullCheck(L_5);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_6;
		L_6 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(L_5, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		V_2 = L_6;
		// BoxCollider2D boxCollider2D = platform1.GetComponent<BoxCollider2D>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = V_1;
		NullCheck(L_7);
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_8;
		L_8 = Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA(L_7, /*hidden argument*/Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var);
		V_3 = L_8;
		// firstPlatforms.x = Random.Range(-10f,10f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_9 = __this->get_address_of_firstPlatforms_5();
		float L_10;
		L_10 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((-10.0f), (10.0f), /*hidden argument*/NULL);
		L_9->set_x_2(L_10);
		// firstPlatforms.y += Random.Range(yRangeRandom, yRangeRandom2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_11 = __this->get_address_of_firstPlatforms_5();
		float* L_12 = L_11->get_address_of_y_3();
		float* L_13 = L_12;
		float L_14 = *((float*)L_13);
		float L_15 = __this->get_yRangeRandom_16();
		float L_16 = __this->get_yRangeRandom2_17();
		float L_17;
		L_17 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_15, L_16, /*hidden argument*/NULL);
		*((float*)L_13) = (float)((float)il2cpp_codegen_add((float)L_14, (float)L_17));
		// float RandomNumber = Random.Range(10f,11f);
		float L_18;
		L_18 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((10.0f), (11.0f), /*hidden argument*/NULL);
		V_4 = L_18;
		// sp.size = new Vector2(RandomNumber, 1f);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_19 = V_2;
		float L_20 = V_4;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_21), L_20, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_19);
		SpriteRenderer_set_size_m92E5651D28AC04743795244ACC1E3F5FABCF1B49(L_19, L_21, /*hidden argument*/NULL);
		// boxCollider2D.size = new Vector2(RandomNumber-1f, 0.14f);
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_22 = V_3;
		float L_23 = V_4;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_24), ((float)il2cpp_codegen_subtract((float)L_23, (float)(1.0f))), (0.140000001f), /*hidden argument*/NULL);
		NullCheck(L_22);
		BoxCollider2D_set_size_m8460A38ADDD4BE82BE1F416DE3D7AFB87EBA6760(L_22, L_24, /*hidden argument*/NULL);
		// boxCollider2D.offset = new Vector2(0, 0);
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_25 = V_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_26), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_25);
		Collider2D_set_offset_m496DDE5487C59E9E8D6B468E8918EE1EFC625E38(L_25, L_26, /*hidden argument*/NULL);
		// Platform platform = new Platform(platform1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27 = V_1;
		Platform_tE9E6AC72071AF6BACAF02519C6C0AED83456CB3D * L_28 = (Platform_tE9E6AC72071AF6BACAF02519C6C0AED83456CB3D *)il2cpp_codegen_object_new(Platform_tE9E6AC72071AF6BACAF02519C6C0AED83456CB3D_il2cpp_TypeInfo_var);
		Platform__ctor_m9935F152B1FF9D4B5F6C11C67183CDD5FEC6ACB3(L_28, L_27, /*hidden argument*/NULL);
		V_5 = L_28;
		// PlatformList.Add(platform);
		List_1_t1962AE351C867A2D55EBF2EF233FE6F05086E474 * L_29 = __this->get_PlatformList_8();
		Platform_tE9E6AC72071AF6BACAF02519C6C0AED83456CB3D * L_30 = V_5;
		NullCheck(L_29);
		List_1_Add_m708216AF149088C3FBB2EDF789ACA5A4346A994E(L_29, L_30, /*hidden argument*/List_1_Add_m708216AF149088C3FBB2EDF789ACA5A4346A994E_RuntimeMethod_var);
		// if (i <= 20)
		int32_t L_31 = V_0;
		V_6 = (bool)((((int32_t)((((int32_t)L_31) > ((int32_t)((int32_t)20)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_32 = V_6;
		if (!L_32)
		{
			goto IL_00ed;
		}
	}
	{
		// HandleJumpPadSpawn(platform1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33 = V_1;
		levelgen_HandleJumpPadSpawn_m284D204F41D42744792363EEA7F28B33FC939522(__this, L_33, /*hidden argument*/NULL);
	}

IL_00ed:
	{
		// for (int i = 0; i < 10; i++)
		int32_t L_34 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_00f2:
	{
		// for (int i = 0; i < 10; i++)
		int32_t L_35 = V_0;
		V_7 = (bool)((((int32_t)L_35) < ((int32_t)((int32_t)10)))? 1 : 0);
		bool L_36 = V_7;
		if (L_36)
		{
			goto IL_0008;
		}
	}
	{
		// }
		return;
	}
}
// System.Void levelgen::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void levelgen_Update_m3548FF50A0620037ED7BA1C38E781C31E50AE94E (levelgen_t61ACD1EBFCB7594B9AE7934E46DF321EEB517845 * __this, const RuntimeMethod* method)
{
	{
		// HandlePlatFormDeletion();
		levelgen_HandlePlatFormDeletion_mC1A08ACABCC70100EF2ACC0C8C240C6ED6AD666F(__this, /*hidden argument*/NULL);
		// SpawnTimer();
		levelgen_SpawnTimer_m41E1046E26A7BB7B3AF564CF96DD1B32B71CF784(__this, /*hidden argument*/NULL);
		// RandomGap();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		L_0 = levelgen_RandomGap_m6E9A2FC63A12D68DA3CF9B5819CA91F6CEEE1D43(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void levelgen::HandlePlatFormDeletion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void levelgen_HandlePlatFormDeletion_mC1A08ACABCC70100EF2ACC0C8C240C6ED6AD666F (levelgen_t61ACD1EBFCB7594B9AE7934E46DF321EEB517845 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mA50F7BE5265E4B1700A658B4F92ED79062732083_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3C4A3F5F867B2AC8C03C59E1663BDD30D896EEBD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m24B3F08332B1C52FD508480451080C0B886C18FC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Platform_tE9E6AC72071AF6BACAF02519C6C0AED83456CB3D * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		// for (int i = 0; i < PlatformList.Count; i++)
		V_0 = 0;
		goto IL_004e;
	}

IL_0005:
	{
		// Platform platform = PlatformList[i];
		List_1_t1962AE351C867A2D55EBF2EF233FE6F05086E474 * L_0 = __this->get_PlatformList_8();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Platform_tE9E6AC72071AF6BACAF02519C6C0AED83456CB3D * L_2;
		L_2 = List_1_get_Item_m24B3F08332B1C52FD508480451080C0B886C18FC_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m24B3F08332B1C52FD508480451080C0B886C18FC_RuntimeMethod_var);
		V_1 = L_2;
		// if (platform.GetYposition() < PositionToDelete.position.y)
		Platform_tE9E6AC72071AF6BACAF02519C6C0AED83456CB3D * L_3 = V_1;
		NullCheck(L_3);
		float L_4;
		L_4 = Platform_GetYposition_m3DCA56E6EFC006156C5E537B3D38B3EDC133DB8A(L_3, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = __this->get_PositionToDelete_10();
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		float L_7 = L_6.get_y_3();
		V_2 = (bool)((((float)L_4) < ((float)L_7))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0049;
		}
	}
	{
		// platform.DestroySelf();
		Platform_tE9E6AC72071AF6BACAF02519C6C0AED83456CB3D * L_9 = V_1;
		NullCheck(L_9);
		Platform_DestroySelf_mDBC6DADAFCCFE5DD770CFE283D0D4D4F71EDCAC3(L_9, /*hidden argument*/NULL);
		// PlatformList.Remove(platform);
		List_1_t1962AE351C867A2D55EBF2EF233FE6F05086E474 * L_10 = __this->get_PlatformList_8();
		Platform_tE9E6AC72071AF6BACAF02519C6C0AED83456CB3D * L_11 = V_1;
		NullCheck(L_10);
		bool L_12;
		L_12 = List_1_Remove_mA50F7BE5265E4B1700A658B4F92ED79062732083(L_10, L_11, /*hidden argument*/List_1_Remove_mA50F7BE5265E4B1700A658B4F92ED79062732083_RuntimeMethod_var);
		// i--;
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1));
	}

IL_0049:
	{
		// for (int i = 0; i < PlatformList.Count; i++)
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_004e:
	{
		// for (int i = 0; i < PlatformList.Count; i++)
		int32_t L_15 = V_0;
		List_1_t1962AE351C867A2D55EBF2EF233FE6F05086E474 * L_16 = __this->get_PlatformList_8();
		NullCheck(L_16);
		int32_t L_17;
		L_17 = List_1_get_Count_m3C4A3F5F867B2AC8C03C59E1663BDD30D896EEBD_inline(L_16, /*hidden argument*/List_1_get_Count_m3C4A3F5F867B2AC8C03C59E1663BDD30D896EEBD_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_15) < ((int32_t)L_17))? 1 : 0);
		bool L_18 = V_3;
		if (L_18)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void levelgen::SpawnTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void levelgen_SpawnTimer_m41E1046E26A7BB7B3AF564CF96DD1B32B71CF784 (levelgen_t61ACD1EBFCB7594B9AE7934E46DF321EEB517845 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B6_0 = 0;
	{
		// if (player.position.y>15f)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_player_11();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_y_3();
		V_0 = (bool)((((float)L_2) > ((float)(15.0f)))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		// GameStarted = true;
		__this->set_GameStarted_9((bool)1);
	}

IL_0025:
	{
		// if (GameStarted)
		bool L_4 = __this->get_GameStarted_9();
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_00bf;
		}
	}
	{
		// Timer -= Time.deltaTime;
		float L_6 = __this->get_Timer_6();
		float L_7;
		L_7 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_Timer_6(((float)il2cpp_codegen_subtract((float)L_6, (float)L_7)));
		// if (Timer <= 0&&rb.velocity.y<120f)
		float L_8 = __this->get_Timer_6();
		if ((!(((float)L_8) <= ((float)(0.0f)))))
		{
			goto IL_006b;
		}
	}
	{
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_9 = __this->get_rb_18();
		NullCheck(L_9);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10;
		L_10 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_y_1();
		G_B6_0 = ((((float)L_11) < ((float)(120.0f)))? 1 : 0);
		goto IL_006c;
	}

IL_006b:
	{
		G_B6_0 = 0;
	}

IL_006c:
	{
		V_2 = (bool)G_B6_0;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0094;
		}
	}
	{
		// setPlatform(GetPlatform());
		int32_t L_13;
		L_13 = levelgen_GetPlatform_m660E7800E75A5DF210AD4C3E108B7796D352F23C(__this, /*hidden argument*/NULL);
		levelgen_setPlatform_mC14E7ACECC513CA8077C3B17DD84C1EEAAB15141(__this, L_13, /*hidden argument*/NULL);
		// Timer += maxTimer;
		float L_14 = __this->get_Timer_6();
		float L_15 = __this->get_maxTimer_7();
		__this->set_Timer_6(((float)il2cpp_codegen_add((float)L_14, (float)L_15)));
		goto IL_00be;
	}

IL_0094:
	{
		// else  if (rb.velocity.y > 150f)
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_16 = __this->get_rb_18();
		NullCheck(L_16);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17;
		L_17 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_16, /*hidden argument*/NULL);
		float L_18 = L_17.get_y_1();
		V_3 = (bool)((((float)L_18) > ((float)(150.0f)))? 1 : 0);
		bool L_19 = V_3;
		if (!L_19)
		{
			goto IL_00be;
		}
	}
	{
		// setPlatform(GetPlatform());
		int32_t L_20;
		L_20 = levelgen_GetPlatform_m660E7800E75A5DF210AD4C3E108B7796D352F23C(__this, /*hidden argument*/NULL);
		levelgen_setPlatform_mC14E7ACECC513CA8077C3B17DD84C1EEAAB15141(__this, L_20, /*hidden argument*/NULL);
	}

IL_00be:
	{
	}

IL_00bf:
	{
		// }
		return;
	}
}
// System.Void levelgen::CreatePlatform(UnityEngine.Vector3,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void levelgen_CreatePlatform_mDE7C6B9B30F74C5DA850DF1D904362BCF8E4FDCD (levelgen_t61ACD1EBFCB7594B9AE7934E46DF321EEB517845 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___SpawnPosition10, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___platform11, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m708216AF149088C3FBB2EDF789ACA5A4346A994E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mC13E8DA0CA1DFD88310E2E066C5479E3994BAA30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_tE9E6AC72071AF6BACAF02519C6C0AED83456CB3D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * V_0 = NULL;
	BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * V_1 = NULL;
	float V_2 = 0.0f;
	Platform_tE9E6AC72071AF6BACAF02519C6C0AED83456CB3D * V_3 = NULL;
	{
		// platform1 = Instantiate(platform1,SpawnPosition1, Quaternion.identity);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___platform11;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___SpawnPosition10;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_2;
		L_2 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mC13E8DA0CA1DFD88310E2E066C5479E3994BAA30(L_0, L_1, L_2, /*hidden argument*/Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mC13E8DA0CA1DFD88310E2E066C5479E3994BAA30_RuntimeMethod_var);
		___platform11 = L_3;
		// SpriteRenderer sp = platform1.GetComponent<SpriteRenderer>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = ___platform11;
		NullCheck(L_4);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_5;
		L_5 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(L_4, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		V_0 = L_5;
		// BoxCollider2D boxCollider2D = platform1.GetComponent<BoxCollider2D>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = ___platform11;
		NullCheck(L_6);
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_7;
		L_7 = Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA(L_6, /*hidden argument*/Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var);
		V_1 = L_7;
		// SpawnPosition1.x = Random.Range(-10f, 10f);
		float L_8;
		L_8 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((-10.0f), (10.0f), /*hidden argument*/NULL);
		(&___SpawnPosition10)->set_x_2(L_8);
		// SpawnPosition1.y += Random.Range(yRangeRandom, yRangeRandom2);
		float* L_9 = (&___SpawnPosition10)->get_address_of_y_3();
		float* L_10 = L_9;
		float L_11 = *((float*)L_10);
		float L_12 = __this->get_yRangeRandom_16();
		float L_13 = __this->get_yRangeRandom2_17();
		float L_14;
		L_14 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_12, L_13, /*hidden argument*/NULL);
		*((float*)L_10) = (float)((float)il2cpp_codegen_add((float)L_11, (float)L_14));
		// float RandomNumber = Random.Range(RandomGap().x,RandomGap().y);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15;
		L_15 = levelgen_RandomGap_m6E9A2FC63A12D68DA3CF9B5819CA91F6CEEE1D43(__this, /*hidden argument*/NULL);
		float L_16 = L_15.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17;
		L_17 = levelgen_RandomGap_m6E9A2FC63A12D68DA3CF9B5819CA91F6CEEE1D43(__this, /*hidden argument*/NULL);
		float L_18 = L_17.get_y_1();
		float L_19;
		L_19 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_16, L_18, /*hidden argument*/NULL);
		V_2 = L_19;
		// sp.size = new Vector2(RandomNumber, 1f);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_20 = V_0;
		float L_21 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_22), L_21, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_20);
		SpriteRenderer_set_size_m92E5651D28AC04743795244ACC1E3F5FABCF1B49(L_20, L_22, /*hidden argument*/NULL);
		// boxCollider2D.size = new Vector2(RandomNumber - 1f, 0.14f);
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_23 = V_1;
		float L_24 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_25), ((float)il2cpp_codegen_subtract((float)L_24, (float)(1.0f))), (0.140000001f), /*hidden argument*/NULL);
		NullCheck(L_23);
		BoxCollider2D_set_size_m8460A38ADDD4BE82BE1F416DE3D7AFB87EBA6760(L_23, L_25, /*hidden argument*/NULL);
		// boxCollider2D.offset = new Vector2(0, 0);
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_26 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_27), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_26);
		Collider2D_set_offset_m496DDE5487C59E9E8D6B468E8918EE1EFC625E38(L_26, L_27, /*hidden argument*/NULL);
		// startPosition1 = SpawnPosition1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28 = ___SpawnPosition10;
		__this->set_startPosition1_4(L_28);
		// Platform platform = new Platform(platform1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29 = ___platform11;
		Platform_tE9E6AC72071AF6BACAF02519C6C0AED83456CB3D * L_30 = (Platform_tE9E6AC72071AF6BACAF02519C6C0AED83456CB3D *)il2cpp_codegen_object_new(Platform_tE9E6AC72071AF6BACAF02519C6C0AED83456CB3D_il2cpp_TypeInfo_var);
		Platform__ctor_m9935F152B1FF9D4B5F6C11C67183CDD5FEC6ACB3(L_30, L_29, /*hidden argument*/NULL);
		V_3 = L_30;
		// PlatformList.Add(platform);
		List_1_t1962AE351C867A2D55EBF2EF233FE6F05086E474 * L_31 = __this->get_PlatformList_8();
		Platform_tE9E6AC72071AF6BACAF02519C6C0AED83456CB3D * L_32 = V_3;
		NullCheck(L_31);
		List_1_Add_m708216AF149088C3FBB2EDF789ACA5A4346A994E(L_31, L_32, /*hidden argument*/List_1_Add_m708216AF149088C3FBB2EDF789ACA5A4346A994E_RuntimeMethod_var);
		// HandleJumpPadSpawn(platform1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33 = ___platform11;
		levelgen_HandleJumpPadSpawn_m284D204F41D42744792363EEA7F28B33FC939522(__this, L_33, /*hidden argument*/NULL);
		// Counter_for_platforms++;
		int32_t L_34 = __this->get_Counter_for_platforms_14();
		__this->set_Counter_for_platforms_14(((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1)));
		// }
		return;
	}
}
// System.Void levelgen::HandleJumpPadSpawn(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void levelgen_HandleJumpPadSpawn_m284D204F41D42744792363EEA7F28B33FC939522 (levelgen_t61ACD1EBFCB7594B9AE7934E46DF321EEB517845 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___platform10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m590D55CDD380D61B8E49847623BD97E6EA9D9762_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_3 = NULL;
	bool V_4 = false;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_5 = NULL;
	bool V_6 = false;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_7 = NULL;
	{
		// counter_To_Spawn_JumpPad++;
		int32_t L_0 = __this->get_counter_To_Spawn_JumpPad_12();
		__this->set_counter_To_Spawn_JumpPad_12(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// random_num_to_spawn_ToChoose_jumppad = Random.Range(1, 7);
		int32_t L_1;
		L_1 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(1, 7, /*hidden argument*/NULL);
		__this->set_random_num_to_spawn_ToChoose_jumppad_13(L_1);
		// switch (random_num_to_spawn_ToChoose_jumppad)
		int32_t L_2 = __this->get_random_num_to_spawn_ToChoose_jumppad_13();
		V_1 = L_2;
		int32_t L_3 = V_1;
		V_0 = L_3;
		int32_t L_4 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1)))
		{
			case 0:
			{
				goto IL_003e;
			}
			case 1:
			{
				goto IL_009f;
			}
			case 2:
			{
				goto IL_0103;
			}
		}
	}
	{
		goto IL_0167;
	}

IL_003e:
	{
		// if (counter_To_Spawn_JumpPad % 4 == 0)
		int32_t L_5 = __this->get_counter_To_Spawn_JumpPad_12();
		V_2 = (bool)((((int32_t)((int32_t)((int32_t)L_5%(int32_t)4))) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_009a;
		}
	}
	{
		// Transform JumpPad = Instantiate(GameAssets.Getinstance().Jump_pad);
		GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191 * L_7;
		L_7 = GameAssets_Getinstance_mF8747563EFDDFA3B04BAAF1A80721A1FAB2631F8(/*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = L_7->get_Jump_pad_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m590D55CDD380D61B8E49847623BD97E6EA9D9762(L_8, /*hidden argument*/Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m590D55CDD380D61B8E49847623BD97E6EA9D9762_RuntimeMethod_var);
		V_3 = L_9;
		// JumpPad.position = platform1.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = V_3;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = ___platform10;
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_10, L_12, /*hidden argument*/NULL);
		// JumpPad.position += new Vector3(0, 1.15f, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13 = V_3;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14 = L_13;
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_16), (0.0f), (1.14999998f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_15, L_16, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_14, L_17, /*hidden argument*/NULL);
		// JumpPad.SetParent(platform1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18 = V_3;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19 = ___platform10;
		NullCheck(L_18);
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_18, L_19, /*hidden argument*/NULL);
	}

IL_009a:
	{
		// break;
		goto IL_0167;
	}

IL_009f:
	{
		// if (counter_To_Spawn_JumpPad % 3 == 0)
		int32_t L_20 = __this->get_counter_To_Spawn_JumpPad_12();
		V_4 = (bool)((((int32_t)((int32_t)((int32_t)L_20%(int32_t)3))) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_4;
		if (!L_21)
		{
			goto IL_0101;
		}
	}
	{
		// Transform Trap = Instantiate(GameAssets.Getinstance().Trap);
		GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191 * L_22;
		L_22 = GameAssets_Getinstance_mF8747563EFDDFA3B04BAAF1A80721A1FAB2631F8(/*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23 = L_22->get_Trap_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m590D55CDD380D61B8E49847623BD97E6EA9D9762(L_23, /*hidden argument*/Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m590D55CDD380D61B8E49847623BD97E6EA9D9762_RuntimeMethod_var);
		V_5 = L_24;
		// Trap.position = platform1.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25 = V_5;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26 = ___platform10;
		NullCheck(L_26);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_26, /*hidden argument*/NULL);
		NullCheck(L_25);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_25, L_27, /*hidden argument*/NULL);
		// Trap.position += new Vector3(1.38f, 1.77f, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28 = V_5;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29 = L_28;
		NullCheck(L_29);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_29, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_31), (1.38f), (1.76999998f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_30, L_31, /*hidden argument*/NULL);
		NullCheck(L_29);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_29, L_32, /*hidden argument*/NULL);
		// Trap.SetParent(platform1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33 = V_5;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34 = ___platform10;
		NullCheck(L_33);
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_33, L_34, /*hidden argument*/NULL);
	}

IL_0101:
	{
		// break;
		goto IL_0167;
	}

IL_0103:
	{
		// if (counter_To_Spawn_JumpPad % 5 == 0)
		int32_t L_35 = __this->get_counter_To_Spawn_JumpPad_12();
		V_6 = (bool)((((int32_t)((int32_t)((int32_t)L_35%(int32_t)5))) == ((int32_t)0))? 1 : 0);
		bool L_36 = V_6;
		if (!L_36)
		{
			goto IL_0165;
		}
	}
	{
		// Transform PowerUp = Instantiate(GameAssets.Getinstance().PowerUp);
		GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191 * L_37;
		L_37 = GameAssets_Getinstance_mF8747563EFDDFA3B04BAAF1A80721A1FAB2631F8(/*hidden argument*/NULL);
		NullCheck(L_37);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_38 = L_37->get_PowerUp_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_39;
		L_39 = Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m590D55CDD380D61B8E49847623BD97E6EA9D9762(L_38, /*hidden argument*/Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m590D55CDD380D61B8E49847623BD97E6EA9D9762_RuntimeMethod_var);
		V_7 = L_39;
		// PowerUp.position = platform1.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40 = V_7;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_41 = ___platform10;
		NullCheck(L_41);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
		L_42 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_41, /*hidden argument*/NULL);
		NullCheck(L_40);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_40, L_42, /*hidden argument*/NULL);
		// PowerUp.position += new Vector3(0, 1.64f, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_43 = V_7;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_44 = L_43;
		NullCheck(L_44);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		L_45 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_44, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
		memset((&L_46), 0, sizeof(L_46));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_46), (0.0f), (1.63999999f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47;
		L_47 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_45, L_46, /*hidden argument*/NULL);
		NullCheck(L_44);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_44, L_47, /*hidden argument*/NULL);
		// PowerUp.SetParent(platform1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_48 = V_7;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_49 = ___platform10;
		NullCheck(L_48);
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_48, L_49, /*hidden argument*/NULL);
	}

IL_0165:
	{
		// break;
		goto IL_0167;
	}

IL_0167:
	{
		// }
		return;
	}
}
// System.Void levelgen::setPlatform(levelgen/PlatformEnum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void levelgen_setPlatform_mC14E7ACECC513CA8077C3B17DD84C1EEAAB15141 (levelgen_t61ACD1EBFCB7594B9AE7934E46DF321EEB517845 * __this, int32_t ___diffculty0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// switch (diffculty)
		int32_t L_0 = ___diffculty0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_006c;
			}
			case 2:
			{
				goto IL_003a;
			}
			case 3:
			{
				goto IL_0053;
			}
			case 4:
			{
				goto IL_0085;
			}
		}
	}
	{
		goto IL_009e;
	}

IL_0021:
	{
		// CreatePlatform(startPosition1, GameAssets.Getinstance().platform);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = __this->get_startPosition1_4();
		GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191 * L_4;
		L_4 = GameAssets_Getinstance_mF8747563EFDDFA3B04BAAF1A80721A1FAB2631F8(/*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = L_4->get_platform_5();
		levelgen_CreatePlatform_mDE7C6B9B30F74C5DA850DF1D904362BCF8E4FDCD(__this, L_3, L_5, /*hidden argument*/NULL);
		// break;
		goto IL_009e;
	}

IL_003a:
	{
		// CreatePlatform(startPosition1, GameAssets.Getinstance().WoodPlatform);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = __this->get_startPosition1_4();
		GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191 * L_7;
		L_7 = GameAssets_Getinstance_mF8747563EFDDFA3B04BAAF1A80721A1FAB2631F8(/*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = L_7->get_WoodPlatform_8();
		levelgen_CreatePlatform_mDE7C6B9B30F74C5DA850DF1D904362BCF8E4FDCD(__this, L_6, L_8, /*hidden argument*/NULL);
		// break;
		goto IL_009e;
	}

IL_0053:
	{
		// CreatePlatform(startPosition1,GameAssets.Getinstance().DissolvingPlatform);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = __this->get_startPosition1_4();
		GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191 * L_10;
		L_10 = GameAssets_Getinstance_mF8747563EFDDFA3B04BAAF1A80721A1FAB2631F8(/*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = L_10->get_DissolvingPlatform_10();
		levelgen_CreatePlatform_mDE7C6B9B30F74C5DA850DF1D904362BCF8E4FDCD(__this, L_9, L_11, /*hidden argument*/NULL);
		// break;
		goto IL_009e;
	}

IL_006c:
	{
		// CreatePlatform(startPosition1,  GameAssets.Getinstance().OutlinePlatformPlatform);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = __this->get_startPosition1_4();
		GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191 * L_13;
		L_13 = GameAssets_Getinstance_mF8747563EFDDFA3B04BAAF1A80721A1FAB2631F8(/*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14 = L_13->get_OutlinePlatformPlatform_9();
		levelgen_CreatePlatform_mDE7C6B9B30F74C5DA850DF1D904362BCF8E4FDCD(__this, L_12, L_14, /*hidden argument*/NULL);
		// break;
		goto IL_009e;
	}

IL_0085:
	{
		// CreatePlatform(startPosition1, GameAssets.Getinstance().PinkPlatform);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = __this->get_startPosition1_4();
		GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191 * L_16;
		L_16 = GameAssets_Getinstance_mF8747563EFDDFA3B04BAAF1A80721A1FAB2631F8(/*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17 = L_16->get_PinkPlatform_7();
		levelgen_CreatePlatform_mDE7C6B9B30F74C5DA850DF1D904362BCF8E4FDCD(__this, L_15, L_17, /*hidden argument*/NULL);
		// break;
		goto IL_009e;
	}

IL_009e:
	{
		// }
		return;
	}
}
// levelgen/PlatformEnum levelgen::GetPlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t levelgen_GetPlatform_m660E7800E75A5DF210AD4C3E108B7796D352F23C (levelgen_t61ACD1EBFCB7594B9AE7934E46DF321EEB517845 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		// if (Counter_for_platforms%15==0)
		int32_t L_0 = __this->get_Counter_for_platforms_14();
		V_0 = (bool)((((int32_t)((int32_t)((int32_t)L_0%(int32_t)((int32_t)15)))) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// RandomForTypeOfPlatform = Random.Range(0,5);
		int32_t L_2;
		L_2 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, 5, /*hidden argument*/NULL);
		__this->set_RandomForTypeOfPlatform_15(L_2);
	}

IL_001e:
	{
		// if (RandomForTypeOfPlatform == 1) return PlatformEnum.DissolvingPlatform;
		int32_t L_3 = __this->get_RandomForTypeOfPlatform_15();
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)1))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		// if (RandomForTypeOfPlatform == 1) return PlatformEnum.DissolvingPlatform;
		V_2 = 4;
		goto IL_006a;
	}

IL_002f:
	{
		// if (RandomForTypeOfPlatform == 2) return PlatformEnum.woodPlatform;
		int32_t L_5 = __this->get_RandomForTypeOfPlatform_15();
		V_3 = (bool)((((int32_t)L_5) == ((int32_t)2))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		// if (RandomForTypeOfPlatform == 2) return PlatformEnum.woodPlatform;
		V_2 = 1;
		goto IL_006a;
	}

IL_0040:
	{
		// if (RandomForTypeOfPlatform == 3) return PlatformEnum.platform;
		int32_t L_7 = __this->get_RandomForTypeOfPlatform_15();
		V_4 = (bool)((((int32_t)L_7) == ((int32_t)3))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_0053;
		}
	}
	{
		// if (RandomForTypeOfPlatform == 3) return PlatformEnum.platform;
		V_2 = 0;
		goto IL_006a;
	}

IL_0053:
	{
		// if (RandomForTypeOfPlatform == 4) return PlatformEnum.pinkplatform;
		int32_t L_9 = __this->get_RandomForTypeOfPlatform_15();
		V_5 = (bool)((((int32_t)L_9) == ((int32_t)4))? 1 : 0);
		bool L_10 = V_5;
		if (!L_10)
		{
			goto IL_0066;
		}
	}
	{
		// if (RandomForTypeOfPlatform == 4) return PlatformEnum.pinkplatform;
		V_2 = 2;
		goto IL_006a;
	}

IL_0066:
	{
		// return PlatformEnum.OutlinePlatformPlatform;
		V_2 = 3;
		goto IL_006a;
	}

IL_006a:
	{
		// }
		int32_t L_11 = V_2;
		return L_11;
	}
}
// System.Void levelgen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void levelgen__ctor_m9DC6A8E87F91E45F1946F11D2C37BF41CC4BFB24 (levelgen_t61ACD1EBFCB7594B9AE7934E46DF321EEB517845 * __this, const RuntimeMethod* method)
{
	{
		// Vector3 startPosition1 = new Vector3(0f, 122f, 0f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_0), (0.0f), (122.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_startPosition1_4(L_0);
		// Vector3 firstPlatforms =new Vector3(0,10f,0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_1), (0.0f), (10.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_firstPlatforms_5(L_1);
		// float yRangeRandom = 10f;
		__this->set_yRangeRandom_16((10.0f));
		// float yRangeRandom2 = 12f;
		__this->set_yRangeRandom2_17((12.0f));
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
// System.Void player::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void player_Awake_m71FAFDA7E0223FE65F8A090C6AC5FC32D5BC7557 (player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set_rb_6(L_0);
		// anim = GetComponent<Animator>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1;
		L_1 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set_anim_7(L_1);
		// sp = GetComponent<SpriteRenderer>();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_2;
		L_2 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		__this->set_sp_8(L_2);
		// BoostCapacityMax = 1f;
		__this->set_BoostCapacityMax_20((1.0f));
		// BoostCapacity= 0f;
		__this->set_BoostCapacity_19((0.0f));
		// BoostCooldownMax = 5f;
		__this->set_BoostCooldownMax_23((5.0f));
		// increaseBoost = true;
		__this->set_increaseBoost_24((bool)1);
		// BoostCooldown += BoostCooldownMax;
		float L_3 = __this->get_BoostCooldown_22();
		float L_4 = __this->get_BoostCooldownMax_23();
		__this->set_BoostCooldown_22(((float)il2cpp_codegen_add((float)L_3, (float)L_4)));
		// boostScript.SetMaxBoost(BoostCapacityMax);
		BoostBar_t248D99B7988BF361E572025F1E7D66B05DBACDA0 * L_5 = __this->get_boostScript_21();
		float L_6 = __this->get_BoostCapacityMax_20();
		NullCheck(L_5);
		BoostBar_SetMaxBoost_m20CA0FF2518E5ADF0D702E5C71BC0A58935F4355(L_5, L_6, /*hidden argument*/NULL);
		// timerForPowerUpMax = 5f;
		__this->set_timerForPowerUpMax_18((5.0f));
		// SoundManager.initialize();
		SoundManager_initialize_m32C6167EF99FD105660A911D42022DC9673B8BDF(/*hidden argument*/NULL);
		// boostScript.setboost(0f);
		BoostBar_t248D99B7988BF361E572025F1E7D66B05DBACDA0 * L_7 = __this->get_boostScript_21();
		NullCheck(L_7);
		BoostBar_setboost_mD74AE9C94F5BBE6245C986D8FA9018DC7013DC51(L_7, (0.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void player::HandleBoostUsage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void player_HandleBoostUsage_mBD3EE26F6AB3FA0D897482AA429A9F2AAC829F03 (player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t G_B4_0 = 0;
	{
		// if (Input.GetMouseButton(0)&&BoostCapacity>0&&!increaseBoost)
		bool L_0;
		L_0 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		float L_1 = __this->get_BoostCapacity_19();
		if ((!(((float)L_1) > ((float)(0.0f)))))
		{
			goto IL_0021;
		}
	}
	{
		bool L_2 = __this->get_increaseBoost_24();
		G_B4_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B4_0 = 0;
	}

IL_0022:
	{
		V_0 = (bool)G_B4_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_00af;
		}
	}
	{
		// rb.gravityScale = 1f;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_4 = __this->get_rb_6();
		NullCheck(L_4);
		Rigidbody2D_set_gravityScale_mEDC82EE2ED74DA9C5AB8A0C4A929B09149522BBF(L_4, (1.0f), /*hidden argument*/NULL);
		// BoostCapacity -= Time.deltaTime;
		float L_5 = __this->get_BoostCapacity_19();
		float L_6;
		L_6 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_BoostCapacity_19(((float)il2cpp_codegen_subtract((float)L_5, (float)L_6)));
		// rb.AddForce(170f*Time.deltaTime*Vector2.up, ForceMode2D.Impulse);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_7 = __this->get_rb_6();
		float L_8;
		L_8 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		L_9 = Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10;
		L_10 = Vector2_op_Multiply_m841D5292C48DAD9746A2F4EED9CE7A76CDB652EA_inline(((float)il2cpp_codegen_multiply((float)(170.0f), (float)L_8)), L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_7, L_10, 1, /*hidden argument*/NULL);
		// Dust.Play();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_11 = __this->get_Dust_4();
		NullCheck(L_11);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_11, /*hidden argument*/NULL);
		// if (BoostCapacity <= 0)
		float L_12 = __this->get_BoostCapacity_19();
		V_1 = (bool)((((int32_t)((!(((float)L_12) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_1;
		if (!L_13)
		{
			goto IL_00ae;
		}
	}
	{
		// Dust.Stop();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_14 = __this->get_Dust_4();
		NullCheck(L_14);
		ParticleSystem_Stop_m8CBF9268DE7B5A40952B4977462B857B5F5AFB9D(L_14, /*hidden argument*/NULL);
		// rb.gravityScale = 14f;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_15 = __this->get_rb_6();
		NullCheck(L_15);
		Rigidbody2D_set_gravityScale_mEDC82EE2ED74DA9C5AB8A0C4A929B09149522BBF(L_15, (14.0f), /*hidden argument*/NULL);
	}

IL_00ae:
	{
	}

IL_00af:
	{
		// if (rb.velocity.y >= 150f)
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_16 = __this->get_rb_6();
		NullCheck(L_16);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17;
		L_17 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_16, /*hidden argument*/NULL);
		float L_18 = L_17.get_y_1();
		V_2 = (bool)((((int32_t)((!(((float)L_18) >= ((float)(150.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_19 = V_2;
		if (!L_19)
		{
			goto IL_00ef;
		}
	}
	{
		// rb.gravityScale += Time.deltaTime*33f;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_20 = __this->get_rb_6();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_21 = L_20;
		NullCheck(L_21);
		float L_22;
		L_22 = Rigidbody2D_get_gravityScale_mD07E728DCAEF0E011CB2D43D6B8E5C700BC0ACDD(L_21, /*hidden argument*/NULL);
		float L_23;
		L_23 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		NullCheck(L_21);
		Rigidbody2D_set_gravityScale_mEDC82EE2ED74DA9C5AB8A0C4A929B09149522BBF(L_21, ((float)il2cpp_codegen_add((float)L_22, (float)((float)il2cpp_codegen_multiply((float)L_23, (float)(33.0f))))), /*hidden argument*/NULL);
		goto IL_011d;
	}

IL_00ef:
	{
		// else if(rb.velocity.y < 20f)
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_24 = __this->get_rb_6();
		NullCheck(L_24);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_25;
		L_25 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_24, /*hidden argument*/NULL);
		float L_26 = L_25.get_y_1();
		V_3 = (bool)((((float)L_26) < ((float)(20.0f)))? 1 : 0);
		bool L_27 = V_3;
		if (!L_27)
		{
			goto IL_011d;
		}
	}
	{
		// rb.gravityScale = 14f;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_28 = __this->get_rb_6();
		NullCheck(L_28);
		Rigidbody2D_set_gravityScale_mEDC82EE2ED74DA9C5AB8A0C4A929B09149522BBF(L_28, (14.0f), /*hidden argument*/NULL);
	}

IL_011d:
	{
		// if (Input.GetMouseButtonUp(0))
		bool L_29;
		L_29 = Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022(0, /*hidden argument*/NULL);
		V_4 = L_29;
		bool L_30 = V_4;
		if (!L_30)
		{
			goto IL_0148;
		}
	}
	{
		// rb.gravityScale = 14f;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_31 = __this->get_rb_6();
		NullCheck(L_31);
		Rigidbody2D_set_gravityScale_mEDC82EE2ED74DA9C5AB8A0C4A929B09149522BBF(L_31, (14.0f), /*hidden argument*/NULL);
		// Dust.Stop();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_32 = __this->get_Dust_4();
		NullCheck(L_32);
		ParticleSystem_Stop_m8CBF9268DE7B5A40952B4977462B857B5F5AFB9D(L_32, /*hidden argument*/NULL);
	}

IL_0148:
	{
		// if (BoostCapacity < 1f)
		float L_33 = __this->get_BoostCapacity_19();
		V_5 = (bool)((((float)L_33) < ((float)(1.0f)))? 1 : 0);
		bool L_34 = V_5;
		if (!L_34)
		{
			goto IL_01a1;
		}
	}
	{
		// BoostCooldown -= Time.deltaTime;
		float L_35 = __this->get_BoostCooldown_22();
		float L_36;
		L_36 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_BoostCooldown_22(((float)il2cpp_codegen_subtract((float)L_35, (float)L_36)));
		// if (BoostCooldown <= 0f)
		float L_37 = __this->get_BoostCooldown_22();
		V_6 = (bool)((((int32_t)((!(((float)L_37) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_38 = V_6;
		if (!L_38)
		{
			goto IL_01a0;
		}
	}
	{
		// BoostCooldown += BoostCooldownMax;
		float L_39 = __this->get_BoostCooldown_22();
		float L_40 = __this->get_BoostCooldownMax_23();
		__this->set_BoostCooldown_22(((float)il2cpp_codegen_add((float)L_39, (float)L_40)));
		// increaseBoost = true;
		__this->set_increaseBoost_24((bool)1);
	}

IL_01a0:
	{
	}

IL_01a1:
	{
		// if (increaseBoost)
		bool L_41 = __this->get_increaseBoost_24();
		V_7 = L_41;
		bool L_42 = V_7;
		if (!L_42)
		{
			goto IL_01f7;
		}
	}
	{
		// if(BoostCapacity< BoostCapacityMax)
		float L_43 = __this->get_BoostCapacity_19();
		float L_44 = __this->get_BoostCapacityMax_20();
		V_8 = (bool)((((float)L_43) < ((float)L_44))? 1 : 0);
		bool L_45 = V_8;
		if (!L_45)
		{
			goto IL_01d6;
		}
	}
	{
		// BoostCapacity += Time.deltaTime;
		float L_46 = __this->get_BoostCapacity_19();
		float L_47;
		L_47 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_BoostCapacity_19(((float)il2cpp_codegen_add((float)L_46, (float)L_47)));
		goto IL_01f6;
	}

IL_01d6:
	{
		// else if(BoostCapacity>=BoostCapacityMax)
		float L_48 = __this->get_BoostCapacity_19();
		float L_49 = __this->get_BoostCapacityMax_20();
		V_9 = (bool)((((int32_t)((!(((float)L_48) >= ((float)L_49)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_50 = V_9;
		if (!L_50)
		{
			goto IL_01f6;
		}
	}
	{
		// increaseBoost = false;
		__this->set_increaseBoost_24((bool)0);
	}

IL_01f6:
	{
	}

IL_01f7:
	{
		// boostScript.setboost(BoostCapacity);
		BoostBar_t248D99B7988BF361E572025F1E7D66B05DBACDA0 * L_51 = __this->get_boostScript_21();
		float L_52 = __this->get_BoostCapacity_19();
		NullCheck(L_51);
		BoostBar_setboost_mD74AE9C94F5BBE6245C986D8FA9018DC7013DC51(L_51, L_52, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void player::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void player_Update_m0B7A820EE0B22E5EE37AE5C3697BE4CA8D368069 (player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral043D4951829A8C30075641EC8EF266F007FB1E5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isGrounded = Physics2D.OverlapCircle(GroundCheckPosition.position, CheckRaidus, WhatIsGround);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_GroundCheckPosition_9();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_1, /*hidden argument*/NULL);
		float L_3 = __this->get_CheckRaidus_11();
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_4 = __this->get_WhatIsGround_10();
		int32_t L_5;
		L_5 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_6;
		L_6 = Physics2D_OverlapCircle_mA13E0B8B40964C93CD1E8BB9B4FE32B19B52BC07(L_2, L_3, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_6, /*hidden argument*/NULL);
		__this->set_isGrounded_12(L_7);
		// anim.SetBool("Isgrounded", isGrounded);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_8 = __this->get_anim_7();
		bool L_9 = __this->get_isGrounded_12();
		NullCheck(L_8);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_8, _stringLiteral043D4951829A8C30075641EC8EF266F007FB1E5A, L_9, /*hidden argument*/NULL);
		// movement = Input.acceleration.x* movementSpeed;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Input_get_acceleration_mE04EFD6EDBEBA7B29231FAE71149899AB94B3361(/*hidden argument*/NULL);
		float L_11 = L_10.get_x_2();
		float L_12 = __this->get_movementSpeed_13();
		__this->set_movement_14(((float)il2cpp_codegen_multiply((float)L_11, (float)L_12)));
		// Handlingflip();
		player_Handlingflip_m09901F7871319B3A40797F8B347FF841257CF25A(__this, /*hidden argument*/NULL);
		// rb.velocity = new Vector2( movement, rb.velocity.y);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_13 = __this->get_rb_6();
		float L_14 = __this->get_movement_14();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_15 = __this->get_rb_6();
		NullCheck(L_15);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16;
		L_16 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_15, /*hidden argument*/NULL);
		float L_17 = L_16.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_18), L_14, L_17, /*hidden argument*/NULL);
		NullCheck(L_13);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_13, L_18, /*hidden argument*/NULL);
		// anim.SetFloat("Speed", Mathf.Abs(movement));
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_19 = __this->get_anim_7();
		float L_20 = __this->get_movement_14();
		float L_21;
		L_21 = fabsf(L_20);
		NullCheck(L_19);
		Animator_SetFloat_mD731F47ED44C2D629F8E1C6DB15629C3E1B992A0(L_19, _stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32, L_21, /*hidden argument*/NULL);
		// HandleBoostUsage();
		player_HandleBoostUsage_mBD3EE26F6AB3FA0D897482AA429A9F2AAC829F03(__this, /*hidden argument*/NULL);
		// timeForPowerUpHandler();
		player_timeForPowerUpHandler_m6D27A3CDC06000034364AED67976008AFFD2862C(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void player::HandleJumpForPc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void player_HandleJumpForPc_m3C030B05B7146191316664F8C781407E7AD733AD (player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void player::timeForPowerUpHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void player_timeForPowerUpHandler_m6D27A3CDC06000034364AED67976008AFFD2862C (player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (timerForPowerUp > 0)
		float L_0 = __this->get_timerForPowerUp_17();
		V_0 = (bool)((((float)L_0) > ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// timerForPowerUp -= Time.deltaTime;
		float L_2 = __this->get_timerForPowerUp_17();
		float L_3;
		L_3 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_timerForPowerUp_17(((float)il2cpp_codegen_subtract((float)L_2, (float)L_3)));
	}

IL_0026:
	{
		// if (timerForPowerUp <= 0)
		float L_4 = __this->get_timerForPowerUp_17();
		V_1 = (bool)((((int32_t)((!(((float)L_4) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0047;
		}
	}
	{
		// timerForPowerUp = 0f;
		__this->set_timerForPowerUp_17((0.0f));
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void player::Handlingflip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void player_Handlingflip_m09901F7871319B3A40797F8B347FF841257CF25A (player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (movement < 0)
		float L_0 = __this->get_movement_14();
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// flip(true);
		player_flip_mC3381EDA4B9BA26F63526408D604AED51BAADE50(__this, (bool)1, /*hidden argument*/NULL);
		goto IL_0028;
	}

IL_001e:
	{
		// flip(false);
		player_flip_mC3381EDA4B9BA26F63526408D604AED51BAADE50(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void player::flip(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void player_flip_mC3381EDA4B9BA26F63526408D604AED51BAADE50 (player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * __this, bool ___IsLookingLeft0, const RuntimeMethod* method)
{
	{
		// sp.flipX = IsLookingLeft;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0 = __this->get_sp_8();
		bool L_1 = ___IsLookingLeft0;
		NullCheck(L_0);
		SpriteRenderer_set_flipX_mD3AB83CC6D742A69F1B52376D1636CAA2E44B67E(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void player::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void player_OnTriggerEnter2D_m4C7012B0CF28166BE63814DE6DD42ECC7925D797 (player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___col0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40F5431A5203B1B661E92C45EF446F7D326E2C50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8431B5D5BBDD13458B95AC3252777089DFF7F0A);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (col.gameObject.CompareTag("Arrow"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___col0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_1, _stringLiteral40F5431A5203B1B661E92C45EF446F7D326E2C50, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		// Debug.Log("player");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralD8431B5D5BBDD13458B95AC3252777089DFF7F0A, /*hidden argument*/NULL);
		// timerForPowerUp += timerForPowerUpMax;
		float L_4 = __this->get_timerForPowerUp_17();
		float L_5 = __this->get_timerForPowerUpMax_18();
		__this->set_timerForPowerUp_17(((float)il2cpp_codegen_add((float)L_4, (float)L_5)));
		// SoundManager.PlaySound(SoundManager.Sound.PowerUp);
		SoundManager_PlaySound_m94F56384BAFC1A000ED8B6E5BC9A90DA615F248D(1, /*hidden argument*/NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void player::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void player_OnCollisionEnter2D_mB093C8FEC41D11C71C1A7DDBB13C09A81F3ABBAA (player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * __this, Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		// if (isGrounded && timerForPowerUp > 0&&collision.transform.tag=="Ground")
		bool L_0 = __this->get_isGrounded_12();
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		float L_1 = __this->get_timerForPowerUp_17();
		if ((!(((float)L_1) > ((float)(0.0f)))))
		{
			goto IL_002d;
		}
	}
	{
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_2 = ___collision0;
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Collision2D_get_transform_mC5A1F1938F67668E8B6BDE1048C727C8578AD827(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_3, /*hidden argument*/NULL);
		bool L_5;
		L_5 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_4, _stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_5));
		goto IL_002e;
	}

IL_002d:
	{
		G_B4_0 = 0;
	}

IL_002e:
	{
		V_0 = (bool)G_B4_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_007f;
		}
	}
	{
		// GetComponent<Rigidbody2D>().AddForce(Vector2.up * jumpforce * 1.1f, ForceMode2D.Impulse);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_7;
		L_7 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		L_8 = Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C(/*hidden argument*/NULL);
		float L_9 = __this->get_jumpforce_15();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10;
		L_10 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_8, L_9, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		L_11 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_10, (1.10000002f), /*hidden argument*/NULL);
		NullCheck(L_7);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_7, L_11, 1, /*hidden argument*/NULL);
		// anim.SetTrigger("Jump");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_12 = __this->get_anim_7();
		NullCheck(L_12);
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_12, _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, /*hidden argument*/NULL);
		// Dust2.Play();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_13 = __this->get_Dust2_5();
		NullCheck(L_13);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_13, /*hidden argument*/NULL);
		// SoundManager.PlaySound(SoundManager.Sound.Jump);
		SoundManager_PlaySound_m94F56384BAFC1A000ED8B6E5BC9A90DA615F248D(0, /*hidden argument*/NULL);
	}

IL_007f:
	{
		// }
		return;
	}
}
// System.Void player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void player__ctor_m714EC555B4D536FDD17E68FB029561E4AC0124FB (player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] float CheckRaidus = 1f;
		__this->set_CheckRaidus_11((1.0f));
		// [SerializeField] float movementSpeed = 16.8f;
		__this->set_movementSpeed_13((16.7999992f));
		// [SerializeField] float movement = 0f;
		__this->set_movement_14((0.0f));
		// [SerializeField] float jumpforce = 30f;
		__this->set_jumpforce_15((30.0f));
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
// System.Void woodenPlatForm::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void woodenPlatForm_Start_mAD8AA41891AA2E14226C5DEDD31FDDBE7840DDCF (woodenPlatForm_t9681D2559C55471E6D631C1D7D7A901395BEF628 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void woodenPlatForm::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void woodenPlatForm_Update_m5401E84B150A9FE3A476E3B7D938785CCA312F35 (woodenPlatForm_t9681D2559C55471E6D631C1D7D7A901395BEF628 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void woodenPlatForm::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void woodenPlatForm__ctor_mB55A75CF7F67F2CEDF1EDF2C0BEDA7311618D15D (woodenPlatForm_t9681D2559C55471E6D631C1D7D7A901395BEF628 * __this, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameAssets/SoundAudioCLip::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundAudioCLip__ctor_m1AA3E2C955E5291B8E8DADE76FFD60D691CB5C94 (SoundAudioCLip_tAB30A76E0CD7C69194C05CDBF49214309CDDF88F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void StartManager/DissolveItem::.ctor(UnityEngine.UI.Image,UnityEngine.Vector4,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DissolveItem__ctor_m1D889D9FBDEC626873FE04F4C948F60AF1DC0333 (DissolveItem_tF0D838FD17619E13535458DE54D8F2EA5AC0264E * __this, Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___image0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___dissolveitemVector1, float ___A_Dissolveitem2, const RuntimeMethod* method)
{
	{
		// public  DissolveItem(Image image,Vector4 dissolveitemVector, float A_Dissolveitem)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.A_Dissolveitem = A_Dissolveitem;
		float L_0 = ___A_Dissolveitem2;
		__this->set_A_Dissolveitem_2(L_0);
		// this.dissolveitemVector = dissolveitemVector;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_1 = ___dissolveitemVector1;
		__this->set_dissolveitemVector_1(L_1);
		// this.image = image;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_2 = ___image0;
		__this->set_image_0(L_2);
		// }
		return;
	}
}
// System.Void StartManager/DissolveItem::Alphadecrease()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DissolveItem_Alphadecrease_m923A8583244926D0F3B527D5AC1C213F3D755F17 (DissolveItem_tF0D838FD17619E13535458DE54D8F2EA5AC0264E * __this, const RuntimeMethod* method)
{
	{
		// A_Dissolveitem = image.color.a;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = __this->get_image_0();
		NullCheck(L_0);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_0);
		float L_2 = L_1.get_a_3();
		__this->set_A_Dissolveitem_2(L_2);
		// A_Dissolveitem -= Time.deltaTime;
		float L_3 = __this->get_A_Dissolveitem_2();
		float L_4;
		L_4 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_A_Dissolveitem_2(((float)il2cpp_codegen_subtract((float)L_3, (float)L_4)));
		// dissolveitemVector = new Vector4(image.color.r, image.color.g, image.color.b, A_Dissolveitem);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_5 = __this->get_image_0();
		NullCheck(L_5);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6;
		L_6 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_5);
		float L_7 = L_6.get_r_0();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8 = __this->get_image_0();
		NullCheck(L_8);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_9;
		L_9 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_8);
		float L_10 = L_9.get_g_1();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_11 = __this->get_image_0();
		NullCheck(L_11);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12;
		L_12 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_11);
		float L_13 = L_12.get_b_2();
		float L_14 = __this->get_A_Dissolveitem_2();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_15), L_7, L_10, L_13, L_14, /*hidden argument*/NULL);
		__this->set_dissolveitemVector_1(L_15);
		// image.color = dissolveitemVector;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_16 = __this->get_image_0();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_17 = __this->get_dissolveitemVector_1();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_18;
		L_18 = Color_op_Implicit_m9B1A4B721726FCDA1844A0DC505C2FF8F8C50FC0(L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_16, L_18);
		// }
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
// System.Void TilePooler/Pool::.ctor(System.String,UnityEngine.GameObject,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pool__ctor_mD6EC19319EB7070189A6DA260C0EFBF4BDBF6292 (Pool_t848F75427F6865029793B7C163370BDC346C6D8C * __this, String_t* ___tag0, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___prefab1, int32_t ___size2, const RuntimeMethod* method)
{
	{
		// public Pool(string tag, GameObject prefab, int size)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.tag = tag;
		String_t* L_0 = ___tag0;
		__this->set_tag_0(L_0);
		// this.prefab = prefab;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = ___prefab1;
		__this->set_prefab_1(L_1);
		// this.size = size;
		int32_t L_2 = ___size2;
		__this->set_size_2(L_2);
		// }
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void levelgen/Platform::.ctor(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform__ctor_m9935F152B1FF9D4B5F6C11C67183CDD5FEC6ACB3 (Platform_tE9E6AC72071AF6BACAF02519C6C0AED83456CB3D * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___platform0, const RuntimeMethod* method)
{
	{
		// public Platform(Transform platform)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.platform = platform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___platform0;
		__this->set_platform_0(L_0);
		// }
		return;
	}
}
// System.Single levelgen/Platform::GetYposition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Platform_GetYposition_m3DCA56E6EFC006156C5E537B3D38B3EDC133DB8A (Platform_tE9E6AC72071AF6BACAF02519C6C0AED83456CB3D * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// return platform.position.y;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_platform_0();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_y_3();
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		// }
		float L_3 = V_0;
		return L_3;
	}
}
// System.Void levelgen/Platform::DestroySelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_DestroySelf_mDBC6DADAFCCFE5DD770CFE283D0D4D4F71EDCAC3 (Platform_tE9E6AC72071AF6BACAF02519C6C0AED83456CB3D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(platform.gameObject);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_platform_0();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_1, /*hidden argument*/NULL);
		// }
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		return L_7;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Singleton_set_Instance_mB373669F29D79E1C3EC3332D4388AC38C45A9D74_inline (Singleton_t85C95C878D42548878AD1318351EC6E51A48162F * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_t85C95C878D42548878AD1318351EC6E51A48162F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private set;
		Singleton_t85C95C878D42548878AD1318351EC6E51A48162F * L_0 = ___value0;
		((Singleton_t85C95C878D42548878AD1318351EC6E51A48162F_StaticFields*)il2cpp_codegen_static_fields_for(Singleton_t85C95C878D42548878AD1318351EC6E51A48162F_il2cpp_TypeInfo_var))->set_U3CInstanceU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Singleton_t85C95C878D42548878AD1318351EC6E51A48162F * Singleton_get_Instance_mB8C346F100DF5857F9C494F32762FB403864BDEC_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_t85C95C878D42548878AD1318351EC6E51A48162F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get;
		Singleton_t85C95C878D42548878AD1318351EC6E51A48162F * L_0 = ((Singleton_t85C95C878D42548878AD1318351EC6E51A48162F_StaticFields*)il2cpp_codegen_static_fields_for(Singleton_t85C95C878D42548878AD1318351EC6E51A48162F_il2cpp_TypeInfo_var))->get_U3CInstanceU3Ek__BackingField_4();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_m841D5292C48DAD9746A2F4EED9CE7A76CDB652EA_inline (float ___d0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a1;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a1;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}

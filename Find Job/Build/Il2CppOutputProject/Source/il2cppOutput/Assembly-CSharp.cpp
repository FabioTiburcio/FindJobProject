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

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C;
// System.Func`2<System.Object,System.String>
struct Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// Gaminho.Level[]
struct LevelU5BU5D_t10F32731C74504D66804828AC533B31C3D098D5B;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// Gaminho.Shot[]
struct ShotU5BU5D_tA9C3ACB6B6065E328A62CFECAE87D4668B074614;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// Boss2
struct Boss2_t1ED338A653D36E5352D40483F92F9C50B359FEBC;
// Boss3
struct Boss3_t6C3889EF0A9F1C98DE071E5A8AE5B237CA014D60;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9;
// CallScene
struct CallScene_tB4E099C9D351736775EF8EF0609DC73824F2CE94;
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
// ControlGame
struct ControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96;
// ControlGhost
struct ControlGhost_tF5A4C0EF0DE41C54667C7FAAF7CC7DDA8C815F51;
// ControlShip
struct ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8;
// ControlStart
struct ControlStart_t461A8F5392E3967B1B6B5520351D75DEFD71B1B0;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// UnityEngine.CrashReport
struct CrashReport_t714502ABE165C015E74890626A6A98F7040F4C82;
// System.Text.Decoder
struct Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370;
// DestroyTime
struct DestroyTime_t24806801B4F6EA764796D3C1789E9D157D0023D2;
// System.Text.Encoder
struct Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// Enemy
struct Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627;
// EnemyControl
struct EnemyControl_t8354619B7C2514F856067E693DC1914D07EE53D9;
// UnityEngine.Event
struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E;
// System.Exception
struct Exception_t;
// Explosion
struct Explosion_t03ACA9CD2F46E4913DC45A3EA50B165F4662DCED;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Ghost
struct Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.UI.InputField
struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// ItemDrop
struct ItemDrop_tC904B7BCF81A545D1E6A018FC757704E7AE49399;
// Gaminho.Level
struct Level_t0F1BB2DCE2C7368CA4FEAE26F672ADB4C35C7505;
// Life
struct Life_tFA6AEBF0D44789AAFC7B4542C83AF07B9D97EA13;
// MBuildProcessor
struct MBuildProcessor_t5E53688097C49C4A51B370CDB08C5B5F59470E91;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// PlayerData
struct PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5;
// Flux.ReadMe
struct ReadMe_t9366373850683E50A4A0569A3E9BCD911C00609E;
// RecordControl
struct RecordControl_t42596BF11E14001F3D303939B7A1B1437DC06FC2;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// SaveLoadData
struct SaveLoadData_t01436979ECF432B45A9679B9AE27AB0655EF70AE;
// Gaminho.ScenarioLimits
struct ScenarioLimits_tF9A721A3F778BE0145B94E934952E7F4CB7BED05;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// Gaminho.Shot
struct Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.IO.StreamReader
struct StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3;
// System.IO.StreamWriter
struct StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// Boss2/<Shot>d__7
struct U3CShotU3Ed__7_t5B6ECB25F35EA9A394F1ADE1A8C3CB4EE57063C1;
// Boss2/<ShowParts>d__5
struct U3CShowPartsU3Ed__5_t09BBC03A0970E2BF56904F75C3B7E0D8B40FC34F;
// Boss3/<Attack>d__7
struct U3CAttackU3Ed__7_t08C44F054B9845EA94A3146BE9349CAAAA2E7C0C;
// Boss3/<AttackNow>d__6
struct U3CAttackNowU3Ed__6_t5548957493F4260E6AFD7631F29FF348A7535DB3;
// Boss3/<ShowParts>d__5
struct U3CShowPartsU3Ed__5_tC9A208D13D4CF48A5C07215906AFF39AC00370C2;
// ControlGhost/<Shoot>d__7
struct U3CShootU3Ed__7_tE704B49D318CB97B09A55BEB0E8E90AF4B555F34;
// ControlShip/<Shoot>d__15
struct U3CShootU3Ed__15_tA3D5CDD11652E4A5CA95A8EFBFC8113B6662B07E;
// ControlStart/<LoadScene>d__4
struct U3CLoadSceneU3Ed__4_tFA699E679840F67FE1E189060FE7284ED9DEB59E;
// DestroyTime/<CallDestroy>d__2
struct U3CCallDestroyU3Ed__2_tAFEBF82F13F04716C1673744B80612E43A0ACA03;
// Enemy/<KillMe>d__13
struct U3CKillMeU3Ed__13_t119E02ACE3C774FC55783CA4B9311F67937D811C;
// Enemy/<Shoot>d__15
struct U3CShootU3Ed__15_tF9AF905CBA0A2327F76DF1C4043394EB061319B2;
// EnemyControl/<CallBoss>d__6
struct U3CCallBossU3Ed__6_t0BF59ED4A6D214279882298BAE1927F9D4059B35;
// EnemyControl/<Process>d__4
struct U3CProcessU3Ed__4_t71016A10790CE995349F35F697F784B6C726E051;
// Explosion/<Explode>d__3
struct U3CExplodeU3Ed__3_tD50D1FAB07D31C87001D70FBED9046F4B147664D;
// Ghost/<Follow>d__11
struct U3CFollowU3Ed__11_t3EDBCEC7FC810EB2FF4832FC742FD1686C45A198;
// Ghost/<RecordPosition>d__10
struct U3CRecordPositionU3Ed__10_t55110E01AB1FCDF69BB01B4EA77745342103066D;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;

IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAttackNowU3Ed__6_t5548957493F4260E6AFD7631F29FF348A7535DB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAttackU3Ed__7_t08C44F054B9845EA94A3146BE9349CAAAA2E7C0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCallBossU3Ed__6_t0BF59ED4A6D214279882298BAE1927F9D4059B35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCallDestroyU3Ed__2_tAFEBF82F13F04716C1673744B80612E43A0ACA03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CExplodeU3Ed__3_tD50D1FAB07D31C87001D70FBED9046F4B147664D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFollowU3Ed__11_t3EDBCEC7FC810EB2FF4832FC742FD1686C45A198_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CKillMeU3Ed__13_t119E02ACE3C774FC55783CA4B9311F67937D811C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadSceneU3Ed__4_tFA699E679840F67FE1E189060FE7284ED9DEB59E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CProcessU3Ed__4_t71016A10790CE995349F35F697F784B6C726E051_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRecordPositionU3Ed__10_t55110E01AB1FCDF69BB01B4EA77745342103066D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CShootU3Ed__15_tA3D5CDD11652E4A5CA95A8EFBFC8113B6662B07E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CShootU3Ed__15_tF9AF905CBA0A2327F76DF1C4043394EB061319B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CShootU3Ed__7_tE704B49D318CB97B09A55BEB0E8E90AF4B555F34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CShotU3Ed__7_t5B6ECB25F35EA9A394F1ADE1A8C3CB4EE57063C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CShowPartsU3Ed__5_t09BBC03A0970E2BF56904F75C3B7E0D8B40FC34F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CShowPartsU3Ed__5_tC9A208D13D4CF48A5C07215906AFF39AC00370C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7;
IL2CPP_EXTERN_C String_t* _stringLiteral4792E4080DDD0C9F11CC98ED503A2F14B0141A8F;
IL2CPP_EXTERN_C String_t* _stringLiteral4BEB4E28DAF3A9B59B66C6ADA98B9F2681938811;
IL2CPP_EXTERN_C String_t* _stringLiteral4CD81ACBA8A79C6A90E372844DEE61AA5759F99D;
IL2CPP_EXTERN_C String_t* _stringLiteral59342DCD040D5B79DDC20431B98232F6F830AEF6;
IL2CPP_EXTERN_C String_t* _stringLiteral663C1FCE184B01DF096F2B8DB221C53F867AE327;
IL2CPP_EXTERN_C String_t* _stringLiteral6EB66D8C918A3B23E19C404CB3D9980DA693A46D;
IL2CPP_EXTERN_C String_t* _stringLiteral77F02115F12F6B792D9FB14651B95D59F269B4A4;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral83E9E8BAD3ECA72A656DF7549EF3A4FDEB956CC6;
IL2CPP_EXTERN_C String_t* _stringLiteral8B14CFE3D4CBC1199E4D02BE390A89EC1732BA7A;
IL2CPP_EXTERN_C String_t* _stringLiteral8E2B42DBCF5E7721DE9F460EF3EF40806759DCFF;
IL2CPP_EXTERN_C String_t* _stringLiteral917B7584D09850BACA66B65E692BA39F0ABC630F;
IL2CPP_EXTERN_C String_t* _stringLiteral931DFDCE8A7F395390F2AC831102C486A12DB07C;
IL2CPP_EXTERN_C String_t* _stringLiteral9E1F4F43CEDC02BC7704A4D5437CAA8AA51E54FD;
IL2CPP_EXTERN_C String_t* _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73;
IL2CPP_EXTERN_C String_t* _stringLiteralAAAA401E86E41E6120BB9E96B9892141CF5A81F8;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB8014FB65DD084AC86222B3E48F65E2077F83C30;
IL2CPP_EXTERN_C String_t* _stringLiteralC5D380D7472DF62C3B0C30B37F7A25C76F3441D5;
IL2CPP_EXTERN_C String_t* _stringLiteralC62B61BC27E509D700023566A09D2AE606BE85A7;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralD065C8D83A9538847A9F9572A03794F2CCA4BF1B;
IL2CPP_EXTERN_C String_t* _stringLiteralD224CC98C54E6EE2624F936AC338093905C92AF2;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE0533A6A2C16737D20E278E4C50B5A40AB53B1A7;
IL2CPP_EXTERN_C String_t* _stringLiteralF2FDA18FEAFC8FAB4295C255F2EBD18FE5B0C5BB;
IL2CPP_EXTERN_C String_t* _stringLiteralF37233DC049028FC11860D92CC5CB80E0759006A;
IL2CPP_EXTERN_C String_t* _stringLiteralF38A1E03EF3206EE8B1C481FA8A8F530162598CB;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCallScene_tB4E099C9D351736775EF8EF0609DC73824F2CE94_m3D16F66EF40C809EA046C8B7A583A9FA7D8B111A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisLife_tFA6AEBF0D44789AAFC7B4542C83AF07B9D97EA13_m7975571D53F6216725F28438F6354AF19C79CA15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSaveLoadData_t01436979ECF432B45A9679B9AE27AB0655EF70AE_mF5037E441CD471920E0E19D406C7774DA90D7DCF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96_m4646739A29FFF4CF05ACE5EF6C64ECD193BFB160_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisLife_tFA6AEBF0D44789AAFC7B4542C83AF07B9D97EA13_mA73E12F80C473DA48AC4B63CF82F9E8D55379AC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisPlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5_m1BC0A217D6A8FFBE81E040268CC950AEC4BECDD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m0281A01E9C859E2B8073312D41BB9005662EF2DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MBuildProcessor_OnPreprocessBuild_mE65EEB5015BCDCE385D4576E00F6F2DC30E7CA58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAttackNowU3Ed__6_System_Collections_IEnumerator_Reset_m9E1C7C0E00159B453D194492ECF021B8BB7CD45A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAttackU3Ed__7_System_Collections_IEnumerator_Reset_m5A5C9CB773069AF2AEB75EA9A0A398A9459D72B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCallBossU3Ed__6_System_Collections_IEnumerator_Reset_mAB176BC3F3DE4AD36A0EAF25D234733D5CA47B3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCallDestroyU3Ed__2_System_Collections_IEnumerator_Reset_mEAC272124FCDF01C2C344D034F9CBA6F076E2EF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CExplodeU3Ed__3_System_Collections_IEnumerator_Reset_m487EB8D5E237996B6DEF819E4290C05128D890D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFollowU3Ed__11_System_Collections_IEnumerator_Reset_m93ACE7913B4827ECA354929855F5AFC575B7AC5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CKillMeU3Ed__13_System_Collections_IEnumerator_Reset_m282DE72907854BC7299C5B6F867AA8902B3C4FFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadSceneU3Ed__4_System_Collections_IEnumerator_Reset_m5B88C87391AE8B74C4EE0D8DF62B2BE86F47F067_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CProcessU3Ed__4_System_Collections_IEnumerator_Reset_mE513AF299BB9BF436B27408FF4C0558A73F4676D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRecordPositionU3Ed__10_System_Collections_IEnumerator_Reset_m5BA0285F099CBD83148557FBD9C0F0A4D007B975_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShootU3Ed__15_System_Collections_IEnumerator_Reset_m10AA0124EE17DB5A2A71839446D7DD301A7FC818_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShootU3Ed__15_System_Collections_IEnumerator_Reset_mF264D9F35C68E5C483C9FEE60B2504A8D00F7158_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShootU3Ed__7_System_Collections_IEnumerator_Reset_mC732822BD1B5863FF128D8A2BD29675E6348F5A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShotU3Ed__7_System_Collections_IEnumerator_Reset_mE289E17958922FDDCC8DE7C1FA61940025274E62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShowPartsU3Ed__5_System_Collections_IEnumerator_Reset_m0468FE7B0426062B26C538D23C7C5FF8CC38570D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShowPartsU3Ed__5_System_Collections_IEnumerator_Reset_m6B70E7B67CF4CDCB8A4933138894ADD37C944524_RuntimeMethod_var;
struct ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 ;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct LevelU5BU5D_t10F32731C74504D66804828AC533B31C3D098D5B;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct ShotU5BU5D_tA9C3ACB6B6065E328A62CFECAE87D4668B074614;
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct  List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5  : public RuntimeObject
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
struct  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
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


// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct  List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____items_1)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields, ____emptyArray_5)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.CrashReport
struct  CrashReport_t714502ABE165C015E74890626A6A98F7040F4C82  : public RuntimeObject
{
public:

public:
};

struct CrashReport_t714502ABE165C015E74890626A6A98F7040F4C82_StaticFields
{
public:
	// System.Object UnityEngine.CrashReport::reportsLock
	RuntimeObject * ___reportsLock_0;

public:
	inline static int32_t get_offset_of_reportsLock_0() { return static_cast<int32_t>(offsetof(CrashReport_t714502ABE165C015E74890626A6A98F7040F4C82_StaticFields, ___reportsLock_0)); }
	inline RuntimeObject * get_reportsLock_0() const { return ___reportsLock_0; }
	inline RuntimeObject ** get_address_of_reportsLock_0() { return &___reportsLock_0; }
	inline void set_reportsLock_0(RuntimeObject * value)
	{
		___reportsLock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reportsLock_0), (void*)value);
	}
};


// Gaminho.Level
struct  Level_t0F1BB2DCE2C7368CA4FEAE26F672ADB4C35C7505  : public RuntimeObject
{
public:
	// UnityEngine.Sprite Gaminho.Level::Background
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___Background_0;
	// System.Int32 Gaminho.Level::EnemyQty
	int32_t ___EnemyQty_1;
	// System.Int32 Gaminho.Level::QtyForBoss
	int32_t ___QtyForBoss_2;
	// UnityEngine.GameObject Gaminho.Level::Boss
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Boss_3;
	// System.Single Gaminho.Level::TempSpaw
	float ___TempSpaw_4;
	// UnityEngine.GameObject[] Gaminho.Level::Enemies
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___Enemies_5;
	// UnityEngine.AudioClip Gaminho.Level::AudioLvl
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___AudioLvl_6;

public:
	inline static int32_t get_offset_of_Background_0() { return static_cast<int32_t>(offsetof(Level_t0F1BB2DCE2C7368CA4FEAE26F672ADB4C35C7505, ___Background_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_Background_0() const { return ___Background_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_Background_0() { return &___Background_0; }
	inline void set_Background_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___Background_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Background_0), (void*)value);
	}

	inline static int32_t get_offset_of_EnemyQty_1() { return static_cast<int32_t>(offsetof(Level_t0F1BB2DCE2C7368CA4FEAE26F672ADB4C35C7505, ___EnemyQty_1)); }
	inline int32_t get_EnemyQty_1() const { return ___EnemyQty_1; }
	inline int32_t* get_address_of_EnemyQty_1() { return &___EnemyQty_1; }
	inline void set_EnemyQty_1(int32_t value)
	{
		___EnemyQty_1 = value;
	}

	inline static int32_t get_offset_of_QtyForBoss_2() { return static_cast<int32_t>(offsetof(Level_t0F1BB2DCE2C7368CA4FEAE26F672ADB4C35C7505, ___QtyForBoss_2)); }
	inline int32_t get_QtyForBoss_2() const { return ___QtyForBoss_2; }
	inline int32_t* get_address_of_QtyForBoss_2() { return &___QtyForBoss_2; }
	inline void set_QtyForBoss_2(int32_t value)
	{
		___QtyForBoss_2 = value;
	}

	inline static int32_t get_offset_of_Boss_3() { return static_cast<int32_t>(offsetof(Level_t0F1BB2DCE2C7368CA4FEAE26F672ADB4C35C7505, ___Boss_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Boss_3() const { return ___Boss_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Boss_3() { return &___Boss_3; }
	inline void set_Boss_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Boss_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Boss_3), (void*)value);
	}

	inline static int32_t get_offset_of_TempSpaw_4() { return static_cast<int32_t>(offsetof(Level_t0F1BB2DCE2C7368CA4FEAE26F672ADB4C35C7505, ___TempSpaw_4)); }
	inline float get_TempSpaw_4() const { return ___TempSpaw_4; }
	inline float* get_address_of_TempSpaw_4() { return &___TempSpaw_4; }
	inline void set_TempSpaw_4(float value)
	{
		___TempSpaw_4 = value;
	}

	inline static int32_t get_offset_of_Enemies_5() { return static_cast<int32_t>(offsetof(Level_t0F1BB2DCE2C7368CA4FEAE26F672ADB4C35C7505, ___Enemies_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_Enemies_5() const { return ___Enemies_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_Enemies_5() { return &___Enemies_5; }
	inline void set_Enemies_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___Enemies_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Enemies_5), (void*)value);
	}

	inline static int32_t get_offset_of_AudioLvl_6() { return static_cast<int32_t>(offsetof(Level_t0F1BB2DCE2C7368CA4FEAE26F672ADB4C35C7505, ___AudioLvl_6)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_AudioLvl_6() const { return ___AudioLvl_6; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_AudioLvl_6() { return &___AudioLvl_6; }
	inline void set_AudioLvl_6(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___AudioLvl_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AudioLvl_6), (void*)value);
	}
};


// MBuildProcessor
struct  MBuildProcessor_t5E53688097C49C4A51B370CDB08C5B5F59470E91  : public RuntimeObject
{
public:

public:
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.IO.Path
struct  Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921  : public RuntimeObject
{
public:

public:
};

struct Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_StaticFields
{
public:
	// System.Char[] System.IO.Path::InvalidPathChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___InvalidPathChars_0;
	// System.Char System.IO.Path::AltDirectorySeparatorChar
	Il2CppChar ___AltDirectorySeparatorChar_1;
	// System.Char System.IO.Path::DirectorySeparatorChar
	Il2CppChar ___DirectorySeparatorChar_2;
	// System.Char System.IO.Path::PathSeparator
	Il2CppChar ___PathSeparator_3;
	// System.String System.IO.Path::DirectorySeparatorStr
	String_t* ___DirectorySeparatorStr_4;
	// System.Char System.IO.Path::VolumeSeparatorChar
	Il2CppChar ___VolumeSeparatorChar_5;
	// System.Char[] System.IO.Path::PathSeparatorChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___PathSeparatorChars_6;
	// System.Boolean System.IO.Path::dirEqualsVolume
	bool ___dirEqualsVolume_7;
	// System.Char[] System.IO.Path::trimEndCharsWindows
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___trimEndCharsWindows_8;
	// System.Char[] System.IO.Path::trimEndCharsUnix
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___trimEndCharsUnix_9;

public:
	inline static int32_t get_offset_of_InvalidPathChars_0() { return static_cast<int32_t>(offsetof(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_StaticFields, ___InvalidPathChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_InvalidPathChars_0() const { return ___InvalidPathChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_InvalidPathChars_0() { return &___InvalidPathChars_0; }
	inline void set_InvalidPathChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___InvalidPathChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InvalidPathChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_AltDirectorySeparatorChar_1() { return static_cast<int32_t>(offsetof(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_StaticFields, ___AltDirectorySeparatorChar_1)); }
	inline Il2CppChar get_AltDirectorySeparatorChar_1() const { return ___AltDirectorySeparatorChar_1; }
	inline Il2CppChar* get_address_of_AltDirectorySeparatorChar_1() { return &___AltDirectorySeparatorChar_1; }
	inline void set_AltDirectorySeparatorChar_1(Il2CppChar value)
	{
		___AltDirectorySeparatorChar_1 = value;
	}

	inline static int32_t get_offset_of_DirectorySeparatorChar_2() { return static_cast<int32_t>(offsetof(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_StaticFields, ___DirectorySeparatorChar_2)); }
	inline Il2CppChar get_DirectorySeparatorChar_2() const { return ___DirectorySeparatorChar_2; }
	inline Il2CppChar* get_address_of_DirectorySeparatorChar_2() { return &___DirectorySeparatorChar_2; }
	inline void set_DirectorySeparatorChar_2(Il2CppChar value)
	{
		___DirectorySeparatorChar_2 = value;
	}

	inline static int32_t get_offset_of_PathSeparator_3() { return static_cast<int32_t>(offsetof(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_StaticFields, ___PathSeparator_3)); }
	inline Il2CppChar get_PathSeparator_3() const { return ___PathSeparator_3; }
	inline Il2CppChar* get_address_of_PathSeparator_3() { return &___PathSeparator_3; }
	inline void set_PathSeparator_3(Il2CppChar value)
	{
		___PathSeparator_3 = value;
	}

	inline static int32_t get_offset_of_DirectorySeparatorStr_4() { return static_cast<int32_t>(offsetof(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_StaticFields, ___DirectorySeparatorStr_4)); }
	inline String_t* get_DirectorySeparatorStr_4() const { return ___DirectorySeparatorStr_4; }
	inline String_t** get_address_of_DirectorySeparatorStr_4() { return &___DirectorySeparatorStr_4; }
	inline void set_DirectorySeparatorStr_4(String_t* value)
	{
		___DirectorySeparatorStr_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DirectorySeparatorStr_4), (void*)value);
	}

	inline static int32_t get_offset_of_VolumeSeparatorChar_5() { return static_cast<int32_t>(offsetof(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_StaticFields, ___VolumeSeparatorChar_5)); }
	inline Il2CppChar get_VolumeSeparatorChar_5() const { return ___VolumeSeparatorChar_5; }
	inline Il2CppChar* get_address_of_VolumeSeparatorChar_5() { return &___VolumeSeparatorChar_5; }
	inline void set_VolumeSeparatorChar_5(Il2CppChar value)
	{
		___VolumeSeparatorChar_5 = value;
	}

	inline static int32_t get_offset_of_PathSeparatorChars_6() { return static_cast<int32_t>(offsetof(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_StaticFields, ___PathSeparatorChars_6)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_PathSeparatorChars_6() const { return ___PathSeparatorChars_6; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_PathSeparatorChars_6() { return &___PathSeparatorChars_6; }
	inline void set_PathSeparatorChars_6(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___PathSeparatorChars_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PathSeparatorChars_6), (void*)value);
	}

	inline static int32_t get_offset_of_dirEqualsVolume_7() { return static_cast<int32_t>(offsetof(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_StaticFields, ___dirEqualsVolume_7)); }
	inline bool get_dirEqualsVolume_7() const { return ___dirEqualsVolume_7; }
	inline bool* get_address_of_dirEqualsVolume_7() { return &___dirEqualsVolume_7; }
	inline void set_dirEqualsVolume_7(bool value)
	{
		___dirEqualsVolume_7 = value;
	}

	inline static int32_t get_offset_of_trimEndCharsWindows_8() { return static_cast<int32_t>(offsetof(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_StaticFields, ___trimEndCharsWindows_8)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_trimEndCharsWindows_8() const { return ___trimEndCharsWindows_8; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_trimEndCharsWindows_8() { return &___trimEndCharsWindows_8; }
	inline void set_trimEndCharsWindows_8(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___trimEndCharsWindows_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trimEndCharsWindows_8), (void*)value);
	}

	inline static int32_t get_offset_of_trimEndCharsUnix_9() { return static_cast<int32_t>(offsetof(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_StaticFields, ___trimEndCharsUnix_9)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_trimEndCharsUnix_9() const { return ___trimEndCharsUnix_9; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_trimEndCharsUnix_9() { return &___trimEndCharsUnix_9; }
	inline void set_trimEndCharsUnix_9(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___trimEndCharsUnix_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trimEndCharsUnix_9), (void*)value);
	}
};


// PlayerData
struct  PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5  : public RuntimeObject
{
public:
	// System.Int32 PlayerData::level
	int32_t ___level_0;
	// System.Int32 PlayerData::scoreOnLevel
	int32_t ___scoreOnLevel_1;

public:
	inline static int32_t get_offset_of_level_0() { return static_cast<int32_t>(offsetof(PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5, ___level_0)); }
	inline int32_t get_level_0() const { return ___level_0; }
	inline int32_t* get_address_of_level_0() { return &___level_0; }
	inline void set_level_0(int32_t value)
	{
		___level_0 = value;
	}

	inline static int32_t get_offset_of_scoreOnLevel_1() { return static_cast<int32_t>(offsetof(PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5, ___scoreOnLevel_1)); }
	inline int32_t get_scoreOnLevel_1() const { return ___scoreOnLevel_1; }
	inline int32_t* get_address_of_scoreOnLevel_1() { return &___scoreOnLevel_1; }
	inline void set_scoreOnLevel_1(int32_t value)
	{
		___scoreOnLevel_1 = value;
	}
};


// Gaminho.ScenarioLimits
struct  ScenarioLimits_tF9A721A3F778BE0145B94E934952E7F4CB7BED05  : public RuntimeObject
{
public:
	// System.Single Gaminho.ScenarioLimits::xMin
	float ___xMin_0;
	// System.Single Gaminho.ScenarioLimits::xMax
	float ___xMax_1;
	// System.Single Gaminho.ScenarioLimits::yMin
	float ___yMin_2;
	// System.Single Gaminho.ScenarioLimits::yMax
	float ___yMax_3;

public:
	inline static int32_t get_offset_of_xMin_0() { return static_cast<int32_t>(offsetof(ScenarioLimits_tF9A721A3F778BE0145B94E934952E7F4CB7BED05, ___xMin_0)); }
	inline float get_xMin_0() const { return ___xMin_0; }
	inline float* get_address_of_xMin_0() { return &___xMin_0; }
	inline void set_xMin_0(float value)
	{
		___xMin_0 = value;
	}

	inline static int32_t get_offset_of_xMax_1() { return static_cast<int32_t>(offsetof(ScenarioLimits_tF9A721A3F778BE0145B94E934952E7F4CB7BED05, ___xMax_1)); }
	inline float get_xMax_1() const { return ___xMax_1; }
	inline float* get_address_of_xMax_1() { return &___xMax_1; }
	inline void set_xMax_1(float value)
	{
		___xMax_1 = value;
	}

	inline static int32_t get_offset_of_yMin_2() { return static_cast<int32_t>(offsetof(ScenarioLimits_tF9A721A3F778BE0145B94E934952E7F4CB7BED05, ___yMin_2)); }
	inline float get_yMin_2() const { return ___yMin_2; }
	inline float* get_address_of_yMin_2() { return &___yMin_2; }
	inline void set_yMin_2(float value)
	{
		___yMin_2 = value;
	}

	inline static int32_t get_offset_of_yMax_3() { return static_cast<int32_t>(offsetof(ScenarioLimits_tF9A721A3F778BE0145B94E934952E7F4CB7BED05, ___yMax_3)); }
	inline float get_yMax_3() const { return ___yMax_3; }
	inline float* get_address_of_yMax_3() { return &___yMax_3; }
	inline void set_yMax_3(float value)
	{
		___yMax_3 = value;
	}
};


// Gaminho.Statics
struct  Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1  : public RuntimeObject
{
public:

public:
};

struct Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields
{
public:
	// System.Int32 Gaminho.Statics::ShootingSelected
	int32_t ___ShootingSelected_8;
	// System.Boolean Gaminho.Statics::WithShield
	bool ___WithShield_9;
	// System.Boolean Gaminho.Statics::rechargeShield
	bool ___rechargeShield_10;
	// System.Int32 Gaminho.Statics::Damage
	int32_t ___Damage_11;
	// System.Int32 Gaminho.Statics::CurrentLevel
	int32_t ___CurrentLevel_12;
	// UnityEngine.Transform Gaminho.Statics::Player
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___Player_13;
	// UnityEngine.Transform Gaminho.Statics::Ghost
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___Ghost_14;
	// System.Int32 Gaminho.Statics::EnemiesDead
	int32_t ___EnemiesDead_15;
	// System.Int32 Gaminho.Statics::Points
	int32_t ___Points_16;
	// System.Single Gaminho.Statics::Life
	float ___Life_17;
	// System.Boolean Gaminho.Statics::loadingGame
	bool ___loadingGame_18;

public:
	inline static int32_t get_offset_of_ShootingSelected_8() { return static_cast<int32_t>(offsetof(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields, ___ShootingSelected_8)); }
	inline int32_t get_ShootingSelected_8() const { return ___ShootingSelected_8; }
	inline int32_t* get_address_of_ShootingSelected_8() { return &___ShootingSelected_8; }
	inline void set_ShootingSelected_8(int32_t value)
	{
		___ShootingSelected_8 = value;
	}

	inline static int32_t get_offset_of_WithShield_9() { return static_cast<int32_t>(offsetof(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields, ___WithShield_9)); }
	inline bool get_WithShield_9() const { return ___WithShield_9; }
	inline bool* get_address_of_WithShield_9() { return &___WithShield_9; }
	inline void set_WithShield_9(bool value)
	{
		___WithShield_9 = value;
	}

	inline static int32_t get_offset_of_rechargeShield_10() { return static_cast<int32_t>(offsetof(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields, ___rechargeShield_10)); }
	inline bool get_rechargeShield_10() const { return ___rechargeShield_10; }
	inline bool* get_address_of_rechargeShield_10() { return &___rechargeShield_10; }
	inline void set_rechargeShield_10(bool value)
	{
		___rechargeShield_10 = value;
	}

	inline static int32_t get_offset_of_Damage_11() { return static_cast<int32_t>(offsetof(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields, ___Damage_11)); }
	inline int32_t get_Damage_11() const { return ___Damage_11; }
	inline int32_t* get_address_of_Damage_11() { return &___Damage_11; }
	inline void set_Damage_11(int32_t value)
	{
		___Damage_11 = value;
	}

	inline static int32_t get_offset_of_CurrentLevel_12() { return static_cast<int32_t>(offsetof(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields, ___CurrentLevel_12)); }
	inline int32_t get_CurrentLevel_12() const { return ___CurrentLevel_12; }
	inline int32_t* get_address_of_CurrentLevel_12() { return &___CurrentLevel_12; }
	inline void set_CurrentLevel_12(int32_t value)
	{
		___CurrentLevel_12 = value;
	}

	inline static int32_t get_offset_of_Player_13() { return static_cast<int32_t>(offsetof(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields, ___Player_13)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_Player_13() const { return ___Player_13; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_Player_13() { return &___Player_13; }
	inline void set_Player_13(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___Player_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Player_13), (void*)value);
	}

	inline static int32_t get_offset_of_Ghost_14() { return static_cast<int32_t>(offsetof(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields, ___Ghost_14)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_Ghost_14() const { return ___Ghost_14; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_Ghost_14() { return &___Ghost_14; }
	inline void set_Ghost_14(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___Ghost_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Ghost_14), (void*)value);
	}

	inline static int32_t get_offset_of_EnemiesDead_15() { return static_cast<int32_t>(offsetof(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields, ___EnemiesDead_15)); }
	inline int32_t get_EnemiesDead_15() const { return ___EnemiesDead_15; }
	inline int32_t* get_address_of_EnemiesDead_15() { return &___EnemiesDead_15; }
	inline void set_EnemiesDead_15(int32_t value)
	{
		___EnemiesDead_15 = value;
	}

	inline static int32_t get_offset_of_Points_16() { return static_cast<int32_t>(offsetof(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields, ___Points_16)); }
	inline int32_t get_Points_16() const { return ___Points_16; }
	inline int32_t* get_address_of_Points_16() { return &___Points_16; }
	inline void set_Points_16(int32_t value)
	{
		___Points_16 = value;
	}

	inline static int32_t get_offset_of_Life_17() { return static_cast<int32_t>(offsetof(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields, ___Life_17)); }
	inline float get_Life_17() const { return ___Life_17; }
	inline float* get_address_of_Life_17() { return &___Life_17; }
	inline void set_Life_17(float value)
	{
		___Life_17 = value;
	}

	inline static int32_t get_offset_of_loadingGame_18() { return static_cast<int32_t>(offsetof(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields, ___loadingGame_18)); }
	inline bool get_loadingGame_18() const { return ___loadingGame_18; }
	inline bool* get_address_of_loadingGame_18() { return &___loadingGame_18; }
	inline void set_loadingGame_18(bool value)
	{
		___loadingGame_18 = value;
	}
};


// Stick
struct  Stick_t824E581510DC42A24A8BB6CCCA98A83FB596069D  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
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


// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// UnityEngine.YieldInstruction
struct  YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// Boss2/<Shot>d__7
struct  U3CShotU3Ed__7_t5B6ECB25F35EA9A394F1ADE1A8C3CB4EE57063C1  : public RuntimeObject
{
public:
	// System.Int32 Boss2/<Shot>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Boss2/<Shot>d__7::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Boss2 Boss2/<Shot>d__7::<>4__this
	Boss2_t1ED338A653D36E5352D40483F92F9C50B359FEBC * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CShotU3Ed__7_t5B6ECB25F35EA9A394F1ADE1A8C3CB4EE57063C1, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CShotU3Ed__7_t5B6ECB25F35EA9A394F1ADE1A8C3CB4EE57063C1, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CShotU3Ed__7_t5B6ECB25F35EA9A394F1ADE1A8C3CB4EE57063C1, ___U3CU3E4__this_2)); }
	inline Boss2_t1ED338A653D36E5352D40483F92F9C50B359FEBC * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Boss2_t1ED338A653D36E5352D40483F92F9C50B359FEBC ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Boss2_t1ED338A653D36E5352D40483F92F9C50B359FEBC * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Boss2/<ShowParts>d__5
struct  U3CShowPartsU3Ed__5_t09BBC03A0970E2BF56904F75C3B7E0D8B40FC34F  : public RuntimeObject
{
public:
	// System.Int32 Boss2/<ShowParts>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Boss2/<ShowParts>d__5::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Boss2 Boss2/<ShowParts>d__5::<>4__this
	Boss2_t1ED338A653D36E5352D40483F92F9C50B359FEBC * ___U3CU3E4__this_2;
	// System.Int32 Boss2/<ShowParts>d__5::<i>5__2
	int32_t ___U3CiU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CShowPartsU3Ed__5_t09BBC03A0970E2BF56904F75C3B7E0D8B40FC34F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CShowPartsU3Ed__5_t09BBC03A0970E2BF56904F75C3B7E0D8B40FC34F, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CShowPartsU3Ed__5_t09BBC03A0970E2BF56904F75C3B7E0D8B40FC34F, ___U3CU3E4__this_2)); }
	inline Boss2_t1ED338A653D36E5352D40483F92F9C50B359FEBC * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Boss2_t1ED338A653D36E5352D40483F92F9C50B359FEBC ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Boss2_t1ED338A653D36E5352D40483F92F9C50B359FEBC * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CShowPartsU3Ed__5_t09BBC03A0970E2BF56904F75C3B7E0D8B40FC34F, ___U3CiU3E5__2_3)); }
	inline int32_t get_U3CiU3E5__2_3() const { return ___U3CiU3E5__2_3; }
	inline int32_t* get_address_of_U3CiU3E5__2_3() { return &___U3CiU3E5__2_3; }
	inline void set_U3CiU3E5__2_3(int32_t value)
	{
		___U3CiU3E5__2_3 = value;
	}
};


// Boss3/<Attack>d__7
struct  U3CAttackU3Ed__7_t08C44F054B9845EA94A3146BE9349CAAAA2E7C0C  : public RuntimeObject
{
public:
	// System.Int32 Boss3/<Attack>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Boss3/<Attack>d__7::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.UI.Image Boss3/<Attack>d__7::image
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___image_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAttackU3Ed__7_t08C44F054B9845EA94A3146BE9349CAAAA2E7C0C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAttackU3Ed__7_t08C44F054B9845EA94A3146BE9349CAAAA2E7C0C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_image_2() { return static_cast<int32_t>(offsetof(U3CAttackU3Ed__7_t08C44F054B9845EA94A3146BE9349CAAAA2E7C0C, ___image_2)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_image_2() const { return ___image_2; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_image_2() { return &___image_2; }
	inline void set_image_2(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___image_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___image_2), (void*)value);
	}
};


// Boss3/<AttackNow>d__6
struct  U3CAttackNowU3Ed__6_t5548957493F4260E6AFD7631F29FF348A7535DB3  : public RuntimeObject
{
public:
	// System.Int32 Boss3/<AttackNow>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Boss3/<AttackNow>d__6::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Boss3 Boss3/<AttackNow>d__6::<>4__this
	Boss3_t6C3889EF0A9F1C98DE071E5A8AE5B237CA014D60 * ___U3CU3E4__this_2;
	// Gaminho.ScenarioLimits Boss3/<AttackNow>d__6::<limitesCenario>5__2
	ScenarioLimits_tF9A721A3F778BE0145B94E934952E7F4CB7BED05 * ___U3ClimitesCenarioU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAttackNowU3Ed__6_t5548957493F4260E6AFD7631F29FF348A7535DB3, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAttackNowU3Ed__6_t5548957493F4260E6AFD7631F29FF348A7535DB3, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CAttackNowU3Ed__6_t5548957493F4260E6AFD7631F29FF348A7535DB3, ___U3CU3E4__this_2)); }
	inline Boss3_t6C3889EF0A9F1C98DE071E5A8AE5B237CA014D60 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Boss3_t6C3889EF0A9F1C98DE071E5A8AE5B237CA014D60 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Boss3_t6C3889EF0A9F1C98DE071E5A8AE5B237CA014D60 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClimitesCenarioU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CAttackNowU3Ed__6_t5548957493F4260E6AFD7631F29FF348A7535DB3, ___U3ClimitesCenarioU3E5__2_3)); }
	inline ScenarioLimits_tF9A721A3F778BE0145B94E934952E7F4CB7BED05 * get_U3ClimitesCenarioU3E5__2_3() const { return ___U3ClimitesCenarioU3E5__2_3; }
	inline ScenarioLimits_tF9A721A3F778BE0145B94E934952E7F4CB7BED05 ** get_address_of_U3ClimitesCenarioU3E5__2_3() { return &___U3ClimitesCenarioU3E5__2_3; }
	inline void set_U3ClimitesCenarioU3E5__2_3(ScenarioLimits_tF9A721A3F778BE0145B94E934952E7F4CB7BED05 * value)
	{
		___U3ClimitesCenarioU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClimitesCenarioU3E5__2_3), (void*)value);
	}
};


// Boss3/<ShowParts>d__5
struct  U3CShowPartsU3Ed__5_tC9A208D13D4CF48A5C07215906AFF39AC00370C2  : public RuntimeObject
{
public:
	// System.Int32 Boss3/<ShowParts>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Boss3/<ShowParts>d__5::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Boss3 Boss3/<ShowParts>d__5::<>4__this
	Boss3_t6C3889EF0A9F1C98DE071E5A8AE5B237CA014D60 * ___U3CU3E4__this_2;
	// System.Boolean Boss3/<ShowParts>d__5::yes
	bool ___yes_3;
	// System.Int32 Boss3/<ShowParts>d__5::<i>5__2
	int32_t ___U3CiU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CShowPartsU3Ed__5_tC9A208D13D4CF48A5C07215906AFF39AC00370C2, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CShowPartsU3Ed__5_tC9A208D13D4CF48A5C07215906AFF39AC00370C2, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CShowPartsU3Ed__5_tC9A208D13D4CF48A5C07215906AFF39AC00370C2, ___U3CU3E4__this_2)); }
	inline Boss3_t6C3889EF0A9F1C98DE071E5A8AE5B237CA014D60 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Boss3_t6C3889EF0A9F1C98DE071E5A8AE5B237CA014D60 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Boss3_t6C3889EF0A9F1C98DE071E5A8AE5B237CA014D60 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_yes_3() { return static_cast<int32_t>(offsetof(U3CShowPartsU3Ed__5_tC9A208D13D4CF48A5C07215906AFF39AC00370C2, ___yes_3)); }
	inline bool get_yes_3() const { return ___yes_3; }
	inline bool* get_address_of_yes_3() { return &___yes_3; }
	inline void set_yes_3(bool value)
	{
		___yes_3 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CShowPartsU3Ed__5_tC9A208D13D4CF48A5C07215906AFF39AC00370C2, ___U3CiU3E5__2_4)); }
	inline int32_t get_U3CiU3E5__2_4() const { return ___U3CiU3E5__2_4; }
	inline int32_t* get_address_of_U3CiU3E5__2_4() { return &___U3CiU3E5__2_4; }
	inline void set_U3CiU3E5__2_4(int32_t value)
	{
		___U3CiU3E5__2_4 = value;
	}
};


// ControlGhost/<Shoot>d__7
struct  U3CShootU3Ed__7_tE704B49D318CB97B09A55BEB0E8E90AF4B555F34  : public RuntimeObject
{
public:
	// System.Int32 ControlGhost/<Shoot>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ControlGhost/<Shoot>d__7::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// ControlGhost ControlGhost/<Shoot>d__7::<>4__this
	ControlGhost_tF5A4C0EF0DE41C54667C7FAAF7CC7DDA8C815F51 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CShootU3Ed__7_tE704B49D318CB97B09A55BEB0E8E90AF4B555F34, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CShootU3Ed__7_tE704B49D318CB97B09A55BEB0E8E90AF4B555F34, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CShootU3Ed__7_tE704B49D318CB97B09A55BEB0E8E90AF4B555F34, ___U3CU3E4__this_2)); }
	inline ControlGhost_tF5A4C0EF0DE41C54667C7FAAF7CC7DDA8C815F51 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ControlGhost_tF5A4C0EF0DE41C54667C7FAAF7CC7DDA8C815F51 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ControlGhost_tF5A4C0EF0DE41C54667C7FAAF7CC7DDA8C815F51 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// ControlShip/<Shoot>d__15
struct  U3CShootU3Ed__15_tA3D5CDD11652E4A5CA95A8EFBFC8113B6662B07E  : public RuntimeObject
{
public:
	// System.Int32 ControlShip/<Shoot>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ControlShip/<Shoot>d__15::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// ControlShip ControlShip/<Shoot>d__15::<>4__this
	ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CShootU3Ed__15_tA3D5CDD11652E4A5CA95A8EFBFC8113B6662B07E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CShootU3Ed__15_tA3D5CDD11652E4A5CA95A8EFBFC8113B6662B07E, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CShootU3Ed__15_tA3D5CDD11652E4A5CA95A8EFBFC8113B6662B07E, ___U3CU3E4__this_2)); }
	inline ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// ControlStart/<LoadScene>d__4
struct  U3CLoadSceneU3Ed__4_tFA699E679840F67FE1E189060FE7284ED9DEB59E  : public RuntimeObject
{
public:
	// System.Int32 ControlStart/<LoadScene>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ControlStart/<LoadScene>d__4::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// ControlStart ControlStart/<LoadScene>d__4::<>4__this
	ControlStart_t461A8F5392E3967B1B6B5520351D75DEFD71B1B0 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLoadSceneU3Ed__4_tFA699E679840F67FE1E189060FE7284ED9DEB59E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CLoadSceneU3Ed__4_tFA699E679840F67FE1E189060FE7284ED9DEB59E, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CLoadSceneU3Ed__4_tFA699E679840F67FE1E189060FE7284ED9DEB59E, ___U3CU3E4__this_2)); }
	inline ControlStart_t461A8F5392E3967B1B6B5520351D75DEFD71B1B0 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ControlStart_t461A8F5392E3967B1B6B5520351D75DEFD71B1B0 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ControlStart_t461A8F5392E3967B1B6B5520351D75DEFD71B1B0 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// DestroyTime/<CallDestroy>d__2
struct  U3CCallDestroyU3Ed__2_tAFEBF82F13F04716C1673744B80612E43A0ACA03  : public RuntimeObject
{
public:
	// System.Int32 DestroyTime/<CallDestroy>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DestroyTime/<CallDestroy>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// DestroyTime DestroyTime/<CallDestroy>d__2::<>4__this
	DestroyTime_t24806801B4F6EA764796D3C1789E9D157D0023D2 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCallDestroyU3Ed__2_tAFEBF82F13F04716C1673744B80612E43A0ACA03, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCallDestroyU3Ed__2_tAFEBF82F13F04716C1673744B80612E43A0ACA03, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCallDestroyU3Ed__2_tAFEBF82F13F04716C1673744B80612E43A0ACA03, ___U3CU3E4__this_2)); }
	inline DestroyTime_t24806801B4F6EA764796D3C1789E9D157D0023D2 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline DestroyTime_t24806801B4F6EA764796D3C1789E9D157D0023D2 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(DestroyTime_t24806801B4F6EA764796D3C1789E9D157D0023D2 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Enemy/<KillMe>d__13
struct  U3CKillMeU3Ed__13_t119E02ACE3C774FC55783CA4B9311F67937D811C  : public RuntimeObject
{
public:
	// System.Int32 Enemy/<KillMe>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Enemy/<KillMe>d__13::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Enemy Enemy/<KillMe>d__13::<>4__this
	Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CKillMeU3Ed__13_t119E02ACE3C774FC55783CA4B9311F67937D811C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CKillMeU3Ed__13_t119E02ACE3C774FC55783CA4B9311F67937D811C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CKillMeU3Ed__13_t119E02ACE3C774FC55783CA4B9311F67937D811C, ___U3CU3E4__this_2)); }
	inline Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Enemy/<Shoot>d__15
struct  U3CShootU3Ed__15_tF9AF905CBA0A2327F76DF1C4043394EB061319B2  : public RuntimeObject
{
public:
	// System.Int32 Enemy/<Shoot>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Enemy/<Shoot>d__15::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Enemy Enemy/<Shoot>d__15::<>4__this
	Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CShootU3Ed__15_tF9AF905CBA0A2327F76DF1C4043394EB061319B2, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CShootU3Ed__15_tF9AF905CBA0A2327F76DF1C4043394EB061319B2, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CShootU3Ed__15_tF9AF905CBA0A2327F76DF1C4043394EB061319B2, ___U3CU3E4__this_2)); }
	inline Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// EnemyControl/<CallBoss>d__6
struct  U3CCallBossU3Ed__6_t0BF59ED4A6D214279882298BAE1927F9D4059B35  : public RuntimeObject
{
public:
	// System.Int32 EnemyControl/<CallBoss>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EnemyControl/<CallBoss>d__6::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// EnemyControl EnemyControl/<CallBoss>d__6::<>4__this
	EnemyControl_t8354619B7C2514F856067E693DC1914D07EE53D9 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCallBossU3Ed__6_t0BF59ED4A6D214279882298BAE1927F9D4059B35, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCallBossU3Ed__6_t0BF59ED4A6D214279882298BAE1927F9D4059B35, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCallBossU3Ed__6_t0BF59ED4A6D214279882298BAE1927F9D4059B35, ___U3CU3E4__this_2)); }
	inline EnemyControl_t8354619B7C2514F856067E693DC1914D07EE53D9 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline EnemyControl_t8354619B7C2514F856067E693DC1914D07EE53D9 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(EnemyControl_t8354619B7C2514F856067E693DC1914D07EE53D9 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// EnemyControl/<Process>d__4
struct  U3CProcessU3Ed__4_t71016A10790CE995349F35F697F784B6C726E051  : public RuntimeObject
{
public:
	// System.Int32 EnemyControl/<Process>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EnemyControl/<Process>d__4::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// EnemyControl EnemyControl/<Process>d__4::<>4__this
	EnemyControl_t8354619B7C2514F856067E693DC1914D07EE53D9 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CProcessU3Ed__4_t71016A10790CE995349F35F697F784B6C726E051, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CProcessU3Ed__4_t71016A10790CE995349F35F697F784B6C726E051, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CProcessU3Ed__4_t71016A10790CE995349F35F697F784B6C726E051, ___U3CU3E4__this_2)); }
	inline EnemyControl_t8354619B7C2514F856067E693DC1914D07EE53D9 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline EnemyControl_t8354619B7C2514F856067E693DC1914D07EE53D9 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(EnemyControl_t8354619B7C2514F856067E693DC1914D07EE53D9 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Explosion/<Explode>d__3
struct  U3CExplodeU3Ed__3_tD50D1FAB07D31C87001D70FBED9046F4B147664D  : public RuntimeObject
{
public:
	// System.Int32 Explosion/<Explode>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Explosion/<Explode>d__3::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Explosion Explosion/<Explode>d__3::<>4__this
	Explosion_t03ACA9CD2F46E4913DC45A3EA50B165F4662DCED * ___U3CU3E4__this_2;
	// System.Int32 Explosion/<Explode>d__3::<i>5__2
	int32_t ___U3CiU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CExplodeU3Ed__3_tD50D1FAB07D31C87001D70FBED9046F4B147664D, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CExplodeU3Ed__3_tD50D1FAB07D31C87001D70FBED9046F4B147664D, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CExplodeU3Ed__3_tD50D1FAB07D31C87001D70FBED9046F4B147664D, ___U3CU3E4__this_2)); }
	inline Explosion_t03ACA9CD2F46E4913DC45A3EA50B165F4662DCED * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Explosion_t03ACA9CD2F46E4913DC45A3EA50B165F4662DCED ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Explosion_t03ACA9CD2F46E4913DC45A3EA50B165F4662DCED * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CExplodeU3Ed__3_tD50D1FAB07D31C87001D70FBED9046F4B147664D, ___U3CiU3E5__2_3)); }
	inline int32_t get_U3CiU3E5__2_3() const { return ___U3CiU3E5__2_3; }
	inline int32_t* get_address_of_U3CiU3E5__2_3() { return &___U3CiU3E5__2_3; }
	inline void set_U3CiU3E5__2_3(int32_t value)
	{
		___U3CiU3E5__2_3 = value;
	}
};


// Ghost/<Follow>d__11
struct  U3CFollowU3Ed__11_t3EDBCEC7FC810EB2FF4832FC742FD1686C45A198  : public RuntimeObject
{
public:
	// System.Int32 Ghost/<Follow>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Ghost/<Follow>d__11::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Ghost Ghost/<Follow>d__11::<>4__this
	Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFollowU3Ed__11_t3EDBCEC7FC810EB2FF4832FC742FD1686C45A198, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CFollowU3Ed__11_t3EDBCEC7FC810EB2FF4832FC742FD1686C45A198, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CFollowU3Ed__11_t3EDBCEC7FC810EB2FF4832FC742FD1686C45A198, ___U3CU3E4__this_2)); }
	inline Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Ghost/<RecordPosition>d__10
struct  U3CRecordPositionU3Ed__10_t55110E01AB1FCDF69BB01B4EA77745342103066D  : public RuntimeObject
{
public:
	// System.Int32 Ghost/<RecordPosition>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Ghost/<RecordPosition>d__10::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Ghost Ghost/<RecordPosition>d__10::<>4__this
	Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRecordPositionU3Ed__10_t55110E01AB1FCDF69BB01B4EA77745342103066D, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRecordPositionU3Ed__10_t55110E01AB1FCDF69BB01B4EA77745342103066D, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CRecordPositionU3Ed__10_t55110E01AB1FCDF69BB01B4EA77745342103066D, ___U3CU3E4__this_2)); }
	inline Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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


// System.Char
struct  Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// UnityEngine.Color
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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
struct  IntPtr_t 
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


// UnityEngine.Quaternion
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
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
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
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
struct  SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
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

// System.IO.TextReader
struct  TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:

public:
};

struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields
{
public:
	// System.Func`2<System.Object,System.String> System.IO.TextReader::_ReadLineDelegate
	Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * ____ReadLineDelegate_1;
	// System.Func`2<System.Object,System.Int32> System.IO.TextReader::_ReadDelegate
	Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ____ReadDelegate_2;
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___Null_3;

public:
	inline static int32_t get_offset_of__ReadLineDelegate_1() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadLineDelegate_1)); }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * get__ReadLineDelegate_1() const { return ____ReadLineDelegate_1; }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 ** get_address_of__ReadLineDelegate_1() { return &____ReadLineDelegate_1; }
	inline void set__ReadLineDelegate_1(Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * value)
	{
		____ReadLineDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadLineDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of__ReadDelegate_2() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadDelegate_2)); }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * get__ReadDelegate_2() const { return ____ReadDelegate_2; }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C ** get_address_of__ReadDelegate_2() { return &____ReadDelegate_2; }
	inline void set__ReadDelegate_2(Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * value)
	{
		____ReadDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ___Null_3)); }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * get_Null_3() const { return ___Null_3; }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F ** get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * value)
	{
		___Null_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_3), (void*)value);
	}
};


// System.IO.TextWriter
struct  TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___CoreNewLine_9;
	// System.IFormatProvider System.IO.TextWriter::InternalFormatProvider
	RuntimeObject* ___InternalFormatProvider_10;

public:
	inline static int32_t get_offset_of_CoreNewLine_9() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___CoreNewLine_9)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_CoreNewLine_9() const { return ___CoreNewLine_9; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_CoreNewLine_9() { return &___CoreNewLine_9; }
	inline void set_CoreNewLine_9(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___CoreNewLine_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CoreNewLine_9), (void*)value);
	}

	inline static int32_t get_offset_of_InternalFormatProvider_10() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___InternalFormatProvider_10)); }
	inline RuntimeObject* get_InternalFormatProvider_10() const { return ___InternalFormatProvider_10; }
	inline RuntimeObject** get_address_of_InternalFormatProvider_10() { return &___InternalFormatProvider_10; }
	inline void set_InternalFormatProvider_10(RuntimeObject* value)
	{
		___InternalFormatProvider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalFormatProvider_10), (void*)value);
	}
};

struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___Null_1;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharDelegate_2;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteStringDelegate_3;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharArrayRangeDelegate_4;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharDelegate_5;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineStringDelegate_6;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharArrayRangeDelegate_7;
	// System.Action`1<System.Object> System.IO.TextWriter::_FlushDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____FlushDelegate_8;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ___Null_1)); }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharDelegate_2() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharDelegate_2)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharDelegate_2() const { return ____WriteCharDelegate_2; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharDelegate_2() { return &____WriteCharDelegate_2; }
	inline void set__WriteCharDelegate_2(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of__WriteStringDelegate_3() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteStringDelegate_3)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteStringDelegate_3() const { return ____WriteStringDelegate_3; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteStringDelegate_3() { return &____WriteStringDelegate_3; }
	inline void set__WriteStringDelegate_3(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteStringDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteStringDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharArrayRangeDelegate_4() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharArrayRangeDelegate_4)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharArrayRangeDelegate_4() const { return ____WriteCharArrayRangeDelegate_4; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharArrayRangeDelegate_4() { return &____WriteCharArrayRangeDelegate_4; }
	inline void set__WriteCharArrayRangeDelegate_4(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharArrayRangeDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharArrayRangeDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharDelegate_5() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharDelegate_5)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharDelegate_5() const { return ____WriteLineCharDelegate_5; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharDelegate_5() { return &____WriteLineCharDelegate_5; }
	inline void set__WriteLineCharDelegate_5(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineStringDelegate_6() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineStringDelegate_6)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineStringDelegate_6() const { return ____WriteLineStringDelegate_6; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineStringDelegate_6() { return &____WriteLineStringDelegate_6; }
	inline void set__WriteLineStringDelegate_6(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineStringDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineStringDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharArrayRangeDelegate_7() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharArrayRangeDelegate_7)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharArrayRangeDelegate_7() const { return ____WriteLineCharArrayRangeDelegate_7; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharArrayRangeDelegate_7() { return &____WriteLineCharArrayRangeDelegate_7; }
	inline void set__WriteLineCharArrayRangeDelegate_7(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharArrayRangeDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharArrayRangeDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of__FlushDelegate_8() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____FlushDelegate_8)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__FlushDelegate_8() const { return ____FlushDelegate_8; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__FlushDelegate_8() { return &____FlushDelegate_8; }
	inline void set__FlushDelegate_8(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____FlushDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____FlushDelegate_8), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent
struct  UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
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
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
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
struct  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
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
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.Collision2D
struct  Collision2D_t95B5FD331CE95276D3658140844190B485D26564  : public RuntimeObject
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
struct  ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
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


// UnityEngine.Coroutine
struct  Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.ForceMode2D
struct  ForceMode2D_tAD695DED33FB7C591354430C88D220D71109ABF4 
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


// UnityEngine.KeyCode
struct  KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
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

// UnityEngine.RuntimePlatform
struct  RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.StreamReader
struct  StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3  : public TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F
{
public:
	// System.IO.Stream System.IO.StreamReader::stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream_5;
	// System.Text.Encoding System.IO.StreamReader::encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___encoding_6;
	// System.Text.Decoder System.IO.StreamReader::decoder
	Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * ___decoder_7;
	// System.Byte[] System.IO.StreamReader::byteBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___byteBuffer_8;
	// System.Char[] System.IO.StreamReader::charBuffer
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___charBuffer_9;
	// System.Byte[] System.IO.StreamReader::_preamble
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____preamble_10;
	// System.Int32 System.IO.StreamReader::charPos
	int32_t ___charPos_11;
	// System.Int32 System.IO.StreamReader::charLen
	int32_t ___charLen_12;
	// System.Int32 System.IO.StreamReader::byteLen
	int32_t ___byteLen_13;
	// System.Int32 System.IO.StreamReader::bytePos
	int32_t ___bytePos_14;
	// System.Int32 System.IO.StreamReader::_maxCharsPerBuffer
	int32_t ____maxCharsPerBuffer_15;
	// System.Boolean System.IO.StreamReader::_detectEncoding
	bool ____detectEncoding_16;
	// System.Boolean System.IO.StreamReader::_checkPreamble
	bool ____checkPreamble_17;
	// System.Boolean System.IO.StreamReader::_isBlocked
	bool ____isBlocked_18;
	// System.Boolean System.IO.StreamReader::_closable
	bool ____closable_19;
	// System.Threading.Tasks.Task modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamReader::_asyncReadTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ____asyncReadTask_20;

public:
	inline static int32_t get_offset_of_stream_5() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___stream_5)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_stream_5() const { return ___stream_5; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_stream_5() { return &___stream_5; }
	inline void set_stream_5(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___stream_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_5), (void*)value);
	}

	inline static int32_t get_offset_of_encoding_6() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___encoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_encoding_6() const { return ___encoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_encoding_6() { return &___encoding_6; }
	inline void set_encoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___encoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_decoder_7() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___decoder_7)); }
	inline Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * get_decoder_7() const { return ___decoder_7; }
	inline Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 ** get_address_of_decoder_7() { return &___decoder_7; }
	inline void set_decoder_7(Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * value)
	{
		___decoder_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoder_7), (void*)value);
	}

	inline static int32_t get_offset_of_byteBuffer_8() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___byteBuffer_8)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_byteBuffer_8() const { return ___byteBuffer_8; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_byteBuffer_8() { return &___byteBuffer_8; }
	inline void set_byteBuffer_8(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___byteBuffer_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___byteBuffer_8), (void*)value);
	}

	inline static int32_t get_offset_of_charBuffer_9() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___charBuffer_9)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_charBuffer_9() const { return ___charBuffer_9; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_charBuffer_9() { return &___charBuffer_9; }
	inline void set_charBuffer_9(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___charBuffer_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___charBuffer_9), (void*)value);
	}

	inline static int32_t get_offset_of__preamble_10() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____preamble_10)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__preamble_10() const { return ____preamble_10; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__preamble_10() { return &____preamble_10; }
	inline void set__preamble_10(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____preamble_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____preamble_10), (void*)value);
	}

	inline static int32_t get_offset_of_charPos_11() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___charPos_11)); }
	inline int32_t get_charPos_11() const { return ___charPos_11; }
	inline int32_t* get_address_of_charPos_11() { return &___charPos_11; }
	inline void set_charPos_11(int32_t value)
	{
		___charPos_11 = value;
	}

	inline static int32_t get_offset_of_charLen_12() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___charLen_12)); }
	inline int32_t get_charLen_12() const { return ___charLen_12; }
	inline int32_t* get_address_of_charLen_12() { return &___charLen_12; }
	inline void set_charLen_12(int32_t value)
	{
		___charLen_12 = value;
	}

	inline static int32_t get_offset_of_byteLen_13() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___byteLen_13)); }
	inline int32_t get_byteLen_13() const { return ___byteLen_13; }
	inline int32_t* get_address_of_byteLen_13() { return &___byteLen_13; }
	inline void set_byteLen_13(int32_t value)
	{
		___byteLen_13 = value;
	}

	inline static int32_t get_offset_of_bytePos_14() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___bytePos_14)); }
	inline int32_t get_bytePos_14() const { return ___bytePos_14; }
	inline int32_t* get_address_of_bytePos_14() { return &___bytePos_14; }
	inline void set_bytePos_14(int32_t value)
	{
		___bytePos_14 = value;
	}

	inline static int32_t get_offset_of__maxCharsPerBuffer_15() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____maxCharsPerBuffer_15)); }
	inline int32_t get__maxCharsPerBuffer_15() const { return ____maxCharsPerBuffer_15; }
	inline int32_t* get_address_of__maxCharsPerBuffer_15() { return &____maxCharsPerBuffer_15; }
	inline void set__maxCharsPerBuffer_15(int32_t value)
	{
		____maxCharsPerBuffer_15 = value;
	}

	inline static int32_t get_offset_of__detectEncoding_16() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____detectEncoding_16)); }
	inline bool get__detectEncoding_16() const { return ____detectEncoding_16; }
	inline bool* get_address_of__detectEncoding_16() { return &____detectEncoding_16; }
	inline void set__detectEncoding_16(bool value)
	{
		____detectEncoding_16 = value;
	}

	inline static int32_t get_offset_of__checkPreamble_17() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____checkPreamble_17)); }
	inline bool get__checkPreamble_17() const { return ____checkPreamble_17; }
	inline bool* get_address_of__checkPreamble_17() { return &____checkPreamble_17; }
	inline void set__checkPreamble_17(bool value)
	{
		____checkPreamble_17 = value;
	}

	inline static int32_t get_offset_of__isBlocked_18() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____isBlocked_18)); }
	inline bool get__isBlocked_18() const { return ____isBlocked_18; }
	inline bool* get_address_of__isBlocked_18() { return &____isBlocked_18; }
	inline void set__isBlocked_18(bool value)
	{
		____isBlocked_18 = value;
	}

	inline static int32_t get_offset_of__closable_19() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____closable_19)); }
	inline bool get__closable_19() const { return ____closable_19; }
	inline bool* get_address_of__closable_19() { return &____closable_19; }
	inline void set__closable_19(bool value)
	{
		____closable_19 = value;
	}

	inline static int32_t get_offset_of__asyncReadTask_20() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____asyncReadTask_20)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get__asyncReadTask_20() const { return ____asyncReadTask_20; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of__asyncReadTask_20() { return &____asyncReadTask_20; }
	inline void set__asyncReadTask_20(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		____asyncReadTask_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncReadTask_20), (void*)value);
	}
};

struct StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_StaticFields
{
public:
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * ___Null_4;

public:
	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_StaticFields, ___Null_4)); }
	inline StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * get_Null_4() const { return ___Null_4; }
	inline StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 ** get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * value)
	{
		___Null_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_4), (void*)value);
	}
};


// System.IO.StreamWriter
struct  StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6  : public TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643
{
public:
	// System.IO.Stream System.IO.StreamWriter::stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream_12;
	// System.Text.Encoding System.IO.StreamWriter::encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___encoding_13;
	// System.Text.Encoder System.IO.StreamWriter::encoder
	Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * ___encoder_14;
	// System.Byte[] System.IO.StreamWriter::byteBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___byteBuffer_15;
	// System.Char[] System.IO.StreamWriter::charBuffer
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___charBuffer_16;
	// System.Int32 System.IO.StreamWriter::charPos
	int32_t ___charPos_17;
	// System.Int32 System.IO.StreamWriter::charLen
	int32_t ___charLen_18;
	// System.Boolean System.IO.StreamWriter::autoFlush
	bool ___autoFlush_19;
	// System.Boolean System.IO.StreamWriter::haveWrittenPreamble
	bool ___haveWrittenPreamble_20;
	// System.Boolean System.IO.StreamWriter::closable
	bool ___closable_21;
	// System.Threading.Tasks.Task modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamWriter::_asyncWriteTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ____asyncWriteTask_22;

public:
	inline static int32_t get_offset_of_stream_12() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___stream_12)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_stream_12() const { return ___stream_12; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_stream_12() { return &___stream_12; }
	inline void set_stream_12(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___stream_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_12), (void*)value);
	}

	inline static int32_t get_offset_of_encoding_13() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___encoding_13)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_encoding_13() const { return ___encoding_13; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_encoding_13() { return &___encoding_13; }
	inline void set_encoding_13(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___encoding_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_13), (void*)value);
	}

	inline static int32_t get_offset_of_encoder_14() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___encoder_14)); }
	inline Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * get_encoder_14() const { return ___encoder_14; }
	inline Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A ** get_address_of_encoder_14() { return &___encoder_14; }
	inline void set_encoder_14(Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * value)
	{
		___encoder_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoder_14), (void*)value);
	}

	inline static int32_t get_offset_of_byteBuffer_15() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___byteBuffer_15)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_byteBuffer_15() const { return ___byteBuffer_15; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_byteBuffer_15() { return &___byteBuffer_15; }
	inline void set_byteBuffer_15(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___byteBuffer_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___byteBuffer_15), (void*)value);
	}

	inline static int32_t get_offset_of_charBuffer_16() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___charBuffer_16)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_charBuffer_16() const { return ___charBuffer_16; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_charBuffer_16() { return &___charBuffer_16; }
	inline void set_charBuffer_16(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___charBuffer_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___charBuffer_16), (void*)value);
	}

	inline static int32_t get_offset_of_charPos_17() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___charPos_17)); }
	inline int32_t get_charPos_17() const { return ___charPos_17; }
	inline int32_t* get_address_of_charPos_17() { return &___charPos_17; }
	inline void set_charPos_17(int32_t value)
	{
		___charPos_17 = value;
	}

	inline static int32_t get_offset_of_charLen_18() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___charLen_18)); }
	inline int32_t get_charLen_18() const { return ___charLen_18; }
	inline int32_t* get_address_of_charLen_18() { return &___charLen_18; }
	inline void set_charLen_18(int32_t value)
	{
		___charLen_18 = value;
	}

	inline static int32_t get_offset_of_autoFlush_19() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___autoFlush_19)); }
	inline bool get_autoFlush_19() const { return ___autoFlush_19; }
	inline bool* get_address_of_autoFlush_19() { return &___autoFlush_19; }
	inline void set_autoFlush_19(bool value)
	{
		___autoFlush_19 = value;
	}

	inline static int32_t get_offset_of_haveWrittenPreamble_20() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___haveWrittenPreamble_20)); }
	inline bool get_haveWrittenPreamble_20() const { return ___haveWrittenPreamble_20; }
	inline bool* get_address_of_haveWrittenPreamble_20() { return &___haveWrittenPreamble_20; }
	inline void set_haveWrittenPreamble_20(bool value)
	{
		___haveWrittenPreamble_20 = value;
	}

	inline static int32_t get_offset_of_closable_21() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___closable_21)); }
	inline bool get_closable_21() const { return ___closable_21; }
	inline bool* get_address_of_closable_21() { return &___closable_21; }
	inline void set_closable_21(bool value)
	{
		___closable_21 = value;
	}

	inline static int32_t get_offset_of__asyncWriteTask_22() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ____asyncWriteTask_22)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get__asyncWriteTask_22() const { return ____asyncWriteTask_22; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of__asyncWriteTask_22() { return &____asyncWriteTask_22; }
	inline void set__asyncWriteTask_22(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		____asyncWriteTask_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncWriteTask_22), (void*)value);
	}
};

struct StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_StaticFields
{
public:
	// System.IO.StreamWriter System.IO.StreamWriter::Null
	StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * ___Null_11;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamWriter::_UTF8NoBOM
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ____UTF8NoBOM_23;

public:
	inline static int32_t get_offset_of_Null_11() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_StaticFields, ___Null_11)); }
	inline StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * get_Null_11() const { return ___Null_11; }
	inline StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 ** get_address_of_Null_11() { return &___Null_11; }
	inline void set_Null_11(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * value)
	{
		___Null_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_11), (void*)value);
	}

	inline static int32_t get_offset_of__UTF8NoBOM_23() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_StaticFields, ____UTF8NoBOM_23)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get__UTF8NoBOM_23() const { return ____UTF8NoBOM_23; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of__UTF8NoBOM_23() { return &____UTF8NoBOM_23; }
	inline void set__UTF8NoBOM_23(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		____UTF8NoBOM_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____UTF8NoBOM_23), (void*)value);
	}
};


// UnityEngine.TouchScreenKeyboardType
struct  TouchScreenKeyboardType_tBD90DFB07923EC19E5EA59FAF26292AC2799A932 
{
public:
	// System.Int32 UnityEngine.TouchScreenKeyboardType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchScreenKeyboardType_tBD90DFB07923EC19E5EA59FAF26292AC2799A932, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/FillMethod
struct  FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
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
struct  Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
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


// UnityEngine.UI.InputField/CharacterValidation
struct  CharacterValidation_t03AFB752BBD6215579765978CE67D7159431FC41 
{
public:
	// System.Int32 UnityEngine.UI.InputField/CharacterValidation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CharacterValidation_t03AFB752BBD6215579765978CE67D7159431FC41, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/ContentType
struct  ContentType_t15FD47A38F32CADD417E3A07C787F1B3997B9AC1 
{
public:
	// System.Int32 UnityEngine.UI.InputField/ContentType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ContentType_t15FD47A38F32CADD417E3A07C787F1B3997B9AC1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/InputType
struct  InputType_t43FE97C0C3EE1F7DB81E2F34420780D1DFBF03D2 
{
public:
	// System.Int32 UnityEngine.UI.InputField/InputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputType_t43FE97C0C3EE1F7DB81E2F34420780D1DFBF03D2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/LineType
struct  LineType_t3249F1C248D9D12DE265C49F371F2C3618AFEFCE 
{
public:
	// System.Int32 UnityEngine.UI.InputField/LineType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LineType_t3249F1C248D9D12DE265C49F371F2C3618AFEFCE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct  Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
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
struct  Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
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


// Gaminho.Statics/FacingDirection
struct  FacingDirection_t160C0812DB7485B4F9555988C0594D7E2135F046 
{
public:
	// System.Int32 Gaminho.Statics/FacingDirection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FacingDirection_t160C0812DB7485B4F9555988C0594D7E2135F046, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Gaminho.Statics/TYPE_DROP
struct  TYPE_DROP_t71764A672EE3768B2ADA531C3521CCA57CA85DAF 
{
public:
	// System.Int32 Gaminho.Statics/TYPE_DROP::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TYPE_DROP_t71764A672EE3768B2ADA531C3521CCA57CA85DAF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Gaminho.Statics/TYPE_ENEMY
struct  TYPE_ENEMY_t31F774154328FA906B13C803B8AC6602EC822A57 
{
public:
	// System.Int32 Gaminho.Statics/TYPE_ENEMY::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TYPE_ENEMY_t31F774154328FA906B13C803B8AC6602EC822A57, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Gaminho.Statics/TYPE_SHOT
struct  TYPE_SHOT_t38E4497700E4B4D44751DC7B11F65D41A72FCA79 
{
public:
	// System.Int32 Gaminho.Statics/TYPE_SHOT::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TYPE_SHOT_t38E4497700E4B4D44751DC7B11F65D41A72FCA79, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Stick/stck
struct  stck_tFBAD5D898806982927A967BD401DCA71CA08837F 
{
public:
	// System.Int32 Stick/stck::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(stck_tFBAD5D898806982927A967BD401DCA71CA08837F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AudioClip
struct  AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
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
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.UI.Navigation
struct  Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
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

// Gaminho.Shot
struct  Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97  : public RuntimeObject
{
public:
	// UnityEngine.GameObject Gaminho.Shot::Prefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Prefab_0;
	// UnityEngine.GameObject Gaminho.Shot::Weapon
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Weapon_1;
	// UnityEngine.GameObject Gaminho.Shot::Weapon2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Weapon2_2;
	// UnityEngine.GameObject Gaminho.Shot::Weapon3
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Weapon3_3;
	// Gaminho.Statics/TYPE_SHOT Gaminho.Shot::TypeShooter
	int32_t ___TypeShooter_4;
	// System.Int32 Gaminho.Shot::Damage
	int32_t ___Damage_5;
	// System.Single Gaminho.Shot::ShootingPeriod
	float ___ShootingPeriod_6;
	// System.Single Gaminho.Shot::SpeedShooter
	float ___SpeedShooter_7;

public:
	inline static int32_t get_offset_of_Prefab_0() { return static_cast<int32_t>(offsetof(Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97, ___Prefab_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Prefab_0() const { return ___Prefab_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Prefab_0() { return &___Prefab_0; }
	inline void set_Prefab_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Prefab_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Prefab_0), (void*)value);
	}

	inline static int32_t get_offset_of_Weapon_1() { return static_cast<int32_t>(offsetof(Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97, ___Weapon_1)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Weapon_1() const { return ___Weapon_1; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Weapon_1() { return &___Weapon_1; }
	inline void set_Weapon_1(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Weapon_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Weapon_1), (void*)value);
	}

	inline static int32_t get_offset_of_Weapon2_2() { return static_cast<int32_t>(offsetof(Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97, ___Weapon2_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Weapon2_2() const { return ___Weapon2_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Weapon2_2() { return &___Weapon2_2; }
	inline void set_Weapon2_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Weapon2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Weapon2_2), (void*)value);
	}

	inline static int32_t get_offset_of_Weapon3_3() { return static_cast<int32_t>(offsetof(Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97, ___Weapon3_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Weapon3_3() const { return ___Weapon3_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Weapon3_3() { return &___Weapon3_3; }
	inline void set_Weapon3_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Weapon3_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Weapon3_3), (void*)value);
	}

	inline static int32_t get_offset_of_TypeShooter_4() { return static_cast<int32_t>(offsetof(Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97, ___TypeShooter_4)); }
	inline int32_t get_TypeShooter_4() const { return ___TypeShooter_4; }
	inline int32_t* get_address_of_TypeShooter_4() { return &___TypeShooter_4; }
	inline void set_TypeShooter_4(int32_t value)
	{
		___TypeShooter_4 = value;
	}

	inline static int32_t get_offset_of_Damage_5() { return static_cast<int32_t>(offsetof(Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97, ___Damage_5)); }
	inline int32_t get_Damage_5() const { return ___Damage_5; }
	inline int32_t* get_address_of_Damage_5() { return &___Damage_5; }
	inline void set_Damage_5(int32_t value)
	{
		___Damage_5 = value;
	}

	inline static int32_t get_offset_of_ShootingPeriod_6() { return static_cast<int32_t>(offsetof(Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97, ___ShootingPeriod_6)); }
	inline float get_ShootingPeriod_6() const { return ___ShootingPeriod_6; }
	inline float* get_address_of_ShootingPeriod_6() { return &___ShootingPeriod_6; }
	inline void set_ShootingPeriod_6(float value)
	{
		___ShootingPeriod_6 = value;
	}

	inline static int32_t get_offset_of_SpeedShooter_7() { return static_cast<int32_t>(offsetof(Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97, ___SpeedShooter_7)); }
	inline float get_SpeedShooter_7() const { return ___SpeedShooter_7; }
	inline float* get_address_of_SpeedShooter_7() { return &___SpeedShooter_7; }
	inline void set_SpeedShooter_7(float value)
	{
		___SpeedShooter_7 = value;
	}
};


// UnityEngine.Sprite
struct  Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct  AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Collider2D
struct  Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.RectTransform
struct  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072  : public Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
{
public:

public:
};

struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// UnityEngine.AudioSource
struct  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// Boss2
struct  Boss2_t1ED338A653D36E5352D40483F92F9C50B359FEBC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject[] Boss2::Parts
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___Parts_4;
	// UnityEngine.GameObject Boss2::ShotPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ShotPrefab_5;
	// System.Int32 Boss2::Side
	int32_t ___Side_6;
	// System.Int32 Boss2::MyChilds
	int32_t ___MyChilds_7;

public:
	inline static int32_t get_offset_of_Parts_4() { return static_cast<int32_t>(offsetof(Boss2_t1ED338A653D36E5352D40483F92F9C50B359FEBC, ___Parts_4)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_Parts_4() const { return ___Parts_4; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_Parts_4() { return &___Parts_4; }
	inline void set_Parts_4(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___Parts_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Parts_4), (void*)value);
	}

	inline static int32_t get_offset_of_ShotPrefab_5() { return static_cast<int32_t>(offsetof(Boss2_t1ED338A653D36E5352D40483F92F9C50B359FEBC, ___ShotPrefab_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ShotPrefab_5() const { return ___ShotPrefab_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ShotPrefab_5() { return &___ShotPrefab_5; }
	inline void set_ShotPrefab_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ShotPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ShotPrefab_5), (void*)value);
	}

	inline static int32_t get_offset_of_Side_6() { return static_cast<int32_t>(offsetof(Boss2_t1ED338A653D36E5352D40483F92F9C50B359FEBC, ___Side_6)); }
	inline int32_t get_Side_6() const { return ___Side_6; }
	inline int32_t* get_address_of_Side_6() { return &___Side_6; }
	inline void set_Side_6(int32_t value)
	{
		___Side_6 = value;
	}

	inline static int32_t get_offset_of_MyChilds_7() { return static_cast<int32_t>(offsetof(Boss2_t1ED338A653D36E5352D40483F92F9C50B359FEBC, ___MyChilds_7)); }
	inline int32_t get_MyChilds_7() const { return ___MyChilds_7; }
	inline int32_t* get_address_of_MyChilds_7() { return &___MyChilds_7; }
	inline void set_MyChilds_7(int32_t value)
	{
		___MyChilds_7 = value;
	}
};


// Boss3
struct  Boss3_t6C3889EF0A9F1C98DE071E5A8AE5B237CA014D60  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject[] Boss3::Parts
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___Parts_4;
	// UnityEngine.GameObject Boss3::ShotPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ShotPrefab_5;
	// System.Int32 Boss3::Side
	int32_t ___Side_6;
	// System.Int32 Boss3::MyChilds
	int32_t ___MyChilds_7;

public:
	inline static int32_t get_offset_of_Parts_4() { return static_cast<int32_t>(offsetof(Boss3_t6C3889EF0A9F1C98DE071E5A8AE5B237CA014D60, ___Parts_4)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_Parts_4() const { return ___Parts_4; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_Parts_4() { return &___Parts_4; }
	inline void set_Parts_4(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___Parts_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Parts_4), (void*)value);
	}

	inline static int32_t get_offset_of_ShotPrefab_5() { return static_cast<int32_t>(offsetof(Boss3_t6C3889EF0A9F1C98DE071E5A8AE5B237CA014D60, ___ShotPrefab_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ShotPrefab_5() const { return ___ShotPrefab_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ShotPrefab_5() { return &___ShotPrefab_5; }
	inline void set_ShotPrefab_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ShotPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ShotPrefab_5), (void*)value);
	}

	inline static int32_t get_offset_of_Side_6() { return static_cast<int32_t>(offsetof(Boss3_t6C3889EF0A9F1C98DE071E5A8AE5B237CA014D60, ___Side_6)); }
	inline int32_t get_Side_6() const { return ___Side_6; }
	inline int32_t* get_address_of_Side_6() { return &___Side_6; }
	inline void set_Side_6(int32_t value)
	{
		___Side_6 = value;
	}

	inline static int32_t get_offset_of_MyChilds_7() { return static_cast<int32_t>(offsetof(Boss3_t6C3889EF0A9F1C98DE071E5A8AE5B237CA014D60, ___MyChilds_7)); }
	inline int32_t get_MyChilds_7() const { return ___MyChilds_7; }
	inline int32_t* get_address_of_MyChilds_7() { return &___MyChilds_7; }
	inline void set_MyChilds_7(int32_t value)
	{
		___MyChilds_7 = value;
	}
};


// UnityEngine.BoxCollider2D
struct  BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9  : public Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722
{
public:

public:
};


// CallScene
struct  CallScene_tB4E099C9D351736775EF8EF0609DC73824F2CE94  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// ControlGame
struct  ControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Gaminho.ScenarioLimits ControlGame::ScenarioLimit
	ScenarioLimits_tF9A721A3F778BE0145B94E934952E7F4CB7BED05 * ___ScenarioLimit_4;
	// Gaminho.Level[] ControlGame::Levels
	LevelU5BU5D_t10F32731C74504D66804828AC533B31C3D098D5B* ___Levels_5;
	// UnityEngine.UI.Image ControlGame::Background
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___Background_6;
	// UnityEngine.UI.Text ControlGame::TextStart
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___TextStart_7;
	// UnityEngine.UI.Text ControlGame::TextPoints
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___TextPoints_8;
	// UnityEngine.Transform ControlGame::BarLife
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___BarLife_9;

public:
	inline static int32_t get_offset_of_ScenarioLimit_4() { return static_cast<int32_t>(offsetof(ControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96, ___ScenarioLimit_4)); }
	inline ScenarioLimits_tF9A721A3F778BE0145B94E934952E7F4CB7BED05 * get_ScenarioLimit_4() const { return ___ScenarioLimit_4; }
	inline ScenarioLimits_tF9A721A3F778BE0145B94E934952E7F4CB7BED05 ** get_address_of_ScenarioLimit_4() { return &___ScenarioLimit_4; }
	inline void set_ScenarioLimit_4(ScenarioLimits_tF9A721A3F778BE0145B94E934952E7F4CB7BED05 * value)
	{
		___ScenarioLimit_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ScenarioLimit_4), (void*)value);
	}

	inline static int32_t get_offset_of_Levels_5() { return static_cast<int32_t>(offsetof(ControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96, ___Levels_5)); }
	inline LevelU5BU5D_t10F32731C74504D66804828AC533B31C3D098D5B* get_Levels_5() const { return ___Levels_5; }
	inline LevelU5BU5D_t10F32731C74504D66804828AC533B31C3D098D5B** get_address_of_Levels_5() { return &___Levels_5; }
	inline void set_Levels_5(LevelU5BU5D_t10F32731C74504D66804828AC533B31C3D098D5B* value)
	{
		___Levels_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Levels_5), (void*)value);
	}

	inline static int32_t get_offset_of_Background_6() { return static_cast<int32_t>(offsetof(ControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96, ___Background_6)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_Background_6() const { return ___Background_6; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_Background_6() { return &___Background_6; }
	inline void set_Background_6(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___Background_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Background_6), (void*)value);
	}

	inline static int32_t get_offset_of_TextStart_7() { return static_cast<int32_t>(offsetof(ControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96, ___TextStart_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_TextStart_7() const { return ___TextStart_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_TextStart_7() { return &___TextStart_7; }
	inline void set_TextStart_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___TextStart_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TextStart_7), (void*)value);
	}

	inline static int32_t get_offset_of_TextPoints_8() { return static_cast<int32_t>(offsetof(ControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96, ___TextPoints_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_TextPoints_8() const { return ___TextPoints_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_TextPoints_8() { return &___TextPoints_8; }
	inline void set_TextPoints_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___TextPoints_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TextPoints_8), (void*)value);
	}

	inline static int32_t get_offset_of_BarLife_9() { return static_cast<int32_t>(offsetof(ControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96, ___BarLife_9)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_BarLife_9() const { return ___BarLife_9; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_BarLife_9() { return &___BarLife_9; }
	inline void set_BarLife_9(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___BarLife_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BarLife_9), (void*)value);
	}
};


// ControlGhost
struct  ControlGhost_tF5A4C0EF0DE41C54667C7FAAF7CC7DDA8C815F51  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// ControlGame ControlGhost::controlGame
	ControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96 * ___controlGame_4;
	// UnityEngine.GameObject ControlGhost::Shield
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Shield_5;
	// UnityEngine.GameObject ControlGhost::Explosion
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Explosion_6;
	// Gaminho.Shot[] ControlGhost::Shots
	ShotU5BU5D_tA9C3ACB6B6065E328A62CFECAE87D4668B074614* ___Shots_7;
	// System.Boolean ControlGhost::shooting
	bool ___shooting_8;

public:
	inline static int32_t get_offset_of_controlGame_4() { return static_cast<int32_t>(offsetof(ControlGhost_tF5A4C0EF0DE41C54667C7FAAF7CC7DDA8C815F51, ___controlGame_4)); }
	inline ControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96 * get_controlGame_4() const { return ___controlGame_4; }
	inline ControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96 ** get_address_of_controlGame_4() { return &___controlGame_4; }
	inline void set_controlGame_4(ControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96 * value)
	{
		___controlGame_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controlGame_4), (void*)value);
	}

	inline static int32_t get_offset_of_Shield_5() { return static_cast<int32_t>(offsetof(ControlGhost_tF5A4C0EF0DE41C54667C7FAAF7CC7DDA8C815F51, ___Shield_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Shield_5() const { return ___Shield_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Shield_5() { return &___Shield_5; }
	inline void set_Shield_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Shield_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Shield_5), (void*)value);
	}

	inline static int32_t get_offset_of_Explosion_6() { return static_cast<int32_t>(offsetof(ControlGhost_tF5A4C0EF0DE41C54667C7FAAF7CC7DDA8C815F51, ___Explosion_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Explosion_6() const { return ___Explosion_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Explosion_6() { return &___Explosion_6; }
	inline void set_Explosion_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Explosion_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Explosion_6), (void*)value);
	}

	inline static int32_t get_offset_of_Shots_7() { return static_cast<int32_t>(offsetof(ControlGhost_tF5A4C0EF0DE41C54667C7FAAF7CC7DDA8C815F51, ___Shots_7)); }
	inline ShotU5BU5D_tA9C3ACB6B6065E328A62CFECAE87D4668B074614* get_Shots_7() const { return ___Shots_7; }
	inline ShotU5BU5D_tA9C3ACB6B6065E328A62CFECAE87D4668B074614** get_address_of_Shots_7() { return &___Shots_7; }
	inline void set_Shots_7(ShotU5BU5D_tA9C3ACB6B6065E328A62CFECAE87D4668B074614* value)
	{
		___Shots_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Shots_7), (void*)value);
	}

	inline static int32_t get_offset_of_shooting_8() { return static_cast<int32_t>(offsetof(ControlGhost_tF5A4C0EF0DE41C54667C7FAAF7CC7DDA8C815F51, ___shooting_8)); }
	inline bool get_shooting_8() const { return ___shooting_8; }
	inline bool* get_address_of_shooting_8() { return &___shooting_8; }
	inline void set_shooting_8(bool value)
	{
		___shooting_8 = value;
	}
};


// ControlShip
struct  ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single ControlShip::Velocity
	float ___Velocity_4;
	// System.Single ControlShip::SpeedRotation
	float ___SpeedRotation_5;
	// ControlGame ControlShip::controlGame
	ControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96 * ___controlGame_6;
	// Life ControlShip::life
	Life_tFA6AEBF0D44789AAFC7B4542C83AF07B9D97EA13 * ___life_7;
	// UnityEngine.GameObject ControlShip::MotorAnimation
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___MotorAnimation_8;
	// UnityEngine.GameObject ControlShip::Shield
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Shield_9;
	// UnityEngine.GameObject ControlShip::Explosion
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Explosion_10;
	// Gaminho.Shot[] ControlShip::Shots
	ShotU5BU5D_tA9C3ACB6B6065E328A62CFECAE87D4668B074614* ___Shots_11;
	// UnityEngine.UI.Image ControlShip::ShieldBar
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___ShieldBar_12;
	// UnityEngine.Vector3 ControlShip::startPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___startPos_13;
	// System.Boolean ControlShip::shooting
	bool ___shooting_14;
	// System.Int32 ControlShip::lifeShield
	int32_t ___lifeShield_15;

public:
	inline static int32_t get_offset_of_Velocity_4() { return static_cast<int32_t>(offsetof(ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8, ___Velocity_4)); }
	inline float get_Velocity_4() const { return ___Velocity_4; }
	inline float* get_address_of_Velocity_4() { return &___Velocity_4; }
	inline void set_Velocity_4(float value)
	{
		___Velocity_4 = value;
	}

	inline static int32_t get_offset_of_SpeedRotation_5() { return static_cast<int32_t>(offsetof(ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8, ___SpeedRotation_5)); }
	inline float get_SpeedRotation_5() const { return ___SpeedRotation_5; }
	inline float* get_address_of_SpeedRotation_5() { return &___SpeedRotation_5; }
	inline void set_SpeedRotation_5(float value)
	{
		___SpeedRotation_5 = value;
	}

	inline static int32_t get_offset_of_controlGame_6() { return static_cast<int32_t>(offsetof(ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8, ___controlGame_6)); }
	inline ControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96 * get_controlGame_6() const { return ___controlGame_6; }
	inline ControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96 ** get_address_of_controlGame_6() { return &___controlGame_6; }
	inline void set_controlGame_6(ControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96 * value)
	{
		___controlGame_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controlGame_6), (void*)value);
	}

	inline static int32_t get_offset_of_life_7() { return static_cast<int32_t>(offsetof(ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8, ___life_7)); }
	inline Life_tFA6AEBF0D44789AAFC7B4542C83AF07B9D97EA13 * get_life_7() const { return ___life_7; }
	inline Life_tFA6AEBF0D44789AAFC7B4542C83AF07B9D97EA13 ** get_address_of_life_7() { return &___life_7; }
	inline void set_life_7(Life_tFA6AEBF0D44789AAFC7B4542C83AF07B9D97EA13 * value)
	{
		___life_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___life_7), (void*)value);
	}

	inline static int32_t get_offset_of_MotorAnimation_8() { return static_cast<int32_t>(offsetof(ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8, ___MotorAnimation_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_MotorAnimation_8() const { return ___MotorAnimation_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_MotorAnimation_8() { return &___MotorAnimation_8; }
	inline void set_MotorAnimation_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___MotorAnimation_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MotorAnimation_8), (void*)value);
	}

	inline static int32_t get_offset_of_Shield_9() { return static_cast<int32_t>(offsetof(ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8, ___Shield_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Shield_9() const { return ___Shield_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Shield_9() { return &___Shield_9; }
	inline void set_Shield_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Shield_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Shield_9), (void*)value);
	}

	inline static int32_t get_offset_of_Explosion_10() { return static_cast<int32_t>(offsetof(ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8, ___Explosion_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Explosion_10() const { return ___Explosion_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Explosion_10() { return &___Explosion_10; }
	inline void set_Explosion_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Explosion_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Explosion_10), (void*)value);
	}

	inline static int32_t get_offset_of_Shots_11() { return static_cast<int32_t>(offsetof(ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8, ___Shots_11)); }
	inline ShotU5BU5D_tA9C3ACB6B6065E328A62CFECAE87D4668B074614* get_Shots_11() const { return ___Shots_11; }
	inline ShotU5BU5D_tA9C3ACB6B6065E328A62CFECAE87D4668B074614** get_address_of_Shots_11() { return &___Shots_11; }
	inline void set_Shots_11(ShotU5BU5D_tA9C3ACB6B6065E328A62CFECAE87D4668B074614* value)
	{
		___Shots_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Shots_11), (void*)value);
	}

	inline static int32_t get_offset_of_ShieldBar_12() { return static_cast<int32_t>(offsetof(ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8, ___ShieldBar_12)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_ShieldBar_12() const { return ___ShieldBar_12; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_ShieldBar_12() { return &___ShieldBar_12; }
	inline void set_ShieldBar_12(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___ShieldBar_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ShieldBar_12), (void*)value);
	}

	inline static int32_t get_offset_of_startPos_13() { return static_cast<int32_t>(offsetof(ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8, ___startPos_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_startPos_13() const { return ___startPos_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_startPos_13() { return &___startPos_13; }
	inline void set_startPos_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___startPos_13 = value;
	}

	inline static int32_t get_offset_of_shooting_14() { return static_cast<int32_t>(offsetof(ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8, ___shooting_14)); }
	inline bool get_shooting_14() const { return ___shooting_14; }
	inline bool* get_address_of_shooting_14() { return &___shooting_14; }
	inline void set_shooting_14(bool value)
	{
		___shooting_14 = value;
	}

	inline static int32_t get_offset_of_lifeShield_15() { return static_cast<int32_t>(offsetof(ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8, ___lifeShield_15)); }
	inline int32_t get_lifeShield_15() const { return ___lifeShield_15; }
	inline int32_t* get_address_of_lifeShield_15() { return &___lifeShield_15; }
	inline void set_lifeShield_15(int32_t value)
	{
		___lifeShield_15 = value;
	}
};


// ControlStart
struct  ControlStart_t461A8F5392E3967B1B6B5520351D75DEFD71B1B0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text ControlStart::Record
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Record_4;

public:
	inline static int32_t get_offset_of_Record_4() { return static_cast<int32_t>(offsetof(ControlStart_t461A8F5392E3967B1B6B5520351D75DEFD71B1B0, ___Record_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Record_4() const { return ___Record_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Record_4() { return &___Record_4; }
	inline void set_Record_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Record_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Record_4), (void*)value);
	}
};


// DestroyTime
struct  DestroyTime_t24806801B4F6EA764796D3C1789E9D157D0023D2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single DestroyTime::delay
	float ___delay_4;

public:
	inline static int32_t get_offset_of_delay_4() { return static_cast<int32_t>(offsetof(DestroyTime_t24806801B4F6EA764796D3C1789E9D157D0023D2, ___delay_4)); }
	inline float get_delay_4() const { return ___delay_4; }
	inline float* get_address_of_delay_4() { return &___delay_4; }
	inline void set_delay_4(float value)
	{
		___delay_4 = value;
	}
};


// Enemy
struct  Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Gaminho.Statics/TYPE_ENEMY Enemy::MyType
	int32_t ___MyType_4;
	// Life Enemy::_life
	Life_tFA6AEBF0D44789AAFC7B4542C83AF07B9D97EA13 * ____life_5;
	// UnityEngine.GameObject Enemy::Explosion
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Explosion_6;
	// System.Int32 Enemy::Damage
	int32_t ___Damage_7;
	// Gaminho.Shot Enemy::shot
	Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 * ___shot_8;
	// UnityEngine.GameObject Enemy::ItemDrop
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ItemDrop_9;
	// System.Boolean Enemy::dodgeHability
	bool ___dodgeHability_10;
	// UnityEngine.RectTransform Enemy::rectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___rectTransform_11;

public:
	inline static int32_t get_offset_of_MyType_4() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___MyType_4)); }
	inline int32_t get_MyType_4() const { return ___MyType_4; }
	inline int32_t* get_address_of_MyType_4() { return &___MyType_4; }
	inline void set_MyType_4(int32_t value)
	{
		___MyType_4 = value;
	}

	inline static int32_t get_offset_of__life_5() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ____life_5)); }
	inline Life_tFA6AEBF0D44789AAFC7B4542C83AF07B9D97EA13 * get__life_5() const { return ____life_5; }
	inline Life_tFA6AEBF0D44789AAFC7B4542C83AF07B9D97EA13 ** get_address_of__life_5() { return &____life_5; }
	inline void set__life_5(Life_tFA6AEBF0D44789AAFC7B4542C83AF07B9D97EA13 * value)
	{
		____life_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____life_5), (void*)value);
	}

	inline static int32_t get_offset_of_Explosion_6() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___Explosion_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Explosion_6() const { return ___Explosion_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Explosion_6() { return &___Explosion_6; }
	inline void set_Explosion_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Explosion_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Explosion_6), (void*)value);
	}

	inline static int32_t get_offset_of_Damage_7() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___Damage_7)); }
	inline int32_t get_Damage_7() const { return ___Damage_7; }
	inline int32_t* get_address_of_Damage_7() { return &___Damage_7; }
	inline void set_Damage_7(int32_t value)
	{
		___Damage_7 = value;
	}

	inline static int32_t get_offset_of_shot_8() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___shot_8)); }
	inline Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 * get_shot_8() const { return ___shot_8; }
	inline Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 ** get_address_of_shot_8() { return &___shot_8; }
	inline void set_shot_8(Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 * value)
	{
		___shot_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shot_8), (void*)value);
	}

	inline static int32_t get_offset_of_ItemDrop_9() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___ItemDrop_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ItemDrop_9() const { return ___ItemDrop_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ItemDrop_9() { return &___ItemDrop_9; }
	inline void set_ItemDrop_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ItemDrop_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ItemDrop_9), (void*)value);
	}

	inline static int32_t get_offset_of_dodgeHability_10() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___dodgeHability_10)); }
	inline bool get_dodgeHability_10() const { return ___dodgeHability_10; }
	inline bool* get_address_of_dodgeHability_10() { return &___dodgeHability_10; }
	inline void set_dodgeHability_10(bool value)
	{
		___dodgeHability_10 = value;
	}

	inline static int32_t get_offset_of_rectTransform_11() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___rectTransform_11)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_rectTransform_11() const { return ___rectTransform_11; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_rectTransform_11() { return &___rectTransform_11; }
	inline void set_rectTransform_11(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___rectTransform_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rectTransform_11), (void*)value);
	}
};


// EnemyControl
struct  EnemyControl_t8354619B7C2514F856067E693DC1914D07EE53D9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// ControlGame EnemyControl::controlGame
	ControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96 * ___controlGame_4;
	// UnityEngine.AudioClip EnemyControl::AudioBoss
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___AudioBoss_5;
	// UnityEngine.Transform EnemyControl::LocalToCreateEnemies
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___LocalToCreateEnemies_6;

public:
	inline static int32_t get_offset_of_controlGame_4() { return static_cast<int32_t>(offsetof(EnemyControl_t8354619B7C2514F856067E693DC1914D07EE53D9, ___controlGame_4)); }
	inline ControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96 * get_controlGame_4() const { return ___controlGame_4; }
	inline ControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96 ** get_address_of_controlGame_4() { return &___controlGame_4; }
	inline void set_controlGame_4(ControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96 * value)
	{
		___controlGame_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controlGame_4), (void*)value);
	}

	inline static int32_t get_offset_of_AudioBoss_5() { return static_cast<int32_t>(offsetof(EnemyControl_t8354619B7C2514F856067E693DC1914D07EE53D9, ___AudioBoss_5)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_AudioBoss_5() const { return ___AudioBoss_5; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_AudioBoss_5() { return &___AudioBoss_5; }
	inline void set_AudioBoss_5(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___AudioBoss_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AudioBoss_5), (void*)value);
	}

	inline static int32_t get_offset_of_LocalToCreateEnemies_6() { return static_cast<int32_t>(offsetof(EnemyControl_t8354619B7C2514F856067E693DC1914D07EE53D9, ___LocalToCreateEnemies_6)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_LocalToCreateEnemies_6() const { return ___LocalToCreateEnemies_6; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_LocalToCreateEnemies_6() { return &___LocalToCreateEnemies_6; }
	inline void set_LocalToCreateEnemies_6(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___LocalToCreateEnemies_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LocalToCreateEnemies_6), (void*)value);
	}
};


// Explosion
struct  Explosion_t03ACA9CD2F46E4913DC45A3EA50B165F4662DCED  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Sprite[] Explosion::Sprites
	SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* ___Sprites_4;
	// UnityEngine.UI.Image Explosion::image
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___image_5;

public:
	inline static int32_t get_offset_of_Sprites_4() { return static_cast<int32_t>(offsetof(Explosion_t03ACA9CD2F46E4913DC45A3EA50B165F4662DCED, ___Sprites_4)); }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* get_Sprites_4() const { return ___Sprites_4; }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77** get_address_of_Sprites_4() { return &___Sprites_4; }
	inline void set_Sprites_4(SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* value)
	{
		___Sprites_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Sprites_4), (void*)value);
	}

	inline static int32_t get_offset_of_image_5() { return static_cast<int32_t>(offsetof(Explosion_t03ACA9CD2F46E4913DC45A3EA50B165F4662DCED, ___image_5)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_image_5() const { return ___image_5; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_image_5() { return &___image_5; }
	inline void set_image_5(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___image_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___image_5), (void*)value);
	}
};


// Ghost
struct  Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Ghost::delayToFollow
	float ___delayToFollow_4;
	// System.Single Ghost::recordFrequency
	float ___recordFrequency_5;
	// UnityEngine.Vector3 Ghost::positionOffset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positionOffset_6;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> Ghost::position
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___position_7;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> Ghost::rotation
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___rotation_8;
	// System.Single Ghost::timer
	float ___timer_9;
	// System.Int32 Ghost::lastPosition
	int32_t ___lastPosition_10;
	// UnityEngine.Vector3 Ghost::initialPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___initialPos_11;
	// UnityEngine.Vector3 Ghost::initialRot
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___initialRot_12;

public:
	inline static int32_t get_offset_of_delayToFollow_4() { return static_cast<int32_t>(offsetof(Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7, ___delayToFollow_4)); }
	inline float get_delayToFollow_4() const { return ___delayToFollow_4; }
	inline float* get_address_of_delayToFollow_4() { return &___delayToFollow_4; }
	inline void set_delayToFollow_4(float value)
	{
		___delayToFollow_4 = value;
	}

	inline static int32_t get_offset_of_recordFrequency_5() { return static_cast<int32_t>(offsetof(Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7, ___recordFrequency_5)); }
	inline float get_recordFrequency_5() const { return ___recordFrequency_5; }
	inline float* get_address_of_recordFrequency_5() { return &___recordFrequency_5; }
	inline void set_recordFrequency_5(float value)
	{
		___recordFrequency_5 = value;
	}

	inline static int32_t get_offset_of_positionOffset_6() { return static_cast<int32_t>(offsetof(Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7, ___positionOffset_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positionOffset_6() const { return ___positionOffset_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positionOffset_6() { return &___positionOffset_6; }
	inline void set_positionOffset_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positionOffset_6 = value;
	}

	inline static int32_t get_offset_of_position_7() { return static_cast<int32_t>(offsetof(Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7, ___position_7)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_position_7() const { return ___position_7; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_position_7() { return &___position_7; }
	inline void set_position_7(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___position_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___position_7), (void*)value);
	}

	inline static int32_t get_offset_of_rotation_8() { return static_cast<int32_t>(offsetof(Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7, ___rotation_8)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_rotation_8() const { return ___rotation_8; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_rotation_8() { return &___rotation_8; }
	inline void set_rotation_8(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___rotation_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rotation_8), (void*)value);
	}

	inline static int32_t get_offset_of_timer_9() { return static_cast<int32_t>(offsetof(Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7, ___timer_9)); }
	inline float get_timer_9() const { return ___timer_9; }
	inline float* get_address_of_timer_9() { return &___timer_9; }
	inline void set_timer_9(float value)
	{
		___timer_9 = value;
	}

	inline static int32_t get_offset_of_lastPosition_10() { return static_cast<int32_t>(offsetof(Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7, ___lastPosition_10)); }
	inline int32_t get_lastPosition_10() const { return ___lastPosition_10; }
	inline int32_t* get_address_of_lastPosition_10() { return &___lastPosition_10; }
	inline void set_lastPosition_10(int32_t value)
	{
		___lastPosition_10 = value;
	}

	inline static int32_t get_offset_of_initialPos_11() { return static_cast<int32_t>(offsetof(Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7, ___initialPos_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_initialPos_11() const { return ___initialPos_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_initialPos_11() { return &___initialPos_11; }
	inline void set_initialPos_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___initialPos_11 = value;
	}

	inline static int32_t get_offset_of_initialRot_12() { return static_cast<int32_t>(offsetof(Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7, ___initialRot_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_initialRot_12() const { return ___initialRot_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_initialRot_12() { return &___initialRot_12; }
	inline void set_initialRot_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___initialRot_12 = value;
	}
};


// ItemDrop
struct  ItemDrop_tC904B7BCF81A545D1E6A018FC757704E7AE49399  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Gaminho.Statics/TYPE_DROP ItemDrop::DropType
	int32_t ___DropType_4;

public:
	inline static int32_t get_offset_of_DropType_4() { return static_cast<int32_t>(offsetof(ItemDrop_tC904B7BCF81A545D1E6A018FC757704E7AE49399, ___DropType_4)); }
	inline int32_t get_DropType_4() const { return ___DropType_4; }
	inline int32_t* get_address_of_DropType_4() { return &___DropType_4; }
	inline void set_DropType_4(int32_t value)
	{
		___DropType_4 = value;
	}
};


// Life
struct  Life_tFA6AEBF0D44789AAFC7B4542C83AF07B9D97EA13  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 Life::life
	int32_t ___life_4;
	// UnityEngine.Events.UnityEvent Life::RunWhenDies
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___RunWhenDies_5;
	// System.Boolean Life::ControlCollision
	bool ___ControlCollision_6;
	// UnityEngine.GameObject Life::Explosion
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Explosion_7;

public:
	inline static int32_t get_offset_of_life_4() { return static_cast<int32_t>(offsetof(Life_tFA6AEBF0D44789AAFC7B4542C83AF07B9D97EA13, ___life_4)); }
	inline int32_t get_life_4() const { return ___life_4; }
	inline int32_t* get_address_of_life_4() { return &___life_4; }
	inline void set_life_4(int32_t value)
	{
		___life_4 = value;
	}

	inline static int32_t get_offset_of_RunWhenDies_5() { return static_cast<int32_t>(offsetof(Life_tFA6AEBF0D44789AAFC7B4542C83AF07B9D97EA13, ___RunWhenDies_5)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_RunWhenDies_5() const { return ___RunWhenDies_5; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_RunWhenDies_5() { return &___RunWhenDies_5; }
	inline void set_RunWhenDies_5(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___RunWhenDies_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RunWhenDies_5), (void*)value);
	}

	inline static int32_t get_offset_of_ControlCollision_6() { return static_cast<int32_t>(offsetof(Life_tFA6AEBF0D44789AAFC7B4542C83AF07B9D97EA13, ___ControlCollision_6)); }
	inline bool get_ControlCollision_6() const { return ___ControlCollision_6; }
	inline bool* get_address_of_ControlCollision_6() { return &___ControlCollision_6; }
	inline void set_ControlCollision_6(bool value)
	{
		___ControlCollision_6 = value;
	}

	inline static int32_t get_offset_of_Explosion_7() { return static_cast<int32_t>(offsetof(Life_tFA6AEBF0D44789AAFC7B4542C83AF07B9D97EA13, ___Explosion_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Explosion_7() const { return ___Explosion_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Explosion_7() { return &___Explosion_7; }
	inline void set_Explosion_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Explosion_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Explosion_7), (void*)value);
	}
};


// Flux.ReadMe
struct  ReadMe_t9366373850683E50A4A0569A3E9BCD911C00609E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// RecordControl
struct  RecordControl_t42596BF11E14001F3D303939B7A1B1437DC06FC2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text RecordControl::TxtRecord
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___TxtRecord_4;
	// UnityEngine.UI.InputField RecordControl::InputRecord
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___InputRecord_5;

public:
	inline static int32_t get_offset_of_TxtRecord_4() { return static_cast<int32_t>(offsetof(RecordControl_t42596BF11E14001F3D303939B7A1B1437DC06FC2, ___TxtRecord_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_TxtRecord_4() const { return ___TxtRecord_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_TxtRecord_4() { return &___TxtRecord_4; }
	inline void set_TxtRecord_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___TxtRecord_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TxtRecord_4), (void*)value);
	}

	inline static int32_t get_offset_of_InputRecord_5() { return static_cast<int32_t>(offsetof(RecordControl_t42596BF11E14001F3D303939B7A1B1437DC06FC2, ___InputRecord_5)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_InputRecord_5() const { return ___InputRecord_5; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_InputRecord_5() { return &___InputRecord_5; }
	inline void set_InputRecord_5(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___InputRecord_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InputRecord_5), (void*)value);
	}
};


// SaveLoadData
struct  SaveLoadData_t01436979ECF432B45A9679B9AE27AB0655EF70AE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// PlayerData SaveLoadData::playerData
	PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * ___playerData_4;
	// System.String SaveLoadData::path
	String_t* ___path_5;
	// System.String SaveLoadData::persistentPath
	String_t* ___persistentPath_6;

public:
	inline static int32_t get_offset_of_playerData_4() { return static_cast<int32_t>(offsetof(SaveLoadData_t01436979ECF432B45A9679B9AE27AB0655EF70AE, ___playerData_4)); }
	inline PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * get_playerData_4() const { return ___playerData_4; }
	inline PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 ** get_address_of_playerData_4() { return &___playerData_4; }
	inline void set_playerData_4(PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * value)
	{
		___playerData_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerData_4), (void*)value);
	}

	inline static int32_t get_offset_of_path_5() { return static_cast<int32_t>(offsetof(SaveLoadData_t01436979ECF432B45A9679B9AE27AB0655EF70AE, ___path_5)); }
	inline String_t* get_path_5() const { return ___path_5; }
	inline String_t** get_address_of_path_5() { return &___path_5; }
	inline void set_path_5(String_t* value)
	{
		___path_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___path_5), (void*)value);
	}

	inline static int32_t get_offset_of_persistentPath_6() { return static_cast<int32_t>(offsetof(SaveLoadData_t01436979ECF432B45A9679B9AE27AB0655EF70AE, ___persistentPath_6)); }
	inline String_t* get_persistentPath_6() const { return ___persistentPath_6; }
	inline String_t** get_address_of_persistentPath_6() { return &___persistentPath_6; }
	inline void set_persistentPath_6(String_t* value)
	{
		___persistentPath_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___persistentPath_6), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
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
struct  Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
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


// UnityEngine.UI.InputField
struct  InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_TextComponent_22;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_Placeholder_23;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_24;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_25;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_26;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_27;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_28;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_29;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_30;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_31;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnEndEdit
	SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 * ___m_OnEndEdit_32;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 * ___m_OnValueChanged_33;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F * ___m_OnValidateInput_34;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_CaretColor_35;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_36;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectionColor_37;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_38;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_39;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_40;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_41;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateOnSelect
	bool ___m_ShouldActivateOnSelect_42;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_43;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_44;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___caretRectTrans_45;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_CursorVerts_46;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_InputTextCache_47;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CachedInputRenderer_48;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_49;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_Mesh_50;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_51;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_52;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_53;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_54;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_57;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_BlinkCoroutine_58;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_59;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_60;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_61;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_DragCoroutine_62;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_63;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_64;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_65;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * ___m_WaitForSecondsRealtime_66;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_67;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___m_ProcessingEvent_69;

public:
	inline static int32_t get_offset_of_m_Keyboard_20() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Keyboard_20)); }
	inline TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * get_m_Keyboard_20() const { return ___m_Keyboard_20; }
	inline TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E ** get_address_of_m_Keyboard_20() { return &___m_Keyboard_20; }
	inline void set_m_Keyboard_20(TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * value)
	{
		___m_Keyboard_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Keyboard_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextComponent_22() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_TextComponent_22)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_TextComponent_22() const { return ___m_TextComponent_22; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_TextComponent_22() { return &___m_TextComponent_22; }
	inline void set_m_TextComponent_22(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_TextComponent_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextComponent_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_Placeholder_23() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Placeholder_23)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_Placeholder_23() const { return ___m_Placeholder_23; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_Placeholder_23() { return &___m_Placeholder_23; }
	inline void set_m_Placeholder_23(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_Placeholder_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Placeholder_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContentType_24() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ContentType_24)); }
	inline int32_t get_m_ContentType_24() const { return ___m_ContentType_24; }
	inline int32_t* get_address_of_m_ContentType_24() { return &___m_ContentType_24; }
	inline void set_m_ContentType_24(int32_t value)
	{
		___m_ContentType_24 = value;
	}

	inline static int32_t get_offset_of_m_InputType_25() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_InputType_25)); }
	inline int32_t get_m_InputType_25() const { return ___m_InputType_25; }
	inline int32_t* get_address_of_m_InputType_25() { return &___m_InputType_25; }
	inline void set_m_InputType_25(int32_t value)
	{
		___m_InputType_25 = value;
	}

	inline static int32_t get_offset_of_m_AsteriskChar_26() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_AsteriskChar_26)); }
	inline Il2CppChar get_m_AsteriskChar_26() const { return ___m_AsteriskChar_26; }
	inline Il2CppChar* get_address_of_m_AsteriskChar_26() { return &___m_AsteriskChar_26; }
	inline void set_m_AsteriskChar_26(Il2CppChar value)
	{
		___m_AsteriskChar_26 = value;
	}

	inline static int32_t get_offset_of_m_KeyboardType_27() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_KeyboardType_27)); }
	inline int32_t get_m_KeyboardType_27() const { return ___m_KeyboardType_27; }
	inline int32_t* get_address_of_m_KeyboardType_27() { return &___m_KeyboardType_27; }
	inline void set_m_KeyboardType_27(int32_t value)
	{
		___m_KeyboardType_27 = value;
	}

	inline static int32_t get_offset_of_m_LineType_28() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_LineType_28)); }
	inline int32_t get_m_LineType_28() const { return ___m_LineType_28; }
	inline int32_t* get_address_of_m_LineType_28() { return &___m_LineType_28; }
	inline void set_m_LineType_28(int32_t value)
	{
		___m_LineType_28 = value;
	}

	inline static int32_t get_offset_of_m_HideMobileInput_29() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_HideMobileInput_29)); }
	inline bool get_m_HideMobileInput_29() const { return ___m_HideMobileInput_29; }
	inline bool* get_address_of_m_HideMobileInput_29() { return &___m_HideMobileInput_29; }
	inline void set_m_HideMobileInput_29(bool value)
	{
		___m_HideMobileInput_29 = value;
	}

	inline static int32_t get_offset_of_m_CharacterValidation_30() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CharacterValidation_30)); }
	inline int32_t get_m_CharacterValidation_30() const { return ___m_CharacterValidation_30; }
	inline int32_t* get_address_of_m_CharacterValidation_30() { return &___m_CharacterValidation_30; }
	inline void set_m_CharacterValidation_30(int32_t value)
	{
		___m_CharacterValidation_30 = value;
	}

	inline static int32_t get_offset_of_m_CharacterLimit_31() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CharacterLimit_31)); }
	inline int32_t get_m_CharacterLimit_31() const { return ___m_CharacterLimit_31; }
	inline int32_t* get_address_of_m_CharacterLimit_31() { return &___m_CharacterLimit_31; }
	inline void set_m_CharacterLimit_31(int32_t value)
	{
		___m_CharacterLimit_31 = value;
	}

	inline static int32_t get_offset_of_m_OnEndEdit_32() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OnEndEdit_32)); }
	inline SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 * get_m_OnEndEdit_32() const { return ___m_OnEndEdit_32; }
	inline SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 ** get_address_of_m_OnEndEdit_32() { return &___m_OnEndEdit_32; }
	inline void set_m_OnEndEdit_32(SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 * value)
	{
		___m_OnEndEdit_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnEndEdit_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_33() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OnValueChanged_33)); }
	inline OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 * get_m_OnValueChanged_33() const { return ___m_OnValueChanged_33; }
	inline OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 ** get_address_of_m_OnValueChanged_33() { return &___m_OnValueChanged_33; }
	inline void set_m_OnValueChanged_33(OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 * value)
	{
		___m_OnValueChanged_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValidateInput_34() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OnValidateInput_34)); }
	inline OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F * get_m_OnValidateInput_34() const { return ___m_OnValidateInput_34; }
	inline OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F ** get_address_of_m_OnValidateInput_34() { return &___m_OnValidateInput_34; }
	inline void set_m_OnValidateInput_34(OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F * value)
	{
		___m_OnValidateInput_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValidateInput_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaretColor_35() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretColor_35)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_CaretColor_35() const { return ___m_CaretColor_35; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_CaretColor_35() { return &___m_CaretColor_35; }
	inline void set_m_CaretColor_35(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_CaretColor_35 = value;
	}

	inline static int32_t get_offset_of_m_CustomCaretColor_36() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CustomCaretColor_36)); }
	inline bool get_m_CustomCaretColor_36() const { return ___m_CustomCaretColor_36; }
	inline bool* get_address_of_m_CustomCaretColor_36() { return &___m_CustomCaretColor_36; }
	inline void set_m_CustomCaretColor_36(bool value)
	{
		___m_CustomCaretColor_36 = value;
	}

	inline static int32_t get_offset_of_m_SelectionColor_37() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_SelectionColor_37)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectionColor_37() const { return ___m_SelectionColor_37; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectionColor_37() { return &___m_SelectionColor_37; }
	inline void set_m_SelectionColor_37(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectionColor_37 = value;
	}

	inline static int32_t get_offset_of_m_Text_38() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Text_38)); }
	inline String_t* get_m_Text_38() const { return ___m_Text_38; }
	inline String_t** get_address_of_m_Text_38() { return &___m_Text_38; }
	inline void set_m_Text_38(String_t* value)
	{
		___m_Text_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaretBlinkRate_39() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretBlinkRate_39)); }
	inline float get_m_CaretBlinkRate_39() const { return ___m_CaretBlinkRate_39; }
	inline float* get_address_of_m_CaretBlinkRate_39() { return &___m_CaretBlinkRate_39; }
	inline void set_m_CaretBlinkRate_39(float value)
	{
		___m_CaretBlinkRate_39 = value;
	}

	inline static int32_t get_offset_of_m_CaretWidth_40() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretWidth_40)); }
	inline int32_t get_m_CaretWidth_40() const { return ___m_CaretWidth_40; }
	inline int32_t* get_address_of_m_CaretWidth_40() { return &___m_CaretWidth_40; }
	inline void set_m_CaretWidth_40(int32_t value)
	{
		___m_CaretWidth_40 = value;
	}

	inline static int32_t get_offset_of_m_ReadOnly_41() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ReadOnly_41)); }
	inline bool get_m_ReadOnly_41() const { return ___m_ReadOnly_41; }
	inline bool* get_address_of_m_ReadOnly_41() { return &___m_ReadOnly_41; }
	inline void set_m_ReadOnly_41(bool value)
	{
		___m_ReadOnly_41 = value;
	}

	inline static int32_t get_offset_of_m_ShouldActivateOnSelect_42() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ShouldActivateOnSelect_42)); }
	inline bool get_m_ShouldActivateOnSelect_42() const { return ___m_ShouldActivateOnSelect_42; }
	inline bool* get_address_of_m_ShouldActivateOnSelect_42() { return &___m_ShouldActivateOnSelect_42; }
	inline void set_m_ShouldActivateOnSelect_42(bool value)
	{
		___m_ShouldActivateOnSelect_42 = value;
	}

	inline static int32_t get_offset_of_m_CaretPosition_43() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretPosition_43)); }
	inline int32_t get_m_CaretPosition_43() const { return ___m_CaretPosition_43; }
	inline int32_t* get_address_of_m_CaretPosition_43() { return &___m_CaretPosition_43; }
	inline void set_m_CaretPosition_43(int32_t value)
	{
		___m_CaretPosition_43 = value;
	}

	inline static int32_t get_offset_of_m_CaretSelectPosition_44() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretSelectPosition_44)); }
	inline int32_t get_m_CaretSelectPosition_44() const { return ___m_CaretSelectPosition_44; }
	inline int32_t* get_address_of_m_CaretSelectPosition_44() { return &___m_CaretSelectPosition_44; }
	inline void set_m_CaretSelectPosition_44(int32_t value)
	{
		___m_CaretSelectPosition_44 = value;
	}

	inline static int32_t get_offset_of_caretRectTrans_45() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___caretRectTrans_45)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_caretRectTrans_45() const { return ___caretRectTrans_45; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_caretRectTrans_45() { return &___caretRectTrans_45; }
	inline void set_caretRectTrans_45(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___caretRectTrans_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___caretRectTrans_45), (void*)value);
	}

	inline static int32_t get_offset_of_m_CursorVerts_46() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CursorVerts_46)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_CursorVerts_46() const { return ___m_CursorVerts_46; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_CursorVerts_46() { return &___m_CursorVerts_46; }
	inline void set_m_CursorVerts_46(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_CursorVerts_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CursorVerts_46), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputTextCache_47() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_InputTextCache_47)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_InputTextCache_47() const { return ___m_InputTextCache_47; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_InputTextCache_47() { return &___m_InputTextCache_47; }
	inline void set_m_InputTextCache_47(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_InputTextCache_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputTextCache_47), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedInputRenderer_48() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CachedInputRenderer_48)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CachedInputRenderer_48() const { return ___m_CachedInputRenderer_48; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CachedInputRenderer_48() { return &___m_CachedInputRenderer_48; }
	inline void set_m_CachedInputRenderer_48(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CachedInputRenderer_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedInputRenderer_48), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreventFontCallback_49() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_PreventFontCallback_49)); }
	inline bool get_m_PreventFontCallback_49() const { return ___m_PreventFontCallback_49; }
	inline bool* get_address_of_m_PreventFontCallback_49() { return &___m_PreventFontCallback_49; }
	inline void set_m_PreventFontCallback_49(bool value)
	{
		___m_PreventFontCallback_49 = value;
	}

	inline static int32_t get_offset_of_m_Mesh_50() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Mesh_50)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_Mesh_50() const { return ___m_Mesh_50; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_Mesh_50() { return &___m_Mesh_50; }
	inline void set_m_Mesh_50(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_Mesh_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Mesh_50), (void*)value);
	}

	inline static int32_t get_offset_of_m_AllowInput_51() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_AllowInput_51)); }
	inline bool get_m_AllowInput_51() const { return ___m_AllowInput_51; }
	inline bool* get_address_of_m_AllowInput_51() { return &___m_AllowInput_51; }
	inline void set_m_AllowInput_51(bool value)
	{
		___m_AllowInput_51 = value;
	}

	inline static int32_t get_offset_of_m_ShouldActivateNextUpdate_52() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ShouldActivateNextUpdate_52)); }
	inline bool get_m_ShouldActivateNextUpdate_52() const { return ___m_ShouldActivateNextUpdate_52; }
	inline bool* get_address_of_m_ShouldActivateNextUpdate_52() { return &___m_ShouldActivateNextUpdate_52; }
	inline void set_m_ShouldActivateNextUpdate_52(bool value)
	{
		___m_ShouldActivateNextUpdate_52 = value;
	}

	inline static int32_t get_offset_of_m_UpdateDrag_53() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_UpdateDrag_53)); }
	inline bool get_m_UpdateDrag_53() const { return ___m_UpdateDrag_53; }
	inline bool* get_address_of_m_UpdateDrag_53() { return &___m_UpdateDrag_53; }
	inline void set_m_UpdateDrag_53(bool value)
	{
		___m_UpdateDrag_53 = value;
	}

	inline static int32_t get_offset_of_m_DragPositionOutOfBounds_54() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DragPositionOutOfBounds_54)); }
	inline bool get_m_DragPositionOutOfBounds_54() const { return ___m_DragPositionOutOfBounds_54; }
	inline bool* get_address_of_m_DragPositionOutOfBounds_54() { return &___m_DragPositionOutOfBounds_54; }
	inline void set_m_DragPositionOutOfBounds_54(bool value)
	{
		___m_DragPositionOutOfBounds_54 = value;
	}

	inline static int32_t get_offset_of_m_CaretVisible_57() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretVisible_57)); }
	inline bool get_m_CaretVisible_57() const { return ___m_CaretVisible_57; }
	inline bool* get_address_of_m_CaretVisible_57() { return &___m_CaretVisible_57; }
	inline void set_m_CaretVisible_57(bool value)
	{
		___m_CaretVisible_57 = value;
	}

	inline static int32_t get_offset_of_m_BlinkCoroutine_58() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_BlinkCoroutine_58)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_BlinkCoroutine_58() const { return ___m_BlinkCoroutine_58; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_BlinkCoroutine_58() { return &___m_BlinkCoroutine_58; }
	inline void set_m_BlinkCoroutine_58(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_BlinkCoroutine_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BlinkCoroutine_58), (void*)value);
	}

	inline static int32_t get_offset_of_m_BlinkStartTime_59() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_BlinkStartTime_59)); }
	inline float get_m_BlinkStartTime_59() const { return ___m_BlinkStartTime_59; }
	inline float* get_address_of_m_BlinkStartTime_59() { return &___m_BlinkStartTime_59; }
	inline void set_m_BlinkStartTime_59(float value)
	{
		___m_BlinkStartTime_59 = value;
	}

	inline static int32_t get_offset_of_m_DrawStart_60() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DrawStart_60)); }
	inline int32_t get_m_DrawStart_60() const { return ___m_DrawStart_60; }
	inline int32_t* get_address_of_m_DrawStart_60() { return &___m_DrawStart_60; }
	inline void set_m_DrawStart_60(int32_t value)
	{
		___m_DrawStart_60 = value;
	}

	inline static int32_t get_offset_of_m_DrawEnd_61() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DrawEnd_61)); }
	inline int32_t get_m_DrawEnd_61() const { return ___m_DrawEnd_61; }
	inline int32_t* get_address_of_m_DrawEnd_61() { return &___m_DrawEnd_61; }
	inline void set_m_DrawEnd_61(int32_t value)
	{
		___m_DrawEnd_61 = value;
	}

	inline static int32_t get_offset_of_m_DragCoroutine_62() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DragCoroutine_62)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_DragCoroutine_62() const { return ___m_DragCoroutine_62; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_DragCoroutine_62() { return &___m_DragCoroutine_62; }
	inline void set_m_DragCoroutine_62(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_DragCoroutine_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DragCoroutine_62), (void*)value);
	}

	inline static int32_t get_offset_of_m_OriginalText_63() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OriginalText_63)); }
	inline String_t* get_m_OriginalText_63() const { return ___m_OriginalText_63; }
	inline String_t** get_address_of_m_OriginalText_63() { return &___m_OriginalText_63; }
	inline void set_m_OriginalText_63(String_t* value)
	{
		___m_OriginalText_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OriginalText_63), (void*)value);
	}

	inline static int32_t get_offset_of_m_WasCanceled_64() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_WasCanceled_64)); }
	inline bool get_m_WasCanceled_64() const { return ___m_WasCanceled_64; }
	inline bool* get_address_of_m_WasCanceled_64() { return &___m_WasCanceled_64; }
	inline void set_m_WasCanceled_64(bool value)
	{
		___m_WasCanceled_64 = value;
	}

	inline static int32_t get_offset_of_m_HasDoneFocusTransition_65() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_HasDoneFocusTransition_65)); }
	inline bool get_m_HasDoneFocusTransition_65() const { return ___m_HasDoneFocusTransition_65; }
	inline bool* get_address_of_m_HasDoneFocusTransition_65() { return &___m_HasDoneFocusTransition_65; }
	inline void set_m_HasDoneFocusTransition_65(bool value)
	{
		___m_HasDoneFocusTransition_65 = value;
	}

	inline static int32_t get_offset_of_m_WaitForSecondsRealtime_66() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_WaitForSecondsRealtime_66)); }
	inline WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * get_m_WaitForSecondsRealtime_66() const { return ___m_WaitForSecondsRealtime_66; }
	inline WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 ** get_address_of_m_WaitForSecondsRealtime_66() { return &___m_WaitForSecondsRealtime_66; }
	inline void set_m_WaitForSecondsRealtime_66(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * value)
	{
		___m_WaitForSecondsRealtime_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WaitForSecondsRealtime_66), (void*)value);
	}

	inline static int32_t get_offset_of_m_TouchKeyboardAllowsInPlaceEditing_67() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_TouchKeyboardAllowsInPlaceEditing_67)); }
	inline bool get_m_TouchKeyboardAllowsInPlaceEditing_67() const { return ___m_TouchKeyboardAllowsInPlaceEditing_67; }
	inline bool* get_address_of_m_TouchKeyboardAllowsInPlaceEditing_67() { return &___m_TouchKeyboardAllowsInPlaceEditing_67; }
	inline void set_m_TouchKeyboardAllowsInPlaceEditing_67(bool value)
	{
		___m_TouchKeyboardAllowsInPlaceEditing_67 = value;
	}

	inline static int32_t get_offset_of_m_ProcessingEvent_69() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ProcessingEvent_69)); }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * get_m_ProcessingEvent_69() const { return ___m_ProcessingEvent_69; }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E ** get_address_of_m_ProcessingEvent_69() { return &___m_ProcessingEvent_69; }
	inline void set_m_ProcessingEvent_69(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * value)
	{
		___m_ProcessingEvent_69 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ProcessingEvent_69), (void*)value);
	}
};

struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_StaticFields
{
public:
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___kSeparators_21;

public:
	inline static int32_t get_offset_of_kSeparators_21() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_StaticFields, ___kSeparators_21)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_kSeparators_21() const { return ___kSeparators_21; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_kSeparators_21() { return &___kSeparators_21; }
	inline void set_kSeparators_21(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___kSeparators_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kSeparators_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
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


// UnityEngine.UI.Image
struct  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
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
struct  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Gaminho.Level[]
struct LevelU5BU5D_t10F32731C74504D66804828AC533B31C3D098D5B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Level_t0F1BB2DCE2C7368CA4FEAE26F672ADB4C35C7505 * m_Items[1];

public:
	inline Level_t0F1BB2DCE2C7368CA4FEAE26F672ADB4C35C7505 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Level_t0F1BB2DCE2C7368CA4FEAE26F672ADB4C35C7505 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Level_t0F1BB2DCE2C7368CA4FEAE26F672ADB4C35C7505 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Level_t0F1BB2DCE2C7368CA4FEAE26F672ADB4C35C7505 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Level_t0F1BB2DCE2C7368CA4FEAE26F672ADB4C35C7505 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Level_t0F1BB2DCE2C7368CA4FEAE26F672ADB4C35C7505 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Gaminho.Shot[]
struct ShotU5BU5D_tA9C3ACB6B6065E328A62CFECAE87D4668B074614  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 * m_Items[1];

public:
	inline Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared (RuntimeObject * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___item0, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared (String_t* ___json0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_gshared_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_gshared_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m0281A01E9C859E2B8073312D41BB9005662EF2DA_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, const RuntimeMethod* method);

// System.Collections.IEnumerator Boss2::ShowParts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Boss2_ShowParts_mCDC314F0FBDB8D208165FAAE3F8F4D358F7FD315 (Boss2_t1ED338A653D36E5352D40483F92F9C50B359FEBC * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void Boss2/<ShowParts>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowPartsU3Ed__5__ctor_mBDD0E8898D91E138B7042D22F0A5E1456EA501C8 (U3CShowPartsU3Ed__5_t09BBC03A0970E2BF56904F75C3B7E0D8B40FC34F * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void Boss2/<Shot>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShotU3Ed__7__ctor_mE5DADDE0420441F86985C44BD718DD08A4AD334C (U3CShotU3Ed__7_t5B6ECB25F35EA9A394F1ADE1A8C3CB4EE57063C1 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
inline void List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<ControlGame>()
inline ControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96 * GameObject_GetComponent_TisControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96_m4646739A29FFF4CF05ACE5EF6C64ECD193BFB160 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  ControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void ControlGame::LevelPassed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlGame_LevelPassed_m05B6235DD8F835987CA547397293A735BB6F6534 (ControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Boss3::ShowParts(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Boss3_ShowParts_m237CC1FA5AE12E3DC8B0F2E864759C88F37E1EC6 (Boss3_t6C3889EF0A9F1C98DE071E5A8AE5B237CA014D60 * __this, bool ___yes0, const RuntimeMethod* method);
// System.Void Boss3/<ShowParts>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowPartsU3Ed__5__ctor_mE02D1048C34075267CA9F8A9AAA9BAA01A251D2D (U3CShowPartsU3Ed__5_tC9A208D13D4CF48A5C07215906AFF39AC00370C2 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Boss3/<AttackNow>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackNowU3Ed__6__ctor_m807B06176433FA7EB7E91A0C957DA1F3903A1BB9 (U3CAttackNowU3Ed__6_t5548957493F4260E6AFD7631F29FF348A7535DB3 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Boss3/<Attack>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackU3Ed__7__ctor_m1E3D32EDA81B13F2EE38F2859D3B2C4F28E9D327 (U3CAttackU3Ed__7_t08C44F054B9845EA94A3146BE9349CAAAA2E7C0C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, float ___t1, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120 (String_t* ___path0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void ControlGame::LoadGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlGame_LoadGame_m0D3095D10A8D0111F80D26D934E8920B045D0EFD (ControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4 (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F (String_t* ___tag0, const RuntimeMethod* method);
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA (float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::UnPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_UnPause_m17BEE2B5A9607757EF0635450D210E4FD5E3EAF2 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Pause_mC4F9932A77B6AA2CC3FB720721B7837CF57B675D (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void ControlGame::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlGame_Clear_m0681179893AC0309B4E59F5EA1033BE470C10074 (ControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96 * __this, const RuntimeMethod* method);
// System.Void ControlGame::SaveScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlGame_SaveScore_m14088888350BF9397BBE4783365D733F9A4944F4 (ControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<SaveLoadData>()
inline SaveLoadData_t01436979ECF432B45A9679B9AE27AB0655EF70AE * Component_GetComponent_TisSaveLoadData_t01436979ECF432B45A9679B9AE27AB0655EF70AE_mF5037E441CD471920E0E19D406C7774DA90D7DCF (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  SaveLoadData_t01436979ECF432B45A9679B9AE27AB0655EF70AE * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void SaveLoadData::SaveData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveLoadData_SaveData_mF44B08CB1E6412C5BD8AB2505716B2BB8D64A175 (SaveLoadData_t01436979ECF432B45A9679B9AE27AB0655EF70AE * __this, const RuntimeMethod* method);
// System.Void ControlGame::SaveGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlGame_SaveGame_m10C0DCDA7C4ADA4950D56A365162B3D2ADF591B3 (ControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96 * __this, const RuntimeMethod* method);
// System.Void SaveLoadData::LoadData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveLoadData_LoadData_m7FC7F0FF2F9B447BC261B33725BF15D515D38619 (SaveLoadData_t01436979ECF432B45A9679B9AE27AB0655EF70AE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186 (String_t* ___tag0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_gravityScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_gravityScale_mEDC82EE2ED74DA9C5AB8A0C4A929B09149522BBF (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, float ___value0, const RuntimeMethod* method);
// System.Collections.IEnumerator ControlGhost::Shoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ControlGhost_Shoot_mB60BCDF9E03FE739F12A10ECEA87621B59FCC39E (ControlGhost_tF5A4C0EF0DE41C54667C7FAAF7CC7DDA8C815F51 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F (int32_t ___key0, const RuntimeMethod* method);
// System.Void ControlGhost/<Shoot>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShootU3Ed__7__ctor_mD7FDE70B5F8C47A8D2310B78570C42DBB2C1C43D (U3CShootU3Ed__7_tE704B49D318CB97B09A55BEB0E8E90AF4B555F34 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.BoxCollider2D>()
inline BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.BoxCollider2D>()
inline BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Collections.IEnumerator ControlShip::Shoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ControlShip_Shoot_mC367083E502F3FB24057683528873F3C1ABE49FA (ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326 (String_t* ___axisName0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, const RuntimeMethod* method);
// System.Single UnityEngine.Rigidbody2D::get_mass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rigidbody2D_get_mass_mE62570BBAB2CE7ACC2FA3B20EE5EB8FBDBEF019F (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(System.Single,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_m841D5292C48DAD9746A2F4EED9CE7A76CDB652EA_inline (float ___d0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::AddRelativeForce(UnityEngine.Vector2,UnityEngine.ForceMode2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddRelativeForce_m28F829E1CB8C6D6F8B23F154F3927C0A5C8D6856 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___relativeForce0, int32_t ___mode1, const RuntimeMethod* method);
// System.Void ControlShip::AnimateMotor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlShip_AnimateMotor_m95E9E12E5AB0068BB68740D04C32C91B610BAA27 (ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2,UnityEngine.ForceMode2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___force0, int32_t ___mode1, const RuntimeMethod* method);
// System.Void ControlShip/<Shoot>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShootU3Ed__15__ctor_m2B8AEC7F4C367018734F07D04F33AF1D457AECB4 (U3CShootU3Ed__15_tA3D5CDD11652E4A5CA95A8EFBFC8113B6662B07E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F (Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * __this, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared)(___original0, ___parent1, method);
}
// !!0 UnityEngine.GameObject::GetComponent<Enemy>()
inline Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void Life::TakesLife(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Life_TakesLife_m432769A0DBB59D454784B3402F19D358B66CBDBD (Life_tFA6AEBF0D44789AAFC7B4542C83AF07B9D97EA13 * __this, int32_t ___Qtd0, const RuntimeMethod* method);
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986 (String_t* ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633 (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method);
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159 (String_t* ___key0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Collections.IEnumerator ControlStart::LoadScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ControlStart_LoadScene_mAC10804581E7277D508A8FEB6CD266DFB3E8EBA9 (ControlStart_t461A8F5392E3967B1B6B5520351D75DEFD71B1B0 * __this, const RuntimeMethod* method);
// System.Void ControlStart/<LoadScene>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneU3Ed__4__ctor_mAD54CB3A4262AF8A10EFE3121723ABFA115FE5FB (U3CLoadSceneU3Ed__4_tFA699E679840F67FE1E189060FE7284ED9DEB59E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// System.Collections.IEnumerator DestroyTime::CallDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DestroyTime_CallDestroy_m61D5F2B05283C2474DC66285AC88FDA79B8E1BD6 (DestroyTime_t24806801B4F6EA764796D3C1789E9D157D0023D2 * __this, const RuntimeMethod* method);
// System.Void DestroyTime/<CallDestroy>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCallDestroyU3Ed__2__ctor_m7A7A8DC06CB12FA979DC587DA59CD00B21710FAF (U3CCallDestroyU3Ed__2_tAFEBF82F13F04716C1673744B80612E43A0ACA03 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Collections.IEnumerator Enemy::Shoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enemy_Shoot_m9698649D8FCE4A907B5EBAA30105E3DF881FB767 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// UnityEngine.Quaternion Gaminho.Statics::FaceObject(UnityEngine.Vector2,UnityEngine.Vector2,Gaminho.Statics/FacingDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Statics_FaceObject_mD7C4A0B189730DDA2CC972CE3204E2FE896FAF50 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___myPos0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___targetPos1, int32_t ___facing2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void Enemy::DodgeBullet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_DodgeBullet_mFDDD74803A7DA91D51DFF3B3BA4681CBA1914017 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetPositionAndRotation(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetPositionAndRotation_m33418A6BDFB6395B98D0B5733F5E522B7EEDDCDE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation1, const RuntimeMethod* method);
// System.Void Enemy::Create(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Create_m66ACA885B980722A913D038190E87E6AFFA55759 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, int32_t ___v0, const RuntimeMethod* method);
// System.Collections.IEnumerator Enemy::KillMe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enemy_KillMe_m24D0CC29C673187902BFD4554072865ADF3F2EB5 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method);
// System.Void Enemy/<KillMe>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CKillMeU3Ed__13__ctor_m8C885CDD9C15822AFC09DE23F1D2E62CED4B313E (U3CKillMeU3Ed__13_t119E02ACE3C774FC55783CA4B9311F67937D811C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_down()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_down_m38F16950B2C1FAFBE218C3E62DA95D498443650F (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_left_m6AB0857E0C702D555B6747B6B4359D019C60CF14 (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_right_m42ED15112D219375D2B6879E62ED925D002F15AF (const RuntimeMethod* method);
// System.Void Enemy/<Shoot>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShootU3Ed__15__ctor_m29B2F0E858838B3DB93DED23561CABBF841230F6 (U3CShootU3Ed__15_tF9AF905CBA0A2327F76DF1C4043394EB061319B2 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method);
// Stick/stck Stick::GetStck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Stick_GetStck_m7A49B714FF83A4D429439940FB6990888867BD7B (const RuntimeMethod* method);
// System.Void Enemy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Update_mA01EE7AF5D3B97687752E9D22BECB4A3E13F8FD2 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator EnemyControl::Process()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnemyControl_Process_m3026B4978A8349BD60037F2B25AFA4539B70FB7B (EnemyControl_t8354619B7C2514F856067E693DC1914D07EE53D9 * __this, const RuntimeMethod* method);
// System.Void EnemyControl/<Process>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CProcessU3Ed__4__ctor_mA6DCD4EAD0188CA4C4AD0A5EF0D2A9FC2F8ADC15 (U3CProcessU3Ed__4_t71016A10790CE995349F35F697F784B6C726E051 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void EnemyControl/<CallBoss>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCallBossU3Ed__6__ctor_mDA19F5EC5865BAF920AD4E709D8ADE95E743F363 (U3CCallBossU3Ed__6_t0BF59ED4A6D214279882298BAE1927F9D4059B35 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Explosion::Explode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Explosion_Explode_m0586F5F99D95A44520E522FA9CF6256DCB7FC258 (Explosion_t03ACA9CD2F46E4913DC45A3EA50B165F4662DCED * __this, const RuntimeMethod* method);
// System.Void Explosion/<Explode>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExplodeU3Ed__3__ctor_mA6402CE95E7EDCBD469BF9A8CE6EE0321AC1C77F (U3CExplodeU3Ed__3_tD50D1FAB07D31C87001D70FBED9046F4B147664D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
inline void List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
inline void List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_gshared)(__this, ___item0, method);
}
// System.Collections.IEnumerator Ghost::RecordPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Ghost_RecordPosition_mD57DA55E3C2CB6DFE5771C3BCB272F322A554D84 (Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Ghost::Follow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Ghost_Follow_m3DEE5776F45584FEA645275B96D6D5EF4B847540 (Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7 * __this, const RuntimeMethod* method);
// System.Void Ghost/<RecordPosition>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRecordPositionU3Ed__10__ctor_mC784134FC2E9ED509BF63AEE56ADE36355208245 (U3CRecordPositionU3Ed__10_t55110E01AB1FCDF69BB01B4EA77745342103066D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Ghost/<Follow>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFollowU3Ed__11__ctor_m7805848F3BC1DC52838781609922C538DA75957E (U3CFollowU3Ed__11_t3EDBCEC7FC810EB2FF4832FC742FD1686C45A198 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Life>()
inline Life_tFA6AEBF0D44789AAFC7B4542C83AF07B9D97EA13 * GameObject_GetComponent_TisLife_tFA6AEBF0D44789AAFC7B4542C83AF07B9D97EA13_mA73E12F80C473DA48AC4B63CF82F9E8D55379AC6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Life_tFA6AEBF0D44789AAFC7B4542C83AF07B9D97EA13 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5 (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Life>()
inline Life_tFA6AEBF0D44789AAFC7B4542C83AF07B9D97EA13 * Component_GetComponent_TisLife_tFA6AEBF0D44789AAFC7B4542C83AF07B9D97EA13_m7975571D53F6216725F28438F6354AF19C79CA15 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Life_tFA6AEBF0D44789AAFC7B4542C83AF07B9D97EA13 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.InputField::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF (InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40 (Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.String UnityEngine.UI.InputField::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline (InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * __this, const RuntimeMethod* method);
// System.Void SaveLoadData::SetPaths()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveLoadData_SetPaths_mBABF3781F58E7EEEE0ACC4267E2DE992D68428AA (SaveLoadData_t01436979ECF432B45A9679B9AE27AB0655EF70AE * __this, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_dataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_dataPath_m026509C15A1E58FC6461EE7EC336EC18C9C2271E (const RuntimeMethod* method);
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8 (Il2CppChar* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463 (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.IO.StreamWriter::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamWriter__ctor_mE341C28EFA3FE0484823233273DBE251A11BD4FC (StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * __this, String_t* ___path0, const RuntimeMethod* method);
// System.Void System.IO.StreamReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_m1F07D64A9881F3A6B755881210B4E88F8E63849B (StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * __this, String_t* ___path0, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<PlayerData>(System.String)
inline PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * JsonUtility_FromJson_TisPlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5_m1BC0A217D6A8FFBE81E040268CC950AEC4BECDD0 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared)(___json0, method);
}
// System.Void PlayerData::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerData__ctor_m291958C9614A3DB936AA52212668EDB042332AA0 (PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * __this, int32_t ___level0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_AngleAxis_m4644D20F58ADF03E9EA297CB4A845E5BCDA1E398 (float ___angle0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___axis1, const RuntimeMethod* method);
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4 (const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void UnityEngine.GameObject::set_tag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_tag_m0EBA46574304C71E047A33BDD5F5D49E9D9A25BE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject Boss2::GetOneActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Boss2_GetOneActive_m41CEB8C5D4F936E741F9C9F684F40EAE7D3DADA3 (Boss2_t1ED338A653D36E5352D40483F92F9C50B359FEBC * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Boss2::Shot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Boss2_Shot_m35B8B00F7AEF10F996EF1D55BEF3575E5BAFF3D6 (Boss2_t1ED338A653D36E5352D40483F92F9C50B359FEBC * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E (const RuntimeMethod* method);
// UnityEngine.GameObject Boss3::GetOneActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Boss3_GetOneActive_mC454EE4919EB35E3CADF35A2C047B267CBB5754F (Boss3_t6C3889EF0A9F1C98DE071E5A8AE5B237CA014D60 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Collections.IEnumerator Boss3::Attack(UnityEngine.UI.Image)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Boss3_Attack_mBC827254E14F721046A48C74FBDCE480D7EB8006 (Boss3_t6C3889EF0A9F1C98DE071E5A8AE5B237CA014D60 * __this, Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___image0, const RuntimeMethod* method);
// System.Collections.IEnumerator Boss3::AttackNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Boss3_AttackNow_m751CAFCD3CD70F4748E1BE4A61688B418BF83420 (Boss3_t6C3889EF0A9F1C98DE071E5A8AE5B237CA014D60 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void ControlGhost::CallShield()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlGhost_CallShield_m61D25F807EB3D3A064848CFF218B615BF25A867F (ControlGhost_tF5A4C0EF0DE41C54667C7FAAF7CC7DDA8C815F51 * __this, const RuntimeMethod* method);
// System.Void ControlShip::CallShield()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlShip_CallShield_m981741EAE83CD99702ECA0E88C92115E68E6CA0C (ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<CallScene>()
inline CallScene_tB4E099C9D351736775EF8EF0609DC73824F2CE94 * Component_GetComponent_TisCallScene_tB4E099C9D351736775EF8EF0609DC73824F2CE94_m3D16F66EF40C809EA046C8B7A583A9FA7D8B111A (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  CallScene_tB4E099C9D351736775EF8EF0609DC73824F2CE94 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void CallScene::Call(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallScene_Call_m8CDF9D77505FAEDF29068B890862D09654434CCE (CallScene_tB4E099C9D351736775EF8EF0609DC73824F2CE94 * __this, String_t* ___sname0, const RuntimeMethod* method);
// System.Void EnemyControl::EnemyCreate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyControl_EnemyCreate_m1DBC2B3B2C19C6C6D410EAB1360BB814DD12FD3E (EnemyControl_t8354619B7C2514F856067E693DC1914D07EE53D9 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator EnemyControl::CallBoss()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnemyControl_CallBoss_mEE1F75478CABCE55BC6A16FA00D0F843E7A58101 (EnemyControl_t8354619B7C2514F856067E693DC1914D07EE53D9 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, int32_t, const RuntimeMethod*))List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m0281A01E9C859E2B8073312D41BB9005662EF2DA (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m0281A01E9C859E2B8073312D41BB9005662EF2DA_gshared)(__this, ___index0, method);
}
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
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
// System.Void Boss2::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boss2_Start_mF5292CA924E8DB443334DB78CCD7201F768E15C8 (Boss2_t1ED338A653D36E5352D40483F92F9C50B359FEBC * __this, const RuntimeMethod* method)
{
	{
		// MyChilds = Parts.Length;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_Parts_4();
		NullCheck(L_0);
		__this->set_MyChilds_7(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))));
		// StartCoroutine( ShowParts());
		RuntimeObject* L_1;
		L_1 = Boss2_ShowParts_mCDC314F0FBDB8D208165FAAE3F8F4D358F7FD315(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_2;
		L_2 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Boss2::ShowParts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Boss2_ShowParts_mCDC314F0FBDB8D208165FAAE3F8F4D358F7FD315 (Boss2_t1ED338A653D36E5352D40483F92F9C50B359FEBC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CShowPartsU3Ed__5_t09BBC03A0970E2BF56904F75C3B7E0D8B40FC34F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CShowPartsU3Ed__5_t09BBC03A0970E2BF56904F75C3B7E0D8B40FC34F * L_0 = (U3CShowPartsU3Ed__5_t09BBC03A0970E2BF56904F75C3B7E0D8B40FC34F *)il2cpp_codegen_object_new(U3CShowPartsU3Ed__5_t09BBC03A0970E2BF56904F75C3B7E0D8B40FC34F_il2cpp_TypeInfo_var);
		U3CShowPartsU3Ed__5__ctor_mBDD0E8898D91E138B7042D22F0A5E1456EA501C8(L_0, 0, /*hidden argument*/NULL);
		U3CShowPartsU3Ed__5_t09BBC03A0970E2BF56904F75C3B7E0D8B40FC34F * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Boss2::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boss2_Update_m8CE583E0DAC32C0A374F69542AD8C054754C0C14 (Boss2_t1ED338A653D36E5352D40483F92F9C50B359FEBC * __this, const RuntimeMethod* method)
{
	{
		// if(Side == 1)
		int32_t L_0 = __this->get_Side_6();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0046;
		}
	}
	{
		// transform.localPosition = new Vector3(transform.localPosition.x + 3f, transform.localPosition.y, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_2, /*hidden argument*/NULL);
		float L_4 = L_3.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_5, /*hidden argument*/NULL);
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_8), ((float)il2cpp_codegen_add((float)L_4, (float)(3.0f))), L_7, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_1, L_8, /*hidden argument*/NULL);
		// }
		goto IL_0081;
	}

IL_0046:
	{
		// transform.localPosition = new Vector3(transform.localPosition.x - 3f, transform.localPosition.y, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_13, /*hidden argument*/NULL);
		float L_15 = L_14.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_16), ((float)il2cpp_codegen_subtract((float)L_12, (float)(3.0f))), L_15, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_9, L_16, /*hidden argument*/NULL);
	}

IL_0081:
	{
		// if(transform.localPosition.x > 1500)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_17, /*hidden argument*/NULL);
		float L_19 = L_18.get_x_2();
		if ((!(((float)L_19) > ((float)(1500.0f)))))
		{
			goto IL_00be;
		}
	}
	{
		// transform.localScale = new Vector3(-1, 1, 1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_21), (-1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_20, L_21, /*hidden argument*/NULL);
		// Side = 2;
		__this->set_Side_6(2);
	}

IL_00be:
	{
		// if (transform.localPosition.x < -1200)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_22, /*hidden argument*/NULL);
		float L_24 = L_23.get_x_2();
		if ((!(((float)L_24) < ((float)(-1200.0f)))))
		{
			goto IL_00fb;
		}
	}
	{
		// transform.localScale = new Vector3(1, 1, 1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_26), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_25);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_25, L_26, /*hidden argument*/NULL);
		// Side = 1;
		__this->set_Side_6(1);
	}

IL_00fb:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Boss2::Shot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Boss2_Shot_m35B8B00F7AEF10F996EF1D55BEF3575E5BAFF3D6 (Boss2_t1ED338A653D36E5352D40483F92F9C50B359FEBC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CShotU3Ed__7_t5B6ECB25F35EA9A394F1ADE1A8C3CB4EE57063C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CShotU3Ed__7_t5B6ECB25F35EA9A394F1ADE1A8C3CB4EE57063C1 * L_0 = (U3CShotU3Ed__7_t5B6ECB25F35EA9A394F1ADE1A8C3CB4EE57063C1 *)il2cpp_codegen_object_new(U3CShotU3Ed__7_t5B6ECB25F35EA9A394F1ADE1A8C3CB4EE57063C1_il2cpp_TypeInfo_var);
		U3CShotU3Ed__7__ctor_mE5DADDE0420441F86985C44BD718DD08A4AD334C(L_0, 0, /*hidden argument*/NULL);
		U3CShotU3Ed__7_t5B6ECB25F35EA9A394F1ADE1A8C3CB4EE57063C1 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// UnityEngine.GameObject Boss2::GetOneActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Boss2_GetOneActive_m41CEB8C5D4F936E741F9C9F684F40EAE7D3DADA3 (Boss2_t1ED338A653D36E5352D40483F92F9C50B359FEBC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		// List<GameObject> actives = new List<GameObject>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)il2cpp_codegen_object_new(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8(L_0, /*hidden argument*/List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		V_0 = L_0;
		// for(int i = 0; i <= Parts.Length - 1; i++)
		V_1 = 0;
		goto IL_002c;
	}

IL_000a:
	{
		// if (Parts[i] != null)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = __this->get_Parts_4();
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0028;
		}
	}
	{
		// actives.Add(Parts[i]);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_6 = V_0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_7 = __this->get_Parts_4();
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_6);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_6, L_10, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
	}

IL_0028:
	{
		// for(int i = 0; i <= Parts.Length - 1; i++)
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_002c:
	{
		// for(int i = 0; i <= Parts.Length - 1; i++)
		int32_t L_12 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_13 = __this->get_Parts_4();
		NullCheck(L_13);
		if ((((int32_t)L_12) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))), (int32_t)1)))))
		{
			goto IL_000a;
		}
	}
	{
		// return actives[UnityEngine.Random.Range(0, actives.Count-1)];
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_14 = V_0;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_15, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		int32_t L_17;
		L_17 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_14);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18;
		L_18 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_14, L_17, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		return L_18;
	}
}
// System.Void Boss2::KillMe(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boss2_KillMe_mDE3ED52B5D597F8CEB197D98E1F15E9334C71285 (Boss2_t1ED338A653D36E5352D40483F92F9C50B359FEBC * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___my0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96_m4646739A29FFF4CF05ACE5EF6C64ECD193BFB160_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral931DFDCE8A7F395390F2AC831102C486A12DB07C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(my);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___my0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_0, /*hidden argument*/NULL);
		// MyChilds--;
		int32_t L_1 = __this->get_MyChilds_7();
		__this->set_MyChilds_7(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)));
		// if(MyChilds <= 0)
		int32_t L_2 = __this->get_MyChilds_7();
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		// GameObject.Find("Control").GetComponent<ControlGame>().LevelPassed();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral931DFDCE8A7F395390F2AC831102C486A12DB07C, /*hidden argument*/NULL);
		NullCheck(L_3);
		ControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96 * L_4;
		L_4 = GameObject_GetComponent_TisControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96_m4646739A29FFF4CF05ACE5EF6C64ECD193BFB160(L_3, /*hidden argument*/GameObject_GetComponent_TisControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96_m4646739A29FFF4CF05ACE5EF6C64ECD193BFB160_RuntimeMethod_var);
		NullCheck(L_4);
		ControlGame_LevelPassed_m05B6235DD8F835987CA547397293A735BB6F6534(L_4, /*hidden argument*/NULL);
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_5, /*hidden argument*/NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void Boss2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boss2__ctor_mAF0CEE4D38FEAFC1DE100B0F2E0701E06B14991F (Boss2_t1ED338A653D36E5352D40483F92F9C50B359FEBC * __this, const RuntimeMethod* method)
{
	{
		// private int Side = 1;
		__this->set_Side_6(1);
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
// System.Void Boss3::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boss3_Start_m025FF1DBDC22B6304FBDBAD41E2A028B5BCF4E2C (Boss3_t6C3889EF0A9F1C98DE071E5A8AE5B237CA014D60 * __this, const RuntimeMethod* method)
{
	{
		// MyChilds = Parts.Length;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_Parts_4();
		NullCheck(L_0);
		__this->set_MyChilds_7(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))));
		// StartCoroutine(ShowParts(false));
		RuntimeObject* L_1;
		L_1 = Boss3_ShowParts_m237CC1FA5AE12E3DC8B0F2E864759C88F37E1EC6(__this, (bool)0, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_2;
		L_2 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Boss3::ShowParts(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Boss3_ShowParts_m237CC1FA5AE12E3DC8B0F2E864759C88F37E1EC6 (Boss3_t6C3889EF0A9F1C98DE071E5A8AE5B237CA014D60 * __this, bool ___yes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CShowPartsU3Ed__5_tC9A208D13D4CF48A5C07215906AFF39AC00370C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CShowPartsU3Ed__5_tC9A208D13D4CF48A5C07215906AFF39AC00370C2 * L_0 = (U3CShowPartsU3Ed__5_tC9A208D13D4CF48A5C07215906AFF39AC00370C2 *)il2cpp_codegen_object_new(U3CShowPartsU3Ed__5_tC9A208D13D4CF48A5C07215906AFF39AC00370C2_il2cpp_TypeInfo_var);
		U3CShowPartsU3Ed__5__ctor_mE02D1048C34075267CA9F8A9AAA9BAA01A251D2D(L_0, 0, /*hidden argument*/NULL);
		U3CShowPartsU3Ed__5_tC9A208D13D4CF48A5C07215906AFF39AC00370C2 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CShowPartsU3Ed__5_tC9A208D13D4CF48A5C07215906AFF39AC00370C2 * L_2 = L_1;
		bool L_3 = ___yes0;
		NullCheck(L_2);
		L_2->set_yes_3(L_3);
		return L_2;
	}
}
// System.Collections.IEnumerator Boss3::AttackNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Boss3_AttackNow_m751CAFCD3CD70F4748E1BE4A61688B418BF83420 (Boss3_t6C3889EF0A9F1C98DE071E5A8AE5B237CA014D60 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAttackNowU3Ed__6_t5548957493F4260E6AFD7631F29FF348A7535DB3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAttackNowU3Ed__6_t5548957493F4260E6AFD7631F29FF348A7535DB3 * L_0 = (U3CAttackNowU3Ed__6_t5548957493F4260E6AFD7631F29FF348A7535DB3 *)il2cpp_codegen_object_new(U3CAttackNowU3Ed__6_t5548957493F4260E6AFD7631F29FF348A7535DB3_il2cpp_TypeInfo_var);
		U3CAttackNowU3Ed__6__ctor_m807B06176433FA7EB7E91A0C957DA1F3903A1BB9(L_0, 0, /*hidden argument*/NULL);
		U3CAttackNowU3Ed__6_t5548957493F4260E6AFD7631F29FF348A7535DB3 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Boss3::Attack(UnityEngine.UI.Image)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Boss3_Attack_mBC827254E14F721046A48C74FBDCE480D7EB8006 (Boss3_t6C3889EF0A9F1C98DE071E5A8AE5B237CA014D60 * __this, Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___image0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAttackU3Ed__7_t08C44F054B9845EA94A3146BE9349CAAAA2E7C0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAttackU3Ed__7_t08C44F054B9845EA94A3146BE9349CAAAA2E7C0C * L_0 = (U3CAttackU3Ed__7_t08C44F054B9845EA94A3146BE9349CAAAA2E7C0C *)il2cpp_codegen_object_new(U3CAttackU3Ed__7_t08C44F054B9845EA94A3146BE9349CAAAA2E7C0C_il2cpp_TypeInfo_var);
		U3CAttackU3Ed__7__ctor_m1E3D32EDA81B13F2EE38F2859D3B2C4F28E9D327(L_0, 0, /*hidden argument*/NULL);
		U3CAttackU3Ed__7_t08C44F054B9845EA94A3146BE9349CAAAA2E7C0C * L_1 = L_0;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_2 = ___image0;
		NullCheck(L_1);
		L_1->set_image_2(L_2);
		return L_1;
	}
}
// UnityEngine.GameObject Boss3::GetOneActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Boss3_GetOneActive_mC454EE4919EB35E3CADF35A2C047B267CBB5754F (Boss3_t6C3889EF0A9F1C98DE071E5A8AE5B237CA014D60 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		// List<GameObject> activeds = new List<GameObject>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)il2cpp_codegen_object_new(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8(L_0, /*hidden argument*/List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		V_0 = L_0;
		// for (int i = 0; i <= Parts.Length - 1; i++)
		V_1 = 0;
		goto IL_002c;
	}

IL_000a:
	{
		// if (Parts[i] != null)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = __this->get_Parts_4();
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0028;
		}
	}
	{
		// activeds.Add(Parts[i]);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_6 = V_0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_7 = __this->get_Parts_4();
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_6);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_6, L_10, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
	}

IL_0028:
	{
		// for (int i = 0; i <= Parts.Length - 1; i++)
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_002c:
	{
		// for (int i = 0; i <= Parts.Length - 1; i++)
		int32_t L_12 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_13 = __this->get_Parts_4();
		NullCheck(L_13);
		if ((((int32_t)L_12) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))), (int32_t)1)))))
		{
			goto IL_000a;
		}
	}
	{
		// return activeds[UnityEngine.Random.Range(0, activeds.Count - 1)];
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_14 = V_0;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_15, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		int32_t L_17;
		L_17 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_14);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18;
		L_18 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_14, L_17, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		return L_18;
	}
}
// System.Void Boss3::KillMe(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boss3_KillMe_m485F8403E9462C6F16E4A1E1346373AE8AE15029 (Boss3_t6C3889EF0A9F1C98DE071E5A8AE5B237CA014D60 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___my0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96_m4646739A29FFF4CF05ACE5EF6C64ECD193BFB160_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral931DFDCE8A7F395390F2AC831102C486A12DB07C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MyChilds--;
		int32_t L_0 = __this->get_MyChilds_7();
		__this->set_MyChilds_7(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)));
		// if (MyChilds <= 0)
		int32_t L_1 = __this->get_MyChilds_7();
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		// GameObject.Find("Control").GetComponent<ControlGame>().LevelPassed();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral931DFDCE8A7F395390F2AC831102C486A12DB07C, /*hidden argument*/NULL);
		NullCheck(L_2);
		ControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96 * L_3;
		L_3 = GameObject_GetComponent_TisControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96_m4646739A29FFF4CF05ACE5EF6C64ECD193BFB160(L_2, /*hidden argument*/GameObject_GetComponent_TisControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96_m4646739A29FFF4CF05ACE5EF6C64ECD193BFB160_RuntimeMethod_var);
		NullCheck(L_3);
		ControlGame_LevelPassed_m05B6235DD8F835987CA547397293A735BB6F6534(L_3, /*hidden argument*/NULL);
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_4, /*hidden argument*/NULL);
	}

IL_0036:
	{
		// Destroy(my,0.01f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = ___my0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_5, (0.00999999978f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Boss3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boss3__ctor_m643E6AD2933C0D491F1706E2F4CA3BA2F3820306 (Boss3_t6C3889EF0A9F1C98DE071E5A8AE5B237CA014D60 * __this, const RuntimeMethod* method)
{
	{
		// private int Side = 1;
		__this->set_Side_6(1);
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
// System.Void CallScene::Call(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallScene_Call_m8CDF9D77505FAEDF29068B890862D09654434CCE (CallScene_tB4E099C9D351736775EF8EF0609DC73824F2CE94 * __this, String_t* ___sname0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5D380D7472DF62C3B0C30B37F7A25C76F3441D5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject.Instantiate(Resources.Load(Statics.PREFAB_LOAD) as GameObject);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_0;
		L_0 = Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120(_stringLiteralC5D380D7472DF62C3B0C30B37F7A25C76F3441D5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)IsInstSealed((RuntimeObject*)L_0, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var)), /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		// SceneManager.LoadScene(sname);
		String_t* L_2 = ___sname0;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CallScene::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallScene__ctor_m6B52AD5FB87324D006A0BFF36D122D8E5096AE9C (CallScene_tB4E099C9D351736775EF8EF0609DC73824F2CE94 * __this, const RuntimeMethod* method)
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
// System.Void ControlGame::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlGame_Start_m41EDFA823653EE35B75C9E396B158F9C47330225 (ControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral663C1FCE184B01DF096F2B8DB221C53F867AE327);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (Statics.loadingGame)
		IL2CPP_RUNTIME_CLASS_INIT(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		bool L_0 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_loadingGame_18();
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// LoadGame();
		ControlGame_LoadGame_m0D3095D10A8D0111F80D26D934E8920B045D0EFD(__this, /*hidden argument*/NULL);
	}

IL_000d:
	{
		// Statics.EnemiesDead = 0;
		IL2CPP_RUNTIME_CLASS_INIT(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->set_EnemiesDead_15(0);
		// Background.sprite = Levels[Statics.CurrentLevel].Background;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1 = __this->get_Background_6();
		LevelU5BU5D_t10F32731C74504D66804828AC533B31C3D098D5B* L_2 = __this->get_Levels_5();
		int32_t L_3 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_CurrentLevel_12();
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Level_t0F1BB2DCE2C7368CA4FEAE26F672ADB4C35C7505 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_6 = L_5->get_Background_0();
		NullCheck(L_1);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_1, L_6, /*hidden argument*/NULL);
		// TextStart.text = "Stage " + (Statics.CurrentLevel + 1);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_7 = __this->get_TextStart_7();
		int32_t L_8 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_CurrentLevel_12();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
		String_t* L_9;
		L_9 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_10;
		L_10 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral663C1FCE184B01DF096F2B8DB221C53F867AE327, L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_10);
		// GetComponent<AudioSource>().PlayOneShot(Levels[Statics.CurrentLevel].AudioLvl);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_11;
		L_11 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		LevelU5BU5D_t10F32731C74504D66804828AC533B31C3D098D5B* L_12 = __this->get_Levels_5();
		int32_t L_13 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_CurrentLevel_12();
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Level_t0F1BB2DCE2C7368CA4FEAE26F672ADB4C35C7505 * L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_16 = L_15->get_AudioLvl_6();
		NullCheck(L_11);
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_11, L_16, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ControlGame::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlGame_Update_m75CA34A327D9AE3F5BE315C068BB2D3946985B50 (ControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAAA401E86E41E6120BB9E96B9892141CF5A81F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TextPoints.text = Statics.Points.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_TextPoints_8();
		IL2CPP_RUNTIME_CLASS_INIT(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_address_of_Points_16()), /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// BarLife.localScale = new Vector3(Statics.Life / 10f, 1, 1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = __this->get_BarLife_9();
		float L_3 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_Life_17();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), ((float)((float)L_3/(float)(10.0f))), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_2, L_4, /*hidden argument*/NULL);
		// if (Input.GetKeyDown(KeyCode.Escape))
		bool L_5;
		L_5 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)27), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_00a4;
		}
	}
	{
		// if (GameObject.FindGameObjectWithTag("Pause") != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralAAAA401E86E41E6120BB9E96B9892141CF5A81F8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_6, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_007a;
		}
	}
	{
		// Time.timeScale = 1;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// GetComponent<AudioSource>().UnPause();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_8;
		L_8 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		NullCheck(L_8);
		AudioSource_UnPause_m17BEE2B5A9607757EF0635450D210E4FD5E3EAF2(L_8, /*hidden argument*/NULL);
		// Destroy(GameObject.FindGameObjectWithTag("Pause"));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralAAAA401E86E41E6120BB9E96B9892141CF5A81F8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_9, /*hidden argument*/NULL);
		// }
		return;
	}

IL_007a:
	{
		// Time.timeScale = 0;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.0f), /*hidden argument*/NULL);
		// GameObject.Instantiate(Resources.Load(Statics.PREFAB_PAUSE) as GameObject);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_10;
		L_10 = Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120(_stringLiteralAAAA401E86E41E6120BB9E96B9892141CF5A81F8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)IsInstSealed((RuntimeObject*)L_10, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var)), /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		// GetComponent<AudioSource>().Pause();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_12;
		L_12 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		NullCheck(L_12);
		AudioSource_Pause_mC4F9932A77B6AA2CC3FB720721B7837CF57B675D(L_12, /*hidden argument*/NULL);
	}

IL_00a4:
	{
		// }
		return;
	}
}
// System.Void ControlGame::LevelPassed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlGame_LevelPassed_m05B6235DD8F835987CA547397293A735BB6F6534 (ControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral917B7584D09850BACA66B65E692BA39F0ABC630F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF37233DC049028FC11860D92CC5CB80E0759006A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Clear();
		ControlGame_Clear_m0681179893AC0309B4E59F5EA1033BE470C10074(__this, /*hidden argument*/NULL);
		// Statics.CurrentLevel++;
		IL2CPP_RUNTIME_CLASS_INIT(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_CurrentLevel_12();
		((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->set_CurrentLevel_12(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// Statics.Points += 1000 * Statics.CurrentLevel;
		int32_t L_1 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_Points_16();
		int32_t L_2 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_CurrentLevel_12();
		((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->set_Points_16(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)1000), (int32_t)L_2)))));
		// if (Statics.CurrentLevel < 3)
		int32_t L_3 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_CurrentLevel_12();
		if ((((int32_t)L_3) >= ((int32_t)3)))
		{
			goto IL_0047;
		}
	}
	{
		// GameObject.Instantiate(Resources.Load(Statics.PREFAB_LEVELUP) as GameObject);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_4;
		L_4 = Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120(_stringLiteral917B7584D09850BACA66B65E692BA39F0ABC630F, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)IsInstSealed((RuntimeObject*)L_4, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var)), /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		// }
		goto IL_005c;
	}

IL_0047:
	{
		// GameObject.Instantiate(Resources.Load(Statics.PREFAB_CONGRATULATION) as GameObject);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_6;
		L_6 = Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120(_stringLiteralF37233DC049028FC11860D92CC5CB80E0759006A, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)IsInstSealed((RuntimeObject*)L_6, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var)), /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
	}

IL_005c:
	{
		// SaveScore();
		ControlGame_SaveScore_m14088888350BF9397BBE4783365D733F9A4944F4(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ControlGame::SaveGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlGame_SaveGame_m10C0DCDA7C4ADA4950D56A365162B3D2ADF591B3 (ControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSaveLoadData_t01436979ECF432B45A9679B9AE27AB0655EF70AE_mF5037E441CD471920E0E19D406C7774DA90D7DCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SaveLoadData data = GetComponent<SaveLoadData>();
		SaveLoadData_t01436979ECF432B45A9679B9AE27AB0655EF70AE * L_0;
		L_0 = Component_GetComponent_TisSaveLoadData_t01436979ECF432B45A9679B9AE27AB0655EF70AE_mF5037E441CD471920E0E19D406C7774DA90D7DCF(__this, /*hidden argument*/Component_GetComponent_TisSaveLoadData_t01436979ECF432B45A9679B9AE27AB0655EF70AE_mF5037E441CD471920E0E19D406C7774DA90D7DCF_RuntimeMethod_var);
		// data.playerData.level = Statics.CurrentLevel;
		SaveLoadData_t01436979ECF432B45A9679B9AE27AB0655EF70AE * L_1 = L_0;
		NullCheck(L_1);
		PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * L_2 = L_1->get_playerData_4();
		IL2CPP_RUNTIME_CLASS_INIT(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		int32_t L_3 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_CurrentLevel_12();
		NullCheck(L_2);
		L_2->set_level_0(L_3);
		// data.SaveData();
		NullCheck(L_1);
		SaveLoadData_SaveData_mF44B08CB1E6412C5BD8AB2505716B2BB8D64A175(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ControlGame::SaveScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlGame_SaveScore_m14088888350BF9397BBE4783365D733F9A4944F4 (ControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSaveLoadData_t01436979ECF432B45A9679B9AE27AB0655EF70AE_mF5037E441CD471920E0E19D406C7774DA90D7DCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SaveLoadData data = GetComponent<SaveLoadData>();
		SaveLoadData_t01436979ECF432B45A9679B9AE27AB0655EF70AE * L_0;
		L_0 = Component_GetComponent_TisSaveLoadData_t01436979ECF432B45A9679B9AE27AB0655EF70AE_mF5037E441CD471920E0E19D406C7774DA90D7DCF(__this, /*hidden argument*/Component_GetComponent_TisSaveLoadData_t01436979ECF432B45A9679B9AE27AB0655EF70AE_mF5037E441CD471920E0E19D406C7774DA90D7DCF_RuntimeMethod_var);
		// data.playerData.scoreOnLevel = Statics.Points;
		NullCheck(L_0);
		PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * L_1 = L_0->get_playerData_4();
		IL2CPP_RUNTIME_CLASS_INIT(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		int32_t L_2 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_Points_16();
		NullCheck(L_1);
		L_1->set_scoreOnLevel_1(L_2);
		// SaveGame();
		ControlGame_SaveGame_m10C0DCDA7C4ADA4950D56A365162B3D2ADF591B3(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ControlGame::LoadGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlGame_LoadGame_m0D3095D10A8D0111F80D26D934E8920B045D0EFD (ControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSaveLoadData_t01436979ECF432B45A9679B9AE27AB0655EF70AE_mF5037E441CD471920E0E19D406C7774DA90D7DCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SaveLoadData data = GetComponent<SaveLoadData>();
		SaveLoadData_t01436979ECF432B45A9679B9AE27AB0655EF70AE * L_0;
		L_0 = Component_GetComponent_TisSaveLoadData_t01436979ECF432B45A9679B9AE27AB0655EF70AE_mF5037E441CD471920E0E19D406C7774DA90D7DCF(__this, /*hidden argument*/Component_GetComponent_TisSaveLoadData_t01436979ECF432B45A9679B9AE27AB0655EF70AE_mF5037E441CD471920E0E19D406C7774DA90D7DCF_RuntimeMethod_var);
		// data.LoadData();
		SaveLoadData_t01436979ECF432B45A9679B9AE27AB0655EF70AE * L_1 = L_0;
		NullCheck(L_1);
		SaveLoadData_LoadData_m7FC7F0FF2F9B447BC261B33725BF15D515D38619(L_1, /*hidden argument*/NULL);
		// Statics.CurrentLevel = data.playerData.level;
		SaveLoadData_t01436979ECF432B45A9679B9AE27AB0655EF70AE * L_2 = L_1;
		NullCheck(L_2);
		PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * L_3 = L_2->get_playerData_4();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_level_0();
		IL2CPP_RUNTIME_CLASS_INIT(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->set_CurrentLevel_12(L_4);
		// Statics.Points = data.playerData.scoreOnLevel;
		NullCheck(L_2);
		PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * L_5 = L_2->get_playerData_4();
		NullCheck(L_5);
		int32_t L_6 = L_5->get_scoreOnLevel_1();
		((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->set_Points_16(L_6);
		// }
		return;
	}
}
// System.Void ControlGame::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlGame_GameOver_m1E16954A2EB5306CA5D7959354BD4728C0321A13 (ControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62B61BC27E509D700023566A09D2AE606BE85A7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BarLife.localScale = new Vector3(0, 1, 1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_BarLife_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_1), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_0, L_1, /*hidden argument*/NULL);
		// Clear();
		ControlGame_Clear_m0681179893AC0309B4E59F5EA1033BE470C10074(__this, /*hidden argument*/NULL);
		// Destroy(Statics.Player.gameObject);
		IL2CPP_RUNTIME_CLASS_INIT(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_Player_13();
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_3, /*hidden argument*/NULL);
		// GameObject.Instantiate(Resources.Load(Statics.PREFAB_GAMEOVER) as GameObject);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_4;
		L_4 = Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120(_stringLiteralC62B61BC27E509D700023566A09D2AE606BE85A7, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)IsInstSealed((RuntimeObject*)L_4, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var)), /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		// SaveGame();
		ControlGame_SaveGame_m10C0DCDA7C4ADA4950D56A365162B3D2ADF591B3(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ControlGame::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlGame_Clear_m0681179893AC0309B4E59F5EA1033BE470C10074 (ControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// GetComponent<AudioSource>().Stop();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0;
		L_0 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		NullCheck(L_0);
		AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F(L_0, /*hidden argument*/NULL);
		// GameObject[] Enemies = GameObject.FindGameObjectsWithTag("Enemy");
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1;
		L_1 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, /*hidden argument*/NULL);
		// foreach (GameObject ini in Enemies)
		V_0 = L_1;
		V_1 = 0;
		goto IL_0026;
	}

IL_001a:
	{
		// foreach (GameObject ini in Enemies)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		// Destroy(ini);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_5, /*hidden argument*/NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0026:
	{
		// foreach (GameObject ini in Enemies)
		int32_t L_7 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
		{
			goto IL_001a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ControlGame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlGame__ctor_mBB7334A9B707AA5AB4EC6F7C853BE92433BB4D4D (ControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96 * __this, const RuntimeMethod* method)
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
// System.Void ControlGhost::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlGhost_Start_m47818A5F941415299D835700E3B0CD17A5389276 (ControlGhost_tF5A4C0EF0DE41C54667C7FAAF7CC7DDA8C815F51 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8014FB65DD084AC86222B3E48F65E2077F83C30);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GetComponent<Rigidbody2D>() == null)
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// Debug.LogError("Component required Rigidbody2D");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralB8014FB65DD084AC86222B3E48F65E2077F83C30, /*hidden argument*/NULL);
		// Destroy(this);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(__this, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_001f:
	{
		// GetComponent<Rigidbody2D>().gravityScale = 0.001f;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_2;
		L_2 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		NullCheck(L_2);
		Rigidbody2D_set_gravityScale_mEDC82EE2ED74DA9C5AB8A0C4A929B09149522BBF(L_2, (0.00100000005f), /*hidden argument*/NULL);
		// StartCoroutine(Shoot());
		RuntimeObject* L_3;
		L_3 = ControlGhost_Shoot_mB60BCDF9E03FE739F12A10ECEA87621B59FCC39E(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_4;
		L_4 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ControlGhost::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlGhost_LateUpdate_m02B317346B574F33EF97B313F62A24A79EA1232C (ControlGhost_tF5A4C0EF0DE41C54667C7FAAF7CC7DDA8C815F51 * __this, const RuntimeMethod* method)
{
	{
		// if (Input.GetKeyDown(KeyCode.LeftControl))
		bool L_0;
		L_0 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)306), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// shooting = true;
		__this->set_shooting_8((bool)1);
	}

IL_0013:
	{
		// if (Input.GetKeyUp(KeyCode.LeftControl))
		bool L_1;
		L_1 = Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F(((int32_t)306), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// shooting = false;
		__this->set_shooting_8((bool)0);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator ControlGhost::Shoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ControlGhost_Shoot_mB60BCDF9E03FE739F12A10ECEA87621B59FCC39E (ControlGhost_tF5A4C0EF0DE41C54667C7FAAF7CC7DDA8C815F51 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CShootU3Ed__7_tE704B49D318CB97B09A55BEB0E8E90AF4B555F34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CShootU3Ed__7_tE704B49D318CB97B09A55BEB0E8E90AF4B555F34 * L_0 = (U3CShootU3Ed__7_tE704B49D318CB97B09A55BEB0E8E90AF4B555F34 *)il2cpp_codegen_object_new(U3CShootU3Ed__7_tE704B49D318CB97B09A55BEB0E8E90AF4B555F34_il2cpp_TypeInfo_var);
		U3CShootU3Ed__7__ctor_mD7FDE70B5F8C47A8D2310B78570C42DBB2C1C43D(L_0, 0, /*hidden argument*/NULL);
		U3CShootU3Ed__7_tE704B49D318CB97B09A55BEB0E8E90AF4B555F34 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void ControlGhost::CallShield()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlGhost_CallShield_m61D25F807EB3D3A064848CFF218B615BF25A867F (ControlGhost_tF5A4C0EF0DE41C54667C7FAAF7CC7DDA8C815F51 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Shield.activeSelf != Statics.WithShield)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_Shield_5();
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		bool L_2 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_WithShield_9();
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0022;
		}
	}
	{
		// Shield.SetActive(Statics.WithShield);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_Shield_5();
		IL2CPP_RUNTIME_CLASS_INIT(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		bool L_4 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_WithShield_9();
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void ControlGhost::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlGhost__ctor_m60D1DADCBBE6775FB43569D132D2EFB1375A5639 (ControlGhost_tF5A4C0EF0DE41C54667C7FAAF7CC7DDA8C815F51 * __this, const RuntimeMethod* method)
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
// System.Void ControlShip::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlShip_Start_m5B912D419F20ED9BAFF9C7E0981D6ECF66DBA9F8 (ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83E9E8BAD3ECA72A656DF7549EF3A4FDEB956CC6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8014FB65DD084AC86222B3E48F65E2077F83C30);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Statics.Player = gameObject.transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->set_Player_13(L_1);
		// if (GetComponent<Rigidbody2D>() == null)
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_2;
		L_2 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// Debug.LogError("Component required Rigidbody2D");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralB8014FB65DD084AC86222B3E48F65E2077F83C30, /*hidden argument*/NULL);
		// Destroy(this);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(__this, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_002f:
	{
		// if (GetComponent<BoxCollider2D>() == null)
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_4;
		L_4 = Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0053;
		}
	}
	{
		// Debug.LogWarning("BoxCollider2D not found, adding ...");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral83E9E8BAD3ECA72A656DF7549EF3A4FDEB956CC6, /*hidden argument*/NULL);
		// gameObject.AddComponent<BoxCollider2D>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_7;
		L_7 = GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310(L_6, /*hidden argument*/GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310_RuntimeMethod_var);
	}

IL_0053:
	{
		// startPos = transform.localPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_8, /*hidden argument*/NULL);
		__this->set_startPos_13(L_9);
		// GetComponent<Rigidbody2D>().gravityScale = 0.001f;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_10;
		L_10 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		NullCheck(L_10);
		Rigidbody2D_set_gravityScale_mEDC82EE2ED74DA9C5AB8A0C4A929B09149522BBF(L_10, (0.00100000005f), /*hidden argument*/NULL);
		// StartCoroutine(Shoot());
		RuntimeObject* L_11;
		L_11 = ControlShip_Shoot_mC367083E502F3FB24057683528873F3C1ABE49FA(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_12;
		L_12 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ControlShip::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlShip_LateUpdate_m8960B65ECF9A86E6205A72BCA648E6A8BF4EDF7D (ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// float rotation = Input.GetAxis("Horizontal") * SpeedRotation;
		float L_0;
		L_0 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		float L_1 = __this->get_SpeedRotation_5();
		V_0 = ((float)il2cpp_codegen_multiply((float)L_0, (float)L_1));
		// rotation *= Time.deltaTime;
		float L_2 = V_0;
		float L_3;
		L_3 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_multiply((float)L_2, (float)L_3));
		// transform.Rotate(0, 0, -rotation);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_5 = V_0;
		NullCheck(L_4);
		Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E(L_4, (0.0f), (0.0f), ((-L_5)), /*hidden argument*/NULL);
		// if (Input.GetAxis("Vertical") != 0)
		float L_6;
		L_6 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, /*hidden argument*/NULL);
		if ((((float)L_6) == ((float)(0.0f))))
		{
			goto IL_0087;
		}
	}
	{
		// Vector2 translation = Input.GetAxis("Vertical") * new Vector2(0, Velocity * GetComponent<Rigidbody2D>().mass);
		float L_7;
		L_7 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, /*hidden argument*/NULL);
		float L_8 = __this->get_Velocity_4();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_9;
		L_9 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		NullCheck(L_9);
		float L_10;
		L_10 = Rigidbody2D_get_mass_mE62570BBAB2CE7ACC2FA3B20EE5EB8FBDBEF019F(L_9, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_11), (0.0f), ((float)il2cpp_codegen_multiply((float)L_8, (float)L_10)), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12;
		L_12 = Vector2_op_Multiply_m841D5292C48DAD9746A2F4EED9CE7A76CDB652EA_inline(L_7, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		// translation *= Time.deltaTime;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13 = V_1;
		float L_14;
		L_14 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15;
		L_15 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_13, L_14, /*hidden argument*/NULL);
		V_1 = L_15;
		// GetComponent<Rigidbody2D>().AddRelativeForce(translation, ForceMode2D.Impulse);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_16;
		L_16 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17 = V_1;
		NullCheck(L_16);
		Rigidbody2D_AddRelativeForce_m28F829E1CB8C6D6F8B23F154F3927C0A5C8D6856(L_16, L_17, 1, /*hidden argument*/NULL);
	}

IL_0087:
	{
		// AnimateMotor();
		ControlShip_AnimateMotor_m95E9E12E5AB0068BB68740D04C32C91B610BAA27(__this, /*hidden argument*/NULL);
		// if(transform.localPosition.y > controlGame.ScenarioLimit.yMax || transform.localPosition.y < controlGame.ScenarioLimit.yMin || transform.localPosition.x > controlGame.ScenarioLimit.xMax || transform.localPosition.x < controlGame.ScenarioLimit.xMin)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_18, /*hidden argument*/NULL);
		float L_20 = L_19.get_y_3();
		ControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96 * L_21 = __this->get_controlGame_6();
		NullCheck(L_21);
		ScenarioLimits_tF9A721A3F778BE0145B94E934952E7F4CB7BED05 * L_22 = L_21->get_ScenarioLimit_4();
		NullCheck(L_22);
		float L_23 = L_22->get_yMax_3();
		if ((((float)L_20) > ((float)L_23)))
		{
			goto IL_0115;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_24, /*hidden argument*/NULL);
		float L_26 = L_25.get_y_3();
		ControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96 * L_27 = __this->get_controlGame_6();
		NullCheck(L_27);
		ScenarioLimits_tF9A721A3F778BE0145B94E934952E7F4CB7BED05 * L_28 = L_27->get_ScenarioLimit_4();
		NullCheck(L_28);
		float L_29 = L_28->get_yMin_2();
		if ((((float)L_26) < ((float)L_29)))
		{
			goto IL_0115;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_30);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_30, /*hidden argument*/NULL);
		float L_32 = L_31.get_x_2();
		ControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96 * L_33 = __this->get_controlGame_6();
		NullCheck(L_33);
		ScenarioLimits_tF9A721A3F778BE0145B94E934952E7F4CB7BED05 * L_34 = L_33->get_ScenarioLimit_4();
		NullCheck(L_34);
		float L_35 = L_34->get_xMax_1();
		if ((((float)L_32) > ((float)L_35)))
		{
			goto IL_0115;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_36;
		L_36 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_36);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		L_37 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_36, /*hidden argument*/NULL);
		float L_38 = L_37.get_x_2();
		ControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96 * L_39 = __this->get_controlGame_6();
		NullCheck(L_39);
		ScenarioLimits_tF9A721A3F778BE0145B94E934952E7F4CB7BED05 * L_40 = L_39->get_ScenarioLimit_4();
		NullCheck(L_40);
		float L_41 = L_40->get_xMin_0();
		if ((!(((float)L_38) < ((float)L_41))))
		{
			goto IL_015c;
		}
	}

IL_0115:
	{
		// Vector3 dir = startPos - transform.localPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42 = __this->get_startPos_13();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_43;
		L_43 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_43);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44;
		L_44 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_43, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		L_45 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_42, L_44, /*hidden argument*/NULL);
		V_2 = L_45;
		// dir = dir.normalized;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
		L_46 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), /*hidden argument*/NULL);
		V_2 = L_46;
		// GetComponent<Rigidbody2D>().AddForce(dir * (2 * GetComponent<Rigidbody2D>().mass), ForceMode2D.Impulse);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_47;
		L_47 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48 = V_2;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_49;
		L_49 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		NullCheck(L_49);
		float L_50;
		L_50 = Rigidbody2D_get_mass_mE62570BBAB2CE7ACC2FA3B20EE5EB8FBDBEF019F(L_49, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51;
		L_51 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_48, ((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_50)), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_52;
		L_52 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_51, /*hidden argument*/NULL);
		NullCheck(L_47);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_47, L_52, 1, /*hidden argument*/NULL);
	}

IL_015c:
	{
		// if (Input.GetKeyDown(KeyCode.LeftControl))
		bool L_53;
		L_53 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)306), /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_016f;
		}
	}
	{
		// shooting = true;
		__this->set_shooting_14((bool)1);
	}

IL_016f:
	{
		// if (Input.GetKeyUp(KeyCode.LeftControl))
		bool L_54;
		L_54 = Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F(((int32_t)306), /*hidden argument*/NULL);
		if (!L_54)
		{
			goto IL_0182;
		}
	}
	{
		// shooting = false;
		__this->set_shooting_14((bool)0);
	}

IL_0182:
	{
		// Statics.Life = life.life;
		Life_tFA6AEBF0D44789AAFC7B4542C83AF07B9D97EA13 * L_55 = __this->get_life_7();
		NullCheck(L_55);
		int32_t L_56 = L_55->get_life_4();
		IL2CPP_RUNTIME_CLASS_INIT(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->set_Life_17(((float)((float)L_56)));
		// }
		return;
	}
}
// System.Void ControlShip::AnimateMotor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlShip_AnimateMotor_m95E9E12E5AB0068BB68740D04C32C91B610BAA27 (ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(MotorAnimation.activeSelf != (Input.GetAxis("Vertical") != 0))
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_MotorAnimation_8();
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_0, /*hidden argument*/NULL);
		float L_2;
		L_2 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)((((int32_t)((((float)L_2) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0))))
		{
			goto IL_0040;
		}
	}
	{
		// MotorAnimation.SetActive(Input.GetAxis("Vertical") != 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_MotorAnimation_8();
		float L_4;
		L_4 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)((((int32_t)((((float)L_4) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator ControlShip::Shoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ControlShip_Shoot_mC367083E502F3FB24057683528873F3C1ABE49FA (ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CShootU3Ed__15_tA3D5CDD11652E4A5CA95A8EFBFC8113B6662B07E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CShootU3Ed__15_tA3D5CDD11652E4A5CA95A8EFBFC8113B6662B07E * L_0 = (U3CShootU3Ed__15_tA3D5CDD11652E4A5CA95A8EFBFC8113B6662B07E *)il2cpp_codegen_object_new(U3CShootU3Ed__15_tA3D5CDD11652E4A5CA95A8EFBFC8113B6662B07E_il2cpp_TypeInfo_var);
		U3CShootU3Ed__15__ctor_m2B8AEC7F4C367018734F07D04F33AF1D457AECB4(L_0, 0, /*hidden argument*/NULL);
		U3CShootU3Ed__15_tA3D5CDD11652E4A5CA95A8EFBFC8113B6662B07E * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void ControlShip::CallShield()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlShip_CallShield_m981741EAE83CD99702ECA0E88C92115E68E6CA0C (ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(Shield.activeSelf != Statics.WithShield)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_Shield_9();
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		bool L_2 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_WithShield_9();
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0022;
		}
	}
	{
		// Shield.SetActive(Statics.WithShield);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_Shield_9();
		IL2CPP_RUNTIME_CLASS_INIT(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		bool L_4 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_WithShield_9();
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0022:
	{
		// if (Statics.rechargeShield)
		IL2CPP_RUNTIME_CLASS_INIT(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		bool L_5 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_rechargeShield_10();
		if (!L_5)
		{
			goto IL_0047;
		}
	}
	{
		// lifeShield = 10;
		__this->set_lifeShield_15(((int32_t)10));
		// ShieldBar.fillAmount = 1;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_6 = __this->get_ShieldBar_12();
		NullCheck(L_6);
		Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C(L_6, (1.0f), /*hidden argument*/NULL);
		// Statics.rechargeShield = false;
		IL2CPP_RUNTIME_CLASS_INIT(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->set_rechargeShield_10((bool)0);
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void ControlShip::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlShip_OnCollisionEnter2D_mF0FEC752B221AC776F36E9EB533C3AAD666FBC73 (ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8 * __this, Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0533A6A2C16737D20E278E4C50B5A40AB53B1A7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (obj.gameObject.tag == "Enemy")
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_0 = ___obj0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0073;
		}
	}
	{
		// Instantiate(Explosion, transform);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_Explosion_10();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_4, L_5, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		// if (Statics.WithShield)
		IL2CPP_RUNTIME_CLASS_INIT(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		bool L_7 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_WithShield_9();
		if (!L_7)
		{
			goto IL_0058;
		}
	}
	{
		// lifeShield--;
		int32_t L_8 = __this->get_lifeShield_15();
		__this->set_lifeShield_15(((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1)));
		// ShieldBar.fillAmount = (float)lifeShield / 10;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_9 = __this->get_ShieldBar_12();
		int32_t L_10 = __this->get_lifeShield_15();
		NullCheck(L_9);
		Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C(L_9, ((float)((float)((float)((float)L_10))/(float)(10.0f))), /*hidden argument*/NULL);
		// }
		goto IL_0073;
	}

IL_0058:
	{
		// life.TakesLife(obj.gameObject.GetComponent<Enemy>().Damage);
		Life_tFA6AEBF0D44789AAFC7B4542C83AF07B9D97EA13 * L_11 = __this->get_life_7();
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_12 = ___obj0;
		NullCheck(L_12);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_14;
		L_14 = GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391(L_13, /*hidden argument*/GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391_RuntimeMethod_var);
		NullCheck(L_14);
		int32_t L_15 = L_14->get_Damage_7();
		NullCheck(L_11);
		Life_TakesLife_m432769A0DBB59D454784B3402F19D358B66CBDBD(L_11, L_15, /*hidden argument*/NULL);
	}

IL_0073:
	{
		// if (obj.gameObject.tag == "EnemyShot")
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_16 = ___obj0;
		NullCheck(L_16);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		String_t* L_18;
		L_18 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_17, /*hidden argument*/NULL);
		bool L_19;
		L_19 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_18, _stringLiteralE0533A6A2C16737D20E278E4C50B5A40AB53B1A7, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00e2;
		}
	}
	{
		// Instantiate(Explosion, transform);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = __this->get_Explosion_10();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22;
		L_22 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_20, L_21, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		// if (Statics.WithShield)
		IL2CPP_RUNTIME_CLASS_INIT(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		bool L_23 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_WithShield_9();
		if (!L_23)
		{
			goto IL_00cb;
		}
	}
	{
		// lifeShield--;
		int32_t L_24 = __this->get_lifeShield_15();
		__this->set_lifeShield_15(((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1)));
		// ShieldBar.fillAmount = (float)lifeShield / 10;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_25 = __this->get_ShieldBar_12();
		int32_t L_26 = __this->get_lifeShield_15();
		NullCheck(L_25);
		Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C(L_25, ((float)((float)((float)((float)L_26))/(float)(10.0f))), /*hidden argument*/NULL);
		// }
		goto IL_00d7;
	}

IL_00cb:
	{
		// life.TakesLife(1);
		Life_tFA6AEBF0D44789AAFC7B4542C83AF07B9D97EA13 * L_27 = __this->get_life_7();
		NullCheck(L_27);
		Life_TakesLife_m432769A0DBB59D454784B3402F19D358B66CBDBD(L_27, 1, /*hidden argument*/NULL);
	}

IL_00d7:
	{
		// Destroy(obj.gameObject);
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_28 = ___obj0;
		NullCheck(L_28);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29;
		L_29 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_28, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_29, /*hidden argument*/NULL);
	}

IL_00e2:
	{
		// if(lifeShield <= 0)
		int32_t L_30 = __this->get_lifeShield_15();
		if ((((int32_t)L_30) > ((int32_t)0)))
		{
			goto IL_0111;
		}
	}
	{
		// Statics.WithShield = false;
		IL2CPP_RUNTIME_CLASS_INIT(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->set_WithShield_9((bool)0);
		// lifeShield = 10;
		__this->set_lifeShield_15(((int32_t)10));
		// ShieldBar.fillAmount = (float)lifeShield / 10;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_31 = __this->get_ShieldBar_12();
		int32_t L_32 = __this->get_lifeShield_15();
		NullCheck(L_31);
		Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C(L_31, ((float)((float)((float)((float)L_32))/(float)(10.0f))), /*hidden argument*/NULL);
	}

IL_0111:
	{
		// }
		return;
	}
}
// System.Void ControlShip::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlShip__ctor_m1DFE695CD1EAB1B2CB9B079E3ED024FF986CFC93 (ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8 * __this, const RuntimeMethod* method)
{
	{
		// public float Velocity  = 10f;
		__this->set_Velocity_4((10.0f));
		// public float SpeedRotation = 200.0f;
		__this->set_SpeedRotation_5((200.0f));
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
// System.Void ControlStart::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlStart_Start_m201D1963F24351E276FC706916096DE032376F51 (ControlStart_t461A8F5392E3967B1B6B5520351D75DEFD71B1B0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B14CFE3D4CBC1199E4D02BE390A89EC1732BA7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1F4F43CEDC02BC7704A4D5437CAA8AA51E54FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD224CC98C54E6EE2624F936AC338093905C92AF2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF38A1E03EF3206EE8B1C481FA8A8F530162598CB);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Statics.WithShield = false;
		IL2CPP_RUNTIME_CLASS_INIT(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->set_WithShield_9((bool)0);
		// Statics.EnemiesDead = 0;
		((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->set_EnemiesDead_15(0);
		// Statics.CurrentLevel = 0;
		((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->set_CurrentLevel_12(0);
		// Statics.Points = 0;
		((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->set_Points_16(0);
		// Statics.ShootingSelected = 2;
		((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->set_ShootingSelected_8(2);
		// if (PlayerPrefs.GetInt(Statics.PLAYERPREF_VALUE) == 0)
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral9E1F4F43CEDC02BC7704A4D5437CAA8AA51E54FD, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0039;
		}
	}
	{
		// PlayerPrefs.SetString(Statics.PLAYERPREF_NEWRECORD, "Nobody");
		PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633(_stringLiteralF38A1E03EF3206EE8B1C481FA8A8F530162598CB, _stringLiteralD224CC98C54E6EE2624F936AC338093905C92AF2, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// Record.text = "Record: " + PlayerPrefs.GetString(Statics.PLAYERPREF_NEWRECORD) + "(" + PlayerPrefs.GetInt(Statics.PLAYERPREF_VALUE) + ")";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_Record_4();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral8B14CFE3D4CBC1199E4D02BE390A89EC1732BA7A);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral8B14CFE3D4CBC1199E4D02BE390A89EC1732BA7A);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3;
		String_t* L_5;
		L_5 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(_stringLiteralF38A1E03EF3206EE8B1C481FA8A8F530162598CB, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_6;
		int32_t L_8;
		L_8 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral9E1F4F43CEDC02BC7704A4D5437CAA8AA51E54FD, /*hidden argument*/NULL);
		V_0 = L_8;
		String_t* L_9;
		L_9 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_9);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_7;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_11;
		L_11 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_10, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_11);
		// }
		return;
	}
}
// System.Void ControlStart::StartClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlStart_StartClick_m4F919D6E668B781C8C5DC0EB2EB21611D882EFAB (ControlStart_t461A8F5392E3967B1B6B5520351D75DEFD71B1B0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4BEB4E28DAF3A9B59B66C6ADA98B9F2681938811);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<AudioSource>().Stop();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0;
		L_0 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		NullCheck(L_0);
		AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F(L_0, /*hidden argument*/NULL);
		// GameObject.Instantiate(Resources.Load(Statics.PREFAB_HISTORY) as GameObject);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_1;
		L_1 = Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120(_stringLiteral4BEB4E28DAF3A9B59B66C6ADA98B9F2681938811, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)IsInstSealed((RuntimeObject*)L_1, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var)), /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		// Statics.loadingGame = false;
		IL2CPP_RUNTIME_CLASS_INIT(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->set_loadingGame_18((bool)0);
		// }
		return;
	}
}
// System.Void ControlStart::ContinueClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlStart_ContinueClick_mBD000E184A0B18DFBA59C7536536E203CD989867 (ControlStart_t461A8F5392E3967B1B6B5520351D75DEFD71B1B0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5D380D7472DF62C3B0C30B37F7A25C76F3441D5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<AudioSource>().Stop();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0;
		L_0 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		NullCheck(L_0);
		AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F(L_0, /*hidden argument*/NULL);
		// GameObject.Instantiate(Resources.Load(Statics.PREFAB_LOAD) as GameObject);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_1;
		L_1 = Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120(_stringLiteralC5D380D7472DF62C3B0C30B37F7A25C76F3441D5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)IsInstSealed((RuntimeObject*)L_1, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var)), /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		// StartCoroutine(LoadScene());
		RuntimeObject* L_3;
		L_3 = ControlStart_LoadScene_mAC10804581E7277D508A8FEB6CD266DFB3E8EBA9(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_4;
		L_4 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator ControlStart::LoadScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ControlStart_LoadScene_mAC10804581E7277D508A8FEB6CD266DFB3E8EBA9 (ControlStart_t461A8F5392E3967B1B6B5520351D75DEFD71B1B0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadSceneU3Ed__4_tFA699E679840F67FE1E189060FE7284ED9DEB59E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLoadSceneU3Ed__4_tFA699E679840F67FE1E189060FE7284ED9DEB59E * L_0 = (U3CLoadSceneU3Ed__4_tFA699E679840F67FE1E189060FE7284ED9DEB59E *)il2cpp_codegen_object_new(U3CLoadSceneU3Ed__4_tFA699E679840F67FE1E189060FE7284ED9DEB59E_il2cpp_TypeInfo_var);
		U3CLoadSceneU3Ed__4__ctor_mAD54CB3A4262AF8A10EFE3121723ABFA115FE5FB(L_0, 0, /*hidden argument*/NULL);
		U3CLoadSceneU3Ed__4_tFA699E679840F67FE1E189060FE7284ED9DEB59E * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void ControlStart::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlStart_Quit_mD819D0CAD1831F9E534C96E210F5FFFF9FDB1747 (ControlStart_t461A8F5392E3967B1B6B5520351D75DEFD71B1B0 * __this, const RuntimeMethod* method)
{
	{
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ControlStart::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlStart__ctor_mB1F89FE5B8F09B1F79FC79EA5BFDBDCEBEF790EA (ControlStart_t461A8F5392E3967B1B6B5520351D75DEFD71B1B0 * __this, const RuntimeMethod* method)
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
// System.Void DestroyTime::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyTime_Start_m8C0A193A37746E7A2A2C617E998A31E724373497 (DestroyTime_t24806801B4F6EA764796D3C1789E9D157D0023D2 * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(CallDestroy());
		RuntimeObject* L_0;
		L_0 = DestroyTime_CallDestroy_m61D5F2B05283C2474DC66285AC88FDA79B8E1BD6(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator DestroyTime::CallDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DestroyTime_CallDestroy_m61D5F2B05283C2474DC66285AC88FDA79B8E1BD6 (DestroyTime_t24806801B4F6EA764796D3C1789E9D157D0023D2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCallDestroyU3Ed__2_tAFEBF82F13F04716C1673744B80612E43A0ACA03_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCallDestroyU3Ed__2_tAFEBF82F13F04716C1673744B80612E43A0ACA03 * L_0 = (U3CCallDestroyU3Ed__2_tAFEBF82F13F04716C1673744B80612E43A0ACA03 *)il2cpp_codegen_object_new(U3CCallDestroyU3Ed__2_tAFEBF82F13F04716C1673744B80612E43A0ACA03_il2cpp_TypeInfo_var);
		U3CCallDestroyU3Ed__2__ctor_m7A7A8DC06CB12FA979DC587DA59CD00B21710FAF(L_0, 0, /*hidden argument*/NULL);
		U3CCallDestroyU3Ed__2_tAFEBF82F13F04716C1673744B80612E43A0ACA03 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void DestroyTime::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyTime__ctor_mAB5E312F1EAAD1B3B69CC64F2B95B607F8EE4F88 (DestroyTime_t24806801B4F6EA764796D3C1789E9D157D0023D2 * __this, const RuntimeMethod* method)
{
	{
		// public float delay = 2f; // in Secounds
		__this->set_delay_4((2.0f));
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
// System.Void Enemy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Start_m9FA35B427F2B9FDFD390E9812C2556775C62CB02 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rectTransform = GetComponent<RectTransform>();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0;
		L_0 = Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		__this->set_rectTransform_11(L_0);
		// if (MyType == Statics.TYPE_ENEMY.SHIP)
		int32_t L_1 = __this->get_MyType_4();
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0022;
		}
	}
	{
		// StartCoroutine(Shoot());
		RuntimeObject* L_2;
		L_2 = Enemy_Shoot_m9698649D8FCE4A907B5EBAA30105E3DF881FB767(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_3;
		L_3 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_2, /*hidden argument*/NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Enemy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Update_mA01EE7AF5D3B97687752E9D22BECB4A3E13F8FD2 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!Statics.Player) return;
		IL2CPP_RUNTIME_CLASS_INIT(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_Player_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000d;
		}
	}
	{
		// if (!Statics.Player) return;
		return;
	}

IL_000d:
	{
		// if(MyType == Statics.TYPE_ENEMY.SHIP)
		int32_t L_2 = __this->get_MyType_4();
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_004c;
		}
	}
	{
		// Quaternion q = Statics.FaceObject(Statics.Player.localPosition, transform.localPosition, Statics.FacingDirection.Right);
		IL2CPP_RUNTIME_CLASS_INIT(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_Player_13();
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_3, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_4, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_6, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		L_8 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_7, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9;
		L_9 = Statics_FaceObject_mD7C4A0B189730DDA2CC972CE3204E2FE896FAF50(L_5, L_8, ((int32_t)270), /*hidden argument*/NULL);
		V_0 = L_9;
		// transform.rotation = q;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11 = V_0;
		NullCheck(L_10);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_10, L_11, /*hidden argument*/NULL);
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void Enemy::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_OnCollisionEnter2D_m47EAF0D1D60EC5BF3953975EA6BF15189DF82A12 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___objeto0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2FDA18FEAFC8FAB4295C255F2EBD18FE5B0C5BB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(objeto.gameObject.tag == "Shot")
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_0 = ___objeto0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteralF2FDA18FEAFC8FAB4295C255F2EBD18FE5B0C5BB, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0067;
		}
	}
	{
		// if (dodgeHability)
		bool L_4 = __this->get_dodgeHability_10();
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		// DodgeBullet();
		Enemy_DodgeBullet_mFDDD74803A7DA91D51DFF3B3BA4681CBA1914017(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0026:
	{
		// Destroy(objeto.gameObject);
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_5 = ___objeto0;
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_6, /*hidden argument*/NULL);
		// _life.TakesLife(Statics.Damage);
		Life_tFA6AEBF0D44789AAFC7B4542C83AF07B9D97EA13 * L_7 = __this->get__life_5();
		IL2CPP_RUNTIME_CLASS_INIT(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		int32_t L_8 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_Damage_11();
		NullCheck(L_7);
		Life_TakesLife_m432769A0DBB59D454784B3402F19D358B66CBDBD(L_7, L_8, /*hidden argument*/NULL);
		// Instantiate(Explosion, transform).transform.parent = transform.parent;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_Explosion_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_9, L_10, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		NullCheck(L_11);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_11, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_12, L_14, /*hidden argument*/NULL);
	}

IL_0067:
	{
		// }
		return;
	}
}
// System.Void Enemy::DodgeBullet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_DodgeBullet_mFDDD74803A7DA91D51DFF3B3BA4681CBA1914017 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 dodgeOffset = new Vector3(UnityEngine.Random.Range(-25, 25), UnityEngine.Random.Range(-25, 25), UnityEngine.Random.Range(-25, 25));
		int32_t L_0;
		L_0 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)-25), ((int32_t)25), /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)-25), ((int32_t)25), /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)-25), ((int32_t)25), /*hidden argument*/NULL);
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), ((float)((float)L_0)), ((float)((float)L_1)), ((float)((float)L_2)), /*hidden argument*/NULL);
		// Vector3 dodgePosition = new Vector3(rectTransform.position.x + dodgeOffset.x, rectTransform.position.y + dodgeOffset.y, rectTransform.position.z + dodgeOffset.z);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_3 = __this->get_rectTransform_11();
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = V_0;
		float L_7 = L_6.get_x_2();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_8 = __this->get_rectTransform_11();
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		float L_10 = L_9.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = V_0;
		float L_12 = L_11.get_y_3();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_13 = __this->get_rectTransform_11();
		NullCheck(L_13);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_13, /*hidden argument*/NULL);
		float L_15 = L_14.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = V_0;
		float L_17 = L_16.get_z_4();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_10, (float)L_12)), ((float)il2cpp_codegen_add((float)L_15, (float)L_17)), /*hidden argument*/NULL);
		// rectTransform.SetPositionAndRotation(dodgePosition, rectTransform.rotation);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_18 = __this->get_rectTransform_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = V_1;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_20 = __this->get_rectTransform_11();
		NullCheck(L_20);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_21;
		L_21 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_20, /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_SetPositionAndRotation_m33418A6BDFB6395B98D0B5733F5E522B7EEDDCDE(L_18, L_19, L_21, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy::MyDeath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_MyDeath_mA4085ED4BD10E6B3EDEE186807D3C8FB762A4CC8 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(MyType == Statics.TYPE_ENEMY.METEOR)
		int32_t L_0 = __this->get_MyType_4();
		if (L_0)
		{
			goto IL_003c;
		}
	}
	{
		// if (UnityEngine.Random.Range(0, 100) > 60)//60% chance of it becoming bits and pieces
		int32_t L_1;
		L_1 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)100), /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)60))))
		{
			goto IL_0030;
		}
	}
	{
		// Create(1);
		Enemy_Create_m66ACA885B980722A913D038190E87E6AFFA55759(__this, 1, /*hidden argument*/NULL);
		// Create(2);
		Enemy_Create_m66ACA885B980722A913D038190E87E6AFFA55759(__this, 2, /*hidden argument*/NULL);
		// Create(3);
		Enemy_Create_m66ACA885B980722A913D038190E87E6AFFA55759(__this, 3, /*hidden argument*/NULL);
		// Create(4);
		Enemy_Create_m66ACA885B980722A913D038190E87E6AFFA55759(__this, 4, /*hidden argument*/NULL);
	}

IL_0030:
	{
		// Statics.EnemiesDead++;
		IL2CPP_RUNTIME_CLASS_INIT(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		int32_t L_2 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_EnemiesDead_15();
		((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->set_EnemiesDead_15(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
	}

IL_003c:
	{
		// if(ItemDrop != null && UnityEngine.Random.Range(0, 100) > 70)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_ItemDrop_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_5;
		L_5 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)100), /*hidden argument*/NULL);
		if ((((int32_t)L_5) <= ((int32_t)((int32_t)70))))
		{
			goto IL_0081;
		}
	}
	{
		// Instantiate(ItemDrop, transform.parent).transform.localPosition = transform.localPosition;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_ItemDrop_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_6, L_8, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_10, L_12, /*hidden argument*/NULL);
	}

IL_0081:
	{
		// Statics.Points += Damage * 100;
		IL2CPP_RUNTIME_CLASS_INIT(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		int32_t L_13 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_Points_16();
		int32_t L_14 = __this->get_Damage_7();
		((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->set_Points_16(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_14, (int32_t)((int32_t)100))))));
		// StartCoroutine(KillMe());
		RuntimeObject* L_15;
		L_15 = Enemy_KillMe_m24D0CC29C673187902BFD4554072865ADF3F2EB5(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_16;
		L_16 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_15, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Enemy::KillMe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enemy_KillMe_m24D0CC29C673187902BFD4554072865ADF3F2EB5 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CKillMeU3Ed__13_t119E02ACE3C774FC55783CA4B9311F67937D811C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CKillMeU3Ed__13_t119E02ACE3C774FC55783CA4B9311F67937D811C * L_0 = (U3CKillMeU3Ed__13_t119E02ACE3C774FC55783CA4B9311F67937D811C *)il2cpp_codegen_object_new(U3CKillMeU3Ed__13_t119E02ACE3C774FC55783CA4B9311F67937D811C_il2cpp_TypeInfo_var);
		U3CKillMeU3Ed__13__ctor_m8C885CDD9C15822AFC09DE23F1D2E62CED4B313E(L_0, 0, /*hidden argument*/NULL);
		U3CKillMeU3Ed__13_t119E02ACE3C774FC55783CA4B9311F67937D811C * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Enemy::Create(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Create_m66ACA885B980722A913D038190E87E6AFFA55759 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, int32_t ___v0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// GameObject goMunus = Instantiate(gameObject, transform.parent);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_0, L_2, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		V_0 = L_3;
		// goMunus.GetComponent<Enemy>().MyType = Statics.TYPE_ENEMY.PIECES;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = V_0;
		NullCheck(L_4);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_5;
		L_5 = GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391(L_4, /*hidden argument*/GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391_RuntimeMethod_var);
		NullCheck(L_5);
		L_5->set_MyType_4(2);
		// float scale = UnityEngine.Random.Range(0.2f, 0.6f);
		float L_6;
		L_6 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((0.200000003f), (0.600000024f), /*hidden argument*/NULL);
		V_1 = L_6;
		// goMunus.transform.localScale = new Vector3(scale, scale, scale);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = V_0;
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_7, /*hidden argument*/NULL);
		float L_9 = V_1;
		float L_10 = V_1;
		float L_11 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), L_9, L_10, L_11, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_8, L_12, /*hidden argument*/NULL);
		// float force = 100f * goMunus.GetComponent<Rigidbody2D>().mass;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = V_0;
		NullCheck(L_13);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_14;
		L_14 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_13, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		NullCheck(L_14);
		float L_15;
		L_15 = Rigidbody2D_get_mass_mE62570BBAB2CE7ACC2FA3B20EE5EB8FBDBEF019F(L_14, /*hidden argument*/NULL);
		V_2 = ((float)il2cpp_codegen_multiply((float)(100.0f), (float)L_15));
		int32_t L_16 = ___v0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0071;
			}
			case 1:
			{
				goto IL_0089;
			}
			case 2:
			{
				goto IL_00a1;
			}
			case 3:
			{
				goto IL_00b9;
			}
		}
	}
	{
		return;
	}

IL_0071:
	{
		// case 1: goMunus.GetComponent<Rigidbody2D>().AddRelativeForce(Vector2.down * force, ForceMode2D.Impulse);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = V_0;
		NullCheck(L_17);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_18;
		L_18 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_17, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19;
		L_19 = Vector2_get_down_m38F16950B2C1FAFBE218C3E62DA95D498443650F(/*hidden argument*/NULL);
		float L_20 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_21;
		L_21 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_19, L_20, /*hidden argument*/NULL);
		NullCheck(L_18);
		Rigidbody2D_AddRelativeForce_m28F829E1CB8C6D6F8B23F154F3927C0A5C8D6856(L_18, L_21, 1, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0089:
	{
		// goMunus.GetComponent<Rigidbody2D>().AddRelativeForce(Vector2.up * force, ForceMode2D.Impulse);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = V_0;
		NullCheck(L_22);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_23;
		L_23 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_22, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_24;
		L_24 = Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C(/*hidden argument*/NULL);
		float L_25 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_26;
		L_26 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_24, L_25, /*hidden argument*/NULL);
		NullCheck(L_23);
		Rigidbody2D_AddRelativeForce_m28F829E1CB8C6D6F8B23F154F3927C0A5C8D6856(L_23, L_26, 1, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00a1:
	{
		// goMunus.GetComponent<Rigidbody2D>().AddRelativeForce(Vector2.left * force, ForceMode2D.Impulse);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = V_0;
		NullCheck(L_27);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_28;
		L_28 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_27, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_29;
		L_29 = Vector2_get_left_m6AB0857E0C702D555B6747B6B4359D019C60CF14(/*hidden argument*/NULL);
		float L_30 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_31;
		L_31 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_29, L_30, /*hidden argument*/NULL);
		NullCheck(L_28);
		Rigidbody2D_AddRelativeForce_m28F829E1CB8C6D6F8B23F154F3927C0A5C8D6856(L_28, L_31, 1, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00b9:
	{
		// goMunus.GetComponent<Rigidbody2D>().AddRelativeForce(Vector2.right * force, ForceMode2D.Impulse);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32 = V_0;
		NullCheck(L_32);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_33;
		L_33 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_32, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_34;
		L_34 = Vector2_get_right_m42ED15112D219375D2B6879E62ED925D002F15AF(/*hidden argument*/NULL);
		float L_35 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_36;
		L_36 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_34, L_35, /*hidden argument*/NULL);
		NullCheck(L_33);
		Rigidbody2D_AddRelativeForce_m28F829E1CB8C6D6F8B23F154F3927C0A5C8D6856(L_33, L_36, 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Enemy::Shoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enemy_Shoot_m9698649D8FCE4A907B5EBAA30105E3DF881FB767 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CShootU3Ed__15_tF9AF905CBA0A2327F76DF1C4043394EB061319B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CShootU3Ed__15_tF9AF905CBA0A2327F76DF1C4043394EB061319B2 * L_0 = (U3CShootU3Ed__15_tF9AF905CBA0A2327F76DF1C4043394EB061319B2 *)il2cpp_codegen_object_new(U3CShootU3Ed__15_tF9AF905CBA0A2327F76DF1C4043394EB061319B2_il2cpp_TypeInfo_var);
		U3CShootU3Ed__15__ctor_m29B2F0E858838B3DB93DED23561CABBF841230F6(L_0, 0, /*hidden argument*/NULL);
		U3CShootU3Ed__15_tF9AF905CBA0A2327F76DF1C4043394EB061319B2 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Enemy::EndBoss()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_EndBoss_mA358579DEF2D3DAF68CD80B9AD4C96C1981554DA (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96_m4646739A29FFF4CF05ACE5EF6C64ECD193BFB160_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77F02115F12F6B792D9FB14651B95D59F269B4A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral931DFDCE8A7F395390F2AC831102C486A12DB07C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject.Find("Control").GetComponent<ControlGame>().LevelPassed();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral931DFDCE8A7F395390F2AC831102C486A12DB07C, /*hidden argument*/NULL);
		NullCheck(L_0);
		ControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96 * L_1;
		L_1 = GameObject_GetComponent_TisControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96_m4646739A29FFF4CF05ACE5EF6C64ECD193BFB160(L_0, /*hidden argument*/GameObject_GetComponent_TisControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96_m4646739A29FFF4CF05ACE5EF6C64ECD193BFB160_RuntimeMethod_var);
		NullCheck(L_1);
		ControlGame_LevelPassed_m05B6235DD8F835987CA547397293A735BB6F6534(L_1, /*hidden argument*/NULL);
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_2, /*hidden argument*/NULL);
		// Invoke("PStick", 1f);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral77F02115F12F6B792D9FB14651B95D59F269B4A4, (1.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy::PStick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_PStick_m5BAC91E00684770270D3B5164328B2EF020D9173 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	{
		// if(Stick.GetStck() == Stick.stck.MANESTIC)
		int32_t L_0;
		L_0 = Stick_GetStck_m7A49B714FF83A4D429439940FB6990888867BD7B(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_000e;
		}
	}
	{
		// Update();
		Enemy_Update_mA01EE7AF5D3B97687752E9D22BECB4A3E13F8FD2(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void Enemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy__ctor_m3C82F8269DE4132408E15B523907244771640734 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	{
		// public int Damage = 1;
		__this->set_Damage_7(1);
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
// System.Void EnemyControl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyControl_Start_mB2709A00C33F64E801FB336D9224A48BAEDF451F (EnemyControl_t8354619B7C2514F856067E693DC1914D07EE53D9 * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(Process());
		RuntimeObject* L_0;
		L_0 = EnemyControl_Process_m3026B4978A8349BD60037F2B25AFA4539B70FB7B(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator EnemyControl::Process()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnemyControl_Process_m3026B4978A8349BD60037F2B25AFA4539B70FB7B (EnemyControl_t8354619B7C2514F856067E693DC1914D07EE53D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CProcessU3Ed__4_t71016A10790CE995349F35F697F784B6C726E051_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CProcessU3Ed__4_t71016A10790CE995349F35F697F784B6C726E051 * L_0 = (U3CProcessU3Ed__4_t71016A10790CE995349F35F697F784B6C726E051 *)il2cpp_codegen_object_new(U3CProcessU3Ed__4_t71016A10790CE995349F35F697F784B6C726E051_il2cpp_TypeInfo_var);
		U3CProcessU3Ed__4__ctor_mA6DCD4EAD0188CA4C4AD0A5EF0D2A9FC2F8ADC15(L_0, 0, /*hidden argument*/NULL);
		U3CProcessU3Ed__4_t71016A10790CE995349F35F697F784B6C726E051 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void EnemyControl::EnemyCreate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyControl_EnemyCreate_m1DBC2B3B2C19C6C6D410EAB1360BB814DD12FD3E (EnemyControl_t8354619B7C2514F856067E693DC1914D07EE53D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// GameObject GoIni = Instantiate(controlGame.Levels[Statics.CurrentLevel].Enemies[UnityEngine.Random.Range(0, controlGame.Levels[Statics.CurrentLevel].Enemies.Length)], LocalToCreateEnemies);
		ControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96 * L_0 = __this->get_controlGame_4();
		NullCheck(L_0);
		LevelU5BU5D_t10F32731C74504D66804828AC533B31C3D098D5B* L_1 = L_0->get_Levels_5();
		IL2CPP_RUNTIME_CLASS_INIT(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		int32_t L_2 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_CurrentLevel_12();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Level_t0F1BB2DCE2C7368CA4FEAE26F672ADB4C35C7505 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_5 = L_4->get_Enemies_5();
		ControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96 * L_6 = __this->get_controlGame_4();
		NullCheck(L_6);
		LevelU5BU5D_t10F32731C74504D66804828AC533B31C3D098D5B* L_7 = L_6->get_Levels_5();
		int32_t L_8 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_CurrentLevel_12();
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Level_t0F1BB2DCE2C7368CA4FEAE26F672ADB4C35C7505 * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_11 = L_10->get_Enemies_5();
		NullCheck(L_11);
		int32_t L_12;
		L_12 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))), /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_13 = L_12;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15 = __this->get_LocalToCreateEnemies_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_14, L_15, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		V_0 = L_16;
		// Vector3 pos = GoIni.transform.localPosition;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = V_0;
		NullCheck(L_17);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_18, /*hidden argument*/NULL);
		V_1 = L_19;
		// if (UnityEngine.Random.Range(0, 100) > 50)
		int32_t L_20;
		L_20 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)100), /*hidden argument*/NULL);
		if ((((int32_t)L_20) <= ((int32_t)((int32_t)50))))
		{
			goto IL_00d2;
		}
	}
	{
		// pos.x = UnityEngine.Random.Range(controlGame.ScenarioLimit.xMin, controlGame.ScenarioLimit.xMax);
		ControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96 * L_21 = __this->get_controlGame_4();
		NullCheck(L_21);
		ScenarioLimits_tF9A721A3F778BE0145B94E934952E7F4CB7BED05 * L_22 = L_21->get_ScenarioLimit_4();
		NullCheck(L_22);
		float L_23 = L_22->get_xMin_0();
		ControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96 * L_24 = __this->get_controlGame_4();
		NullCheck(L_24);
		ScenarioLimits_tF9A721A3F778BE0145B94E934952E7F4CB7BED05 * L_25 = L_24->get_ScenarioLimit_4();
		NullCheck(L_25);
		float L_26 = L_25->get_xMax_1();
		float L_27;
		L_27 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_23, L_26, /*hidden argument*/NULL);
		(&V_1)->set_x_2(L_27);
		// if (UnityEngine.Random.Range(0, 100) > 50)
		int32_t L_28;
		L_28 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)100), /*hidden argument*/NULL);
		if ((((int32_t)L_28) <= ((int32_t)((int32_t)50))))
		{
			goto IL_00b3;
		}
	}
	{
		// pos.y = controlGame.ScenarioLimit.yMin-100;
		ControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96 * L_29 = __this->get_controlGame_4();
		NullCheck(L_29);
		ScenarioLimits_tF9A721A3F778BE0145B94E934952E7F4CB7BED05 * L_30 = L_29->get_ScenarioLimit_4();
		NullCheck(L_30);
		float L_31 = L_30->get_yMin_2();
		(&V_1)->set_y_3(((float)il2cpp_codegen_subtract((float)L_31, (float)(100.0f))));
		// }
		goto IL_0146;
	}

IL_00b3:
	{
		// pos.y = controlGame.ScenarioLimit.yMax+100;
		ControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96 * L_32 = __this->get_controlGame_4();
		NullCheck(L_32);
		ScenarioLimits_tF9A721A3F778BE0145B94E934952E7F4CB7BED05 * L_33 = L_32->get_ScenarioLimit_4();
		NullCheck(L_33);
		float L_34 = L_33->get_yMax_3();
		(&V_1)->set_y_3(((float)il2cpp_codegen_add((float)L_34, (float)(100.0f))));
		// }
		goto IL_0146;
	}

IL_00d2:
	{
		// pos.y = UnityEngine.Random.Range(controlGame.ScenarioLimit.yMin, controlGame.ScenarioLimit.yMax);
		ControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96 * L_35 = __this->get_controlGame_4();
		NullCheck(L_35);
		ScenarioLimits_tF9A721A3F778BE0145B94E934952E7F4CB7BED05 * L_36 = L_35->get_ScenarioLimit_4();
		NullCheck(L_36);
		float L_37 = L_36->get_yMin_2();
		ControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96 * L_38 = __this->get_controlGame_4();
		NullCheck(L_38);
		ScenarioLimits_tF9A721A3F778BE0145B94E934952E7F4CB7BED05 * L_39 = L_38->get_ScenarioLimit_4();
		NullCheck(L_39);
		float L_40 = L_39->get_yMax_3();
		float L_41;
		L_41 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_37, L_40, /*hidden argument*/NULL);
		(&V_1)->set_y_3(L_41);
		// if (UnityEngine.Random.Range(0, 100) > 50)
		int32_t L_42;
		L_42 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)100), /*hidden argument*/NULL);
		if ((((int32_t)L_42) <= ((int32_t)((int32_t)50))))
		{
			goto IL_0129;
		}
	}
	{
		// pos.x = controlGame.ScenarioLimit.xMin-100;
		ControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96 * L_43 = __this->get_controlGame_4();
		NullCheck(L_43);
		ScenarioLimits_tF9A721A3F778BE0145B94E934952E7F4CB7BED05 * L_44 = L_43->get_ScenarioLimit_4();
		NullCheck(L_44);
		float L_45 = L_44->get_xMin_0();
		(&V_1)->set_x_2(((float)il2cpp_codegen_subtract((float)L_45, (float)(100.0f))));
		// }
		goto IL_0146;
	}

IL_0129:
	{
		// pos.x = controlGame.ScenarioLimit.xMax+100;
		ControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96 * L_46 = __this->get_controlGame_4();
		NullCheck(L_46);
		ScenarioLimits_tF9A721A3F778BE0145B94E934952E7F4CB7BED05 * L_47 = L_46->get_ScenarioLimit_4();
		NullCheck(L_47);
		float L_48 = L_47->get_xMax_1();
		(&V_1)->set_x_2(((float)il2cpp_codegen_add((float)L_48, (float)(100.0f))));
	}

IL_0146:
	{
		// GoIni.transform.localPosition = pos;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_49 = V_0;
		NullCheck(L_49);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_50;
		L_50 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_49, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51 = V_1;
		NullCheck(L_50);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_50, L_51, /*hidden argument*/NULL);
		// float forca = 100f * GoIni.GetComponent<Rigidbody2D>().mass;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_52 = V_0;
		NullCheck(L_52);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_53;
		L_53 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_52, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		NullCheck(L_53);
		float L_54;
		L_54 = Rigidbody2D_get_mass_mE62570BBAB2CE7ACC2FA3B20EE5EB8FBDBEF019F(L_53, /*hidden argument*/NULL);
		V_2 = ((float)il2cpp_codegen_multiply((float)(100.0f), (float)L_54));
		// if (GoIni.GetComponent<Enemy>().MyType == Statics.TYPE_ENEMY.METEOR )
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_55 = V_0;
		NullCheck(L_55);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_56;
		L_56 = GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391(L_55, /*hidden argument*/GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391_RuntimeMethod_var);
		NullCheck(L_56);
		int32_t L_57 = L_56->get_MyType_4();
		if (L_57)
		{
			goto IL_0202;
		}
	}
	{
		// if(GoIni.transform.localPosition.x < 0)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_58 = V_0;
		NullCheck(L_58);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_59;
		L_59 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_58, /*hidden argument*/NULL);
		NullCheck(L_59);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_60;
		L_60 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_59, /*hidden argument*/NULL);
		float L_61 = L_60.get_x_2();
		if ((!(((float)L_61) < ((float)(0.0f)))))
		{
			goto IL_01a4;
		}
	}
	{
		// GoIni.GetComponent<Rigidbody2D>().AddRelativeForce(Vector2.right * forca, ForceMode2D.Impulse);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_62 = V_0;
		NullCheck(L_62);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_63;
		L_63 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_62, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_64;
		L_64 = Vector2_get_right_m42ED15112D219375D2B6879E62ED925D002F15AF(/*hidden argument*/NULL);
		float L_65 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_66;
		L_66 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_64, L_65, /*hidden argument*/NULL);
		NullCheck(L_63);
		Rigidbody2D_AddRelativeForce_m28F829E1CB8C6D6F8B23F154F3927C0A5C8D6856(L_63, L_66, 1, /*hidden argument*/NULL);
		// }
		goto IL_01bb;
	}

IL_01a4:
	{
		// GoIni.GetComponent<Rigidbody2D>().AddRelativeForce(Vector2.left * forca, ForceMode2D.Impulse);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_67 = V_0;
		NullCheck(L_67);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_68;
		L_68 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_67, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_69;
		L_69 = Vector2_get_left_m6AB0857E0C702D555B6747B6B4359D019C60CF14(/*hidden argument*/NULL);
		float L_70 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_71;
		L_71 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_69, L_70, /*hidden argument*/NULL);
		NullCheck(L_68);
		Rigidbody2D_AddRelativeForce_m28F829E1CB8C6D6F8B23F154F3927C0A5C8D6856(L_68, L_71, 1, /*hidden argument*/NULL);
	}

IL_01bb:
	{
		// if (GoIni.transform.localPosition.y < 0)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_72 = V_0;
		NullCheck(L_72);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_73;
		L_73 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_72, /*hidden argument*/NULL);
		NullCheck(L_73);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_74;
		L_74 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_73, /*hidden argument*/NULL);
		float L_75 = L_74.get_y_3();
		if ((!(((float)L_75) < ((float)(0.0f)))))
		{
			goto IL_01ea;
		}
	}
	{
		// GoIni.GetComponent<Rigidbody2D>().AddRelativeForce(Vector2.up * forca, ForceMode2D.Impulse);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_76 = V_0;
		NullCheck(L_76);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_77;
		L_77 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_76, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_78;
		L_78 = Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C(/*hidden argument*/NULL);
		float L_79 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_80;
		L_80 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_78, L_79, /*hidden argument*/NULL);
		NullCheck(L_77);
		Rigidbody2D_AddRelativeForce_m28F829E1CB8C6D6F8B23F154F3927C0A5C8D6856(L_77, L_80, 1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_01ea:
	{
		// GoIni.GetComponent<Rigidbody2D>().AddRelativeForce(Vector2.down * forca, ForceMode2D.Impulse);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_81 = V_0;
		NullCheck(L_81);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_82;
		L_82 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_81, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_83;
		L_83 = Vector2_get_down_m38F16950B2C1FAFBE218C3E62DA95D498443650F(/*hidden argument*/NULL);
		float L_84 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_85;
		L_85 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_83, L_84, /*hidden argument*/NULL);
		NullCheck(L_82);
		Rigidbody2D_AddRelativeForce_m28F829E1CB8C6D6F8B23F154F3927C0A5C8D6856(L_82, L_85, 1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0202:
	{
		// Vector3 dir = Statics.Player.localPosition - GoIni.transform.localPosition;
		IL2CPP_RUNTIME_CLASS_INIT(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_86 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_Player_13();
		NullCheck(L_86);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_87;
		L_87 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_86, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_88 = V_0;
		NullCheck(L_88);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_89;
		L_89 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_88, /*hidden argument*/NULL);
		NullCheck(L_89);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_90;
		L_90 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_89, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_91;
		L_91 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_87, L_90, /*hidden argument*/NULL);
		V_3 = L_91;
		// dir = dir.normalized;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_92;
		L_92 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_3), /*hidden argument*/NULL);
		V_3 = L_92;
		// GoIni.GetComponent<Rigidbody2D>().AddForce(dir * forca, ForceMode2D.Impulse);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_93 = V_0;
		NullCheck(L_93);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_94;
		L_94 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_93, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_95 = V_3;
		float L_96 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_97;
		L_97 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_95, L_96, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_98;
		L_98 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_97, /*hidden argument*/NULL);
		NullCheck(L_94);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_94, L_98, 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator EnemyControl::CallBoss()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnemyControl_CallBoss_mEE1F75478CABCE55BC6A16FA00D0F843E7A58101 (EnemyControl_t8354619B7C2514F856067E693DC1914D07EE53D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCallBossU3Ed__6_t0BF59ED4A6D214279882298BAE1927F9D4059B35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCallBossU3Ed__6_t0BF59ED4A6D214279882298BAE1927F9D4059B35 * L_0 = (U3CCallBossU3Ed__6_t0BF59ED4A6D214279882298BAE1927F9D4059B35 *)il2cpp_codegen_object_new(U3CCallBossU3Ed__6_t0BF59ED4A6D214279882298BAE1927F9D4059B35_il2cpp_TypeInfo_var);
		U3CCallBossU3Ed__6__ctor_mDA19F5EC5865BAF920AD4E709D8ADE95E743F363(L_0, 0, /*hidden argument*/NULL);
		U3CCallBossU3Ed__6_t0BF59ED4A6D214279882298BAE1927F9D4059B35 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void EnemyControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyControl__ctor_mE15FA6B97AEFE883D943CC0D237897F435BC34BF (EnemyControl_t8354619B7C2514F856067E693DC1914D07EE53D9 * __this, const RuntimeMethod* method)
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
// System.Void Explosion::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Explosion_Start_m519BD45EC393F52D86FB64B10889D5CBADCF4C22 (Explosion_t03ACA9CD2F46E4913DC45A3EA50B165F4662DCED * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD065C8D83A9538847A9F9572A03794F2CCA4BF1B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!GetComponent<Image>())
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0;
		L_0 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB(__this, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_002e;
		}
	}
	{
		// Debug.LogError("Missing GameObject " + gameObject.name);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralD065C8D83A9538847A9F9572A03794F2CCA4BF1B, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_4, /*hidden argument*/NULL);
		// Destroy(this);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(__this, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_002e:
	{
		// image = GetComponent<Image>();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_5;
		L_5 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB(__this, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		__this->set_image_5(L_5);
		// StartCoroutine( Explode());
		RuntimeObject* L_6;
		L_6 = Explosion_Explode_m0586F5F99D95A44520E522FA9CF6256DCB7FC258(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_7;
		L_7 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Explosion::Explode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Explosion_Explode_m0586F5F99D95A44520E522FA9CF6256DCB7FC258 (Explosion_t03ACA9CD2F46E4913DC45A3EA50B165F4662DCED * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CExplodeU3Ed__3_tD50D1FAB07D31C87001D70FBED9046F4B147664D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CExplodeU3Ed__3_tD50D1FAB07D31C87001D70FBED9046F4B147664D * L_0 = (U3CExplodeU3Ed__3_tD50D1FAB07D31C87001D70FBED9046F4B147664D *)il2cpp_codegen_object_new(U3CExplodeU3Ed__3_tD50D1FAB07D31C87001D70FBED9046F4B147664D_il2cpp_TypeInfo_var);
		U3CExplodeU3Ed__3__ctor_mA6402CE95E7EDCBD469BF9A8CE6EE0321AC1C77F(L_0, 0, /*hidden argument*/NULL);
		U3CExplodeU3Ed__3_tD50D1FAB07D31C87001D70FBED9046F4B147664D * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Explosion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Explosion__ctor_m1400515C43124E852380BB8283E15042AF0A5094 (Explosion_t03ACA9CD2F46E4913DC45A3EA50B165F4662DCED * __this, const RuntimeMethod* method)
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
// System.Void Ghost::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ghost_Start_m4D58708DF0B0990AD546DD02C95396D5C3BE6D11 (Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// position.Clear();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_0 = __this->get_position_7();
		NullCheck(L_0);
		List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702(L_0, /*hidden argument*/List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_RuntimeMethod_var);
		// rotation.Clear();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_1 = __this->get_rotation_8();
		NullCheck(L_1);
		List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702(L_1, /*hidden argument*/List_1_Clear_mE0F03A2E42E2F7F8A282AE01C12945F7379DC702_RuntimeMethod_var);
		// initialPos = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		__this->set_initialPos_11(L_3);
		// initialRot = transform.eulerAngles;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_4, /*hidden argument*/NULL);
		__this->set_initialRot_12(L_5);
		// position.Add(initialPos);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_6 = __this->get_position_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = __this->get_initialPos_11();
		NullCheck(L_6);
		List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_6, L_7, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		// rotation.Add(initialRot);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_8 = __this->get_rotation_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = __this->get_initialRot_12();
		NullCheck(L_8);
		List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_8, L_9, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		// StartCoroutine(RecordPosition());
		RuntimeObject* L_10;
		L_10 = Ghost_RecordPosition_mD57DA55E3C2CB6DFE5771C3BCB272F322A554D84(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_11;
		L_11 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_10, /*hidden argument*/NULL);
		// StartCoroutine(Follow());
		RuntimeObject* L_12;
		L_12 = Ghost_Follow_m3DEE5776F45584FEA645275B96D6D5EF4B847540(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_13;
		L_13 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Ghost::RecordPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Ghost_RecordPosition_mD57DA55E3C2CB6DFE5771C3BCB272F322A554D84 (Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRecordPositionU3Ed__10_t55110E01AB1FCDF69BB01B4EA77745342103066D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRecordPositionU3Ed__10_t55110E01AB1FCDF69BB01B4EA77745342103066D * L_0 = (U3CRecordPositionU3Ed__10_t55110E01AB1FCDF69BB01B4EA77745342103066D *)il2cpp_codegen_object_new(U3CRecordPositionU3Ed__10_t55110E01AB1FCDF69BB01B4EA77745342103066D_il2cpp_TypeInfo_var);
		U3CRecordPositionU3Ed__10__ctor_mC784134FC2E9ED509BF63AEE56ADE36355208245(L_0, 0, /*hidden argument*/NULL);
		U3CRecordPositionU3Ed__10_t55110E01AB1FCDF69BB01B4EA77745342103066D * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Ghost::Follow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Ghost_Follow_m3DEE5776F45584FEA645275B96D6D5EF4B847540 (Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFollowU3Ed__11_t3EDBCEC7FC810EB2FF4832FC742FD1686C45A198_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFollowU3Ed__11_t3EDBCEC7FC810EB2FF4832FC742FD1686C45A198 * L_0 = (U3CFollowU3Ed__11_t3EDBCEC7FC810EB2FF4832FC742FD1686C45A198 *)il2cpp_codegen_object_new(U3CFollowU3Ed__11_t3EDBCEC7FC810EB2FF4832FC742FD1686C45A198_il2cpp_TypeInfo_var);
		U3CFollowU3Ed__11__ctor_m7805848F3BC1DC52838781609922C538DA75957E(L_0, 0, /*hidden argument*/NULL);
		U3CFollowU3Ed__11_t3EDBCEC7FC810EB2FF4832FC742FD1686C45A198 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Ghost::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ghost__ctor_mD85306F4823FAF1C651A2FEBE432C090D2F34948 (Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7 * __this, const RuntimeMethod* method)
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
// System.Void ItemDrop::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemDrop_OnTriggerEnter2D_m1A1B2CBD8DABD7C2C8C666248C9E7B9A56F022A7 (ItemDrop_tC904B7BCF81A545D1E6A018FC757704E7AE49399 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___objeto0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLife_tFA6AEBF0D44789AAFC7B4542C83AF07B9D97EA13_mA73E12F80C473DA48AC4B63CF82F9E8D55379AC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (objeto.gameObject.tag == "Player")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___objeto0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0084;
		}
	}
	{
		// switch (DropType)
		int32_t L_4 = __this->get_DropType_4();
		V_0 = L_4;
		int32_t L_5 = V_0;
		switch (L_5)
		{
			case 0:
			{
				goto IL_004f;
			}
			case 1:
			{
				goto IL_0057;
			}
			case 2:
			{
				goto IL_005f;
			}
			case 3:
			{
				goto IL_003a;
			}
			case 4:
			{
				goto IL_0067;
			}
		}
	}
	{
		goto IL_0079;
	}

IL_003a:
	{
		// if (Statics.WithShield)
		IL2CPP_RUNTIME_CLASS_INIT(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		bool L_6 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_WithShield_9();
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		// Statics.rechargeShield = true;
		IL2CPP_RUNTIME_CLASS_INIT(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->set_rechargeShield_10((bool)1);
	}

IL_0047:
	{
		// Statics.WithShield = true;
		IL2CPP_RUNTIME_CLASS_INIT(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->set_WithShield_9((bool)1);
		// break;
		goto IL_0079;
	}

IL_004f:
	{
		// Statics.ShootingSelected = 0;
		IL2CPP_RUNTIME_CLASS_INIT(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->set_ShootingSelected_8(0);
		// break;
		goto IL_0079;
	}

IL_0057:
	{
		// Statics.ShootingSelected = 1;
		IL2CPP_RUNTIME_CLASS_INIT(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->set_ShootingSelected_8(1);
		// break;
		goto IL_0079;
	}

IL_005f:
	{
		// Statics.ShootingSelected = 2;
		IL2CPP_RUNTIME_CLASS_INIT(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->set_ShootingSelected_8(2);
		// break;
		goto IL_0079;
	}

IL_0067:
	{
		// objeto.gameObject.GetComponent<Life>().life = 10;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_7 = ___objeto0;
		NullCheck(L_7);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Life_tFA6AEBF0D44789AAFC7B4542C83AF07B9D97EA13 * L_9;
		L_9 = GameObject_GetComponent_TisLife_tFA6AEBF0D44789AAFC7B4542C83AF07B9D97EA13_mA73E12F80C473DA48AC4B63CF82F9E8D55379AC6(L_8, /*hidden argument*/GameObject_GetComponent_TisLife_tFA6AEBF0D44789AAFC7B4542C83AF07B9D97EA13_mA73E12F80C473DA48AC4B63CF82F9E8D55379AC6_RuntimeMethod_var);
		NullCheck(L_9);
		L_9->set_life_4(((int32_t)10));
	}

IL_0079:
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_10, /*hidden argument*/NULL);
	}

IL_0084:
	{
		// }
		return;
	}
}
// System.Void ItemDrop::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemDrop__ctor_m5D826B2329C00417D6FB12D4C40DE3EB0DB55AF2 (ItemDrop_tC904B7BCF81A545D1E6A018FC757704E7AE49399 * __this, const RuntimeMethod* method)
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
// System.Void Gaminho.Level::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level__ctor_mADE87462A9D13B244DC3F73F22BBA57A3CF8ADD9 (Level_t0F1BB2DCE2C7368CA4FEAE26F672ADB4C35C7505 * __this, const RuntimeMethod* method)
{
	{
		// public float TempSpaw = 1f;//Waiting time to create more Enemies
		__this->set_TempSpaw_4((1.0f));
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
// System.Void Life::TakesLife(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Life_TakesLife_m432769A0DBB59D454784B3402F19D358B66CBDBD (Life_tFA6AEBF0D44789AAFC7B4542C83AF07B9D97EA13 * __this, int32_t ___Qtd0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// life -= Qtd;
		int32_t L_0 = __this->get_life_4();
		int32_t L_1 = ___Qtd0;
		__this->set_life_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)));
		// if(life <= 0)
		int32_t L_2 = __this->get_life_4();
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		// if (RunWhenDies != null)
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_3 = __this->get_RunWhenDies_5();
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// RunWhenDies.Invoke();//Chama o Evento anexado se ele existir
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_4 = __this->get_RunWhenDies_5();
		NullCheck(L_4);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(L_4, /*hidden argument*/NULL);
		// }
		return;
	}

IL_002b:
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_5, /*hidden argument*/NULL);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void Life::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Life_OnTriggerEnter2D_mB5E33226D7DB91144ACC54786FDF08388B017178 (Life_tFA6AEBF0D44789AAFC7B4542C83AF07B9D97EA13 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ____object0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLife_tFA6AEBF0D44789AAFC7B4542C83AF07B9D97EA13_m7975571D53F6216725F28438F6354AF19C79CA15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2FDA18FEAFC8FAB4295C255F2EBD18FE5B0C5BB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!ControlCollision) return;
		bool L_0 = __this->get_ControlCollision_6();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!ControlCollision) return;
		return;
	}

IL_0009:
	{
		// if(_object.gameObject.tag == "Shot")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_1 = ____object0;
		NullCheck(L_1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_2, /*hidden argument*/NULL);
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_3, _stringLiteralF2FDA18FEAFC8FAB4295C255F2EBD18FE5B0C5BB, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0058;
		}
	}
	{
		// Instantiate(Explosion, transform).transform.parent = transform.parent;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_Explosion_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_5, L_6, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_7, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_8, L_10, /*hidden argument*/NULL);
		// TakesLife(1);
		Life_TakesLife_m432769A0DBB59D454784B3402F19D358B66CBDBD(__this, 1, /*hidden argument*/NULL);
		// Destroy(_object.gameObject);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_11 = ____object0;
		NullCheck(L_11);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_11, /*hidden argument*/NULL);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_12, /*hidden argument*/NULL);
	}

IL_0058:
	{
		// if (_object.gameObject.tag == "Player")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_13 = ____object0;
		NullCheck(L_13);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		String_t* L_15;
		L_15 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_14, /*hidden argument*/NULL);
		bool L_16;
		L_16 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_15, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_007b;
		}
	}
	{
		// _object.GetComponent<Life>().TakesLife(1);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_17 = ____object0;
		NullCheck(L_17);
		Life_tFA6AEBF0D44789AAFC7B4542C83AF07B9D97EA13 * L_18;
		L_18 = Component_GetComponent_TisLife_tFA6AEBF0D44789AAFC7B4542C83AF07B9D97EA13_m7975571D53F6216725F28438F6354AF19C79CA15(L_17, /*hidden argument*/Component_GetComponent_TisLife_tFA6AEBF0D44789AAFC7B4542C83AF07B9D97EA13_m7975571D53F6216725F28438F6354AF19C79CA15_RuntimeMethod_var);
		NullCheck(L_18);
		Life_TakesLife_m432769A0DBB59D454784B3402F19D358B66CBDBD(L_18, 1, /*hidden argument*/NULL);
	}

IL_007b:
	{
		// }
		return;
	}
}
// System.Void Life::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Life__ctor_m7EA475E113F8E58CDBD7F64DE7C3378510DD7926 (Life_tFA6AEBF0D44789AAFC7B4542C83AF07B9D97EA13 * __this, const RuntimeMethod* method)
{
	{
		// public int life = 10;
		__this->set_life_4(((int32_t)10));
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
// System.Int32 MBuildProcessor::get_callbackOrder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MBuildProcessor_get_callbackOrder_m258E4744C4D0BAAC2BECA61D87EFD4FED01D1E40 (MBuildProcessor_t5E53688097C49C4A51B370CDB08C5B5F59470E91 * __this, const RuntimeMethod* method)
{
	{
		// public int callbackOrder { get { return 0; } }
		return 0;
	}
}
// System.Void MBuildProcessor::OnPreprocessBuild(UnityEngine.CrashReport)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MBuildProcessor_OnPreprocessBuild_mE65EEB5015BCDCE385D4576E00F6F2DC30E7CA58 (MBuildProcessor_t5E53688097C49C4A51B370CDB08C5B5F59470E91 * __this, CrashReport_t714502ABE165C015E74890626A6A98F7040F4C82 * ___report0, const RuntimeMethod* method)
{
	{
		// throw new Exception("Σφάλμα κατά λάθος, αντιμετωπίζετε ένα σφάλμα που έγινε για να σας εξαπατήσει, προσπαθήστε να λύσετε αυτό το πρόβλημα");
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59342DCD040D5B79DDC20431B98232F6F830AEF6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MBuildProcessor_OnPreprocessBuild_mE65EEB5015BCDCE385D4576E00F6F2DC30E7CA58_RuntimeMethod_var)));
	}
}
// System.Void MBuildProcessor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MBuildProcessor__ctor_m06E227BDC15A7F4549638B59EF49C4AFF6844D76 (MBuildProcessor_t5E53688097C49C4A51B370CDB08C5B5F59470E91 * __this, const RuntimeMethod* method)
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
// System.Void PlayerData::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerData__ctor_m291958C9614A3DB936AA52212668EDB042332AA0 (PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * __this, int32_t ___level0, const RuntimeMethod* method)
{
	{
		// public PlayerData(int level)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.level = level;
		int32_t L_0 = ___level0;
		__this->set_level_0(L_0);
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
// System.Void Flux.ReadMe::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadMe__ctor_m8FF25B75AB71F389F93E1E2A4DE7D2985ADD6F56 (ReadMe_t9366373850683E50A4A0569A3E9BCD911C00609E * __this, const RuntimeMethod* method)
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
// System.Void RecordControl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordControl_Start_m8F7A53F239DE398E63E55AA2A9EF390392EB516F (RecordControl_t42596BF11E14001F3D303939B7A1B1437DC06FC2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CD81ACBA8A79C6A90E372844DEE61AA5759F99D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E2B42DBCF5E7721DE9F460EF3EF40806759DCFF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1F4F43CEDC02BC7704A4D5437CAA8AA51E54FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF38A1E03EF3206EE8B1C481FA8A8F530162598CB);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// InputRecord.text = PlayerPrefs.GetString(Statics.PLAYERPREF_NEWRECORD);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_0 = __this->get_InputRecord_5();
		String_t* L_1;
		L_1 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(_stringLiteralF38A1E03EF3206EE8B1C481FA8A8F530162598CB, /*hidden argument*/NULL);
		NullCheck(L_0);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_0, L_1, /*hidden argument*/NULL);
		// InputRecord.interactable = false;
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_2 = __this->get_InputRecord_5();
		NullCheck(L_2);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_2, (bool)0, /*hidden argument*/NULL);
		// if (Statics.Points > PlayerPrefs.GetInt(Statics.PLAYERPREF_VALUE))
		IL2CPP_RUNTIME_CLASS_INIT(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		int32_t L_3 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_Points_16();
		int32_t L_4;
		L_4 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral9E1F4F43CEDC02BC7704A4D5437CAA8AA51E54FD, /*hidden argument*/NULL);
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_005d;
		}
	}
	{
		// PlayerPrefs.SetInt(Statics.PLAYERPREF_VALUE, Statics.Points);
		IL2CPP_RUNTIME_CLASS_INIT(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		int32_t L_5 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_Points_16();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral9E1F4F43CEDC02BC7704A4D5437CAA8AA51E54FD, L_5, /*hidden argument*/NULL);
		// InputRecord.interactable = true;
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_6 = __this->get_InputRecord_5();
		NullCheck(L_6);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_6, (bool)1, /*hidden argument*/NULL);
		// InputRecord.text = "";
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_7 = __this->get_InputRecord_5();
		NullCheck(L_7);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_7, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
	}

IL_005d:
	{
		// TxtRecord.text = "Your Points: " + Statics.Points+"\nRecord: " + PlayerPrefs.GetInt(Statics.PLAYERPREF_VALUE).ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_8 = __this->get_TxtRecord_4();
		IL2CPP_RUNTIME_CLASS_INIT(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		String_t* L_9;
		L_9 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_address_of_Points_16()), /*hidden argument*/NULL);
		int32_t L_10;
		L_10 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral9E1F4F43CEDC02BC7704A4D5437CAA8AA51E54FD, /*hidden argument*/NULL);
		V_0 = L_10;
		String_t* L_11;
		L_11 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_12;
		L_12 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral8E2B42DBCF5E7721DE9F460EF3EF40806759DCFF, L_9, _stringLiteral4CD81ACBA8A79C6A90E372844DEE61AA5759F99D, L_11, /*hidden argument*/NULL);
		NullCheck(L_8);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_12);
		// }
		return;
	}
}
// System.Void RecordControl::UpdateName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordControl_UpdateName_m3C7C5ABFF677519820B6F281AF99A768064360DC (RecordControl_t42596BF11E14001F3D303939B7A1B1437DC06FC2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF38A1E03EF3206EE8B1C481FA8A8F530162598CB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetString(Statics.PLAYERPREF_NEWRECORD, InputRecord.text);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_0 = __this->get_InputRecord_5();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_0, /*hidden argument*/NULL);
		PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633(_stringLiteralF38A1E03EF3206EE8B1C481FA8A8F530162598CB, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RecordControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordControl__ctor_m8B9BD294AC3D1EDA3869E09F7EFC58F7B97304C4 (RecordControl_t42596BF11E14001F3D303939B7A1B1437DC06FC2 * __this, const RuntimeMethod* method)
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
// System.Void SaveLoadData::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveLoadData_Start_m34C0D183309D3A5AC28FDD807AC62C455C886C11 (SaveLoadData_t01436979ECF432B45A9679B9AE27AB0655EF70AE * __this, const RuntimeMethod* method)
{
	{
		// SetPaths();
		SaveLoadData_SetPaths_mBABF3781F58E7EEEE0ACC4267E2DE992D68428AA(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SaveLoadData::SetPaths()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveLoadData_SetPaths_mBABF3781F58E7EEEE0ACC4267E2DE992D68428AA (SaveLoadData_t01436979ECF432B45A9679B9AE27AB0655EF70AE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6EB66D8C918A3B23E19C404CB3D9980DA693A46D);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		// path = Application.dataPath + Path.AltDirectorySeparatorChar + "SaveData.json";
		String_t* L_0;
		L_0 = Application_get_dataPath_m026509C15A1E58FC6461EE7EC336EC18C9C2271E(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		Il2CppChar L_1 = ((Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_StaticFields*)il2cpp_codegen_static_fields_for(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var))->get_AltDirectorySeparatorChar_1();
		V_0 = L_1;
		String_t* L_2;
		L_2 = Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8((Il2CppChar*)(&V_0), /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_0, L_2, _stringLiteral6EB66D8C918A3B23E19C404CB3D9980DA693A46D, /*hidden argument*/NULL);
		__this->set_path_5(L_3);
		// persistentPath = Application.persistentDataPath + Path.AltDirectorySeparatorChar + "SaveData.json";
		String_t* L_4;
		L_4 = Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463(/*hidden argument*/NULL);
		Il2CppChar L_5 = ((Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_StaticFields*)il2cpp_codegen_static_fields_for(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var))->get_AltDirectorySeparatorChar_1();
		V_0 = L_5;
		String_t* L_6;
		L_6 = Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8((Il2CppChar*)(&V_0), /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_4, L_6, _stringLiteral6EB66D8C918A3B23E19C404CB3D9980DA693A46D, /*hidden argument*/NULL);
		__this->set_persistentPath_6(L_7);
		// }
		return;
	}
}
// System.Void SaveLoadData::SaveData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveLoadData_SaveData_mF44B08CB1E6412C5BD8AB2505716B2BB8D64A175 (SaveLoadData_t01436979ECF432B45A9679B9AE27AB0655EF70AE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4792E4080DDD0C9F11CC98ED503A2F14B0141A8F);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// SetPaths();
		SaveLoadData_SetPaths_mBABF3781F58E7EEEE0ACC4267E2DE992D68428AA(__this, /*hidden argument*/NULL);
		// string savePath = path;
		String_t* L_0 = __this->get_path_5();
		V_0 = L_0;
		// Debug.Log("Saving data at: " + savePath);
		String_t* L_1 = V_0;
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral4792E4080DDD0C9F11CC98ED503A2F14B0141A8F, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_2, /*hidden argument*/NULL);
		// string json = JsonUtility.ToJson(playerData);
		PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * L_3 = __this->get_playerData_4();
		String_t* L_4;
		L_4 = JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// Debug.Log(json);
		String_t* L_5 = V_1;
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_5, /*hidden argument*/NULL);
		// using StreamWriter writer = new StreamWriter(savePath);
		String_t* L_6 = V_0;
		StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_7 = (StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 *)il2cpp_codegen_object_new(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_il2cpp_TypeInfo_var);
		StreamWriter__ctor_mE341C28EFA3FE0484823233273DBE251A11BD4FC(L_7, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
	}

IL_0036:
	try
	{ // begin try (depth: 1)
		// writer.Write(json);
		StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_8 = V_2;
		String_t* L_9 = V_1;
		NullCheck(L_8);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_8, L_9);
		// }
		IL2CPP_LEAVE(0x49, FINALLY_003f);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		{
			StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_10 = V_2;
			if (!L_10)
			{
				goto IL_0048;
			}
		}

IL_0042:
		{
			StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_11 = V_2;
			NullCheck(L_11);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_11);
		}

IL_0048:
		{
			IL2CPP_END_FINALLY(63)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x49, IL_0049)
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void SaveLoadData::LoadData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveLoadData_LoadData_m7FC7F0FF2F9B447BC261B33725BF15D515D38619 (SaveLoadData_t01436979ECF432B45A9679B9AE27AB0655EF70AE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisPlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5_m1BC0A217D6A8FFBE81E040268CC950AEC4BECDD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * V_0 = NULL;
	String_t* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// SetPaths();
		SaveLoadData_SetPaths_mBABF3781F58E7EEEE0ACC4267E2DE992D68428AA(__this, /*hidden argument*/NULL);
		// using StreamReader reader = new StreamReader(path);
		String_t* L_0 = __this->get_path_5();
		StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_1 = (StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 *)il2cpp_codegen_object_new(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_il2cpp_TypeInfo_var);
		StreamReader__ctor_m1F07D64A9881F3A6B755881210B4E88F8E63849B(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		// string json = reader.ReadToEnd();
		StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.IO.TextReader::ReadToEnd() */, L_2);
		V_1 = L_3;
		// playerData = JsonUtility.FromJson<PlayerData>(json);
		String_t* L_4 = V_1;
		PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * L_5;
		L_5 = JsonUtility_FromJson_TisPlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5_m1BC0A217D6A8FFBE81E040268CC950AEC4BECDD0(L_4, /*hidden argument*/JsonUtility_FromJson_TisPlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5_m1BC0A217D6A8FFBE81E040268CC950AEC4BECDD0_RuntimeMethod_var);
		__this->set_playerData_4(L_5);
		// }
		IL2CPP_LEAVE(0x31, FINALLY_0027);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0027;
	}

FINALLY_0027:
	{ // begin finally (depth: 1)
		{
			StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_6 = V_0;
			if (!L_6)
			{
				goto IL_0030;
			}
		}

IL_002a:
		{
			StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_7 = V_0;
			NullCheck(L_7);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_7);
		}

IL_0030:
		{
			IL2CPP_END_FINALLY(39)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(39)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x31, IL_0031)
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void SaveLoadData::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveLoadData_Update_mC2F51B39B5F5431A6A8378B49E2F27EA7407AA51 (SaveLoadData_t01436979ECF432B45A9679B9AE27AB0655EF70AE * __this, const RuntimeMethod* method)
{
	{
		// if (Input.GetKeyDown(KeyCode.L))
		bool L_0;
		L_0 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)108), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// LoadData();
		SaveLoadData_LoadData_m7FC7F0FF2F9B447BC261B33725BF15D515D38619(__this, /*hidden argument*/NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void SaveLoadData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveLoadData__ctor_m0A671400D58F5043B61E56580AC58D5687EC60CE (SaveLoadData_t01436979ECF432B45A9679B9AE27AB0655EF70AE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public PlayerData playerData = new PlayerData(0);
		PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * L_0 = (PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 *)il2cpp_codegen_object_new(PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5_il2cpp_TypeInfo_var);
		PlayerData__ctor_m291958C9614A3DB936AA52212668EDB042332AA0(L_0, 0, /*hidden argument*/NULL);
		__this->set_playerData_4(L_0);
		// private string path = "";
		__this->set_path_5(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// private string persistentPath = "";
		__this->set_persistentPath_6(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
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
// System.Void Gaminho.ScenarioLimits::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScenarioLimits__ctor_mE7ED76B4AD2650003AE4F5A075F9D7F03360730B (ScenarioLimits_tF9A721A3F778BE0145B94E934952E7F4CB7BED05 * __this, const RuntimeMethod* method)
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
// System.Void Gaminho.Shot::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shot__ctor_m4BFE80FB650FFA47A20F832227B0A5F9BD84C4B3 (Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 * __this, const RuntimeMethod* method)
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
// UnityEngine.Quaternion Gaminho.Statics::FaceObject(UnityEngine.Vector2,UnityEngine.Vector2,Gaminho.Statics/FacingDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Statics_FaceObject_mD7C4A0B189730DDA2CC972CE3204E2FE896FAF50 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___myPos0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___targetPos1, int32_t ___facing2, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 direction = targetPos - myPos;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___targetPos1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___myPos0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// float angle = Mathf.Atan2(direction.y, direction.x) * Mathf.Rad2Deg;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = V_0;
		float L_4 = L_3.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		float L_6 = L_5.get_x_0();
		float L_7;
		L_7 = atan2f(L_4, L_6);
		// angle -= (float)facing;
		int32_t L_8 = ___facing2;
		// return Quaternion.AngleAxis(angle, Vector3.forward);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10;
		L_10 = Quaternion_AngleAxis_m4644D20F58ADF03E9EA297CB4A845E5BCDA1E398(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_7, (float)(57.2957802f))), (float)((float)((float)L_8)))), L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// System.Void Gaminho.Statics::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Statics__cctor_mB0BED0D7AA2F076698019E572C2CB7E7FEFC3BA4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int ShootingSelected = 2;
		((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->set_ShootingSelected_8(2);
		// public static bool WithShield = false;
		((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->set_WithShield_9((bool)0);
		// public static bool rechargeShield = false;
		((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->set_rechargeShield_10((bool)0);
		// public static int Damage = 0;
		((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->set_Damage_11(0);
		// public static int CurrentLevel = 2;
		((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->set_CurrentLevel_12(2);
		// public static int EnemiesDead = 0;
		((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->set_EnemiesDead_15(0);
		// public static int Points = 0;
		((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->set_Points_16(0);
		// public static bool loadingGame = false;
		((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->set_loadingGame_18((bool)0);
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
// Stick/stck Stick::GetStck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Stick_GetStck_m7A49B714FF83A4D429439940FB6990888867BD7B (const RuntimeMethod* method)
{
	{
		// return Application.platform == RuntimePlatform.WindowsEditor ? stck.MANESTIC : stck.ONE_METHOD;
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)7)))
		{
			goto IL_000a;
		}
	}
	{
		return (int32_t)(0);
	}

IL_000a:
	{
		return (int32_t)(1);
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
// System.Void Boss2/<Shot>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShotU3Ed__7__ctor_mE5DADDE0420441F86985C44BD718DD08A4AD334C (U3CShotU3Ed__7_t5B6ECB25F35EA9A394F1ADE1A8C3CB4EE57063C1 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Boss2/<Shot>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShotU3Ed__7_System_IDisposable_Dispose_m8F588491D89FF21288555692FE3A90E505E341F7 (U3CShotU3Ed__7_t5B6ECB25F35EA9A394F1ADE1A8C3CB4EE57063C1 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Boss2/<Shot>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CShotU3Ed__7_MoveNext_m6010D4868EF31AE0774066824F01233F5F37D4AE (U3CShotU3Ed__7_t5B6ECB25F35EA9A394F1ADE1A8C3CB4EE57063C1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0533A6A2C16737D20E278E4C50B5A40AB53B1A7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Boss2_t1ED338A653D36E5352D40483F92F9C50B359FEBC * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Boss2_t1ED338A653D36E5352D40483F92F9C50B359FEBC * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_001e:
	{
		// yield return new WaitForSeconds(0.8f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, (0.800000012f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0037:
	{
		__this->set_U3CU3E1__state_0((-1));
		// GameObject goTiro = Instantiate(ShotPrefab, Vector3.zero, Quaternion.identity);
		Boss2_t1ED338A653D36E5352D40483F92F9C50B359FEBC * L_5 = V_1;
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = L_5->get_ShotPrefab_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8;
		L_8 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_6, L_7, L_8, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// goTiro.tag = "EnemyShot";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = L_9;
		NullCheck(L_10);
		GameObject_set_tag_m0EBA46574304C71E047A33BDD5F5D49E9D9A25BE(L_10, _stringLiteralE0533A6A2C16737D20E278E4C50B5A40AB53B1A7, /*hidden argument*/NULL);
		// goTiro.transform.parent = transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = L_10;
		NullCheck(L_11);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_11, /*hidden argument*/NULL);
		Boss2_t1ED338A653D36E5352D40483F92F9C50B359FEBC * L_13 = V_1;
		NullCheck(L_13);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_12, L_14, /*hidden argument*/NULL);
		// goTiro.transform.localPosition = GetOneActive().transform.localPosition;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = L_11;
		NullCheck(L_15);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_15, /*hidden argument*/NULL);
		Boss2_t1ED338A653D36E5352D40483F92F9C50B359FEBC * L_17 = V_1;
		NullCheck(L_17);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18;
		L_18 = Boss2_GetOneActive_m41CEB8C5D4F936E741F9C9F684F40EAE7D3DADA3(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_19, /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_16, L_20, /*hidden argument*/NULL);
		// goTiro.GetComponent<Rigidbody2D>().AddForce(Vector2.down* 14000f * Time.deltaTime, ForceMode2D.Impulse);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = L_15;
		NullCheck(L_21);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_22;
		L_22 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_21, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23;
		L_23 = Vector2_get_down_m38F16950B2C1FAFBE218C3E62DA95D498443650F(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_24;
		L_24 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_23, (14000.0f), /*hidden argument*/NULL);
		float L_25;
		L_25 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_26;
		L_26 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_24, L_25, /*hidden argument*/NULL);
		NullCheck(L_22);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_22, L_26, 1, /*hidden argument*/NULL);
		// goTiro.AddComponent<BoxCollider2D>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = L_21;
		NullCheck(L_27);
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_28;
		L_28 = GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310(L_27, /*hidden argument*/GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310_RuntimeMethod_var);
		// goTiro.transform.localScale = new Vector3(3, 3, 3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = L_27;
		NullCheck(L_29);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_29, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_31), (3.0f), (3.0f), (3.0f), /*hidden argument*/NULL);
		NullCheck(L_30);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_30, L_31, /*hidden argument*/NULL);
		// goTiro.transform.parent = transform.parent;
		NullCheck(L_29);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_29, /*hidden argument*/NULL);
		Boss2_t1ED338A653D36E5352D40483F92F9C50B359FEBC * L_33 = V_1;
		NullCheck(L_33);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34;
		L_34 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_33, /*hidden argument*/NULL);
		NullCheck(L_34);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35;
		L_35 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_34, /*hidden argument*/NULL);
		NullCheck(L_32);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_32, L_35, /*hidden argument*/NULL);
		// while (true)
		goto IL_001e;
	}
}
// System.Object Boss2/<Shot>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CShotU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m12B604A9AC558372662A0FFD180A325ACDD91EA6 (U3CShotU3Ed__7_t5B6ECB25F35EA9A394F1ADE1A8C3CB4EE57063C1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Boss2/<Shot>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShotU3Ed__7_System_Collections_IEnumerator_Reset_mE289E17958922FDDCC8DE7C1FA61940025274E62 (U3CShotU3Ed__7_t5B6ECB25F35EA9A394F1ADE1A8C3CB4EE57063C1 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CShotU3Ed__7_System_Collections_IEnumerator_Reset_mE289E17958922FDDCC8DE7C1FA61940025274E62_RuntimeMethod_var)));
	}
}
// System.Object Boss2/<Shot>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CShotU3Ed__7_System_Collections_IEnumerator_get_Current_m935EF7A6B9356B060AA9DFD3E78AA608C890BC25 (U3CShotU3Ed__7_t5B6ECB25F35EA9A394F1ADE1A8C3CB4EE57063C1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Boss2/<ShowParts>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowPartsU3Ed__5__ctor_mBDD0E8898D91E138B7042D22F0A5E1456EA501C8 (U3CShowPartsU3Ed__5_t09BBC03A0970E2BF56904F75C3B7E0D8B40FC34F * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Boss2/<ShowParts>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowPartsU3Ed__5_System_IDisposable_Dispose_m0AC2D2E39174DA2D173BDA8759091EEE1D71F146 (U3CShowPartsU3Ed__5_t09BBC03A0970E2BF56904F75C3B7E0D8B40FC34F * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Boss2/<ShowParts>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CShowPartsU3Ed__5_MoveNext_m0B40D4DCC0A1EBAC248878B225A64D4925E31704 (U3CShowPartsU3Ed__5_t09BBC03A0970E2BF56904F75C3B7E0D8B40FC34F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Boss2_t1ED338A653D36E5352D40483F92F9C50B359FEBC * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Boss2_t1ED338A653D36E5352D40483F92F9C50B359FEBC * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0040;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for(int i = 0; i <= Parts.Length - 1; i++)
		__this->set_U3CiU3E5__2_3(0);
		goto IL_006a;
	}

IL_0027:
	{
		// yield return new WaitForSeconds(0.3f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, (0.300000012f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0040:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Parts[i].SetActive(true);
		Boss2_t1ED338A653D36E5352D40483F92F9C50B359FEBC * L_5 = V_1;
		NullCheck(L_5);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_6 = L_5->get_Parts_4();
		int32_t L_7 = __this->get_U3CiU3E5__2_3();
		NullCheck(L_6);
		int32_t L_8 = L_7;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)1, /*hidden argument*/NULL);
		// for(int i = 0; i <= Parts.Length - 1; i++)
		int32_t L_10 = __this->get_U3CiU3E5__2_3();
		V_2 = L_10;
		int32_t L_11 = V_2;
		__this->set_U3CiU3E5__2_3(((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1)));
	}

IL_006a:
	{
		// for(int i = 0; i <= Parts.Length - 1; i++)
		int32_t L_12 = __this->get_U3CiU3E5__2_3();
		Boss2_t1ED338A653D36E5352D40483F92F9C50B359FEBC * L_13 = V_1;
		NullCheck(L_13);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_14 = L_13->get_Parts_4();
		NullCheck(L_14);
		if ((((int32_t)L_12) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))), (int32_t)1)))))
		{
			goto IL_0027;
		}
	}
	{
		// StartCoroutine(Shot());
		Boss2_t1ED338A653D36E5352D40483F92F9C50B359FEBC * L_15 = V_1;
		Boss2_t1ED338A653D36E5352D40483F92F9C50B359FEBC * L_16 = V_1;
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = Boss2_Shot_m35B8B00F7AEF10F996EF1D55BEF3575E5BAFF3D6(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_18;
		L_18 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_15, L_17, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Boss2/<ShowParts>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CShowPartsU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4F4521C1346516C77ED9C7B550671F928987CE41 (U3CShowPartsU3Ed__5_t09BBC03A0970E2BF56904F75C3B7E0D8B40FC34F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Boss2/<ShowParts>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowPartsU3Ed__5_System_Collections_IEnumerator_Reset_m0468FE7B0426062B26C538D23C7C5FF8CC38570D (U3CShowPartsU3Ed__5_t09BBC03A0970E2BF56904F75C3B7E0D8B40FC34F * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CShowPartsU3Ed__5_System_Collections_IEnumerator_Reset_m0468FE7B0426062B26C538D23C7C5FF8CC38570D_RuntimeMethod_var)));
	}
}
// System.Object Boss2/<ShowParts>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CShowPartsU3Ed__5_System_Collections_IEnumerator_get_Current_m20F3D7FA705381FA5AA9C2B5C037BDCB2BC2128A (U3CShowPartsU3Ed__5_t09BBC03A0970E2BF56904F75C3B7E0D8B40FC34F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Boss3/<Attack>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackU3Ed__7__ctor_m1E3D32EDA81B13F2EE38F2859D3B2C4F28E9D327 (U3CAttackU3Ed__7_t08C44F054B9845EA94A3146BE9349CAAAA2E7C0C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Boss3/<Attack>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackU3Ed__7_System_IDisposable_Dispose_m6A015A6CA5CCBB4708004CC3651BB9B1D3725CFF (U3CAttackU3Ed__7_t08C44F054B9845EA94A3146BE9349CAAAA2E7C0C * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Boss3/<Attack>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAttackU3Ed__7_MoveNext_mA361D488087872EB4D071C00B7A2E97B943ED301 (U3CAttackU3Ed__7_t08C44F054B9845EA94A3146BE9349CAAAA2E7C0C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0030;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(2f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_3 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_3, (2.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0030:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Color color = Color.white;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4;
		L_4 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		V_1 = L_4;
		// color.a = 1f;
		(&V_1)->set_a_3((1.0f));
		// image.color = color;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_5 = __this->get_image_2();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6 = V_1;
		NullCheck(L_5);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
		// }
		return (bool)0;
	}
}
// System.Object Boss3/<Attack>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAttackU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF28BAAACFCDE294FEDE76B40F09FF75F8FC16E52 (U3CAttackU3Ed__7_t08C44F054B9845EA94A3146BE9349CAAAA2E7C0C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Boss3/<Attack>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackU3Ed__7_System_Collections_IEnumerator_Reset_m5A5C9CB773069AF2AEB75EA9A0A398A9459D72B7 (U3CAttackU3Ed__7_t08C44F054B9845EA94A3146BE9349CAAAA2E7C0C * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAttackU3Ed__7_System_Collections_IEnumerator_Reset_m5A5C9CB773069AF2AEB75EA9A0A398A9459D72B7_RuntimeMethod_var)));
	}
}
// System.Object Boss3/<Attack>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAttackU3Ed__7_System_Collections_IEnumerator_get_Current_m52CBBA00FF612CAD09F60DF816EAC8E2A237414F (U3CAttackU3Ed__7_t08C44F054B9845EA94A3146BE9349CAAAA2E7C0C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Boss3/<AttackNow>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackNowU3Ed__6__ctor_m807B06176433FA7EB7E91A0C957DA1F3903A1BB9 (U3CAttackNowU3Ed__6_t5548957493F4260E6AFD7631F29FF348A7535DB3 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Boss3/<AttackNow>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackNowU3Ed__6_System_IDisposable_Dispose_m084196477A3C10B1664186E740CEE59FD3B30521 (U3CAttackNowU3Ed__6_t5548957493F4260E6AFD7631F29FF348A7535DB3 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Boss3/<AttackNow>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAttackNowU3Ed__6_MoveNext_mEA7C3F8A7C4FA8E6D4387CE9F9A6709AFEB394E7 (U3CAttackNowU3Ed__6_t5548957493F4260E6AFD7631F29FF348A7535DB3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96_m4646739A29FFF4CF05ACE5EF6C64ECD193BFB160_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral931DFDCE8A7F395390F2AC831102C486A12DB07C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Boss3_t6C3889EF0A9F1C98DE071E5A8AE5B237CA014D60 * V_1 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Boss3_t6C3889EF0A9F1C98DE071E5A8AE5B237CA014D60 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0051;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// ScenarioLimits limitesCenario = GameObject.Find("Control").GetComponent<ControlGame>().ScenarioLimit;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral931DFDCE8A7F395390F2AC831102C486A12DB07C, /*hidden argument*/NULL);
		NullCheck(L_4);
		ControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96 * L_5;
		L_5 = GameObject_GetComponent_TisControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96_m4646739A29FFF4CF05ACE5EF6C64ECD193BFB160(L_4, /*hidden argument*/GameObject_GetComponent_TisControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96_m4646739A29FFF4CF05ACE5EF6C64ECD193BFB160_RuntimeMethod_var);
		NullCheck(L_5);
		ScenarioLimits_tF9A721A3F778BE0145B94E934952E7F4CB7BED05 * L_6 = L_5->get_ScenarioLimit_4();
		__this->set_U3ClimitesCenarioU3E5__2_3(L_6);
	}

IL_0038:
	{
		// yield return new WaitForSeconds(4f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_7 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_7, (4.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_7);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0051:
	{
		__this->set_U3CU3E1__state_0((-1));
		// ShowParts(false);
		Boss3_t6C3889EF0A9F1C98DE071E5A8AE5B237CA014D60 * L_8 = V_1;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = Boss3_ShowParts_m237CC1FA5AE12E3DC8B0F2E864759C88F37E1EC6(L_8, (bool)0, /*hidden argument*/NULL);
		// GameObject _this = GetOneActive();
		Boss3_t6C3889EF0A9F1C98DE071E5A8AE5B237CA014D60 * L_10 = V_1;
		NullCheck(L_10);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Boss3_GetOneActive_mC454EE4919EB35E3CADF35A2C047B267CBB5754F(L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		// _this.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = V_2;
		NullCheck(L_12);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_12, (bool)1, /*hidden argument*/NULL);
		// Color color = Color.white;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_13;
		L_13 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		V_3 = L_13;
		// color.a = 0.1f;
		(&V_3)->set_a_3((0.100000001f));
		// _this.GetComponent<Image>().color = color;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = V_2;
		NullCheck(L_14);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_15;
		L_15 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_14, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_16 = V_3;
		NullCheck(L_15);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_15, L_16);
		// Vector3 pos = _this.transform.localPosition;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = V_2;
		NullCheck(L_17);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_18, /*hidden argument*/NULL);
		V_4 = L_19;
		// pos.x = UnityEngine.Random.Range(limitesCenario.xMin, limitesCenario.xMax);
		ScenarioLimits_tF9A721A3F778BE0145B94E934952E7F4CB7BED05 * L_20 = __this->get_U3ClimitesCenarioU3E5__2_3();
		NullCheck(L_20);
		float L_21 = L_20->get_xMin_0();
		ScenarioLimits_tF9A721A3F778BE0145B94E934952E7F4CB7BED05 * L_22 = __this->get_U3ClimitesCenarioU3E5__2_3();
		NullCheck(L_22);
		float L_23 = L_22->get_xMax_1();
		float L_24;
		L_24 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_21, L_23, /*hidden argument*/NULL);
		(&V_4)->set_x_2(L_24);
		// pos.y = UnityEngine.Random.Range(limitesCenario.yMin, limitesCenario.yMax);
		ScenarioLimits_tF9A721A3F778BE0145B94E934952E7F4CB7BED05 * L_25 = __this->get_U3ClimitesCenarioU3E5__2_3();
		NullCheck(L_25);
		float L_26 = L_25->get_yMin_2();
		ScenarioLimits_tF9A721A3F778BE0145B94E934952E7F4CB7BED05 * L_27 = __this->get_U3ClimitesCenarioU3E5__2_3();
		NullCheck(L_27);
		float L_28 = L_27->get_yMax_3();
		float L_29;
		L_29 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_26, L_28, /*hidden argument*/NULL);
		(&V_4)->set_y_3(L_29);
		// _this.transform.localPosition = pos;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30 = V_2;
		NullCheck(L_30);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_30, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32 = V_4;
		NullCheck(L_31);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_31, L_32, /*hidden argument*/NULL);
		// StartCoroutine(Attack(_this.GetComponent<Image>()));
		Boss3_t6C3889EF0A9F1C98DE071E5A8AE5B237CA014D60 * L_33 = V_1;
		Boss3_t6C3889EF0A9F1C98DE071E5A8AE5B237CA014D60 * L_34 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35 = V_2;
		NullCheck(L_35);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_36;
		L_36 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_35, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		NullCheck(L_34);
		RuntimeObject* L_37;
		L_37 = Boss3_Attack_mBC827254E14F721046A48C74FBDCE480D7EB8006(L_34, L_36, /*hidden argument*/NULL);
		NullCheck(L_33);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_38;
		L_38 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_33, L_37, /*hidden argument*/NULL);
		// while (true)
		goto IL_0038;
	}
}
// System.Object Boss3/<AttackNow>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAttackNowU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m340352050CC94EAE9A072030CD314DA56DD329AA (U3CAttackNowU3Ed__6_t5548957493F4260E6AFD7631F29FF348A7535DB3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Boss3/<AttackNow>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAttackNowU3Ed__6_System_Collections_IEnumerator_Reset_m9E1C7C0E00159B453D194492ECF021B8BB7CD45A (U3CAttackNowU3Ed__6_t5548957493F4260E6AFD7631F29FF348A7535DB3 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAttackNowU3Ed__6_System_Collections_IEnumerator_Reset_m9E1C7C0E00159B453D194492ECF021B8BB7CD45A_RuntimeMethod_var)));
	}
}
// System.Object Boss3/<AttackNow>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAttackNowU3Ed__6_System_Collections_IEnumerator_get_Current_m574DD65751CE17C59EB1B1B4A52EC305243484D0 (U3CAttackNowU3Ed__6_t5548957493F4260E6AFD7631F29FF348A7535DB3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Boss3/<ShowParts>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowPartsU3Ed__5__ctor_mE02D1048C34075267CA9F8A9AAA9BAA01A251D2D (U3CShowPartsU3Ed__5_tC9A208D13D4CF48A5C07215906AFF39AC00370C2 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Boss3/<ShowParts>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowPartsU3Ed__5_System_IDisposable_Dispose_mFFAB94361C876791A1720E45B41DDE4920D6E962 (U3CShowPartsU3Ed__5_tC9A208D13D4CF48A5C07215906AFF39AC00370C2 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Boss3/<ShowParts>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CShowPartsU3Ed__5_MoveNext_mCD5696204CDF2A5ECBC56EF51E055A070AC9FB77 (U3CShowPartsU3Ed__5_tC9A208D13D4CF48A5C07215906AFF39AC00370C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Boss3_t6C3889EF0A9F1C98DE071E5A8AE5B237CA014D60 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Boss3_t6C3889EF0A9F1C98DE071E5A8AE5B237CA014D60 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0040;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int i = 0; i <= Parts.Length - 1; i++)
		__this->set_U3CiU3E5__2_4(0);
		goto IL_006f;
	}

IL_0027:
	{
		// yield return new WaitForSeconds(0.3f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, (0.300000012f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0040:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Parts[i].SetActive(yes);
		Boss3_t6C3889EF0A9F1C98DE071E5A8AE5B237CA014D60 * L_5 = V_1;
		NullCheck(L_5);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_6 = L_5->get_Parts_4();
		int32_t L_7 = __this->get_U3CiU3E5__2_4();
		NullCheck(L_6);
		int32_t L_8 = L_7;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		bool L_10 = __this->get_yes_3();
		NullCheck(L_9);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, L_10, /*hidden argument*/NULL);
		// for (int i = 0; i <= Parts.Length - 1; i++)
		int32_t L_11 = __this->get_U3CiU3E5__2_4();
		V_2 = L_11;
		int32_t L_12 = V_2;
		__this->set_U3CiU3E5__2_4(((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1)));
	}

IL_006f:
	{
		// for (int i = 0; i <= Parts.Length - 1; i++)
		int32_t L_13 = __this->get_U3CiU3E5__2_4();
		Boss3_t6C3889EF0A9F1C98DE071E5A8AE5B237CA014D60 * L_14 = V_1;
		NullCheck(L_14);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_15 = L_14->get_Parts_4();
		NullCheck(L_15);
		if ((((int32_t)L_13) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))), (int32_t)1)))))
		{
			goto IL_0027;
		}
	}
	{
		// StartCoroutine(AttackNow());
		Boss3_t6C3889EF0A9F1C98DE071E5A8AE5B237CA014D60 * L_16 = V_1;
		Boss3_t6C3889EF0A9F1C98DE071E5A8AE5B237CA014D60 * L_17 = V_1;
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = Boss3_AttackNow_m751CAFCD3CD70F4748E1BE4A61688B418BF83420(L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_19;
		L_19 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_16, L_18, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Boss3/<ShowParts>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CShowPartsU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m46AC63FF765EC7ABFD50ABD1A0EC06666CCE0B0F (U3CShowPartsU3Ed__5_tC9A208D13D4CF48A5C07215906AFF39AC00370C2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Boss3/<ShowParts>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowPartsU3Ed__5_System_Collections_IEnumerator_Reset_m6B70E7B67CF4CDCB8A4933138894ADD37C944524 (U3CShowPartsU3Ed__5_tC9A208D13D4CF48A5C07215906AFF39AC00370C2 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CShowPartsU3Ed__5_System_Collections_IEnumerator_Reset_m6B70E7B67CF4CDCB8A4933138894ADD37C944524_RuntimeMethod_var)));
	}
}
// System.Object Boss3/<ShowParts>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CShowPartsU3Ed__5_System_Collections_IEnumerator_get_Current_mE6AF45BEC418417DB98C019E25CDB0370CB836FF (U3CShowPartsU3Ed__5_tC9A208D13D4CF48A5C07215906AFF39AC00370C2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void ControlGhost/<Shoot>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShootU3Ed__7__ctor_mD7FDE70B5F8C47A8D2310B78570C42DBB2C1C43D (U3CShootU3Ed__7_tE704B49D318CB97B09A55BEB0E8E90AF4B555F34 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void ControlGhost/<Shoot>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShootU3Ed__7_System_IDisposable_Dispose_m1F2D5871C051443B5945ECAD5AA5CAC0501CCB2B (U3CShootU3Ed__7_tE704B49D318CB97B09A55BEB0E8E90AF4B555F34 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean ControlGhost/<Shoot>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CShootU3Ed__7_MoveNext_mF5DE71B57010F99D0BF009AB1D406181EB197492 (U3CShootU3Ed__7_tE704B49D318CB97B09A55BEB0E8E90AF4B555F34 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ControlGhost_tF5A4C0EF0DE41C54667C7FAAF7CC7DDA8C815F51 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ControlGhost_tF5A4C0EF0DE41C54667C7FAAF7CC7DDA8C815F51 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0043;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_001e:
	{
		// yield return new WaitForSeconds(Shots[Statics.ShootingSelected].ShootingPeriod);
		ControlGhost_tF5A4C0EF0DE41C54667C7FAAF7CC7DDA8C815F51 * L_4 = V_1;
		NullCheck(L_4);
		ShotU5BU5D_tA9C3ACB6B6065E328A62CFECAE87D4668B074614* L_5 = L_4->get_Shots_7();
		IL2CPP_RUNTIME_CLASS_INIT(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		int32_t L_6 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_ShootingSelected_8();
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		float L_9 = L_8->get_ShootingPeriod_6();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_10 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_10, L_9, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_10);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0043:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (shooting)
		ControlGhost_tF5A4C0EF0DE41C54667C7FAAF7CC7DDA8C815F51 * L_11 = V_1;
		NullCheck(L_11);
		bool L_12 = L_11->get_shooting_8();
		if (!L_12)
		{
			goto IL_035d;
		}
	}
	{
		// Statics.Damage = Shots[Statics.ShootingSelected].Damage;
		ControlGhost_tF5A4C0EF0DE41C54667C7FAAF7CC7DDA8C815F51 * L_13 = V_1;
		NullCheck(L_13);
		ShotU5BU5D_tA9C3ACB6B6065E328A62CFECAE87D4668B074614* L_14 = L_13->get_Shots_7();
		IL2CPP_RUNTIME_CLASS_INIT(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		int32_t L_15 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_ShootingSelected_8();
		NullCheck(L_14);
		int32_t L_16 = L_15;
		Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 * L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		int32_t L_18 = L_17->get_Damage_5();
		((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->set_Damage_11(L_18);
		// GameObject goShoot = Instantiate(Shots[Statics.ShootingSelected].Prefab, Vector3.zero, Quaternion.identity);
		ControlGhost_tF5A4C0EF0DE41C54667C7FAAF7CC7DDA8C815F51 * L_19 = V_1;
		NullCheck(L_19);
		ShotU5BU5D_tA9C3ACB6B6065E328A62CFECAE87D4668B074614* L_20 = L_19->get_Shots_7();
		int32_t L_21 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_ShootingSelected_8();
		NullCheck(L_20);
		int32_t L_22 = L_21;
		Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 * L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_23);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = L_23->get_Prefab_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_26;
		L_26 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27;
		L_27 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_24, L_25, L_26, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// goShoot.transform.parent = transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28 = L_27;
		NullCheck(L_28);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_28, /*hidden argument*/NULL);
		ControlGhost_tF5A4C0EF0DE41C54667C7FAAF7CC7DDA8C815F51 * L_30 = V_1;
		NullCheck(L_30);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_30, /*hidden argument*/NULL);
		NullCheck(L_29);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_29, L_31, /*hidden argument*/NULL);
		// goShoot.transform.localPosition = Shots[Statics.ShootingSelected].Weapon.transform.localPosition;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32 = L_28;
		NullCheck(L_32);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33;
		L_33 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_32, /*hidden argument*/NULL);
		ControlGhost_tF5A4C0EF0DE41C54667C7FAAF7CC7DDA8C815F51 * L_34 = V_1;
		NullCheck(L_34);
		ShotU5BU5D_tA9C3ACB6B6065E328A62CFECAE87D4668B074614* L_35 = L_34->get_Shots_7();
		int32_t L_36 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_ShootingSelected_8();
		NullCheck(L_35);
		int32_t L_37 = L_36;
		Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 * L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		NullCheck(L_38);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39 = L_38->get_Weapon_1();
		NullCheck(L_39);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40;
		L_40 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_39, /*hidden argument*/NULL);
		NullCheck(L_40);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		L_41 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_40, /*hidden argument*/NULL);
		NullCheck(L_33);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_33, L_41, /*hidden argument*/NULL);
		// goShoot.GetComponent<Rigidbody2D>().AddForce(transform.up * ((Shots[Statics.ShootingSelected].SpeedShooter * 12000f) * Time.deltaTime), ForceMode2D.Impulse);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_42 = L_32;
		NullCheck(L_42);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_43;
		L_43 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_42, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		ControlGhost_tF5A4C0EF0DE41C54667C7FAAF7CC7DDA8C815F51 * L_44 = V_1;
		NullCheck(L_44);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_45;
		L_45 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_44, /*hidden argument*/NULL);
		NullCheck(L_45);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
		L_46 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_45, /*hidden argument*/NULL);
		ControlGhost_tF5A4C0EF0DE41C54667C7FAAF7CC7DDA8C815F51 * L_47 = V_1;
		NullCheck(L_47);
		ShotU5BU5D_tA9C3ACB6B6065E328A62CFECAE87D4668B074614* L_48 = L_47->get_Shots_7();
		int32_t L_49 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_ShootingSelected_8();
		NullCheck(L_48);
		int32_t L_50 = L_49;
		Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 * L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		NullCheck(L_51);
		float L_52 = L_51->get_SpeedShooter_7();
		float L_53;
		L_53 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54;
		L_54 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_46, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_52, (float)(12000.0f))), (float)L_53)), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_55;
		L_55 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_54, /*hidden argument*/NULL);
		NullCheck(L_43);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_43, L_55, 1, /*hidden argument*/NULL);
		// goShoot.AddComponent<BoxCollider2D>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_56 = L_42;
		NullCheck(L_56);
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_57;
		L_57 = GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310(L_56, /*hidden argument*/GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310_RuntimeMethod_var);
		// goShoot.transform.parent = transform.parent;
		NullCheck(L_56);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_58;
		L_58 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_56, /*hidden argument*/NULL);
		ControlGhost_tF5A4C0EF0DE41C54667C7FAAF7CC7DDA8C815F51 * L_59 = V_1;
		NullCheck(L_59);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_60;
		L_60 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_59, /*hidden argument*/NULL);
		NullCheck(L_60);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_61;
		L_61 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_60, /*hidden argument*/NULL);
		NullCheck(L_58);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_58, L_61, /*hidden argument*/NULL);
		// if (Shots[Statics.ShootingSelected].TypeShooter == Statics.TYPE_SHOT.DOUBLE)
		ControlGhost_tF5A4C0EF0DE41C54667C7FAAF7CC7DDA8C815F51 * L_62 = V_1;
		NullCheck(L_62);
		ShotU5BU5D_tA9C3ACB6B6065E328A62CFECAE87D4668B074614* L_63 = L_62->get_Shots_7();
		int32_t L_64 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_ShootingSelected_8();
		NullCheck(L_63);
		int32_t L_65 = L_64;
		Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 * L_66 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		NullCheck(L_66);
		int32_t L_67 = L_66->get_TypeShooter_4();
		if ((!(((uint32_t)L_67) == ((uint32_t)1))))
		{
			goto IL_01e4;
		}
	}
	{
		// GameObject goShoot2 = Instantiate(Shots[Statics.ShootingSelected].Prefab, Vector3.zero, Quaternion.identity);
		ControlGhost_tF5A4C0EF0DE41C54667C7FAAF7CC7DDA8C815F51 * L_68 = V_1;
		NullCheck(L_68);
		ShotU5BU5D_tA9C3ACB6B6065E328A62CFECAE87D4668B074614* L_69 = L_68->get_Shots_7();
		IL2CPP_RUNTIME_CLASS_INIT(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		int32_t L_70 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_ShootingSelected_8();
		NullCheck(L_69);
		int32_t L_71 = L_70;
		Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 * L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		NullCheck(L_72);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_73 = L_72->get_Prefab_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_74;
		L_74 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_75;
		L_75 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_76;
		L_76 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_73, L_74, L_75, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// goShoot2.transform.parent = transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_77 = L_76;
		NullCheck(L_77);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_78;
		L_78 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_77, /*hidden argument*/NULL);
		ControlGhost_tF5A4C0EF0DE41C54667C7FAAF7CC7DDA8C815F51 * L_79 = V_1;
		NullCheck(L_79);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_80;
		L_80 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_79, /*hidden argument*/NULL);
		NullCheck(L_78);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_78, L_80, /*hidden argument*/NULL);
		// goShoot2.transform.localPosition = Shots[Statics.ShootingSelected].Weapon2.transform.localPosition;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_81 = L_77;
		NullCheck(L_81);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_82;
		L_82 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_81, /*hidden argument*/NULL);
		ControlGhost_tF5A4C0EF0DE41C54667C7FAAF7CC7DDA8C815F51 * L_83 = V_1;
		NullCheck(L_83);
		ShotU5BU5D_tA9C3ACB6B6065E328A62CFECAE87D4668B074614* L_84 = L_83->get_Shots_7();
		int32_t L_85 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_ShootingSelected_8();
		NullCheck(L_84);
		int32_t L_86 = L_85;
		Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 * L_87 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		NullCheck(L_87);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_88 = L_87->get_Weapon2_2();
		NullCheck(L_88);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_89;
		L_89 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_88, /*hidden argument*/NULL);
		NullCheck(L_89);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_90;
		L_90 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_89, /*hidden argument*/NULL);
		NullCheck(L_82);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_82, L_90, /*hidden argument*/NULL);
		// goShoot2.GetComponent<Rigidbody2D>().AddForce(transform.up * ((Shots[Statics.ShootingSelected].SpeedShooter * 12000f) * Time.deltaTime), ForceMode2D.Impulse);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_91 = L_81;
		NullCheck(L_91);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_92;
		L_92 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_91, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		ControlGhost_tF5A4C0EF0DE41C54667C7FAAF7CC7DDA8C815F51 * L_93 = V_1;
		NullCheck(L_93);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_94;
		L_94 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_93, /*hidden argument*/NULL);
		NullCheck(L_94);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_95;
		L_95 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_94, /*hidden argument*/NULL);
		ControlGhost_tF5A4C0EF0DE41C54667C7FAAF7CC7DDA8C815F51 * L_96 = V_1;
		NullCheck(L_96);
		ShotU5BU5D_tA9C3ACB6B6065E328A62CFECAE87D4668B074614* L_97 = L_96->get_Shots_7();
		int32_t L_98 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_ShootingSelected_8();
		NullCheck(L_97);
		int32_t L_99 = L_98;
		Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 * L_100 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		NullCheck(L_100);
		float L_101 = L_100->get_SpeedShooter_7();
		float L_102;
		L_102 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_103;
		L_103 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_95, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_101, (float)(12000.0f))), (float)L_102)), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_104;
		L_104 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_103, /*hidden argument*/NULL);
		NullCheck(L_92);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_92, L_104, 1, /*hidden argument*/NULL);
		// goShoot2.AddComponent<BoxCollider2D>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_105 = L_91;
		NullCheck(L_105);
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_106;
		L_106 = GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310(L_105, /*hidden argument*/GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310_RuntimeMethod_var);
		// goShoot2.transform.parent = transform.parent;
		NullCheck(L_105);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_107;
		L_107 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_105, /*hidden argument*/NULL);
		ControlGhost_tF5A4C0EF0DE41C54667C7FAAF7CC7DDA8C815F51 * L_108 = V_1;
		NullCheck(L_108);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_109;
		L_109 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_108, /*hidden argument*/NULL);
		NullCheck(L_109);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_110;
		L_110 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_109, /*hidden argument*/NULL);
		NullCheck(L_107);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_107, L_110, /*hidden argument*/NULL);
	}

IL_01e4:
	{
		// if (Shots[Statics.ShootingSelected].TypeShooter == Statics.TYPE_SHOT.TRIPLE)
		ControlGhost_tF5A4C0EF0DE41C54667C7FAAF7CC7DDA8C815F51 * L_111 = V_1;
		NullCheck(L_111);
		ShotU5BU5D_tA9C3ACB6B6065E328A62CFECAE87D4668B074614* L_112 = L_111->get_Shots_7();
		IL2CPP_RUNTIME_CLASS_INIT(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		int32_t L_113 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_ShootingSelected_8();
		NullCheck(L_112);
		int32_t L_114 = L_113;
		Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 * L_115 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		NullCheck(L_115);
		int32_t L_116 = L_115->get_TypeShooter_4();
		if ((!(((uint32_t)L_116) == ((uint32_t)2))))
		{
			goto IL_035d;
		}
	}
	{
		// GameObject goShoot2 = Instantiate(Shots[Statics.ShootingSelected].Prefab, Vector3.zero, Quaternion.identity);
		ControlGhost_tF5A4C0EF0DE41C54667C7FAAF7CC7DDA8C815F51 * L_117 = V_1;
		NullCheck(L_117);
		ShotU5BU5D_tA9C3ACB6B6065E328A62CFECAE87D4668B074614* L_118 = L_117->get_Shots_7();
		IL2CPP_RUNTIME_CLASS_INIT(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		int32_t L_119 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_ShootingSelected_8();
		NullCheck(L_118);
		int32_t L_120 = L_119;
		Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 * L_121 = (L_118)->GetAt(static_cast<il2cpp_array_size_t>(L_120));
		NullCheck(L_121);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_122 = L_121->get_Prefab_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_123;
		L_123 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_124;
		L_124 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_125;
		L_125 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_122, L_123, L_124, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// goShoot2.transform.parent = transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_126 = L_125;
		NullCheck(L_126);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_127;
		L_127 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_126, /*hidden argument*/NULL);
		ControlGhost_tF5A4C0EF0DE41C54667C7FAAF7CC7DDA8C815F51 * L_128 = V_1;
		NullCheck(L_128);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_129;
		L_129 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_128, /*hidden argument*/NULL);
		NullCheck(L_127);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_127, L_129, /*hidden argument*/NULL);
		// goShoot2.transform.localPosition = Shots[Statics.ShootingSelected].Weapon2.transform.localPosition;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_130 = L_126;
		NullCheck(L_130);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_131;
		L_131 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_130, /*hidden argument*/NULL);
		ControlGhost_tF5A4C0EF0DE41C54667C7FAAF7CC7DDA8C815F51 * L_132 = V_1;
		NullCheck(L_132);
		ShotU5BU5D_tA9C3ACB6B6065E328A62CFECAE87D4668B074614* L_133 = L_132->get_Shots_7();
		int32_t L_134 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_ShootingSelected_8();
		NullCheck(L_133);
		int32_t L_135 = L_134;
		Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 * L_136 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_135));
		NullCheck(L_136);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_137 = L_136->get_Weapon2_2();
		NullCheck(L_137);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_138;
		L_138 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_137, /*hidden argument*/NULL);
		NullCheck(L_138);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_139;
		L_139 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_138, /*hidden argument*/NULL);
		NullCheck(L_131);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_131, L_139, /*hidden argument*/NULL);
		// goShoot2.GetComponent<Rigidbody2D>().AddForce(transform.up * ((Shots[Statics.ShootingSelected].SpeedShooter * 12000f) * Time.deltaTime), ForceMode2D.Impulse);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_140 = L_130;
		NullCheck(L_140);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_141;
		L_141 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_140, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		ControlGhost_tF5A4C0EF0DE41C54667C7FAAF7CC7DDA8C815F51 * L_142 = V_1;
		NullCheck(L_142);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_143;
		L_143 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_142, /*hidden argument*/NULL);
		NullCheck(L_143);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_144;
		L_144 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_143, /*hidden argument*/NULL);
		ControlGhost_tF5A4C0EF0DE41C54667C7FAAF7CC7DDA8C815F51 * L_145 = V_1;
		NullCheck(L_145);
		ShotU5BU5D_tA9C3ACB6B6065E328A62CFECAE87D4668B074614* L_146 = L_145->get_Shots_7();
		int32_t L_147 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_ShootingSelected_8();
		NullCheck(L_146);
		int32_t L_148 = L_147;
		Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 * L_149 = (L_146)->GetAt(static_cast<il2cpp_array_size_t>(L_148));
		NullCheck(L_149);
		float L_150 = L_149->get_SpeedShooter_7();
		float L_151;
		L_151 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_152;
		L_152 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_144, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_150, (float)(12000.0f))), (float)L_151)), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_153;
		L_153 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_152, /*hidden argument*/NULL);
		NullCheck(L_141);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_141, L_153, 1, /*hidden argument*/NULL);
		// goShoot2.AddComponent<BoxCollider2D>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_154 = L_140;
		NullCheck(L_154);
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_155;
		L_155 = GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310(L_154, /*hidden argument*/GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310_RuntimeMethod_var);
		// goShoot2.transform.parent = transform.parent;
		NullCheck(L_154);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_156;
		L_156 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_154, /*hidden argument*/NULL);
		ControlGhost_tF5A4C0EF0DE41C54667C7FAAF7CC7DDA8C815F51 * L_157 = V_1;
		NullCheck(L_157);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_158;
		L_158 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_157, /*hidden argument*/NULL);
		NullCheck(L_158);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_159;
		L_159 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_158, /*hidden argument*/NULL);
		NullCheck(L_156);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_156, L_159, /*hidden argument*/NULL);
		// GameObject goTiro3 = Instantiate(Shots[Statics.ShootingSelected].Prefab, Vector3.zero, Quaternion.identity);
		ControlGhost_tF5A4C0EF0DE41C54667C7FAAF7CC7DDA8C815F51 * L_160 = V_1;
		NullCheck(L_160);
		ShotU5BU5D_tA9C3ACB6B6065E328A62CFECAE87D4668B074614* L_161 = L_160->get_Shots_7();
		int32_t L_162 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_ShootingSelected_8();
		NullCheck(L_161);
		int32_t L_163 = L_162;
		Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 * L_164 = (L_161)->GetAt(static_cast<il2cpp_array_size_t>(L_163));
		NullCheck(L_164);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_165 = L_164->get_Prefab_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_166;
		L_166 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_167;
		L_167 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_168;
		L_168 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_165, L_166, L_167, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// goTiro3.transform.parent = transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_169 = L_168;
		NullCheck(L_169);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_170;
		L_170 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_169, /*hidden argument*/NULL);
		ControlGhost_tF5A4C0EF0DE41C54667C7FAAF7CC7DDA8C815F51 * L_171 = V_1;
		NullCheck(L_171);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_172;
		L_172 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_171, /*hidden argument*/NULL);
		NullCheck(L_170);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_170, L_172, /*hidden argument*/NULL);
		// goTiro3.transform.localPosition = Shots[Statics.ShootingSelected].Weapon3.transform.localPosition;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_173 = L_169;
		NullCheck(L_173);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_174;
		L_174 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_173, /*hidden argument*/NULL);
		ControlGhost_tF5A4C0EF0DE41C54667C7FAAF7CC7DDA8C815F51 * L_175 = V_1;
		NullCheck(L_175);
		ShotU5BU5D_tA9C3ACB6B6065E328A62CFECAE87D4668B074614* L_176 = L_175->get_Shots_7();
		int32_t L_177 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_ShootingSelected_8();
		NullCheck(L_176);
		int32_t L_178 = L_177;
		Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 * L_179 = (L_176)->GetAt(static_cast<il2cpp_array_size_t>(L_178));
		NullCheck(L_179);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_180 = L_179->get_Weapon3_3();
		NullCheck(L_180);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_181;
		L_181 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_180, /*hidden argument*/NULL);
		NullCheck(L_181);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_182;
		L_182 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_181, /*hidden argument*/NULL);
		NullCheck(L_174);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_174, L_182, /*hidden argument*/NULL);
		// goTiro3.GetComponent<Rigidbody2D>().AddForce(transform.up * ((Shots[Statics.ShootingSelected].SpeedShooter * 12000f) * Time.deltaTime), ForceMode2D.Impulse);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_183 = L_173;
		NullCheck(L_183);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_184;
		L_184 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_183, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		ControlGhost_tF5A4C0EF0DE41C54667C7FAAF7CC7DDA8C815F51 * L_185 = V_1;
		NullCheck(L_185);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_186;
		L_186 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_185, /*hidden argument*/NULL);
		NullCheck(L_186);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_187;
		L_187 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_186, /*hidden argument*/NULL);
		ControlGhost_tF5A4C0EF0DE41C54667C7FAAF7CC7DDA8C815F51 * L_188 = V_1;
		NullCheck(L_188);
		ShotU5BU5D_tA9C3ACB6B6065E328A62CFECAE87D4668B074614* L_189 = L_188->get_Shots_7();
		int32_t L_190 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_ShootingSelected_8();
		NullCheck(L_189);
		int32_t L_191 = L_190;
		Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 * L_192 = (L_189)->GetAt(static_cast<il2cpp_array_size_t>(L_191));
		NullCheck(L_192);
		float L_193 = L_192->get_SpeedShooter_7();
		float L_194;
		L_194 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_195;
		L_195 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_187, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_193, (float)(12000.0f))), (float)L_194)), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_196;
		L_196 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_195, /*hidden argument*/NULL);
		NullCheck(L_184);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_184, L_196, 1, /*hidden argument*/NULL);
		// goTiro3.AddComponent<BoxCollider2D>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_197 = L_183;
		NullCheck(L_197);
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_198;
		L_198 = GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310(L_197, /*hidden argument*/GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310_RuntimeMethod_var);
		// goTiro3.transform.parent = transform.parent;
		NullCheck(L_197);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_199;
		L_199 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_197, /*hidden argument*/NULL);
		ControlGhost_tF5A4C0EF0DE41C54667C7FAAF7CC7DDA8C815F51 * L_200 = V_1;
		NullCheck(L_200);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_201;
		L_201 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_200, /*hidden argument*/NULL);
		NullCheck(L_201);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_202;
		L_202 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_201, /*hidden argument*/NULL);
		NullCheck(L_199);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_199, L_202, /*hidden argument*/NULL);
	}

IL_035d:
	{
		// CallShield();
		ControlGhost_tF5A4C0EF0DE41C54667C7FAAF7CC7DDA8C815F51 * L_203 = V_1;
		NullCheck(L_203);
		ControlGhost_CallShield_m61D25F807EB3D3A064848CFF218B615BF25A867F(L_203, /*hidden argument*/NULL);
		// while (true)
		goto IL_001e;
	}
}
// System.Object ControlGhost/<Shoot>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CShootU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m98D91AEA7BA354AC17FA75B0BA0FCCD438CD2F99 (U3CShootU3Ed__7_tE704B49D318CB97B09A55BEB0E8E90AF4B555F34 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void ControlGhost/<Shoot>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShootU3Ed__7_System_Collections_IEnumerator_Reset_mC732822BD1B5863FF128D8A2BD29675E6348F5A1 (U3CShootU3Ed__7_tE704B49D318CB97B09A55BEB0E8E90AF4B555F34 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CShootU3Ed__7_System_Collections_IEnumerator_Reset_mC732822BD1B5863FF128D8A2BD29675E6348F5A1_RuntimeMethod_var)));
	}
}
// System.Object ControlGhost/<Shoot>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CShootU3Ed__7_System_Collections_IEnumerator_get_Current_m1D7C9128797F8C33A4F40BDCE23E67598287895C (U3CShootU3Ed__7_tE704B49D318CB97B09A55BEB0E8E90AF4B555F34 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void ControlShip/<Shoot>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShootU3Ed__15__ctor_m2B8AEC7F4C367018734F07D04F33AF1D457AECB4 (U3CShootU3Ed__15_tA3D5CDD11652E4A5CA95A8EFBFC8113B6662B07E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void ControlShip/<Shoot>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShootU3Ed__15_System_IDisposable_Dispose_m5A84EFE10951A4AB77CC01EB739D428507BC9D61 (U3CShootU3Ed__15_tA3D5CDD11652E4A5CA95A8EFBFC8113B6662B07E * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean ControlShip/<Shoot>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CShootU3Ed__15_MoveNext_m9EEB87C1C824C95039077A22A766F5481F7FBDF5 (U3CShootU3Ed__15_tA3D5CDD11652E4A5CA95A8EFBFC8113B6662B07E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0043;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_001e:
	{
		// yield return new WaitForSeconds(Shots[Statics.ShootingSelected].ShootingPeriod);
		ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8 * L_4 = V_1;
		NullCheck(L_4);
		ShotU5BU5D_tA9C3ACB6B6065E328A62CFECAE87D4668B074614* L_5 = L_4->get_Shots_11();
		IL2CPP_RUNTIME_CLASS_INIT(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		int32_t L_6 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_ShootingSelected_8();
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		float L_9 = L_8->get_ShootingPeriod_6();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_10 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_10, L_9, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_10);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0043:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (shooting)
		ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8 * L_11 = V_1;
		NullCheck(L_11);
		bool L_12 = L_11->get_shooting_14();
		if (!L_12)
		{
			goto IL_035d;
		}
	}
	{
		// Statics.Damage = Shots[Statics.ShootingSelected].Damage;
		ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8 * L_13 = V_1;
		NullCheck(L_13);
		ShotU5BU5D_tA9C3ACB6B6065E328A62CFECAE87D4668B074614* L_14 = L_13->get_Shots_11();
		IL2CPP_RUNTIME_CLASS_INIT(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		int32_t L_15 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_ShootingSelected_8();
		NullCheck(L_14);
		int32_t L_16 = L_15;
		Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 * L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		int32_t L_18 = L_17->get_Damage_5();
		((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->set_Damage_11(L_18);
		// GameObject goShoot = Instantiate(Shots[Statics.ShootingSelected].Prefab, Vector3.zero, Quaternion.identity);
		ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8 * L_19 = V_1;
		NullCheck(L_19);
		ShotU5BU5D_tA9C3ACB6B6065E328A62CFECAE87D4668B074614* L_20 = L_19->get_Shots_11();
		int32_t L_21 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_ShootingSelected_8();
		NullCheck(L_20);
		int32_t L_22 = L_21;
		Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 * L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_23);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = L_23->get_Prefab_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_26;
		L_26 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27;
		L_27 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_24, L_25, L_26, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// goShoot.transform.parent = transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28 = L_27;
		NullCheck(L_28);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_28, /*hidden argument*/NULL);
		ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8 * L_30 = V_1;
		NullCheck(L_30);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_30, /*hidden argument*/NULL);
		NullCheck(L_29);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_29, L_31, /*hidden argument*/NULL);
		// goShoot.transform.localPosition = Shots[Statics.ShootingSelected].Weapon.transform.localPosition;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32 = L_28;
		NullCheck(L_32);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33;
		L_33 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_32, /*hidden argument*/NULL);
		ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8 * L_34 = V_1;
		NullCheck(L_34);
		ShotU5BU5D_tA9C3ACB6B6065E328A62CFECAE87D4668B074614* L_35 = L_34->get_Shots_11();
		int32_t L_36 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_ShootingSelected_8();
		NullCheck(L_35);
		int32_t L_37 = L_36;
		Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 * L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		NullCheck(L_38);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39 = L_38->get_Weapon_1();
		NullCheck(L_39);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40;
		L_40 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_39, /*hidden argument*/NULL);
		NullCheck(L_40);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		L_41 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_40, /*hidden argument*/NULL);
		NullCheck(L_33);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_33, L_41, /*hidden argument*/NULL);
		// goShoot.GetComponent<Rigidbody2D>().AddForce(transform.up * ((Shots[Statics.ShootingSelected].SpeedShooter * 12000f) * Time.deltaTime), ForceMode2D.Impulse);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_42 = L_32;
		NullCheck(L_42);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_43;
		L_43 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_42, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8 * L_44 = V_1;
		NullCheck(L_44);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_45;
		L_45 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_44, /*hidden argument*/NULL);
		NullCheck(L_45);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
		L_46 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_45, /*hidden argument*/NULL);
		ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8 * L_47 = V_1;
		NullCheck(L_47);
		ShotU5BU5D_tA9C3ACB6B6065E328A62CFECAE87D4668B074614* L_48 = L_47->get_Shots_11();
		int32_t L_49 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_ShootingSelected_8();
		NullCheck(L_48);
		int32_t L_50 = L_49;
		Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 * L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		NullCheck(L_51);
		float L_52 = L_51->get_SpeedShooter_7();
		float L_53;
		L_53 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54;
		L_54 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_46, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_52, (float)(12000.0f))), (float)L_53)), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_55;
		L_55 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_54, /*hidden argument*/NULL);
		NullCheck(L_43);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_43, L_55, 1, /*hidden argument*/NULL);
		// goShoot.AddComponent<BoxCollider2D>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_56 = L_42;
		NullCheck(L_56);
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_57;
		L_57 = GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310(L_56, /*hidden argument*/GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310_RuntimeMethod_var);
		// goShoot.transform.parent = transform.parent;
		NullCheck(L_56);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_58;
		L_58 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_56, /*hidden argument*/NULL);
		ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8 * L_59 = V_1;
		NullCheck(L_59);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_60;
		L_60 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_59, /*hidden argument*/NULL);
		NullCheck(L_60);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_61;
		L_61 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_60, /*hidden argument*/NULL);
		NullCheck(L_58);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_58, L_61, /*hidden argument*/NULL);
		// if(Shots[Statics.ShootingSelected].TypeShooter == Statics.TYPE_SHOT.DOUBLE)
		ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8 * L_62 = V_1;
		NullCheck(L_62);
		ShotU5BU5D_tA9C3ACB6B6065E328A62CFECAE87D4668B074614* L_63 = L_62->get_Shots_11();
		int32_t L_64 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_ShootingSelected_8();
		NullCheck(L_63);
		int32_t L_65 = L_64;
		Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 * L_66 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		NullCheck(L_66);
		int32_t L_67 = L_66->get_TypeShooter_4();
		if ((!(((uint32_t)L_67) == ((uint32_t)1))))
		{
			goto IL_01e4;
		}
	}
	{
		// GameObject goShoot2 = Instantiate(Shots[Statics.ShootingSelected].Prefab, Vector3.zero, Quaternion.identity);
		ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8 * L_68 = V_1;
		NullCheck(L_68);
		ShotU5BU5D_tA9C3ACB6B6065E328A62CFECAE87D4668B074614* L_69 = L_68->get_Shots_11();
		IL2CPP_RUNTIME_CLASS_INIT(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		int32_t L_70 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_ShootingSelected_8();
		NullCheck(L_69);
		int32_t L_71 = L_70;
		Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 * L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		NullCheck(L_72);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_73 = L_72->get_Prefab_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_74;
		L_74 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_75;
		L_75 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_76;
		L_76 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_73, L_74, L_75, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// goShoot2.transform.parent = transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_77 = L_76;
		NullCheck(L_77);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_78;
		L_78 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_77, /*hidden argument*/NULL);
		ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8 * L_79 = V_1;
		NullCheck(L_79);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_80;
		L_80 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_79, /*hidden argument*/NULL);
		NullCheck(L_78);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_78, L_80, /*hidden argument*/NULL);
		// goShoot2.transform.localPosition = Shots[Statics.ShootingSelected].Weapon2.transform.localPosition;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_81 = L_77;
		NullCheck(L_81);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_82;
		L_82 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_81, /*hidden argument*/NULL);
		ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8 * L_83 = V_1;
		NullCheck(L_83);
		ShotU5BU5D_tA9C3ACB6B6065E328A62CFECAE87D4668B074614* L_84 = L_83->get_Shots_11();
		int32_t L_85 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_ShootingSelected_8();
		NullCheck(L_84);
		int32_t L_86 = L_85;
		Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 * L_87 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		NullCheck(L_87);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_88 = L_87->get_Weapon2_2();
		NullCheck(L_88);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_89;
		L_89 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_88, /*hidden argument*/NULL);
		NullCheck(L_89);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_90;
		L_90 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_89, /*hidden argument*/NULL);
		NullCheck(L_82);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_82, L_90, /*hidden argument*/NULL);
		// goShoot2.GetComponent<Rigidbody2D>().AddForce(transform.up * ((Shots[Statics.ShootingSelected].SpeedShooter * 12000f) * Time.deltaTime), ForceMode2D.Impulse);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_91 = L_81;
		NullCheck(L_91);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_92;
		L_92 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_91, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8 * L_93 = V_1;
		NullCheck(L_93);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_94;
		L_94 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_93, /*hidden argument*/NULL);
		NullCheck(L_94);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_95;
		L_95 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_94, /*hidden argument*/NULL);
		ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8 * L_96 = V_1;
		NullCheck(L_96);
		ShotU5BU5D_tA9C3ACB6B6065E328A62CFECAE87D4668B074614* L_97 = L_96->get_Shots_11();
		int32_t L_98 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_ShootingSelected_8();
		NullCheck(L_97);
		int32_t L_99 = L_98;
		Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 * L_100 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		NullCheck(L_100);
		float L_101 = L_100->get_SpeedShooter_7();
		float L_102;
		L_102 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_103;
		L_103 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_95, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_101, (float)(12000.0f))), (float)L_102)), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_104;
		L_104 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_103, /*hidden argument*/NULL);
		NullCheck(L_92);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_92, L_104, 1, /*hidden argument*/NULL);
		// goShoot2.AddComponent<BoxCollider2D>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_105 = L_91;
		NullCheck(L_105);
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_106;
		L_106 = GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310(L_105, /*hidden argument*/GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310_RuntimeMethod_var);
		// goShoot2.transform.parent = transform.parent;
		NullCheck(L_105);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_107;
		L_107 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_105, /*hidden argument*/NULL);
		ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8 * L_108 = V_1;
		NullCheck(L_108);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_109;
		L_109 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_108, /*hidden argument*/NULL);
		NullCheck(L_109);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_110;
		L_110 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_109, /*hidden argument*/NULL);
		NullCheck(L_107);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_107, L_110, /*hidden argument*/NULL);
	}

IL_01e4:
	{
		// if (Shots[Statics.ShootingSelected].TypeShooter == Statics.TYPE_SHOT.TRIPLE)
		ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8 * L_111 = V_1;
		NullCheck(L_111);
		ShotU5BU5D_tA9C3ACB6B6065E328A62CFECAE87D4668B074614* L_112 = L_111->get_Shots_11();
		IL2CPP_RUNTIME_CLASS_INIT(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		int32_t L_113 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_ShootingSelected_8();
		NullCheck(L_112);
		int32_t L_114 = L_113;
		Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 * L_115 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		NullCheck(L_115);
		int32_t L_116 = L_115->get_TypeShooter_4();
		if ((!(((uint32_t)L_116) == ((uint32_t)2))))
		{
			goto IL_035d;
		}
	}
	{
		// GameObject goShoot2 = Instantiate(Shots[Statics.ShootingSelected].Prefab, Vector3.zero, Quaternion.identity);
		ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8 * L_117 = V_1;
		NullCheck(L_117);
		ShotU5BU5D_tA9C3ACB6B6065E328A62CFECAE87D4668B074614* L_118 = L_117->get_Shots_11();
		IL2CPP_RUNTIME_CLASS_INIT(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		int32_t L_119 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_ShootingSelected_8();
		NullCheck(L_118);
		int32_t L_120 = L_119;
		Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 * L_121 = (L_118)->GetAt(static_cast<il2cpp_array_size_t>(L_120));
		NullCheck(L_121);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_122 = L_121->get_Prefab_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_123;
		L_123 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_124;
		L_124 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_125;
		L_125 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_122, L_123, L_124, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// goShoot2.transform.parent = transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_126 = L_125;
		NullCheck(L_126);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_127;
		L_127 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_126, /*hidden argument*/NULL);
		ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8 * L_128 = V_1;
		NullCheck(L_128);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_129;
		L_129 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_128, /*hidden argument*/NULL);
		NullCheck(L_127);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_127, L_129, /*hidden argument*/NULL);
		// goShoot2.transform.localPosition = Shots[Statics.ShootingSelected].Weapon2.transform.localPosition;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_130 = L_126;
		NullCheck(L_130);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_131;
		L_131 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_130, /*hidden argument*/NULL);
		ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8 * L_132 = V_1;
		NullCheck(L_132);
		ShotU5BU5D_tA9C3ACB6B6065E328A62CFECAE87D4668B074614* L_133 = L_132->get_Shots_11();
		int32_t L_134 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_ShootingSelected_8();
		NullCheck(L_133);
		int32_t L_135 = L_134;
		Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 * L_136 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_135));
		NullCheck(L_136);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_137 = L_136->get_Weapon2_2();
		NullCheck(L_137);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_138;
		L_138 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_137, /*hidden argument*/NULL);
		NullCheck(L_138);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_139;
		L_139 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_138, /*hidden argument*/NULL);
		NullCheck(L_131);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_131, L_139, /*hidden argument*/NULL);
		// goShoot2.GetComponent<Rigidbody2D>().AddForce(transform.up * ((Shots[Statics.ShootingSelected].SpeedShooter * 12000f) * Time.deltaTime), ForceMode2D.Impulse);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_140 = L_130;
		NullCheck(L_140);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_141;
		L_141 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_140, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8 * L_142 = V_1;
		NullCheck(L_142);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_143;
		L_143 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_142, /*hidden argument*/NULL);
		NullCheck(L_143);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_144;
		L_144 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_143, /*hidden argument*/NULL);
		ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8 * L_145 = V_1;
		NullCheck(L_145);
		ShotU5BU5D_tA9C3ACB6B6065E328A62CFECAE87D4668B074614* L_146 = L_145->get_Shots_11();
		int32_t L_147 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_ShootingSelected_8();
		NullCheck(L_146);
		int32_t L_148 = L_147;
		Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 * L_149 = (L_146)->GetAt(static_cast<il2cpp_array_size_t>(L_148));
		NullCheck(L_149);
		float L_150 = L_149->get_SpeedShooter_7();
		float L_151;
		L_151 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_152;
		L_152 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_144, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_150, (float)(12000.0f))), (float)L_151)), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_153;
		L_153 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_152, /*hidden argument*/NULL);
		NullCheck(L_141);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_141, L_153, 1, /*hidden argument*/NULL);
		// goShoot2.AddComponent<BoxCollider2D>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_154 = L_140;
		NullCheck(L_154);
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_155;
		L_155 = GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310(L_154, /*hidden argument*/GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310_RuntimeMethod_var);
		// goShoot2.transform.parent = transform.parent;
		NullCheck(L_154);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_156;
		L_156 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_154, /*hidden argument*/NULL);
		ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8 * L_157 = V_1;
		NullCheck(L_157);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_158;
		L_158 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_157, /*hidden argument*/NULL);
		NullCheck(L_158);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_159;
		L_159 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_158, /*hidden argument*/NULL);
		NullCheck(L_156);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_156, L_159, /*hidden argument*/NULL);
		// GameObject goTiro3 = Instantiate(Shots[Statics.ShootingSelected].Prefab, Vector3.zero, Quaternion.identity);
		ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8 * L_160 = V_1;
		NullCheck(L_160);
		ShotU5BU5D_tA9C3ACB6B6065E328A62CFECAE87D4668B074614* L_161 = L_160->get_Shots_11();
		int32_t L_162 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_ShootingSelected_8();
		NullCheck(L_161);
		int32_t L_163 = L_162;
		Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 * L_164 = (L_161)->GetAt(static_cast<il2cpp_array_size_t>(L_163));
		NullCheck(L_164);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_165 = L_164->get_Prefab_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_166;
		L_166 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_167;
		L_167 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_168;
		L_168 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_165, L_166, L_167, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// goTiro3.transform.parent = transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_169 = L_168;
		NullCheck(L_169);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_170;
		L_170 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_169, /*hidden argument*/NULL);
		ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8 * L_171 = V_1;
		NullCheck(L_171);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_172;
		L_172 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_171, /*hidden argument*/NULL);
		NullCheck(L_170);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_170, L_172, /*hidden argument*/NULL);
		// goTiro3.transform.localPosition = Shots[Statics.ShootingSelected].Weapon3.transform.localPosition;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_173 = L_169;
		NullCheck(L_173);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_174;
		L_174 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_173, /*hidden argument*/NULL);
		ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8 * L_175 = V_1;
		NullCheck(L_175);
		ShotU5BU5D_tA9C3ACB6B6065E328A62CFECAE87D4668B074614* L_176 = L_175->get_Shots_11();
		int32_t L_177 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_ShootingSelected_8();
		NullCheck(L_176);
		int32_t L_178 = L_177;
		Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 * L_179 = (L_176)->GetAt(static_cast<il2cpp_array_size_t>(L_178));
		NullCheck(L_179);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_180 = L_179->get_Weapon3_3();
		NullCheck(L_180);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_181;
		L_181 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_180, /*hidden argument*/NULL);
		NullCheck(L_181);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_182;
		L_182 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_181, /*hidden argument*/NULL);
		NullCheck(L_174);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_174, L_182, /*hidden argument*/NULL);
		// goTiro3.GetComponent<Rigidbody2D>().AddForce(transform.up * ((Shots[Statics.ShootingSelected].SpeedShooter * 12000f) * Time.deltaTime), ForceMode2D.Impulse);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_183 = L_173;
		NullCheck(L_183);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_184;
		L_184 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_183, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8 * L_185 = V_1;
		NullCheck(L_185);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_186;
		L_186 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_185, /*hidden argument*/NULL);
		NullCheck(L_186);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_187;
		L_187 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_186, /*hidden argument*/NULL);
		ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8 * L_188 = V_1;
		NullCheck(L_188);
		ShotU5BU5D_tA9C3ACB6B6065E328A62CFECAE87D4668B074614* L_189 = L_188->get_Shots_11();
		int32_t L_190 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_ShootingSelected_8();
		NullCheck(L_189);
		int32_t L_191 = L_190;
		Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 * L_192 = (L_189)->GetAt(static_cast<il2cpp_array_size_t>(L_191));
		NullCheck(L_192);
		float L_193 = L_192->get_SpeedShooter_7();
		float L_194;
		L_194 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_195;
		L_195 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_187, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_193, (float)(12000.0f))), (float)L_194)), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_196;
		L_196 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_195, /*hidden argument*/NULL);
		NullCheck(L_184);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_184, L_196, 1, /*hidden argument*/NULL);
		// goTiro3.AddComponent<BoxCollider2D>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_197 = L_183;
		NullCheck(L_197);
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_198;
		L_198 = GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310(L_197, /*hidden argument*/GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310_RuntimeMethod_var);
		// goTiro3.transform.parent = transform.parent;
		NullCheck(L_197);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_199;
		L_199 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_197, /*hidden argument*/NULL);
		ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8 * L_200 = V_1;
		NullCheck(L_200);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_201;
		L_201 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_200, /*hidden argument*/NULL);
		NullCheck(L_201);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_202;
		L_202 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_201, /*hidden argument*/NULL);
		NullCheck(L_199);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_199, L_202, /*hidden argument*/NULL);
	}

IL_035d:
	{
		// CallShield();
		ControlShip_tDE8B063AEEACBC4110A6A51AF8533BED76E0D3C8 * L_203 = V_1;
		NullCheck(L_203);
		ControlShip_CallShield_m981741EAE83CD99702ECA0E88C92115E68E6CA0C(L_203, /*hidden argument*/NULL);
		// while (true)
		goto IL_001e;
	}
}
// System.Object ControlShip/<Shoot>d__15::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CShootU3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m70974FE0B089361CAD462BCE365A3FB4E9337C4B (U3CShootU3Ed__15_tA3D5CDD11652E4A5CA95A8EFBFC8113B6662B07E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void ControlShip/<Shoot>d__15::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShootU3Ed__15_System_Collections_IEnumerator_Reset_m10AA0124EE17DB5A2A71839446D7DD301A7FC818 (U3CShootU3Ed__15_tA3D5CDD11652E4A5CA95A8EFBFC8113B6662B07E * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CShootU3Ed__15_System_Collections_IEnumerator_Reset_m10AA0124EE17DB5A2A71839446D7DD301A7FC818_RuntimeMethod_var)));
	}
}
// System.Object ControlShip/<Shoot>d__15::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CShootU3Ed__15_System_Collections_IEnumerator_get_Current_m9263C839D099A97D92EA9E46C93CDBCD50FE96B5 (U3CShootU3Ed__15_tA3D5CDD11652E4A5CA95A8EFBFC8113B6662B07E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void ControlStart/<LoadScene>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneU3Ed__4__ctor_mAD54CB3A4262AF8A10EFE3121723ABFA115FE5FB (U3CLoadSceneU3Ed__4_tFA699E679840F67FE1E189060FE7284ED9DEB59E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void ControlStart/<LoadScene>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneU3Ed__4_System_IDisposable_Dispose_m7235DF337767DFF45DA0672C74BAA1E092EB2FB5 (U3CLoadSceneU3Ed__4_tFA699E679840F67FE1E189060FE7284ED9DEB59E * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean ControlStart/<LoadScene>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadSceneU3Ed__4_MoveNext_m451891B5DD734758AC6EC8263A6E3B0C863106BA (U3CLoadSceneU3Ed__4_tFA699E679840F67FE1E189060FE7284ED9DEB59E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCallScene_tB4E099C9D351736775EF8EF0609DC73824F2CE94_m3D16F66EF40C809EA046C8B7A583A9FA7D8B111A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ControlStart_t461A8F5392E3967B1B6B5520351D75DEFD71B1B0 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ControlStart_t461A8F5392E3967B1B6B5520351D75DEFD71B1B0 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(0.5f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, (0.5f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0037:
	{
		__this->set_U3CU3E1__state_0((-1));
		// CallScene callScene = GetComponent<CallScene>();
		ControlStart_t461A8F5392E3967B1B6B5520351D75DEFD71B1B0 * L_5 = V_1;
		NullCheck(L_5);
		CallScene_tB4E099C9D351736775EF8EF0609DC73824F2CE94 * L_6;
		L_6 = Component_GetComponent_TisCallScene_tB4E099C9D351736775EF8EF0609DC73824F2CE94_m3D16F66EF40C809EA046C8B7A583A9FA7D8B111A(L_5, /*hidden argument*/Component_GetComponent_TisCallScene_tB4E099C9D351736775EF8EF0609DC73824F2CE94_m3D16F66EF40C809EA046C8B7A583A9FA7D8B111A_RuntimeMethod_var);
		// callScene.Call("Game");
		NullCheck(L_6);
		CallScene_Call_m8CDF9D77505FAEDF29068B890862D09654434CCE(L_6, _stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306, /*hidden argument*/NULL);
		// Statics.loadingGame = true;
		IL2CPP_RUNTIME_CLASS_INIT(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->set_loadingGame_18((bool)1);
		// }
		return (bool)0;
	}
}
// System.Object ControlStart/<LoadScene>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadSceneU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m08EE310F30A709DA2CDA2B0BD0D0D3F9972003C7 (U3CLoadSceneU3Ed__4_tFA699E679840F67FE1E189060FE7284ED9DEB59E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void ControlStart/<LoadScene>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneU3Ed__4_System_Collections_IEnumerator_Reset_m5B88C87391AE8B74C4EE0D8DF62B2BE86F47F067 (U3CLoadSceneU3Ed__4_tFA699E679840F67FE1E189060FE7284ED9DEB59E * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadSceneU3Ed__4_System_Collections_IEnumerator_Reset_m5B88C87391AE8B74C4EE0D8DF62B2BE86F47F067_RuntimeMethod_var)));
	}
}
// System.Object ControlStart/<LoadScene>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadSceneU3Ed__4_System_Collections_IEnumerator_get_Current_mEA54679506F976D1BE8921B7F1D2A8ACFC593CCB (U3CLoadSceneU3Ed__4_tFA699E679840F67FE1E189060FE7284ED9DEB59E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void DestroyTime/<CallDestroy>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCallDestroyU3Ed__2__ctor_m7A7A8DC06CB12FA979DC587DA59CD00B21710FAF (U3CCallDestroyU3Ed__2_tAFEBF82F13F04716C1673744B80612E43A0ACA03 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void DestroyTime/<CallDestroy>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCallDestroyU3Ed__2_System_IDisposable_Dispose_m93E09EB5836B606D9F59C3CB667BDD2C8F1215BD (U3CCallDestroyU3Ed__2_tAFEBF82F13F04716C1673744B80612E43A0ACA03 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean DestroyTime/<CallDestroy>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCallDestroyU3Ed__2_MoveNext_mCDEF6B443D6ED1BA89399F05AEC81423D64C107B (U3CCallDestroyU3Ed__2_tAFEBF82F13F04716C1673744B80612E43A0ACA03 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DestroyTime_t24806801B4F6EA764796D3C1789E9D157D0023D2 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		DestroyTime_t24806801B4F6EA764796D3C1789E9D157D0023D2 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(delay);
		DestroyTime_t24806801B4F6EA764796D3C1789E9D157D0023D2 * L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->get_delay_4();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_6 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_6, L_5, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0038:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if(gameObject)
		DestroyTime_t24806801B4F6EA764796D3C1789E9D157D0023D2 * L_7 = V_1;
		NullCheck(L_7);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0057;
		}
	}
	{
		// Destroy(gameObject);
		DestroyTime_t24806801B4F6EA764796D3C1789E9D157D0023D2 * L_10 = V_1;
		NullCheck(L_10);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_11, /*hidden argument*/NULL);
	}

IL_0057:
	{
		// }
		return (bool)0;
	}
}
// System.Object DestroyTime/<CallDestroy>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCallDestroyU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA97E34B5CF7FEDA8B2A9EFBCE21A197CE51A2BB2 (U3CCallDestroyU3Ed__2_tAFEBF82F13F04716C1673744B80612E43A0ACA03 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void DestroyTime/<CallDestroy>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCallDestroyU3Ed__2_System_Collections_IEnumerator_Reset_mEAC272124FCDF01C2C344D034F9CBA6F076E2EF9 (U3CCallDestroyU3Ed__2_tAFEBF82F13F04716C1673744B80612E43A0ACA03 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCallDestroyU3Ed__2_System_Collections_IEnumerator_Reset_mEAC272124FCDF01C2C344D034F9CBA6F076E2EF9_RuntimeMethod_var)));
	}
}
// System.Object DestroyTime/<CallDestroy>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCallDestroyU3Ed__2_System_Collections_IEnumerator_get_Current_m89A18098EC6562CFAFAD044268F750C304307BA0 (U3CCallDestroyU3Ed__2_tAFEBF82F13F04716C1673744B80612E43A0ACA03 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Enemy/<KillMe>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CKillMeU3Ed__13__ctor_m8C885CDD9C15822AFC09DE23F1D2E62CED4B313E (U3CKillMeU3Ed__13_t119E02ACE3C774FC55783CA4B9311F67937D811C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Enemy/<KillMe>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CKillMeU3Ed__13_System_IDisposable_Dispose_m0CD4019C67BDACBFC48918B184B1DFF9C8D9F3C6 (U3CKillMeU3Ed__13_t119E02ACE3C774FC55783CA4B9311F67937D811C * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Enemy/<KillMe>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CKillMeU3Ed__13_MoveNext_m1A1DDE29A0C75F5DBAB55884EFA30FA79502A749 (U3CKillMeU3Ed__13_t119E02ACE3C774FC55783CA4B9311F67937D811C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, (0.100000001f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0037:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Destroy(gameObject);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_5 = V_1;
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_6, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Enemy/<KillMe>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CKillMeU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mEE6C9A72BE699E31F04969B56C20CDD36E626BBF (U3CKillMeU3Ed__13_t119E02ACE3C774FC55783CA4B9311F67937D811C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Enemy/<KillMe>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CKillMeU3Ed__13_System_Collections_IEnumerator_Reset_m282DE72907854BC7299C5B6F867AA8902B3C4FFF (U3CKillMeU3Ed__13_t119E02ACE3C774FC55783CA4B9311F67937D811C * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CKillMeU3Ed__13_System_Collections_IEnumerator_Reset_m282DE72907854BC7299C5B6F867AA8902B3C4FFF_RuntimeMethod_var)));
	}
}
// System.Object Enemy/<KillMe>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CKillMeU3Ed__13_System_Collections_IEnumerator_get_Current_mF5BA2677AAF2A8BEE42D759437BB8302D36B8B2C (U3CKillMeU3Ed__13_t119E02ACE3C774FC55783CA4B9311F67937D811C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Enemy/<Shoot>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShootU3Ed__15__ctor_m29B2F0E858838B3DB93DED23561CABBF841230F6 (U3CShootU3Ed__15_tF9AF905CBA0A2327F76DF1C4043394EB061319B2 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Enemy/<Shoot>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShootU3Ed__15_System_IDisposable_Dispose_m14420DD502FAEEB08651392992627F1D36774088 (U3CShootU3Ed__15_tF9AF905CBA0A2327F76DF1C4043394EB061319B2 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Enemy/<Shoot>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CShootU3Ed__15_MoveNext_m8A389B245E6892D75DD4F4E6F05FCE10F2F2FA65 (U3CShootU3Ed__15_tF9AF905CBA0A2327F76DF1C4043394EB061319B2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0533A6A2C16737D20E278E4C50B5A40AB53B1A7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003d;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_001e:
	{
		// yield return new WaitForSeconds(shot.ShootingPeriod);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_4 = V_1;
		NullCheck(L_4);
		Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 * L_5 = L_4->get_shot_8();
		NullCheck(L_5);
		float L_6 = L_5->get_ShootingPeriod_6();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_7 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_7, L_6, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_7);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003d:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Statics.Damage = shot.Damage;
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_8 = V_1;
		NullCheck(L_8);
		Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 * L_9 = L_8->get_shot_8();
		NullCheck(L_9);
		int32_t L_10 = L_9->get_Damage_5();
		IL2CPP_RUNTIME_CLASS_INIT(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->set_Damage_11(L_10);
		// GameObject goShooter = Instantiate(shot.Prefab, Vector3.zero, Quaternion.identity);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_11 = V_1;
		NullCheck(L_11);
		Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 * L_12 = L_11->get_shot_8();
		NullCheck(L_12);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = L_12->get_Prefab_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_15;
		L_15 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_13, L_14, L_15, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// goShooter.tag = "EnemyShot";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = L_16;
		NullCheck(L_17);
		GameObject_set_tag_m0EBA46574304C71E047A33BDD5F5D49E9D9A25BE(L_17, _stringLiteralE0533A6A2C16737D20E278E4C50B5A40AB53B1A7, /*hidden argument*/NULL);
		// goShooter.transform.parent = transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = L_17;
		NullCheck(L_18);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_18, /*hidden argument*/NULL);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_20 = V_1;
		NullCheck(L_20);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_19, L_21, /*hidden argument*/NULL);
		// goShooter.transform.localPosition = shot.Weapon.transform.localPosition;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = L_18;
		NullCheck(L_22);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_22, /*hidden argument*/NULL);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_24 = V_1;
		NullCheck(L_24);
		Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 * L_25 = L_24->get_shot_8();
		NullCheck(L_25);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26 = L_25->get_Weapon_1();
		NullCheck(L_26);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
		L_27 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_27, /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_23, L_28, /*hidden argument*/NULL);
		// goShooter.GetComponent<Rigidbody2D>().AddForce(transform.up * ((shot.SpeedShooter * 12000f) * Time.deltaTime), ForceMode2D.Impulse);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = L_22;
		NullCheck(L_29);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_30;
		L_30 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_29, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_31 = V_1;
		NullCheck(L_31);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_32, /*hidden argument*/NULL);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_34 = V_1;
		NullCheck(L_34);
		Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 * L_35 = L_34->get_shot_8();
		NullCheck(L_35);
		float L_36 = L_35->get_SpeedShooter_7();
		float L_37;
		L_37 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_33, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_36, (float)(12000.0f))), (float)L_37)), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_39;
		L_39 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_38, /*hidden argument*/NULL);
		NullCheck(L_30);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_30, L_39, 1, /*hidden argument*/NULL);
		// goShooter.AddComponent<BoxCollider2D>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40 = L_29;
		NullCheck(L_40);
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_41;
		L_41 = GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310(L_40, /*hidden argument*/GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310_RuntimeMethod_var);
		// goShooter.transform.parent = transform.parent;
		NullCheck(L_40);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42;
		L_42 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_40, /*hidden argument*/NULL);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_43 = V_1;
		NullCheck(L_43);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_44;
		L_44 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_43, /*hidden argument*/NULL);
		NullCheck(L_44);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_45;
		L_45 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_44, /*hidden argument*/NULL);
		NullCheck(L_42);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_42, L_45, /*hidden argument*/NULL);
		// if (shot.TypeShooter == Statics.TYPE_SHOT.DOUBLE)
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_46 = V_1;
		NullCheck(L_46);
		Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 * L_47 = L_46->get_shot_8();
		NullCheck(L_47);
		int32_t L_48 = L_47->get_TypeShooter_4();
		if ((!(((uint32_t)L_48) == ((uint32_t)1))))
		{
			goto IL_01b9;
		}
	}
	{
		// GameObject goShooter2 = Instantiate(shot.Prefab, Vector3.zero, Quaternion.identity);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_49 = V_1;
		NullCheck(L_49);
		Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 * L_50 = L_49->get_shot_8();
		NullCheck(L_50);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_51 = L_50->get_Prefab_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
		L_52 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_53;
		L_53 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_54;
		L_54 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_51, L_52, L_53, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// goShooter2.tag = "EnemyShot";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_55 = L_54;
		NullCheck(L_55);
		GameObject_set_tag_m0EBA46574304C71E047A33BDD5F5D49E9D9A25BE(L_55, _stringLiteralE0533A6A2C16737D20E278E4C50B5A40AB53B1A7, /*hidden argument*/NULL);
		// goShooter2.transform.parent = transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_56 = L_55;
		NullCheck(L_56);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_57;
		L_57 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_56, /*hidden argument*/NULL);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_58 = V_1;
		NullCheck(L_58);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_59;
		L_59 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_58, /*hidden argument*/NULL);
		NullCheck(L_57);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_57, L_59, /*hidden argument*/NULL);
		// goShooter2.transform.localPosition = shot.Weapon2.transform.localPosition;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_60 = L_56;
		NullCheck(L_60);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_61;
		L_61 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_60, /*hidden argument*/NULL);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_62 = V_1;
		NullCheck(L_62);
		Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 * L_63 = L_62->get_shot_8();
		NullCheck(L_63);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_64 = L_63->get_Weapon2_2();
		NullCheck(L_64);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_65;
		L_65 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_64, /*hidden argument*/NULL);
		NullCheck(L_65);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_66;
		L_66 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_65, /*hidden argument*/NULL);
		NullCheck(L_61);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_61, L_66, /*hidden argument*/NULL);
		// goShooter2.GetComponent<Rigidbody2D>().AddForce(transform.up * ((shot.SpeedShooter * 12000f) * Time.deltaTime), ForceMode2D.Impulse);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_67 = L_60;
		NullCheck(L_67);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_68;
		L_68 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_67, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_69 = V_1;
		NullCheck(L_69);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_70;
		L_70 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_69, /*hidden argument*/NULL);
		NullCheck(L_70);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_71;
		L_71 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_70, /*hidden argument*/NULL);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_72 = V_1;
		NullCheck(L_72);
		Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 * L_73 = L_72->get_shot_8();
		NullCheck(L_73);
		float L_74 = L_73->get_SpeedShooter_7();
		float L_75;
		L_75 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_76;
		L_76 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_71, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_74, (float)(12000.0f))), (float)L_75)), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_77;
		L_77 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_76, /*hidden argument*/NULL);
		NullCheck(L_68);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_68, L_77, 1, /*hidden argument*/NULL);
		// goShooter2.AddComponent<BoxCollider2D>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_78 = L_67;
		NullCheck(L_78);
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_79;
		L_79 = GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310(L_78, /*hidden argument*/GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310_RuntimeMethod_var);
		// goShooter2.transform.parent = transform.parent;
		NullCheck(L_78);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_80;
		L_80 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_78, /*hidden argument*/NULL);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_81 = V_1;
		NullCheck(L_81);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_82;
		L_82 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_81, /*hidden argument*/NULL);
		NullCheck(L_82);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_83;
		L_83 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_82, /*hidden argument*/NULL);
		NullCheck(L_80);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_80, L_83, /*hidden argument*/NULL);
	}

IL_01b9:
	{
		// if (shot.TypeShooter == Statics.TYPE_SHOT.TRIPLE)
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_84 = V_1;
		NullCheck(L_84);
		Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 * L_85 = L_84->get_shot_8();
		NullCheck(L_85);
		int32_t L_86 = L_85->get_TypeShooter_4();
		if ((!(((uint32_t)L_86) == ((uint32_t)2))))
		{
			goto IL_001e;
		}
	}
	{
		// GameObject goShooter2 = Instantiate(shot.Prefab, Vector3.zero, Quaternion.identity);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_87 = V_1;
		NullCheck(L_87);
		Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 * L_88 = L_87->get_shot_8();
		NullCheck(L_88);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_89 = L_88->get_Prefab_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_90;
		L_90 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_91;
		L_91 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_92;
		L_92 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_89, L_90, L_91, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// goShooter2.tag = "EnemyShot";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_93 = L_92;
		NullCheck(L_93);
		GameObject_set_tag_m0EBA46574304C71E047A33BDD5F5D49E9D9A25BE(L_93, _stringLiteralE0533A6A2C16737D20E278E4C50B5A40AB53B1A7, /*hidden argument*/NULL);
		// goShooter2.transform.parent = transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_94 = L_93;
		NullCheck(L_94);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_95;
		L_95 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_94, /*hidden argument*/NULL);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_96 = V_1;
		NullCheck(L_96);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_97;
		L_97 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_96, /*hidden argument*/NULL);
		NullCheck(L_95);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_95, L_97, /*hidden argument*/NULL);
		// goShooter2.transform.localPosition = shot.Weapon2.transform.localPosition;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_98 = L_94;
		NullCheck(L_98);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_99;
		L_99 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_98, /*hidden argument*/NULL);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_100 = V_1;
		NullCheck(L_100);
		Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 * L_101 = L_100->get_shot_8();
		NullCheck(L_101);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_102 = L_101->get_Weapon2_2();
		NullCheck(L_102);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_103;
		L_103 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_102, /*hidden argument*/NULL);
		NullCheck(L_103);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_104;
		L_104 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_103, /*hidden argument*/NULL);
		NullCheck(L_99);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_99, L_104, /*hidden argument*/NULL);
		// goShooter2.GetComponent<Rigidbody2D>().AddForce(transform.up * ((shot.SpeedShooter * 12000f) * Time.deltaTime), ForceMode2D.Impulse);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_105 = L_98;
		NullCheck(L_105);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_106;
		L_106 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_105, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_107 = V_1;
		NullCheck(L_107);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_108;
		L_108 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_107, /*hidden argument*/NULL);
		NullCheck(L_108);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_109;
		L_109 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_108, /*hidden argument*/NULL);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_110 = V_1;
		NullCheck(L_110);
		Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 * L_111 = L_110->get_shot_8();
		NullCheck(L_111);
		float L_112 = L_111->get_SpeedShooter_7();
		float L_113;
		L_113 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_114;
		L_114 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_109, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_112, (float)(12000.0f))), (float)L_113)), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_115;
		L_115 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_114, /*hidden argument*/NULL);
		NullCheck(L_106);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_106, L_115, 1, /*hidden argument*/NULL);
		// goShooter2.AddComponent<BoxCollider2D>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_116 = L_105;
		NullCheck(L_116);
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_117;
		L_117 = GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310(L_116, /*hidden argument*/GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310_RuntimeMethod_var);
		// goShooter2.transform.parent = transform.parent;
		NullCheck(L_116);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_118;
		L_118 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_116, /*hidden argument*/NULL);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_119 = V_1;
		NullCheck(L_119);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_120;
		L_120 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_119, /*hidden argument*/NULL);
		NullCheck(L_120);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_121;
		L_121 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_120, /*hidden argument*/NULL);
		NullCheck(L_118);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_118, L_121, /*hidden argument*/NULL);
		// GameObject goShooter3 = Instantiate(shot.Prefab, Vector3.zero, Quaternion.identity);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_122 = V_1;
		NullCheck(L_122);
		Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 * L_123 = L_122->get_shot_8();
		NullCheck(L_123);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_124 = L_123->get_Prefab_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_125;
		L_125 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_126;
		L_126 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_127;
		L_127 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_124, L_125, L_126, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// goShooter3.tag = "EnemyShot";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_128 = L_127;
		NullCheck(L_128);
		GameObject_set_tag_m0EBA46574304C71E047A33BDD5F5D49E9D9A25BE(L_128, _stringLiteralE0533A6A2C16737D20E278E4C50B5A40AB53B1A7, /*hidden argument*/NULL);
		// goShooter3.transform.parent = transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_129 = L_128;
		NullCheck(L_129);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_130;
		L_130 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_129, /*hidden argument*/NULL);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_131 = V_1;
		NullCheck(L_131);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_132;
		L_132 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_131, /*hidden argument*/NULL);
		NullCheck(L_130);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_130, L_132, /*hidden argument*/NULL);
		// goShooter3.transform.localPosition = shot.Weapon3.transform.localPosition;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_133 = L_129;
		NullCheck(L_133);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_134;
		L_134 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_133, /*hidden argument*/NULL);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_135 = V_1;
		NullCheck(L_135);
		Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 * L_136 = L_135->get_shot_8();
		NullCheck(L_136);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_137 = L_136->get_Weapon3_3();
		NullCheck(L_137);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_138;
		L_138 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_137, /*hidden argument*/NULL);
		NullCheck(L_138);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_139;
		L_139 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_138, /*hidden argument*/NULL);
		NullCheck(L_134);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_134, L_139, /*hidden argument*/NULL);
		// goShooter3.GetComponent<Rigidbody2D>().AddForce(transform.up * ((shot.SpeedShooter * 12000f) * Time.deltaTime), ForceMode2D.Impulse);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_140 = L_133;
		NullCheck(L_140);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_141;
		L_141 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_140, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_142 = V_1;
		NullCheck(L_142);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_143;
		L_143 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_142, /*hidden argument*/NULL);
		NullCheck(L_143);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_144;
		L_144 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_143, /*hidden argument*/NULL);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_145 = V_1;
		NullCheck(L_145);
		Shot_tDF87F5752107868C25B4A9FA364CD9D4774F0A97 * L_146 = L_145->get_shot_8();
		NullCheck(L_146);
		float L_147 = L_146->get_SpeedShooter_7();
		float L_148;
		L_148 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_149;
		L_149 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_144, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_147, (float)(12000.0f))), (float)L_148)), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_150;
		L_150 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_149, /*hidden argument*/NULL);
		NullCheck(L_141);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_141, L_150, 1, /*hidden argument*/NULL);
		// goShooter3.AddComponent<BoxCollider2D>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_151 = L_140;
		NullCheck(L_151);
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_152;
		L_152 = GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310(L_151, /*hidden argument*/GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310_RuntimeMethod_var);
		// goShooter3.transform.parent = transform.parent;
		NullCheck(L_151);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_153;
		L_153 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_151, /*hidden argument*/NULL);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_154 = V_1;
		NullCheck(L_154);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_155;
		L_155 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_154, /*hidden argument*/NULL);
		NullCheck(L_155);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_156;
		L_156 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_155, /*hidden argument*/NULL);
		NullCheck(L_153);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_153, L_156, /*hidden argument*/NULL);
		// while (true)
		goto IL_001e;
	}
}
// System.Object Enemy/<Shoot>d__15::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CShootU3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4E0354BC40D11DF17FE0263C2033AE2028A1C752 (U3CShootU3Ed__15_tF9AF905CBA0A2327F76DF1C4043394EB061319B2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Enemy/<Shoot>d__15::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShootU3Ed__15_System_Collections_IEnumerator_Reset_mF264D9F35C68E5C483C9FEE60B2504A8D00F7158 (U3CShootU3Ed__15_tF9AF905CBA0A2327F76DF1C4043394EB061319B2 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CShootU3Ed__15_System_Collections_IEnumerator_Reset_mF264D9F35C68E5C483C9FEE60B2504A8D00F7158_RuntimeMethod_var)));
	}
}
// System.Object Enemy/<Shoot>d__15::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CShootU3Ed__15_System_Collections_IEnumerator_get_Current_mDE949D6761D3AA103FD853EB1A04D36B45173FCB (U3CShootU3Ed__15_tF9AF905CBA0A2327F76DF1C4043394EB061319B2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void EnemyControl/<CallBoss>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCallBossU3Ed__6__ctor_mDA19F5EC5865BAF920AD4E709D8ADE95E743F363 (U3CCallBossU3Ed__6_t0BF59ED4A6D214279882298BAE1927F9D4059B35 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void EnemyControl/<CallBoss>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCallBossU3Ed__6_System_IDisposable_Dispose_m68D5010133251BF57F27F51D1BB928B1E4C8DDD9 (U3CCallBossU3Ed__6_t0BF59ED4A6D214279882298BAE1927F9D4059B35 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean EnemyControl/<CallBoss>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCallBossU3Ed__6_MoveNext_mDF3544E995D32004659624A65FB35CCD76C0B909 (U3CCallBossU3Ed__6_t0BF59ED4A6D214279882298BAE1927F9D4059B35 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EnemyControl_t8354619B7C2514F856067E693DC1914D07EE53D9 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		EnemyControl_t8354619B7C2514F856067E693DC1914D07EE53D9 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0053;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// GetComponent<AudioSource>().Stop();
		EnemyControl_t8354619B7C2514F856067E693DC1914D07EE53D9 * L_4 = V_1;
		NullCheck(L_4);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_5;
		L_5 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(L_4, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		NullCheck(L_5);
		AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F(L_5, /*hidden argument*/NULL);
		// GetComponent<AudioSource>().PlayOneShot(AudioBoss);
		EnemyControl_t8354619B7C2514F856067E693DC1914D07EE53D9 * L_6 = V_1;
		NullCheck(L_6);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_7;
		L_7 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(L_6, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		EnemyControl_t8354619B7C2514F856067E693DC1914D07EE53D9 * L_8 = V_1;
		NullCheck(L_8);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_9 = L_8->get_AudioBoss_5();
		NullCheck(L_7);
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_7, L_9, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(5f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_10 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_10, (5.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_10);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0053:
	{
		__this->set_U3CU3E1__state_0((-1));
		// GameObject GoIni = Instantiate(controlGame.Levels[Statics.CurrentLevel].Boss , LocalToCreateEnemies);
		EnemyControl_t8354619B7C2514F856067E693DC1914D07EE53D9 * L_11 = V_1;
		NullCheck(L_11);
		ControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96 * L_12 = L_11->get_controlGame_4();
		NullCheck(L_12);
		LevelU5BU5D_t10F32731C74504D66804828AC533B31C3D098D5B* L_13 = L_12->get_Levels_5();
		IL2CPP_RUNTIME_CLASS_INIT(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		int32_t L_14 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_CurrentLevel_12();
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Level_t0F1BB2DCE2C7368CA4FEAE26F672ADB4C35C7505 * L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = L_16->get_Boss_3();
		EnemyControl_t8354619B7C2514F856067E693DC1914D07EE53D9 * L_18 = V_1;
		NullCheck(L_18);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19 = L_18->get_LocalToCreateEnemies_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_17, L_19, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		// }
		return (bool)0;
	}
}
// System.Object EnemyControl/<CallBoss>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCallBossU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2297F4117C95DDE24CFD237A355224230FA00BD9 (U3CCallBossU3Ed__6_t0BF59ED4A6D214279882298BAE1927F9D4059B35 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void EnemyControl/<CallBoss>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCallBossU3Ed__6_System_Collections_IEnumerator_Reset_mAB176BC3F3DE4AD36A0EAF25D234733D5CA47B3D (U3CCallBossU3Ed__6_t0BF59ED4A6D214279882298BAE1927F9D4059B35 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCallBossU3Ed__6_System_Collections_IEnumerator_Reset_mAB176BC3F3DE4AD36A0EAF25D234733D5CA47B3D_RuntimeMethod_var)));
	}
}
// System.Object EnemyControl/<CallBoss>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCallBossU3Ed__6_System_Collections_IEnumerator_get_Current_mB515EAE6DED7E678D67D764943739ADEF1C84D27 (U3CCallBossU3Ed__6_t0BF59ED4A6D214279882298BAE1927F9D4059B35 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void EnemyControl/<Process>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CProcessU3Ed__4__ctor_mA6DCD4EAD0188CA4C4AD0A5EF0D2A9FC2F8ADC15 (U3CProcessU3Ed__4_t71016A10790CE995349F35F697F784B6C726E051 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void EnemyControl/<Process>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CProcessU3Ed__4_System_IDisposable_Dispose_m382FC3C37C2241AC4E64B8D0EC2C821F916C3DE2 (U3CProcessU3Ed__4_t71016A10790CE995349F35F697F784B6C726E051 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean EnemyControl/<Process>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CProcessU3Ed__4_MoveNext_m3A08B74C2B6D96C327D949D051A8EA8D5B423DDC (U3CProcessU3Ed__4_t71016A10790CE995349F35F697F784B6C726E051 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EnemyControl_t8354619B7C2514F856067E693DC1914D07EE53D9 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		EnemyControl_t8354619B7C2514F856067E693DC1914D07EE53D9 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0048;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_001e:
	{
		// yield return new WaitForSeconds(controlGame.Levels[Statics.CurrentLevel].TempSpaw);
		EnemyControl_t8354619B7C2514F856067E693DC1914D07EE53D9 * L_4 = V_1;
		NullCheck(L_4);
		ControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96 * L_5 = L_4->get_controlGame_4();
		NullCheck(L_5);
		LevelU5BU5D_t10F32731C74504D66804828AC533B31C3D098D5B* L_6 = L_5->get_Levels_5();
		IL2CPP_RUNTIME_CLASS_INIT(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		int32_t L_7 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_CurrentLevel_12();
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Level_t0F1BB2DCE2C7368CA4FEAE26F672ADB4C35C7505 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		float L_10 = L_9->get_TempSpaw_4();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_11 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_11, L_10, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_11);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0048:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if(GameObject.FindGameObjectsWithTag("Enemy").Length < controlGame.Levels[Statics.CurrentLevel].EnemyQty)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_12;
		L_12 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, /*hidden argument*/NULL);
		NullCheck(L_12);
		EnemyControl_t8354619B7C2514F856067E693DC1914D07EE53D9 * L_13 = V_1;
		NullCheck(L_13);
		ControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96 * L_14 = L_13->get_controlGame_4();
		NullCheck(L_14);
		LevelU5BU5D_t10F32731C74504D66804828AC533B31C3D098D5B* L_15 = L_14->get_Levels_5();
		IL2CPP_RUNTIME_CLASS_INIT(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		int32_t L_16 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_CurrentLevel_12();
		NullCheck(L_15);
		int32_t L_17 = L_16;
		Level_t0F1BB2DCE2C7368CA4FEAE26F672ADB4C35C7505 * L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		int32_t L_19 = L_18->get_EnemyQty_1();
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))) >= ((int32_t)L_19)))
		{
			goto IL_0079;
		}
	}
	{
		// EnemyCreate();
		EnemyControl_t8354619B7C2514F856067E693DC1914D07EE53D9 * L_20 = V_1;
		NullCheck(L_20);
		EnemyControl_EnemyCreate_m1DBC2B3B2C19C6C6D410EAB1360BB814DD12FD3E(L_20, /*hidden argument*/NULL);
	}

IL_0079:
	{
		// if (Statics.EnemiesDead >= controlGame.Levels[Statics.CurrentLevel].QtyForBoss)
		IL2CPP_RUNTIME_CLASS_INIT(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		int32_t L_21 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_EnemiesDead_15();
		EnemyControl_t8354619B7C2514F856067E693DC1914D07EE53D9 * L_22 = V_1;
		NullCheck(L_22);
		ControlGame_t311D836B3FE34B0182B188639EC992A3B193DC96 * L_23 = L_22->get_controlGame_4();
		NullCheck(L_23);
		LevelU5BU5D_t10F32731C74504D66804828AC533B31C3D098D5B* L_24 = L_23->get_Levels_5();
		int32_t L_25 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_CurrentLevel_12();
		NullCheck(L_24);
		int32_t L_26 = L_25;
		Level_t0F1BB2DCE2C7368CA4FEAE26F672ADB4C35C7505 * L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_27);
		int32_t L_28 = L_27->get_QtyForBoss_2();
		if ((((int32_t)L_21) < ((int32_t)L_28)))
		{
			goto IL_001e;
		}
	}
	{
		// StartCoroutine(CallBoss());
		EnemyControl_t8354619B7C2514F856067E693DC1914D07EE53D9 * L_29 = V_1;
		EnemyControl_t8354619B7C2514F856067E693DC1914D07EE53D9 * L_30 = V_1;
		NullCheck(L_30);
		RuntimeObject* L_31;
		L_31 = EnemyControl_CallBoss_mEE1F75478CABCE55BC6A16FA00D0F843E7A58101(L_30, /*hidden argument*/NULL);
		NullCheck(L_29);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_32;
		L_32 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_29, L_31, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object EnemyControl/<Process>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CProcessU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m277414C234EE05878133959D21839B5949AC295B (U3CProcessU3Ed__4_t71016A10790CE995349F35F697F784B6C726E051 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void EnemyControl/<Process>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CProcessU3Ed__4_System_Collections_IEnumerator_Reset_mE513AF299BB9BF436B27408FF4C0558A73F4676D (U3CProcessU3Ed__4_t71016A10790CE995349F35F697F784B6C726E051 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CProcessU3Ed__4_System_Collections_IEnumerator_Reset_mE513AF299BB9BF436B27408FF4C0558A73F4676D_RuntimeMethod_var)));
	}
}
// System.Object EnemyControl/<Process>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CProcessU3Ed__4_System_Collections_IEnumerator_get_Current_m158EF3608628631AC8F9A0A6CE2568AEB6566996 (U3CProcessU3Ed__4_t71016A10790CE995349F35F697F784B6C726E051 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Explosion/<Explode>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExplodeU3Ed__3__ctor_mA6402CE95E7EDCBD469BF9A8CE6EE0321AC1C77F (U3CExplodeU3Ed__3_tD50D1FAB07D31C87001D70FBED9046F4B147664D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Explosion/<Explode>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExplodeU3Ed__3_System_IDisposable_Dispose_m6323FDA8CD6A90728B774930FBE5BE77024148E8 (U3CExplodeU3Ed__3_tD50D1FAB07D31C87001D70FBED9046F4B147664D * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Explosion/<Explode>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CExplodeU3Ed__3_MoveNext_m7FF575367596C970A277CCA7BB7B3D994F32DADC (U3CExplodeU3Ed__3_tD50D1FAB07D31C87001D70FBED9046F4B147664D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Explosion_t03ACA9CD2F46E4913DC45A3EA50B165F4662DCED * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Explosion_t03ACA9CD2F46E4913DC45A3EA50B165F4662DCED * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0058;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for(int i = 0; i <= Sprites.Length - 1; i++)
		__this->set_U3CiU3E5__2_3(0);
		goto IL_006f;
	}

IL_0027:
	{
		// image.sprite = Sprites[i];
		Explosion_t03ACA9CD2F46E4913DC45A3EA50B165F4662DCED * L_4 = V_1;
		NullCheck(L_4);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_5 = L_4->get_image_5();
		Explosion_t03ACA9CD2F46E4913DC45A3EA50B165F4662DCED * L_6 = V_1;
		NullCheck(L_6);
		SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* L_7 = L_6->get_Sprites_4();
		int32_t L_8 = __this->get_U3CiU3E5__2_3();
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_5);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_5, L_10, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_11 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_11, (0.100000001f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_11);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0058:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for(int i = 0; i <= Sprites.Length - 1; i++)
		int32_t L_12 = __this->get_U3CiU3E5__2_3();
		V_2 = L_12;
		int32_t L_13 = V_2;
		__this->set_U3CiU3E5__2_3(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)));
	}

IL_006f:
	{
		// for(int i = 0; i <= Sprites.Length - 1; i++)
		int32_t L_14 = __this->get_U3CiU3E5__2_3();
		Explosion_t03ACA9CD2F46E4913DC45A3EA50B165F4662DCED * L_15 = V_1;
		NullCheck(L_15);
		SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* L_16 = L_15->get_Sprites_4();
		NullCheck(L_16);
		if ((((int32_t)L_14) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))), (int32_t)1)))))
		{
			goto IL_0027;
		}
	}
	{
		// Destroy(gameObject);
		Explosion_t03ACA9CD2F46E4913DC45A3EA50B165F4662DCED * L_17 = V_1;
		NullCheck(L_17);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18;
		L_18 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_18, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Explosion/<Explode>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CExplodeU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m86DF7C5A40A55D07317D9A2E9F52DC0BCB4C7D02 (U3CExplodeU3Ed__3_tD50D1FAB07D31C87001D70FBED9046F4B147664D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Explosion/<Explode>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExplodeU3Ed__3_System_Collections_IEnumerator_Reset_m487EB8D5E237996B6DEF819E4290C05128D890D7 (U3CExplodeU3Ed__3_tD50D1FAB07D31C87001D70FBED9046F4B147664D * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CExplodeU3Ed__3_System_Collections_IEnumerator_Reset_m487EB8D5E237996B6DEF819E4290C05128D890D7_RuntimeMethod_var)));
	}
}
// System.Object Explosion/<Explode>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CExplodeU3Ed__3_System_Collections_IEnumerator_get_Current_mFD18D2F6818A63E397EFE2758F218DABF2B2F2CB (U3CExplodeU3Ed__3_tD50D1FAB07D31C87001D70FBED9046F4B147664D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Ghost/<Follow>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFollowU3Ed__11__ctor_m7805848F3BC1DC52838781609922C538DA75957E (U3CFollowU3Ed__11_t3EDBCEC7FC810EB2FF4832FC742FD1686C45A198 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Ghost/<Follow>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFollowU3Ed__11_System_IDisposable_Dispose_mB63C57DF964D3EB9140F74C60FFE7D3C7BFB0133 (U3CFollowU3Ed__11_t3EDBCEC7FC810EB2FF4832FC742FD1686C45A198 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Ghost/<Follow>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFollowU3Ed__11_MoveNext_m3C47A16EC27851788D6F23C90E926EAB65B2C0E9 (U3CFollowU3Ed__11_t3EDBCEC7FC810EB2FF4832FC742FD1686C45A198 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_001e:
	{
		// yield return new WaitForSeconds(delayToFollow);
		Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7 * L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->get_delayToFollow_4();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_6 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_6, L_5, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0038:
	{
		__this->set_U3CU3E1__state_0((-1));
		// lastPosition++;
		Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7 * L_7 = V_1;
		Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7 * L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_lastPosition_10();
		NullCheck(L_7);
		L_7->set_lastPosition_10(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)));
		// if(position.Count - lastPosition > 10)
		Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7 * L_10 = V_1;
		NullCheck(L_10);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_11 = L_10->get_position_7();
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_inline(L_11, /*hidden argument*/List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var);
		Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7 * L_13 = V_1;
		NullCheck(L_13);
		int32_t L_14 = L_13->get_lastPosition_10();
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)L_14))) <= ((int32_t)((int32_t)10))))
		{
			goto IL_0070;
		}
	}
	{
		// delayToFollow = 0.08f;
		Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7 * L_15 = V_1;
		NullCheck(L_15);
		L_15->set_delayToFollow_4((0.0799999982f));
		// }
		goto IL_0090;
	}

IL_0070:
	{
		// else if(position.Count-lastPosition < 5)
		Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7 * L_16 = V_1;
		NullCheck(L_16);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_17 = L_16->get_position_7();
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_inline(L_17, /*hidden argument*/List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var);
		Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7 * L_19 = V_1;
		NullCheck(L_19);
		int32_t L_20 = L_19->get_lastPosition_10();
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)L_20))) >= ((int32_t)5)))
		{
			goto IL_0090;
		}
	}
	{
		// delayToFollow = 0.12f;
		Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7 * L_21 = V_1;
		NullCheck(L_21);
		L_21->set_delayToFollow_4((0.119999997f));
	}

IL_0090:
	{
		// gameObject.transform.position = Vector3.Lerp(gameObject.transform.position, position[lastPosition]+positionOffset, 60);
		Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7 * L_22 = V_1;
		NullCheck(L_22);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_23, /*hidden argument*/NULL);
		Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7 * L_25 = V_1;
		NullCheck(L_25);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26;
		L_26 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
		L_27 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_27, /*hidden argument*/NULL);
		Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7 * L_29 = V_1;
		NullCheck(L_29);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_30 = L_29->get_position_7();
		Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7 * L_31 = V_1;
		NullCheck(L_31);
		int32_t L_32 = L_31->get_lastPosition_10();
		NullCheck(L_30);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline(L_30, L_32, /*hidden argument*/List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7 * L_34 = V_1;
		NullCheck(L_34);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35 = L_34->get_positionOffset_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_33, L_35, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		L_37 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_28, L_36, (60.0f), /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_24, L_37, /*hidden argument*/NULL);
		// gameObject.transform.eulerAngles = Vector3.Lerp(gameObject.transform.position, rotation[lastPosition], 60);
		Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7 * L_38 = V_1;
		NullCheck(L_38);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39;
		L_39 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_38, /*hidden argument*/NULL);
		NullCheck(L_39);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40;
		L_40 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_39, /*hidden argument*/NULL);
		Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7 * L_41 = V_1;
		NullCheck(L_41);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_42;
		L_42 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_41, /*hidden argument*/NULL);
		NullCheck(L_42);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_43;
		L_43 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_42, /*hidden argument*/NULL);
		NullCheck(L_43);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44;
		L_44 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_43, /*hidden argument*/NULL);
		Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7 * L_45 = V_1;
		NullCheck(L_45);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_46 = L_45->get_rotation_8();
		Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7 * L_47 = V_1;
		NullCheck(L_47);
		int32_t L_48 = L_47->get_lastPosition_10();
		NullCheck(L_46);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49;
		L_49 = List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_inline(L_46, L_48, /*hidden argument*/List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50;
		L_50 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_44, L_49, (60.0f), /*hidden argument*/NULL);
		NullCheck(L_40);
		Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E(L_40, L_50, /*hidden argument*/NULL);
		// while (true)
		goto IL_001e;
	}
}
// System.Object Ghost/<Follow>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFollowU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m887D86982594ACE67EC63BE2B4DB1427A48AB1C8 (U3CFollowU3Ed__11_t3EDBCEC7FC810EB2FF4832FC742FD1686C45A198 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Ghost/<Follow>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFollowU3Ed__11_System_Collections_IEnumerator_Reset_m93ACE7913B4827ECA354929855F5AFC575B7AC5A (U3CFollowU3Ed__11_t3EDBCEC7FC810EB2FF4832FC742FD1686C45A198 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFollowU3Ed__11_System_Collections_IEnumerator_Reset_m93ACE7913B4827ECA354929855F5AFC575B7AC5A_RuntimeMethod_var)));
	}
}
// System.Object Ghost/<Follow>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFollowU3Ed__11_System_Collections_IEnumerator_get_Current_m11F34447397491A560DBDBC897F32FC3DC16AEE3 (U3CFollowU3Ed__11_t3EDBCEC7FC810EB2FF4832FC742FD1686C45A198 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Ghost/<RecordPosition>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRecordPositionU3Ed__10__ctor_mC784134FC2E9ED509BF63AEE56ADE36355208245 (U3CRecordPositionU3Ed__10_t55110E01AB1FCDF69BB01B4EA77745342103066D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Ghost/<RecordPosition>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRecordPositionU3Ed__10_System_IDisposable_Dispose_mAEE6D58607F7D29B5511117773CF71F7FA19747E (U3CRecordPositionU3Ed__10_t55110E01AB1FCDF69BB01B4EA77745342103066D * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Ghost/<RecordPosition>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRecordPositionU3Ed__10_MoveNext_mB01CCCDFC01D7ADAEB832436EE6D1BD19E754198 (U3CRecordPositionU3Ed__10_t55110E01AB1FCDF69BB01B4EA77745342103066D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m0281A01E9C859E2B8073312D41BB9005662EF2DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_001e:
	{
		// yield return new WaitForSeconds(recordFrequency);
		Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7 * L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->get_recordFrequency_5();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_6 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_6, L_5, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0038:
	{
		__this->set_U3CU3E1__state_0((-1));
		// position.Add(Statics.Player.position);
		Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7 * L_7 = V_1;
		NullCheck(L_7);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_8 = L_7->get_position_7();
		IL2CPP_RUNTIME_CLASS_INIT(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_Player_13();
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_8, L_10, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		// rotation.Add(Statics.Player.eulerAngles);
		Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7 * L_11 = V_1;
		NullCheck(L_11);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_12 = L_11->get_rotation_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13 = ((Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_StaticFields*)il2cpp_codegen_static_fields_for(Statics_tDC4EF1B995BECF7C9769258CE855C4929B511CF1_il2cpp_TypeInfo_var))->get_Player_13();
		NullCheck(L_13);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_12, L_14, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		// if (position.Count > 50)
		Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7 * L_15 = V_1;
		NullCheck(L_15);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_16 = L_15->get_position_7();
		NullCheck(L_16);
		int32_t L_17;
		L_17 = List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_inline(L_16, /*hidden argument*/List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var);
		if ((((int32_t)L_17) <= ((int32_t)((int32_t)50))))
		{
			goto IL_001e;
		}
	}
	{
		// position.RemoveAt(0);
		Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7 * L_18 = V_1;
		NullCheck(L_18);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_19 = L_18->get_position_7();
		NullCheck(L_19);
		List_1_RemoveAt_m0281A01E9C859E2B8073312D41BB9005662EF2DA(L_19, 0, /*hidden argument*/List_1_RemoveAt_m0281A01E9C859E2B8073312D41BB9005662EF2DA_RuntimeMethod_var);
		// rotation.RemoveAt(0);
		Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7 * L_20 = V_1;
		NullCheck(L_20);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_21 = L_20->get_rotation_8();
		NullCheck(L_21);
		List_1_RemoveAt_m0281A01E9C859E2B8073312D41BB9005662EF2DA(L_21, 0, /*hidden argument*/List_1_RemoveAt_m0281A01E9C859E2B8073312D41BB9005662EF2DA_RuntimeMethod_var);
		// lastPosition--;
		Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7 * L_22 = V_1;
		Ghost_tCE1B108E8E96ABC4062937AF39FD7E4D7B05A9C7 * L_23 = V_1;
		NullCheck(L_23);
		int32_t L_24 = L_23->get_lastPosition_10();
		NullCheck(L_22);
		L_22->set_lastPosition_10(((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1)));
		// while (true)
		goto IL_001e;
	}
}
// System.Object Ghost/<RecordPosition>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRecordPositionU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m82F2836051E7D8DD93660EEA35C3C5A4EBE3EC6A (U3CRecordPositionU3Ed__10_t55110E01AB1FCDF69BB01B4EA77745342103066D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Ghost/<RecordPosition>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRecordPositionU3Ed__10_System_Collections_IEnumerator_Reset_m5BA0285F099CBD83148557FBD9C0F0A4D007B975 (U3CRecordPositionU3Ed__10_t55110E01AB1FCDF69BB01B4EA77745342103066D * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRecordPositionU3Ed__10_System_Collections_IEnumerator_Reset_m5BA0285F099CBD83148557FBD9C0F0A4D007B975_RuntimeMethod_var)));
	}
}
// System.Object Ghost/<RecordPosition>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRecordPositionU3Ed__10_System_Collections_IEnumerator_get_Current_mCF9FCAD1D1FF8128B56F63439A2854E4B1B1C642 (U3CRecordPositionU3Ed__10_t55110E01AB1FCDF69BB01B4EA77745342103066D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline (InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * __this, const RuntimeMethod* method)
{
	{
		// return m_Text;
		String_t* L_0 = __this->get_m_Text_38();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___b1;
		float L_5 = L_4.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_x_2();
		float L_8 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___a0;
		float L_10 = L_9.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___b1;
		float L_12 = L_11.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___a0;
		float L_14 = L_13.get_y_3();
		float L_15 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___a0;
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___b1;
		float L_19 = L_18.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___a0;
		float L_21 = L_20.get_z_4();
		float L_22 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)L_8)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), ((float)il2cpp_codegen_add((float)L_17, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)), (float)L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_gshared_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_gshared_inline (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, int32_t ___index0, const RuntimeMethod* method)
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
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_2 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)__this->get__items_1();
		int32_t L_3 = ___index0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)L_2, (int32_t)L_3);
		return (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_4;
	}
}

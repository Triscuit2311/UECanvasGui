#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x92AD (0x979D - 0x4F0)
// AnimBlueprintGeneratedClass ANIMBP_Player_FP_Master.ANIMBP_Player_FP_Master_C
class UANIMBP_Player_FP_Master_C : public URoNAnimInstance_PlayerFP
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_18;                       // 0x4F8(0x108)(None)
	struct FAnimNode_LazySpringBone              AnimGraphNode_LazySpringBone;                      // 0x600(0x1B8)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_17;                       // 0x7B8(0x108)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_11;                   // 0x8C0(0x158)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_6;             // 0xA18(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_16;                       // 0xA38(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_15;                       // 0xB40(0x108)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_24;                  // 0xC48(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_72;                   // 0xCE8(0x80)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_14;                       // 0xD68(0x108)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_5;             // 0xE70(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_13;                       // 0xE90(0x108)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_4;             // 0xF98(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_6;             // 0xFB8(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_5;             // 0xFD8(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_12;                       // 0xFF8(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_11;                       // 0x1100(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_10;                       // 0x1208(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_9;                        // 0x1310(0x108)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_8;                  // 0x1418(0xC0)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_4;                   // 0x14D8(0xB0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_71;                   // 0x1588(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_70;                   // 0x1608(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_69;                   // 0x1688(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_68;                   // 0x1708(0x80)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_4;             // 0x1788(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_8;                        // 0x17A8(0x108)(None)
	struct FAnimNode_ModifyCurve                 AnimGraphNode_ModifyCurve_1;                       // 0x18B0(0x58)(None)
	struct FAnimNode_ModifyCurve                 AnimGraphNode_ModifyCurve;                         // 0x1908(0x58)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_7;                  // 0x1960(0xC0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_67;                   // 0x1A20(0x80)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_7;                        // 0x1AA0(0x108)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_10;                   // 0x1BA8(0x158)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_19;                    // 0x1D00(0x28)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_23;                  // 0x1D28(0xA0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_18;                    // 0x1DC8(0x28)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_6;                  // 0x1DF0(0xC0)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_6;                        // 0x1EB0(0x108)(None)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_1;                  // 0x1FB8(0x1D8)(ContainsInstancedReference)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_4;                              // 0x2190(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_3;                              // 0x21D8(0x48)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x2220(0xE8)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_19;                    // 0x2308(0xC8)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_5;                  // 0x23D0(0xC0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_17;                    // 0x2490(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_16;                    // 0x24B8(0x28)(None)
	struct FAnimNode_PivotBone                   AnimGraphNode_PivotBone_4;                         // 0x24E0(0x100)(None)
	struct FAnimNode_PivotBone                   AnimGraphNode_PivotBone_3;                         // 0x25E0(0x100)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_9;                    // 0x26E0(0x158)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_66;                   // 0x2838(0x80)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_18;                    // 0x28B8(0xC8)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_22;                  // 0x2980(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_65;                   // 0x2A20(0x80)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_2;                              // 0x2AA0(0x48)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3;             // 0x2AE8(0x20)(None)
	struct FAnimNode_PivotBone                   AnimGraphNode_PivotBone_2;                         // 0x2B08(0x100)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_5;                        // 0x2C08(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_4;                        // 0x2D10(0x108)(None)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh;                    // 0x2E18(0x1D8)(ContainsInstancedReference)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_4;                  // 0x2FF0(0xC0)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3;             // 0x30B0(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3;                        // 0x30D0(0x108)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;             // 0x31D8(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;             // 0x31F8(0x20)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_30;                 // 0x3218(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_29;                 // 0x3240(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_28;                 // 0x3268(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_27;                 // 0x3290(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_26;                 // 0x32B8(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_64;                   // 0x32E0(0x80)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_15;                    // 0x3360(0x28)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_17;                    // 0x3388(0xC8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_18;                      // 0x3450(0x30)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_14;                    // 0x3480(0x28)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_17;                      // 0x34A8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_63;                   // 0x34D8(0x80)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_13;                    // 0x3558(0x28)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_16;                    // 0x3580(0xC8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_16;                      // 0x3648(0x30)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_12;                    // 0x3678(0x28)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_15;                      // 0x36A0(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_3;                      // 0x36D0(0xB0)(None)
	struct FAnimNode_PivotBone                   AnimGraphNode_PivotBone_1;                         // 0x3780(0x100)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_3;                   // 0x3880(0xB0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_62;                   // 0x3930(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_61;                   // 0x39B0(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_60;                   // 0x3A30(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_59;                   // 0x3AB0(0x80)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_8;                    // 0x3B30(0x158)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_2;                   // 0x3C88(0xB0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_58;                   // 0x3D38(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_57;                   // 0x3DB8(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_56;                   // 0x3E38(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_55;                   // 0x3EB8(0x80)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_7;                    // 0x3F38(0x158)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_1;                   // 0x4090(0xB0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_54;                   // 0x4140(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_53;                   // 0x41C0(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_52;                   // 0x4240(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_51;                   // 0x42C0(0x80)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_6;                    // 0x4340(0x158)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_50;                   // 0x4498(0x80)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum;                     // 0x4518(0xB0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_49;                   // 0x45C8(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_48;                   // 0x4648(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_47;                   // 0x46C8(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_46;                   // 0x4748(0x80)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_5;                    // 0x47C8(0x158)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_45;                   // 0x4920(0x80)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0x49A0(0x108)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_15;                    // 0x4AA8(0xC8)(None)
	struct FAnimNode_PivotBone                   AnimGraphNode_PivotBone;                           // 0x4B70(0x100)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_14;                    // 0x4C70(0xC8)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x4D38(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x4D58(0x20)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_25;                 // 0x4D78(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_24;                 // 0x4DA0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_23;                 // 0x4DC8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_22;                 // 0x4DF0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_21;                 // 0x4E18(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_20;                 // 0x4E40(0x28)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_21;                  // 0x4E68(0xA0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_20;                  // 0x4F08(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_44;                   // 0x4FA8(0x80)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_19;                  // 0x5028(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_43;                   // 0x50C8(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_42;                   // 0x5148(0x80)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_18;                  // 0x51C8(0xA0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_17;                  // 0x5268(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_41;                   // 0x5308(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_40;                   // 0x5388(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_39;                   // 0x5408(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_38;                   // 0x5488(0x80)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_13;                    // 0x5508(0xC8)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_37;                   // 0x55D0(0x80)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_16;                  // 0x5650(0xA0)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_14;                      // 0x56F0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_36;                   // 0x5720(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_35;                   // 0x57A0(0x80)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_15;                  // 0x5820(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_34;                   // 0x58C0(0x80)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_14;                  // 0x5940(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_33;                   // 0x59E0(0x80)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_13;                  // 0x5A60(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_32;                   // 0x5B00(0x80)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_12;                  // 0x5B80(0xA0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_11;                  // 0x5C20(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_31;                   // 0x5CC0(0x80)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_10;                  // 0x5D40(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_30;                   // 0x5DE0(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_29;                   // 0x5E60(0x80)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_12;                    // 0x5EE0(0xC8)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_28;                   // 0x5FA8(0x80)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_3;                  // 0x6028(0xC0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_27;                   // 0x60E8(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_26;                   // 0x6168(0x80)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_11;                    // 0x61E8(0xC8)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_9;                   // 0x62B0(0xA0)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_13;                      // 0x6350(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_25;                   // 0x6380(0x80)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_8;                   // 0x6400(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_24;                   // 0x64A0(0x80)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_7;                   // 0x6520(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_23;                   // 0x65C0(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_22;                   // 0x6640(0x80)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_6;                   // 0x66C0(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_21;                   // 0x6760(0x80)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_10;                    // 0x67E0(0xC8)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_5;                   // 0x68A8(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_20;                   // 0x6948(0x80)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_2;                  // 0x69C8(0xC0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_19;                   // 0x6A88(0x80)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_9;                     // 0x6B08(0xC8)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_18;                   // 0x6BD0(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_12;                      // 0x6C50(0x30)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_11;                    // 0x6C80(0x28)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_11;                      // 0x6CA8(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_2;                      // 0x6CD8(0xB0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_4;                    // 0x6D88(0x158)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_4;                   // 0x6EE0(0xA0)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x6F80(0x20)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_1;                  // 0x6FA0(0xC0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_17;                   // 0x7060(0x80)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x70E0(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_3;                    // 0x7128(0x158)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_19;                 // 0x7280(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_18;                 // 0x72A8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_17;                 // 0x72D0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_16;                 // 0x72F8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_15;                 // 0x7320(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_14;                 // 0x7348(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_10;                    // 0x7370(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_16;                   // 0x7398(0x80)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_8;                     // 0x7418(0xC8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_10;                      // 0x74E0(0x30)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_9;                     // 0x7510(0x28)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_9;                       // 0x7538(0x30)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_8;                     // 0x7568(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_15;                   // 0x7590(0x80)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_7;                     // 0x7610(0xC8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_8;                       // 0x76D8(0x30)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_7;                     // 0x7708(0x28)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_7;                       // 0x7730(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_1;                      // 0x7760(0xB0)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x7810(0xC0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_14;                   // 0x78D0(0x80)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_6;                     // 0x7950(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_5;                     // 0x7978(0x28)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_2;                    // 0x79A0(0x158)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_4;                     // 0x7AF8(0x28)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x7B20(0x48)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x7B68(0x108)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0x7C70(0x158)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x7DC8(0x108)(None)
	struct FAnimNode_LegIK                       AnimGraphNode_LegIK_1;                             // 0x7ED0(0xF8)(None)
	struct FAnimNode_LegIK                       AnimGraphNode_LegIK;                               // 0x7FC8(0xF8)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_13;                 // 0x80C0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_12;                 // 0x80E8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_11;                 // 0x8110(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_10;                 // 0x8138(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_9;                  // 0x8160(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_8;                  // 0x8188(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_7;                  // 0x81B0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6;                  // 0x81D8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5;                  // 0x8200(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0x8228(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x8250(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x8278(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x82A0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x82C8(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_13;                   // 0x82F0(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_12;                   // 0x8370(0x80)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_6;                     // 0x83F0(0xC8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_6;                       // 0x84B8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_11;                   // 0x84E8(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_10;                   // 0x8568(0x80)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_5;                     // 0x85E8(0xC8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_5;                       // 0x86B0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_9;                    // 0x86E0(0x80)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_4;                     // 0x8760(0xC8)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_8;                    // 0x8828(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_4;                       // 0x88A8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7;                    // 0x88D8(0x80)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_3;                     // 0x8958(0xC8)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0x8A20(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0x8AA0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x8AD0(0x80)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_2;                     // 0x8B50(0xC8)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x8C18(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x8C98(0x30)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_3;                   // 0x8CC8(0xA0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x8D68(0xA0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x8E08(0xA0)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_1;                     // 0x8EA8(0xC8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_3;                     // 0x8F70(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x8F98(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x8FC0(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x8FE8(0x80)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x9068(0x28)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x9090(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x90C0(0x80)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x9140(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x91E0(0x80)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive;                       // 0x9260(0xC8)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x9328(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x93A8(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x93D8(0xB0)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x9488(0x20)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x94A8(0x158)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x9600(0x30)(None)
	struct FRotator                              CameraRotationRate;                                // 0x9630(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsAiming;                                         // 0x963C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsFocusedAiming;                                  // 0x963D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsReloading;                                      // 0x963E(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FDC[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AimInterp;                                         // 0x9640(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsMagCheck;                                       // 0x9644(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FE1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        IdlePlayrate;                                      // 0x9648(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ProcRecoilTrans;                                   // 0x964C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              ProcRecoilRot;                                     // 0x9658(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                               ProcRecoilBuildupTrans;                            // 0x9664(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              ProcRecoilBuildupRot;                              // 0x9670(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                              NewVar_0;                                          // 0x967C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                               StanceAdjustment;                                  // 0x9688(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CapsuleRot;                                        // 0x9694(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        LazyAlpha;                                         // 0x96A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FEC[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABaseWeapon*                           BaseMagWeaponRef;                                  // 0x96A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter*                      PlayerCharRef;                                     // 0x96B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DeltaSeconds;                                      // 0x96B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LegsBroken;                                        // 0x96BC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ArmsBroken;                                        // 0x96BD(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FF6[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AimingLocoStrength;                                // 0x96C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsCrouched;                                       // 0x96C4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bLowReadyPointUp;                                  // 0x96C5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bLowReadyPointDown;                                // 0x96C6(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FF7[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LowReadyPointUpAlpha;                              // 0x96C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LowReadyPointDownAlpha;                            // 0x96CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LeanAlpha;                                         // 0x96D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              FreeLookRot;                                       // 0x96D4(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        StabilizeMovementAlpha;                            // 0x96E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        QuickLeanAmount;                                   // 0x96E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bSightTweakMode;                                   // 0x96E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsJumping;                                        // 0x96E9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsSprinting;                                      // 0x96EA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FF9[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InputUpDown;                                       // 0x96EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bOnLadder;                                         // 0x96F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bInteractionActive;                                // 0x96F1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FFB[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Hand_IK_Left;                                      // 0x96F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Hand_IK_Right;                                     // 0x96F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHasUnderbarrelAttachment;                         // 0x96FC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EWeaponUnderbarrelAnimationType   UnderbarrelType;                                   // 0x96FD(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsMontagePlaying;                                 // 0x96FE(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsGrenade;                                        // 0x96FF(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        ShakeAmount;                                       // 0x9700(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bArrested;                                         // 0x9704(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FFF[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DirBlendTime;                                      // 0x9708(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LeftHandSprintHack;                                // 0x970C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LeftHandWorldVector;                               // 0x9710(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              LeftHandWorldRotator;                              // 0x971C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        LeftHandWorldAlpha;                                // 0x9728(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LeftHandWorldElbowVector;                          // 0x972C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bLeftHandDoorActive;                               // 0x9738(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1003[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LeanHeadSocketLocation;                            // 0x973C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LeanHeadBlendAlpha;                                // 0x9748(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LeanHeadOffset;                                    // 0x974C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Acceleration;                                      // 0x9758(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CameraBobTrans;                                    // 0x9764(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StartMotionWeight;                                 // 0x9770(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StartMotionPlayrate;                               // 0x9774(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               WeaponBobTrans;                                    // 0x9778(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              WeaponBobRot;                                      // 0x9784(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        WeaponBobAlpha;                                    // 0x9790(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WeaponBobTrigger;                                  // 0x9794(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bShouldAllowStopMotion;                            // 0x9795(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bBuildUpSprint;                                    // 0x9796(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1009[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SprintBuildupAlpha;                                // 0x9798(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsHeavyArmor;                                     // 0x979C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UANIMBP_Player_FP_Master_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_TransitionResult_9B9B8E4949800E738A8057AACCE80C9F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_TransitionResult_69820C474C461146AF09CB9F932AF05E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_TransitionResult_C647B5124D3BC1F0986B9C89A7735B03();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_BlendListByBool_4879E363481B92AAA6CF839D5E266A3E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_TransitionResult_5AEF6B914F43E424ED0018B8684103C9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_LegIK_9D86C6C840152FE2654438B16742DE27();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_PivotBone_0F2C7531423F08A2EFF470ADC794D65F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_ModifyBone_F35DCF464D06495E8FE348A5A18017AA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_EFA2BD3C4A9E750AF8ACB2B567317479();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_28A3B75840D68F5C10D9629C5CC2B314();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_AA9E7F2A4F815A859EDA4EB54FF2042E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_7D8DA8C5404A3D71A0CAB29122FFE87F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_8D9943C443F995450BB1A4ADB22947E1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_73515E6144DE43E8470D15B9D749FD68();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_5D402DD9475CBC3A24EC7D937900A972();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_A14D48E84437956CB4051C8FF3C56A13();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_A71EEE8E46659B8C4056FA85962891F9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_B48962E14E382CEA46FE508E07782AD5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_9143EAEA4BD1F968CFBF7EAB9A0656B3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_DFA306FC4D12BC8396D04D8E0987D5D4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_70FFB3C24126F5F67713918CD5C0C103();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_BE818B4C47B04C4553397CBF64EBF3AC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_FD913C124B6441D35EDDB88C8D2D96A0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_F56BB873499859524D5ED98D41068C89();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_ModifyBone_610B23954A30336A6E3CDDB99FD92D11();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_ModifyBone_F0F1AB3B44ABC136370C4483D5742C27();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_PivotBone_63C30D0F4D43094113B7EDBADBAB2789();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_ApplyAdditive_349790E540F2D5630B1D08B7D25D9559();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_BlendListByBool_2D7ED2E84AB7B607144F55B76B40526B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_FE6372914ED28B1627D3278B3FFEEF94();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_ModifyCurve_9B510C0E41D85CD8CF724BA95C09025D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_E1C604A14C466948CF03A9ACF31C1478();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_138D97FE4EAAF51286FD2896F19323F0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_68344E634BF03246D8FB67A01F90FE90();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_18053F7F4CB8A245EE87F292F709DB3B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_ModifyBone_6F5340F8439A8F1CFE90B8BCE2A4A763();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_B4BE951F4756B225FFD9FFA821F3251F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_ModifyBone_2C68C74747C00BEBF89BC1968A5F295F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_LazySpringBone_B7A5610C4C7CAA7B481B35B72E2A0FB4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_PivotBone_E8EFAFCC48AB6228FED73CB8E1251F31();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_PivotBone_3B50CDDA48DA6200013F08A576FF9D32();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_PivotBone_F1AA59BF4FDE779173D954B7DF982CC1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_F1B7D93A48B44936A93CAA90B098DF43();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_F538F67D4C75E34D1FADF4A0AE24DB08();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_B134AE8B448556F818FB6D8E24786CAA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_4A06EE044B1DC8D3848A778C16C3719C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_4A5B5BD5473A54F969979DB4A678D345();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_DE2EB7F543493547B08EF4AFB039DB86();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_A5DBA16D4E86C0EBE4654A94755DB102();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_0E847E114993C3907D893D8597EAF206();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_FB8981C84E946C98EA858E9FAB2D53F6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_4A31759445A4D66E6D5D0CB5D6A01BE6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_ApplyAdditive_8590ECCF4ED3FE9AF3397991B4916D01();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_1DB711494CD4B31E24DE41904CB753E4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_ApplyAdditive_C6A3B600405AD839170095A1153448FA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_TransitionResult_952A147E44BA78DDCE0E91A0A54942F9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_TransitionResult_80E8F6704162A23AA1CEDF9BE04AF51C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_TransitionResult_325908494E3CEDE65F00AA8BB636BE17();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_TransitionResult_07B31A5A4200DA9D44A6458EEC745C25();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_TransitionResult_25CE755A4CFA96F89EBBB4B7219548D0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_TransitionResult_349A7EC140623FA2900499A027BCF8A2();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_ReloadComplete();
	void AnimNotify_PlayShotgunReloadLoop();
	void AnimNotify_ThrowGrenade();
	void AnimNotify_CanThrowGrenade();
	void CustomEvent();
	void BlueprintInitializeAnimation();
	void AnimNotify_C2Detonate();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_TransitionResult_8E2A61AE418060994D0EFB9219CE6189();
	void AnimNotify_FadeIntoBlack();
	void AnimNotify_FadeOutBlack();
	void AnimNotify_EnableNVG();
	void AnimNotify_DisableNVG();
	void AnimNotify_BlackFadeStart();
	void AnimNotify_RamHit();
	void AnimNotify_StartPlayerRoot();
	void AnimNotify_StopPlayerRoot();
	void AnimNotify_DoorjamPlaced();
	void AnimNotify_FinishC2Placement();
	void AnimNotify_EquipDetonator();
	void AnimNotify_StartFullbodyRagdoll();
	void AnimNotify_ToggleRagdoll();
	void AnimNotify_ThrowChemlight();
	void AnimNotify_HideFPMesh();
	void AnimNotify_ShowFPMesh();
	void AnimNotify_EquipLastGun();
	void AnimNotify_ArrestComplete();
	void AnimNotify_DoorKick();
	void AnimNotify_DoorPush();
	void AnimNotify_FreezeAllActions();
	void AnimNotify_UnfreezeAllActions();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_TransitionResult_91D650F7412F908F7C2928B1CD22AC1C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_TransitionResult_485F184E4DA3C23C9D945B9D37FFAFC7();
	void AnimNotify_NVGStartToggling();
	void AnimNotify_NVGStopToggling();
	void AnimNotify_DoorKickBreak();
	void AnimNotify_DoorKickFailure();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_TransitionResult_3F4B7F614320D28678FE498E88D5196C();
	void AnimNotify_FreeComplete();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_A0DF02414EC8C101274F819C63001171();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_BlendListByBool_F387152840205C87E00A44B651507A1A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_436621EA4A0D32FEF38251B53214E60D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_799065574032AAD887AC0F877F3EF280();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_3A88471847B39F1EA325C299C889B0E5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_B2BA99304F1EE0200F71EE95C9CA988B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_22339A3E456E716301145AB93C0594F4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_BlendListByBool_AB91FAF04E5C1C452147B58AB419D193();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Player_FP_Master_AnimGraphNode_SequencePlayer_667B5CE04E4CBD3B28C5CA906EE55A4D();
	void AnimNotify_WeaponBobDisable();
	void AnimNotify_WeaponBobEnable();
	void AnimNotify_AllowStopMotion();
	void AnimNotify_ResetStopMotion();
	void AnimNotify_SprintStarted();
	void AnimNotify_SprintEnded();
	void ExecuteUbergraph_ANIMBP_Player_FP_Master(int32 EntryPoint, class UAnimSequenceBase* CallFunc_GetPlayerAnimation_FP_ReturnValue, class UAnimSequenceBase* CallFunc_GetPlayerAnimation_FP_ReturnValue_1, class UAnimSequenceBase* CallFunc_GetPlayerAnimation_FP_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UAnimSequenceBase* CallFunc_GetPlayerAnimation_FP_ReturnValue_3, class UAnimSequenceBase* CallFunc_GetPlayerAnimation_FP_ReturnValue_4, class UAnimSequenceBase* CallFunc_GetPlayerAnimation_FP_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue, class UAnimSequenceBase* CallFunc_GetPlayerAnimation_FP_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, class UAnimSequenceBase* CallFunc_GetPlayerAnimation_FP_ReturnValue_7, bool CallFunc_BooleanAND_ReturnValue_2, float CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_LessEqual_FloatFloat_ReturnValue, class UAnimSequenceBase* CallFunc_GetPlayerAnimation_FP_ReturnValue_8, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_ClampAngle_ReturnValue, float CallFunc_FClamp_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_FClamp_ReturnValue_1, const struct FRotator& CallFunc_NegateRotator_ReturnValue, float CallFunc_FClamp_ReturnValue_2, class UAnimSequenceBase* CallFunc_GetPlayerAnimation_FP_ReturnValue_9, float CallFunc_Divide_FloatFloat_ReturnValue_1, class UAnimSequenceBase* CallFunc_GetPlayerAnimation_FP_ReturnValue_10, float CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, class UAnimSequenceBase* CallFunc_GetPlayerAnimation_FP_ReturnValue_11, class UAnimSequenceBase* CallFunc_GetPlayerAnimation_FP_ReturnValue_12, const struct FRotator& CallFunc_NegateRotator_ReturnValue_1, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, bool Temp_bool_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_2, float CallFunc_BreakRotator_Roll_2, float CallFunc_BreakRotator_Pitch_2, float CallFunc_BreakRotator_Yaw_2, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_3, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_FClamp_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue_1, float CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_BreakRotator_Roll_3, float CallFunc_BreakRotator_Pitch_3, float CallFunc_BreakRotator_Yaw_3, float CallFunc_ClampAngle_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, float CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue_3, const struct FRotator& CallFunc_NegateRotator_ReturnValue_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue_3, float CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue_4, class UAnimSequenceBase* CallFunc_GetPlayerAnimation_FP_ReturnValue_13, bool CallFunc_LessEqual_FloatFloat_ReturnValue_4, class UAnimSequenceBase* CallFunc_GetPlayerAnimation_FP_ReturnValue_14, class UAnimSequenceBase* CallFunc_GetPlayerAnimation_FP_ReturnValue_15, class UAnimSequenceBase* CallFunc_GetPlayerAnimation_FP_ReturnValue_16, bool CallFunc_NotEqual_FloatFloat_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, class UAnimSequenceBase* CallFunc_GetPlayerAnimation_FP_ReturnValue_17, bool CallFunc_NotEqual_FloatFloat_ReturnValue_1, float CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue_5, bool CallFunc_LessEqual_FloatFloat_ReturnValue_5, float CallFunc_Multiply_FloatFloat_ReturnValue_4, float CallFunc_SelectFloat_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_1, const struct FRotator& CallFunc_Multiply_RotatorFloat_ReturnValue, float CallFunc_BreakRotator_Roll_4, float CallFunc_BreakRotator_Pitch_4, float CallFunc_BreakRotator_Yaw_4, float CallFunc_ClampAngle_ReturnValue_2, const struct FRotator& CallFunc_MakeRotator_ReturnValue_3, const struct FRotator& CallFunc_NegateRotator_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4, float CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue_6, bool CallFunc_LessEqual_FloatFloat_ReturnValue_6, bool CallFunc_EqualEqual_VectorVector_ReturnValue, float CallFunc_Abs_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_5, bool CallFunc_EqualEqual_VectorVector_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue_5, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_NotEqual_VectorVector_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_6, float K2Node_Event_DeltaTimeX, float CallFunc_Multiply_FloatFloat_ReturnValue_7, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class ABaseItem* CallFunc_GetEquippedItem_ReturnValue, bool CallFunc_IsSprinting_ReturnValue, class ABaseWeapon* K2Node_DynamicCast_AsBase_Weapon, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_Multiply_FloatFloat_ReturnValue_8, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_1, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_2, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_2, class ABaseItem* CallFunc_GetEquippedItem_ReturnValue_1, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_2, bool K2Node_DynamicCast_bSuccess_3, class AShotgun* K2Node_DynamicCast_AsShotgun, bool K2Node_DynamicCast_bSuccess_4, class ABaseItem* CallFunc_GetEquippedItem_ReturnValue_2, class ABaseGrenade* K2Node_DynamicCast_AsBase_Grenade, bool K2Node_DynamicCast_bSuccess_5, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_3, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_3, bool K2Node_DynamicCast_bSuccess_6, class ABaseItem* CallFunc_GetEquippedItem_ReturnValue_3, class ABaseGrenade* K2Node_DynamicCast_AsBase_Grenade_1, bool K2Node_DynamicCast_bSuccess_7, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_7, bool CallFunc_BooleanAND_ReturnValue_8, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsMagCheckPlaying_ReturnValue, float CallFunc_FInterpTo_Constant_ReturnValue, float CallFunc_FInterpTo_Constant_ReturnValue_1, bool CallFunc_IsDeadOrUnconscious_ReturnValue, bool CallFunc_IsReloading_ReturnValue, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue, float CallFunc_FInterpTo_ReturnValue, float CallFunc_FInterpTo_ReturnValue_1, float CallFunc_FInterpTo_Constant_ReturnValue_2, float CallFunc_FInterpTo_Constant_ReturnValue_3, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_4, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue_1, bool CallFunc_IsLocallyControlled_ReturnValue_2, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_4, bool K2Node_DynamicCast_bSuccess_8, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_5, bool K2Node_DynamicCast_bSuccess_9, bool CallFunc_IsLocallyControlled_ReturnValue_3, bool CallFunc_IsLocallyControlled_ReturnValue_4, float CallFunc_FInterpTo_ReturnValue_2, float CallFunc_FInterpTo_ReturnValue_3, float CallFunc_FInterpTo_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_4, float CallFunc_FInterpTo_ReturnValue_5, float CallFunc_FInterpTo_ReturnValue_6, float CallFunc_FInterpTo_ReturnValue_7, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_5, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_6, bool K2Node_DynamicCast_bSuccess_10, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_7, bool K2Node_DynamicCast_bSuccess_11, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_8, bool K2Node_DynamicCast_bSuccess_12, class ABaseItem* CallFunc_GetEquippedItem_ReturnValue_4, class ADoorRam* K2Node_DynamicCast_AsDoor_Ram, bool K2Node_DynamicCast_bSuccess_13, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_6, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_9, bool K2Node_DynamicCast_bSuccess_14, class ABaseItem* CallFunc_GetEquippedItem_ReturnValue_5, class ADoorJam* K2Node_DynamicCast_AsDoor_Jam, bool K2Node_DynamicCast_bSuccess_15, float CallFunc_FInterpTo_ReturnValue_8, bool CallFunc_IsFalling_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_7, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_10, bool K2Node_DynamicCast_bSuccess_16, bool CallFunc_BooleanAND_ReturnValue_9, class ABaseItem* CallFunc_GetEquippedItem_ReturnValue_6, class AC2Explosive* K2Node_DynamicCast_AsC2Explosive, bool K2Node_DynamicCast_bSuccess_17, bool CallFunc_IsValid_ReturnValue_1, class UAnimSequenceBase* CallFunc_GetPlayerAnimation_FP_ReturnValue_18, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_8, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_11, bool K2Node_DynamicCast_bSuccess_18, float CallFunc_Multiply_FloatFloat_ReturnValue_9, class ABaseItem* CallFunc_GetEquippedItem_ReturnValue_7, class AC2Explosive* K2Node_DynamicCast_AsC2Explosive_1, bool K2Node_DynamicCast_bSuccess_19, bool CallFunc_IsValid_ReturnValue_2, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_9, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_12, bool K2Node_DynamicCast_bSuccess_20, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_10, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_11, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_13, bool K2Node_DynamicCast_bSuccess_21, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_14, bool K2Node_DynamicCast_bSuccess_22, class ABaseItem* CallFunc_GetEquippedItem_ReturnValue_8, class ABaseItem* CallFunc_GetEquippedItem_ReturnValue_9, class AChemlight* K2Node_DynamicCast_AsChemlight, bool K2Node_DynamicCast_bSuccess_23, class USkeletalMeshComponent* CallFunc_GetItemMesh_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_12, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_15, bool K2Node_DynamicCast_bSuccess_24, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_13, class ABaseItem* CallFunc_GetEquippedItem_ReturnValue_10, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_16, bool K2Node_DynamicCast_bSuccess_25, class USkeletalMeshComponent* CallFunc_GetItemMesh_ReturnValue_1, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_14, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_17, bool K2Node_DynamicCast_bSuccess_26, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_15, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_18, bool K2Node_DynamicCast_bSuccess_27, class ABaseItem* CallFunc_GetInventoryItemOfClass_ReturnValue, class AZipcuffs* K2Node_DynamicCast_AsZipcuffs, bool K2Node_DynamicCast_bSuccess_28, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_16, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_17, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_19, bool K2Node_DynamicCast_bSuccess_29, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_20, bool K2Node_DynamicCast_bSuccess_30, float CallFunc_GetCurveValue_ReturnValue, float CallFunc_SelectFloat_ReturnValue_2, float CallFunc_GetCurveValue_ReturnValue_1, class ABaseItem* CallFunc_GetEquippedItem_ReturnValue_11, class ABaseMagazineWeapon* K2Node_DynamicCast_AsBase_Magazine_Weapon, bool K2Node_DynamicCast_bSuccess_31, class ABaseWeapon* K2Node_DynamicCast_AsBase_Weapon_1, bool K2Node_DynamicCast_bSuccess_32, bool CallFunc_IsValid_ReturnValue_3, enum class EWeaponUnderbarrelAnimationType CallFunc_GetUnderbarrelAnimationType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_5, bool CallFunc_NotEqual_FloatFloat_ReturnValue_2, bool CallFunc_NotEqual_FloatFloat_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_4, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_18, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_21, bool K2Node_DynamicCast_bSuccess_33, bool CallFunc_IsArrested_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_19, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_22, bool K2Node_DynamicCast_bSuccess_34, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_23, bool K2Node_DynamicCast_bSuccess_35, class ABaseItem* CallFunc_GetInventoryItemOfType_ReturnValue, class ABaseItem* CallFunc_GetInventoryItemOfType_ReturnValue_1, class ANightvisionGoggles* K2Node_DynamicCast_AsNightvision_Goggles, bool K2Node_DynamicCast_bSuccess_36, class ANightvisionGoggles* K2Node_DynamicCast_AsNightvision_Goggles_1, bool K2Node_DynamicCast_bSuccess_37, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_20, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_21, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_24, bool K2Node_DynamicCast_bSuccess_38, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_25, bool K2Node_DynamicCast_bSuccess_39, float CallFunc_GetCurveValue_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_6, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_22, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_26, bool K2Node_DynamicCast_bSuccess_40, class UAnimSequenceBase* CallFunc_GetPlayerAnimation_FP_ReturnValue_19, class ABaseItem* CallFunc_GetEquippedItem_ReturnValue_12, class AMultitool* K2Node_DynamicCast_AsMultitool, bool K2Node_DynamicCast_bSuccess_41, class UAnimSequenceBase* CallFunc_GetPlayerAnimation_FP_ReturnValue_20, bool CallFunc_IsValid_ReturnValue_4, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class USkeletalMeshComponent* CallFunc_GetOwningComponent_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, class AReadyOrNotGameMode* CallFunc_GetReadyOrNotGameMode_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, const struct FVector& K2Node_Select_Default, float CallFunc_FInterpTo_ReturnValue_9, float CallFunc_FInterpTo_ReturnValue_10, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_2, float CallFunc_GetMaxSpeed_ReturnValue, const struct FVector& CallFunc_GetCurrentAcceleration_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_10, float CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue_7, float CallFunc_SelectFloat_ReturnValue_3, bool CallFunc_Less_FloatFloat_ReturnValue_2, class UAnimSequenceBase* CallFunc_GetPlayerAnimation_FP_ReturnValue_21, bool CallFunc_IsAnyMontagePlaying_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_7, float CallFunc_FInterpTo_ReturnValue_11, bool CallFunc_BooleanOR_ReturnValue_7, float CallFunc_FInterpTo_ReturnValue_12, float CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue_8, bool CallFunc_Less_FloatFloat_ReturnValue_3, float CallFunc_FInterpTo_ReturnValue_13, class UAnimSequenceBase* CallFunc_GetPlayerAnimation_FP_ReturnValue_22, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_FClamp_ReturnValue_4, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_23, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_27, bool K2Node_DynamicCast_bSuccess_42, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_24, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_28, bool K2Node_DynamicCast_bSuccess_43, class AArmor_Heavy_V2_C* K2Node_DynamicCast_AsArmor_Heavy_V2, bool K2Node_DynamicCast_bSuccess_44);
};

}



﻿#pragma once

/**
 * Name: ron
 * Version: 25346
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * AnimBlueprintGeneratedClass ANIMBP_AI_MoveStyle_Base.ANIMBP_AI_MoveStyle_Base_C
	 * Size -> 0x8A94 (FullSize[0xA1F4] - InheritedSize[0x1760])
	 */
	class UANIMBP_AI_MoveStyle_Base_C : public URoNAnimInstance_HumanBase
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x1760(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_49;                          // 0x1768(0x0028)
		struct FAnimNode_ConvertLocalToComponentSpace                AnimGraphNode_LocalToComponentSpace_7;                   // 0x1790(0x0020)
		struct FAnimNode_LegIK                                       AnimGraphNode_LegIK_10;                                  // 0x17B0(0x00F8)
		struct FAnimNode_LegIK                                       AnimGraphNode_LegIK_9;                                   // 0x18A8(0x00F8)
		struct FAnimNode_LegIK                                       AnimGraphNode_LegIK_8;                                   // 0x19A0(0x00F8)
		struct FAnimNode_ConvertComponentToLocalSpace                AnimGraphNode_ComponentToLocalSpace_7;                   // 0x1A98(0x0020)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_48;                          // 0x1AB8(0x0028)
		struct FAnimNode_Slot                                        AnimGraphNode_Slot_16;                                   // 0x1AE0(0x0048)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool_20;                        // 0x1B28(0x00A0)
		struct FAnimNode_PoseSnapshot                                AnimGraphNode_PoseSnapshot_4;                            // 0x1BC8(0x0090)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool_19;                        // 0x1C58(0x00A0)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_22;                         // 0x1CF8(0x0080)
		struct FAnimNode_PoseSnapshot                                AnimGraphNode_PoseSnapshot_3;                            // 0x1D78(0x0090)
		struct FAnimNode_StateResult                                 AnimGraphNode_StateResult_17;                            // 0x1E08(0x0030)
		struct FAnimNode_StateMachine                                AnimGraphNode_StateMachine_8;                            // 0x1E38(0x00B0)
		struct FAnimNode_Slot                                        AnimGraphNode_Slot_15;                                   // 0x1EE8(0x0048)
		struct FAnimNode_ModifyBone                                  AnimGraphNode_ModifyBone_5;                              // 0x1F30(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace                AnimGraphNode_LocalToComponentSpace_6;                   // 0x2038(0x0020)
		struct FAnimNode_ModifyBone                                  AnimGraphNode_ModifyBone_4;                              // 0x2058(0x0108)
		struct FAnimNode_ConvertComponentToLocalSpace                AnimGraphNode_ComponentToLocalSpace_6;                   // 0x2160(0x0020)
		struct FAnimNode_ModifyBone                                  AnimGraphNode_ModifyBone_3;                              // 0x2180(0x0108)
		struct FAnimNode_ModifyBone                                  AnimGraphNode_ModifyBone_2;                              // 0x2288(0x0108)
		struct FAnimNode_Slot                                        AnimGraphNode_Slot_14;                                   // 0x2390(0x0048)
		struct FAnimNode_Slot                                        AnimGraphNode_Slot_13;                                   // 0x23D8(0x0048)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool_18;                        // 0x2420(0x00A0)
		struct FAnimNode_Slot                                        AnimGraphNode_Slot_12;                                   // 0x24C0(0x0048)
		struct FAnimNode_LayeredBoneBlend                            AnimGraphNode_LayeredBoneBlend_6;                        // 0x2508(0x00C0)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool_17;                        // 0x25C8(0x00A0)
		struct FAnimNode_SaveCachedPose                              AnimGraphNode_SaveCachedPose_18;                         // 0x2668(0x0158)
		struct FAnimNode_Slot                                        AnimGraphNode_Slot_11;                                   // 0x27C0(0x0048)
		struct FAnimNode_LayeredBoneBlend                            AnimGraphNode_LayeredBoneBlend_5;                        // 0x2808(0x00C0)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_47;                          // 0x28C8(0x0028)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_46;                          // 0x28F0(0x0028)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_45;                          // 0x2918(0x0028)
		struct FAnimNode_LayeredBoneBlend                            AnimGraphNode_LayeredBoneBlend_4;                        // 0x2940(0x00C0)
		struct FAnimNode_Slot                                        AnimGraphNode_Slot_10;                                   // 0x2A00(0x0048)
		struct FAnimNode_SaveCachedPose                              AnimGraphNode_SaveCachedPose_17;                         // 0x2A48(0x0158)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_44;                          // 0x2BA0(0x0028)
		struct FAnimNode_ConvertComponentToLocalSpace                AnimGraphNode_ComponentToLocalSpace_5;                   // 0x2BC8(0x0020)
		struct FAnimNode_TransitionResult                            AnimGraphNode_TransitionResult_19;                       // 0x2BE8(0x0028)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_43;                          // 0x2C10(0x0028)
		struct FAnimNode_StateResult                                 AnimGraphNode_StateResult_16;                            // 0x2C38(0x0030)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_21;                         // 0x2C68(0x0080)
		struct FAnimNode_StateResult                                 AnimGraphNode_StateResult_15;                            // 0x2CE8(0x0030)
		struct FAnimNode_StateMachine                                AnimGraphNode_StateMachine_7;                            // 0x2D18(0x00B0)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_42;                          // 0x2DC8(0x0028)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_41;                          // 0x2DF0(0x0028)
		struct FAnimNode_LegIK                                       AnimGraphNode_LegIK_7;                                   // 0x2E18(0x00F8)
		struct FAnimNode_ConvertLocalToComponentSpace                AnimGraphNode_LocalToComponentSpace_5;                   // 0x2F10(0x0020)
		struct FAnimNode_SaveCachedPose                              AnimGraphNode_SaveCachedPose_16;                         // 0x2F30(0x0158)
		struct FAnimNode_LegIK                                       AnimGraphNode_LegIK_6;                                   // 0x3088(0x00F8)
		struct FAnimNode_ConvertLocalToComponentSpace                AnimGraphNode_LocalToComponentSpace_4;                   // 0x3180(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace                AnimGraphNode_ComponentToLocalSpace_4;                   // 0x31A0(0x0020)
		struct FAnimNode_LegIK                                       AnimGraphNode_LegIK_5;                                   // 0x31C0(0x00F8)
		struct FAnimNode_LegIK                                       AnimGraphNode_LegIK_4;                                   // 0x32B8(0x00F8)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_40;                          // 0x33B0(0x0028)
		struct FAnimNode_LegIK                                       AnimGraphNode_LegIK_3;                                   // 0x33D8(0x00F8)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool_16;                        // 0x34D0(0x00A0)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_39;                          // 0x3570(0x0028)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool_15;                        // 0x3598(0x00A0)
		struct FAnimNode_SaveCachedPose                              AnimGraphNode_SaveCachedPose_15;                         // 0x3638(0x0158)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool_14;                        // 0x3790(0x00A0)
		struct FAnimNode_PoseDriver                                  AnimGraphNode_PoseDriver_6;                              // 0x3830(0x0168)
		struct FAnimNode_SaveCachedPose                              AnimGraphNode_SaveCachedPose_14;                         // 0x3998(0x0158)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_38;                          // 0x3AF0(0x0028)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_37;                          // 0x3B18(0x0028)
		struct FAnimNode_SaveCachedPose                              AnimGraphNode_SaveCachedPose_13;                         // 0x3B40(0x0158)
		struct FAnimNode_PoseDriver                                  AnimGraphNode_PoseDriver_5;                              // 0x3C98(0x0168)
		struct FAnimNode_PoseSnapshot                                AnimGraphNode_PoseSnapshot_2;                            // 0x3E00(0x0090)
		struct FAnimNode_PoseDriver                                  AnimGraphNode_PoseDriver_4;                              // 0x3E90(0x0168)
		struct FAnimNode_ConvertComponentToLocalSpace                AnimGraphNode_ComponentToLocalSpace_3;                   // 0x3FF8(0x0020)
		struct FAnimNode_PoseDriver                                  AnimGraphNode_PoseDriver_3;                              // 0x4018(0x0168)
		struct FAnimNode_PoseDriver                                  AnimGraphNode_PoseDriver_2;                              // 0x4180(0x0168)
		struct FAnimNode_PoseDriver                                  AnimGraphNode_PoseDriver;                                // 0x42E8(0x0168)
		struct FAnimNode_Slot                                        AnimGraphNode_Slot_9;                                    // 0x4450(0x0048)
		struct FAnimNode_LegIK                                       AnimGraphNode_LegIK_2;                                   // 0x4498(0x00F8)
		struct FAnimNode_LegIK                                       AnimGraphNode_LegIK;                                     // 0x4590(0x00F8)
		struct FAnimNode_ConvertLocalToComponentSpace                AnimGraphNode_LocalToComponentSpace_3;                   // 0x4688(0x0020)
		struct FAnimNode_SaveCachedPose                              AnimGraphNode_SaveCachedPose_12;                         // 0x46A8(0x0158)
		struct FAnimNode_RotationOffsetBlendSpace                    AnimGraphNode_RotationOffsetBlendSpace_7;                // 0x4800(0x0190)
		struct FAnimNode_RotationOffsetBlendSpace                    AnimGraphNode_RotationOffsetBlendSpace_6;                // 0x4990(0x0190)
		struct FAnimNode_ConvertComponentToLocalSpace                AnimGraphNode_ComponentToLocalSpace_2;                   // 0x4B20(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace                AnimGraphNode_LocalToComponentSpace_2;                   // 0x4B40(0x0020)
		struct FAnimNode_SlopeWarping                                AnimGraphNode_SlopeWarping;                              // 0x4B60(0x0228)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool_13;                        // 0x4D88(0x00A0)
		struct FAnimNode_BlendListByEnum                             AnimGraphNode_BlendListByEnum_2;                         // 0x4E28(0x00B0)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_36;                          // 0x4ED8(0x0028)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_35;                          // 0x4F00(0x0028)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_34;                          // 0x4F28(0x0028)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_33;                          // 0x4F50(0x0028)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool_12;                        // 0x4F78(0x00A0)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool_11;                        // 0x5018(0x00A0)
		struct FAnimNode_BlendListByEnum                             AnimGraphNode_BlendListByEnum;                           // 0x50B8(0x00B0)
		struct FAnimNode_SaveCachedPose                              AnimGraphNode_SaveCachedPose_11;                         // 0x5168(0x0158)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_32;                          // 0x52C0(0x0028)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_31;                          // 0x52E8(0x0028)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_20;                         // 0x5310(0x0080)
		struct FAnimNode_ApplyAdditive                               AnimGraphNode_ApplyAdditive;                             // 0x5390(0x00C8)
		struct FAnimNode_ApplyMeshSpaceAdditive                      AnimGraphNode_ApplyMeshSpaceAdditive_2;                  // 0x5458(0x00D0)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_19;                         // 0x5528(0x0080)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_30;                          // 0x55A8(0x0028)
		struct FAnimNode_LayeredBoneBlend                            AnimGraphNode_LayeredBoneBlend_3;                        // 0x55D0(0x00C0)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_18;                         // 0x5690(0x0080)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_29;                          // 0x5710(0x0028)
		struct FAnimNode_SaveCachedPose                              AnimGraphNode_SaveCachedPose_10;                         // 0x5738(0x0158)
		struct FAnimNode_SaveCachedPose                              AnimGraphNode_SaveCachedPose_9;                          // 0x5890(0x0158)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_28;                          // 0x59E8(0x0028)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_27;                          // 0x5A10(0x0028)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_26;                          // 0x5A38(0x0028)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool_10;                        // 0x5A60(0x00A0)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_25;                          // 0x5B00(0x0028)
		struct FAnimNode_ApplyMeshSpaceAdditive                      AnimGraphNode_ApplyMeshSpaceAdditive;                    // 0x5B28(0x00D0)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_24;                          // 0x5BF8(0x0028)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_23;                          // 0x5C20(0x0028)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_22;                          // 0x5C48(0x0028)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_21;                          // 0x5C70(0x0028)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool_9;                         // 0x5C98(0x00A0)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_20;                          // 0x5D38(0x0028)
		struct FAnimNode_LayeredBoneBlend                            AnimGraphNode_LayeredBoneBlend_2;                        // 0x5D60(0x00C0)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_17;                         // 0x5E20(0x0080)
		struct FAnimNode_BlendListByInt                              AnimGraphNode_BlendListByInt_4;                          // 0x5EA0(0x00A0)
		struct FAnimNode_RotationOffsetBlendSpace                    AnimGraphNode_RotationOffsetBlendSpace_5;                // 0x5F40(0x0190)
		struct FAnimNode_RotationOffsetBlendSpace                    AnimGraphNode_RotationOffsetBlendSpace_4;                // 0x60D0(0x0190)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_19;                          // 0x6260(0x0028)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_18;                          // 0x6288(0x0028)
		struct FAnimNode_RotationOffsetBlendSpace                    AnimGraphNode_RotationOffsetBlendSpace_3;                // 0x62B0(0x0190)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_17;                          // 0x6440(0x0028)
		struct FAnimNode_RotationOffsetBlendSpace                    AnimGraphNode_RotationOffsetBlendSpace_2;                // 0x6468(0x0190)
		struct FAnimNode_RotationOffsetBlendSpace                    AnimGraphNode_RotationOffsetBlendSpace;                  // 0x65F8(0x0190)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_16;                          // 0x6788(0x0028)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_15;                          // 0x67B0(0x0028)
		struct FAnimNode_SaveCachedPose                              AnimGraphNode_SaveCachedPose_8;                          // 0x67D8(0x0158)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool_8;                         // 0x6930(0x00A0)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_16;                         // 0x69D0(0x0080)
		struct FAnimNode_Slot                                        AnimGraphNode_Slot_8;                                    // 0x6A50(0x0048)
		struct FAnimNode_Slot                                        AnimGraphNode_Slot_7;                                    // 0x6A98(0x0048)
		struct FAnimNode_SaveCachedPose                              AnimGraphNode_SaveCachedPose_7;                          // 0x6AE0(0x0158)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool_7;                         // 0x6C38(0x00A0)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_14;                          // 0x6CD8(0x0028)
		struct FAnimNode_SaveCachedPose                              AnimGraphNode_SaveCachedPose_6;                          // 0x6D00(0x0158)
		struct FAnimNode_TransitionResult                            AnimGraphNode_TransitionResult_18;                       // 0x6E58(0x0028)
		struct FAnimNode_TransitionResult                            AnimGraphNode_TransitionResult_17;                       // 0x6E80(0x0028)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_13;                          // 0x6EA8(0x0028)
		struct FAnimNode_StateResult                                 AnimGraphNode_StateResult_14;                            // 0x6ED0(0x0030)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_15;                         // 0x6F00(0x0080)
		struct FAnimNode_StateResult                                 AnimGraphNode_StateResult_13;                            // 0x6F80(0x0030)
		struct FAnimNode_StateMachine                                AnimGraphNode_StateMachine_6;                            // 0x6FB0(0x00B0)
		struct FAnimNode_SaveCachedPose                              AnimGraphNode_SaveCachedPose_5;                          // 0x7060(0x0158)
		struct FAnimNode_TransitionResult                            AnimGraphNode_TransitionResult_16;                       // 0x71B8(0x0028)
		struct FAnimNode_TransitionResult                            AnimGraphNode_TransitionResult_15;                       // 0x71E0(0x0028)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_12;                          // 0x7208(0x0028)
		struct FAnimNode_StateResult                                 AnimGraphNode_StateResult_12;                            // 0x7230(0x0030)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_14;                         // 0x7260(0x0080)
		struct FAnimNode_StateResult                                 AnimGraphNode_StateResult_11;                            // 0x72E0(0x0030)
		struct FAnimNode_StateMachine                                AnimGraphNode_StateMachine_5;                            // 0x7310(0x00B0)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool_6;                         // 0x73C0(0x00A0)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_11;                          // 0x7460(0x0028)
		struct FAnimNode_Slot                                        AnimGraphNode_Slot_6;                                    // 0x7488(0x0048)
		struct FAnimNode_TransitionResult                            AnimGraphNode_TransitionResult_14;                       // 0x74D0(0x0028)
		struct FAnimNode_TransitionResult                            AnimGraphNode_TransitionResult_13;                       // 0x74F8(0x0028)
		struct FAnimNode_BlendSpacePlayer                            AnimGraphNode_BlendSpacePlayer_14;                       // 0x7520(0x00E8)
		struct FAnimNode_BlendSpacePlayer                            AnimGraphNode_BlendSpacePlayer_13;                       // 0x7608(0x00E8)
		struct FAnimNode_BlendSpacePlayer                            AnimGraphNode_BlendSpacePlayer_12;                       // 0x76F0(0x00E8)
		struct FAnimNode_BlendSpacePlayer                            AnimGraphNode_BlendSpacePlayer_11;                       // 0x77D8(0x00E8)
		struct FAnimNode_BlendSpacePlayer                            AnimGraphNode_BlendSpacePlayer_10;                       // 0x78C0(0x00E8)
		struct FAnimNode_BlendSpacePlayer                            AnimGraphNode_BlendSpacePlayer_9;                        // 0x79A8(0x00E8)
		struct FAnimNode_BlendListByInt                              AnimGraphNode_BlendListByInt_3;                          // 0x7A90(0x00A0)
		struct FAnimNode_BlendSpacePlayer                            AnimGraphNode_BlendSpacePlayer_8;                        // 0x7B30(0x00E8)
		struct FAnimNode_BlendSpacePlayer                            AnimGraphNode_BlendSpacePlayer_7;                        // 0x7C18(0x00E8)
		struct FAnimNode_BlendSpacePlayer                            AnimGraphNode_BlendSpacePlayer_6;                        // 0x7D00(0x00E8)
		struct FAnimNode_BlendSpacePlayer                            AnimGraphNode_BlendSpacePlayer_5;                        // 0x7DE8(0x00E8)
		struct FAnimNode_BlendSpacePlayer                            AnimGraphNode_BlendSpacePlayer_4;                        // 0x7ED0(0x00E8)
		struct FAnimNode_BlendSpacePlayer                            AnimGraphNode_BlendSpacePlayer_3;                        // 0x7FB8(0x00E8)
		struct FAnimNode_BlendSpacePlayer                            AnimGraphNode_BlendSpacePlayer_2;                        // 0x80A0(0x00E8)
		struct FAnimNode_BlendSpacePlayer                            AnimGraphNode_BlendSpacePlayer;                          // 0x8188(0x00E8)
		struct FAnimNode_ConvertComponentToLocalSpace                AnimGraphNode_ComponentToLocalSpace;                     // 0x8270(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace                AnimGraphNode_LocalToComponentSpace;                     // 0x8290(0x0020)
		struct FAnimNode_SpeedWarping                                AnimGraphNode_SpeedWarping;                              // 0x82B0(0x01B8)
		struct FAnimNode_BlendListByInt                              AnimGraphNode_BlendListByInt_2;                          // 0x8468(0x00A0)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool_5;                         // 0x8508(0x00A0)
		struct FAnimNode_StateResult                                 AnimGraphNode_StateResult_10;                            // 0x85A8(0x0030)
		struct FAnimNode_TransitionResult                            AnimGraphNode_TransitionResult_12;                       // 0x85D8(0x0028)
		struct FAnimNode_TransitionResult                            AnimGraphNode_TransitionResult_11;                       // 0x8600(0x0028)
		struct FAnimNode_TransitionResult                            AnimGraphNode_TransitionResult_10;                       // 0x8628(0x0028)
		struct FAnimNode_TransitionResult                            AnimGraphNode_TransitionResult_9;                        // 0x8650(0x0028)
		struct FAnimNode_TransitionResult                            AnimGraphNode_TransitionResult_8;                        // 0x8678(0x0028)
		struct FAnimNode_TransitionResult                            AnimGraphNode_TransitionResult_7;                        // 0x86A0(0x0028)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_13;                         // 0x86C8(0x0080)
		struct FAnimNode_StateResult                                 AnimGraphNode_StateResult_9;                             // 0x8748(0x0030)
		struct FAnimNode_SequenceEvaluator                           AnimGraphNode_SequenceEvaluator;                         // 0x8778(0x0050)
		struct FAnimNode_StateResult                                 AnimGraphNode_StateResult_8;                             // 0x87C8(0x0030)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_10;                          // 0x87F8(0x0028)
		struct FAnimNode_StateResult                                 AnimGraphNode_StateResult_7;                             // 0x8820(0x0030)
		struct FAnimNode_StateMachine                                AnimGraphNode_StateMachine_4;                            // 0x8850(0x00B0)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_9;                           // 0x8900(0x0028)
		struct FAnimNode_LayeredBoneBlend                            AnimGraphNode_LayeredBoneBlend;                          // 0x8928(0x00C0)
		struct FAnimNode_StateResult                                 AnimGraphNode_StateResult_6;                             // 0x89E8(0x0030)
		struct FAnimNode_StateMachine                                AnimGraphNode_StateMachine_3;                            // 0x8A18(0x00B0)
		struct FAnimNode_RotateRootBone                              AnimGraphNode_RotateRootBone;                            // 0x8AC8(0x00A0)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool_4;                         // 0x8B68(0x00A0)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_12;                         // 0x8C08(0x0080)
		struct FAnimNode_BlendListByInt                              AnimGraphNode_BlendListByInt;                            // 0x8C88(0x00A0)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_11;                         // 0x8D28(0x0080)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_10;                         // 0x8DA8(0x0080)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_9;                          // 0x8E28(0x0080)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_8;                          // 0x8EA8(0x0080)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_7;                          // 0x8F28(0x0080)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_6;                          // 0x8FA8(0x0080)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_5;                          // 0x9028(0x0080)
		struct FAnimNode_SaveCachedPose                              AnimGraphNode_SaveCachedPose_4;                          // 0x90A8(0x0158)
		struct FAnimNode_Root                                        AnimGraphNode_Root;                                      // 0x9200(0x0030)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_8;                           // 0x9230(0x0028)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_7;                           // 0x9258(0x0028)
		struct FAnimNode_SaveCachedPose                              AnimGraphNode_SaveCachedPose_3;                          // 0x9280(0x0158)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool_3;                         // 0x93D8(0x00A0)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_6;                           // 0x9478(0x0028)
		struct FAnimNode_Slot                                        AnimGraphNode_Slot_5;                                    // 0x94A0(0x0048)
		struct FAnimNode_Slot                                        AnimGraphNode_Slot_4;                                    // 0x94E8(0x0048)
		struct FAnimNode_Slot                                        AnimGraphNode_Slot_3;                                    // 0x9530(0x0048)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_4;                          // 0x9578(0x0080)
		struct FAnimNode_TransitionResult                            AnimGraphNode_TransitionResult_6;                        // 0x95F8(0x0028)
		struct FAnimNode_TransitionResult                            AnimGraphNode_TransitionResult_5;                        // 0x9620(0x0028)
		struct FAnimNode_TransitionResult                            AnimGraphNode_TransitionResult_4;                        // 0x9648(0x0028)
		struct FAnimNode_TransitionResult                            AnimGraphNode_TransitionResult_3;                        // 0x9670(0x0028)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_5;                           // 0x9698(0x0028)
		struct FAnimNode_StateResult                                 AnimGraphNode_StateResult_5;                             // 0x96C0(0x0030)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_3;                          // 0x96F0(0x0080)
		struct FAnimNode_StateResult                                 AnimGraphNode_StateResult_4;                             // 0x9770(0x0030)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_2;                          // 0x97A0(0x0080)
		struct FAnimNode_StateResult                                 AnimGraphNode_StateResult_3;                             // 0x9820(0x0030)
		struct FAnimNode_StateMachine                                AnimGraphNode_StateMachine_2;                            // 0x9850(0x00B0)
		struct FAnimNode_ModifyBone                                  AnimGraphNode_ModifyBone;                                // 0x9900(0x0108)
		struct FAnimNode_Slot                                        AnimGraphNode_Slot_2;                                    // 0x9A08(0x0048)
		struct FAnimNode_TransitionResult                            AnimGraphNode_TransitionResult_2;                        // 0x9A50(0x0028)
		struct FAnimNode_TransitionResult                            AnimGraphNode_TransitionResult;                          // 0x9A78(0x0028)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_4;                           // 0x9AA0(0x0028)
		struct FAnimNode_StateResult                                 AnimGraphNode_StateResult_2;                             // 0x9AC8(0x0030)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer;                            // 0x9AF8(0x0080)
		struct FAnimNode_StateResult                                 AnimGraphNode_StateResult;                               // 0x9B78(0x0030)
		struct FAnimNode_StateMachine                                AnimGraphNode_StateMachine;                              // 0x9BA8(0x00B0)
		struct FAnimNode_SaveCachedPose                              AnimGraphNode_SaveCachedPose_2;                          // 0x9C58(0x0158)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool_2;                         // 0x9DB0(0x00A0)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_3;                           // 0x9E50(0x0028)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_2;                           // 0x9E78(0x0028)
		struct FAnimNode_Slot                                        AnimGraphNode_Slot;                                      // 0x9EA0(0x0048)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool;                           // 0x9EE8(0x00A0)
		struct FAnimNode_SaveCachedPose                              AnimGraphNode_SaveCachedPose;                            // 0x9F88(0x0158)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose;                             // 0xA0E0(0x0028)
		struct FAnimNode_PoseSnapshot                                AnimGraphNode_PoseSnapshot;                              // 0xA108(0x0090)
		struct FAnimInput_CapsuleLocomotion                          AnimInputCapsule;                                        // 0xA198(0x0044) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		bool                                                         bIsAiming;                                               // 0xA1DC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0000[0x3];                                   // 0xA1DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        AimAlpha;                                                // 0xA1E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        AimAlphaTarget;                                          // 0xA1E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        AimSpeed;                                                // 0xA1E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EEasingFunc                                                  AimCurveFunction;                                        // 0xA1EC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                                UnknownData_0001[0x3];                                   // 0xA1ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        DeltaTimeX;                                              // 0xA1F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void AnimNotify_ArrestComplete();
		void AnimNotify_PlayFootstep();
		void AnimNotify_CaptureSnapshot();
		void AnimNotify_ExplodeVest();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_AI_MoveStyle_Base_AnimGraphNode_BlendListByBool_9528B87B43E424C25BA8BC87EBD5CF8E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_AI_MoveStyle_Base_AnimGraphNode_BlendListByBool_96A47EA341AD120E0E97819CDA871E8B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_AI_MoveStyle_Base_AnimGraphNode_BlendListByBool_C853EF064063205E0FAD61A2746077AB();
		void ExecuteUbergraph_ANIMBP_AI_MoveStyle_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
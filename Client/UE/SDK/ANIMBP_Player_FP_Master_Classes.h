#pragma once

/**
 * Name: ReadyOrNot
 * Version: 2
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
	 * AnimBlueprintGeneratedClass ANIMBP_Player_FP_Master.ANIMBP_Player_FP_Master_C
	 * Size -> 0x92AD (FullSize[0x97BD] - InheritedSize[0x0510])
	 */
	class UANIMBP_Player_FP_Master_C : public URoNAnimInstance_PlayerFP
	{
	public:
		struct FPointerToUberGraphFrame                              UberGraphFrame;                                          // 0x0510(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_ModifyBone                                  AnimGraphNode_ModifyBone_19;                             // 0x0518(0x0108)
		struct FAnimNode_LazySpringBone                              AnimGraphNode_LazySpringBone;                            // 0x0620(0x01B8)
		struct FAnimNode_ModifyBone                                  AnimGraphNode_ModifyBone_18;                             // 0x07D8(0x0108)
		struct FAnimNode_SaveCachedPose                              AnimGraphNode_SaveCachedPose_12;                         // 0x08E0(0x0158)
		struct FAnimNode_ConvertLocalToComponentSpace                AnimGraphNode_LocalToComponentSpace_7;                   // 0x0A38(0x0020)
		struct FAnimNode_ModifyBone                                  AnimGraphNode_ModifyBone_17;                             // 0x0A58(0x0108)
		struct FAnimNode_ModifyBone                                  AnimGraphNode_ModifyBone_16;                             // 0x0B60(0x0108)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool_25;                        // 0x0C68(0x00A0)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_73;                         // 0x0D08(0x0080)
		struct FAnimNode_ModifyBone                                  AnimGraphNode_ModifyBone_15;                             // 0x0D88(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace                AnimGraphNode_LocalToComponentSpace_6;                   // 0x0E90(0x0020)
		struct FAnimNode_ModifyBone                                  AnimGraphNode_ModifyBone_14;                             // 0x0EB0(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace                AnimGraphNode_LocalToComponentSpace_5;                   // 0x0FB8(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace                AnimGraphNode_ComponentToLocalSpace_7;                   // 0x0FD8(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace                AnimGraphNode_ComponentToLocalSpace_6;                   // 0x0FF8(0x0020)
		struct FAnimNode_ModifyBone                                  AnimGraphNode_ModifyBone_13;                             // 0x1018(0x0108)
		struct FAnimNode_ModifyBone                                  AnimGraphNode_ModifyBone_12;                             // 0x1120(0x0108)
		struct FAnimNode_ModifyBone                                  AnimGraphNode_ModifyBone_11;                             // 0x1228(0x0108)
		struct FAnimNode_ModifyBone                                  AnimGraphNode_ModifyBone_10;                             // 0x1330(0x0108)
		struct FAnimNode_LayeredBoneBlend                            AnimGraphNode_LayeredBoneBlend_9;                        // 0x1438(0x00C0)
		struct FAnimNode_BlendListByEnum                             AnimGraphNode_BlendListByEnum_5;                         // 0x14F8(0x00B0)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_72;                         // 0x15A8(0x0080)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_71;                         // 0x1628(0x0080)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_70;                         // 0x16A8(0x0080)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_69;                         // 0x1728(0x0080)
		struct FAnimNode_ConvertComponentToLocalSpace                AnimGraphNode_ComponentToLocalSpace_5;                   // 0x17A8(0x0020)
		struct FAnimNode_ModifyBone                                  AnimGraphNode_ModifyBone_9;                              // 0x17C8(0x0108)
		struct FAnimNode_ModifyCurve                                 AnimGraphNode_ModifyCurve_2;                             // 0x18D0(0x0058)
		struct FAnimNode_ModifyCurve                                 AnimGraphNode_ModifyCurve;                               // 0x1928(0x0058)
		struct FAnimNode_LayeredBoneBlend                            AnimGraphNode_LayeredBoneBlend_8;                        // 0x1980(0x00C0)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_68;                         // 0x1A40(0x0080)
		struct FAnimNode_ModifyBone                                  AnimGraphNode_ModifyBone_8;                              // 0x1AC0(0x0108)
		struct FAnimNode_SaveCachedPose                              AnimGraphNode_SaveCachedPose_11;                         // 0x1BC8(0x0158)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_20;                          // 0x1D20(0x0028)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool_24;                        // 0x1D48(0x00A0)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_19;                          // 0x1DE8(0x0028)
		struct FAnimNode_LayeredBoneBlend                            AnimGraphNode_LayeredBoneBlend_7;                        // 0x1E10(0x00C0)
		struct FAnimNode_ModifyBone                                  AnimGraphNode_ModifyBone_7;                              // 0x1ED0(0x0108)
		struct FAnimNode_CopyPoseFromMesh                            AnimGraphNode_CopyPoseFromMesh_2;                        // 0x1FD8(0x01D8) ContainsInstancedReference
		struct FAnimNode_Slot                                        AnimGraphNode_Slot_5;                                    // 0x21B0(0x0048)
		struct FAnimNode_Slot                                        AnimGraphNode_Slot_4;                                    // 0x21F8(0x0048)
		struct FAnimNode_BlendSpacePlayer                            AnimGraphNode_BlendSpacePlayer;                          // 0x2240(0x00E8)
		struct FAnimNode_ApplyAdditive                               AnimGraphNode_ApplyAdditive_20;                          // 0x2328(0x00C8)
		struct FAnimNode_LayeredBoneBlend                            AnimGraphNode_LayeredBoneBlend_6;                        // 0x23F0(0x00C0)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_18;                          // 0x24B0(0x0028)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_17;                          // 0x24D8(0x0028)
		struct FAnimNode_PivotBone                                   AnimGraphNode_PivotBone_5;                               // 0x2500(0x0100)
		struct FAnimNode_PivotBone                                   AnimGraphNode_PivotBone_4;                               // 0x2600(0x0100)
		struct FAnimNode_SaveCachedPose                              AnimGraphNode_SaveCachedPose_10;                         // 0x2700(0x0158)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_67;                         // 0x2858(0x0080)
		struct FAnimNode_ApplyAdditive                               AnimGraphNode_ApplyAdditive_19;                          // 0x28D8(0x00C8)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool_23;                        // 0x29A0(0x00A0)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_66;                         // 0x2A40(0x0080)
		struct FAnimNode_Slot                                        AnimGraphNode_Slot_3;                                    // 0x2AC0(0x0048)
		struct FAnimNode_ConvertLocalToComponentSpace                AnimGraphNode_LocalToComponentSpace_4;                   // 0x2B08(0x0020)
		struct FAnimNode_PivotBone                                   AnimGraphNode_PivotBone_3;                               // 0x2B28(0x0100)
		struct FAnimNode_ModifyBone                                  AnimGraphNode_ModifyBone_6;                              // 0x2C28(0x0108)
		struct FAnimNode_ModifyBone                                  AnimGraphNode_ModifyBone_5;                              // 0x2D30(0x0108)
		struct FAnimNode_CopyPoseFromMesh                            AnimGraphNode_CopyPoseFromMesh;                          // 0x2E38(0x01D8) ContainsInstancedReference
		struct FAnimNode_LayeredBoneBlend                            AnimGraphNode_LayeredBoneBlend_5;                        // 0x3010(0x00C0)
		struct FAnimNode_ConvertComponentToLocalSpace                AnimGraphNode_ComponentToLocalSpace_4;                   // 0x30D0(0x0020)
		struct FAnimNode_ModifyBone                                  AnimGraphNode_ModifyBone_4;                              // 0x30F0(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace                AnimGraphNode_LocalToComponentSpace_3;                   // 0x31F8(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace                AnimGraphNode_ComponentToLocalSpace_3;                   // 0x3218(0x0020)
		struct FAnimNode_TransitionResult                            AnimGraphNode_TransitionResult_31;                       // 0x3238(0x0028)
		struct FAnimNode_TransitionResult                            AnimGraphNode_TransitionResult_30;                       // 0x3260(0x0028)
		struct FAnimNode_TransitionResult                            AnimGraphNode_TransitionResult_29;                       // 0x3288(0x0028)
		struct FAnimNode_TransitionResult                            AnimGraphNode_TransitionResult_28;                       // 0x32B0(0x0028)
		struct FAnimNode_TransitionResult                            AnimGraphNode_TransitionResult_27;                       // 0x32D8(0x0028)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_65;                         // 0x3300(0x0080)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_16;                          // 0x3380(0x0028)
		struct FAnimNode_ApplyAdditive                               AnimGraphNode_ApplyAdditive_18;                          // 0x33A8(0x00C8)
		struct FAnimNode_StateResult                                 AnimGraphNode_StateResult_19;                            // 0x3470(0x0030)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_15;                          // 0x34A0(0x0028)
		struct FAnimNode_StateResult                                 AnimGraphNode_StateResult_18;                            // 0x34C8(0x0030)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_64;                         // 0x34F8(0x0080)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_14;                          // 0x3578(0x0028)
		struct FAnimNode_ApplyAdditive                               AnimGraphNode_ApplyAdditive_17;                          // 0x35A0(0x00C8)
		struct FAnimNode_StateResult                                 AnimGraphNode_StateResult_17;                            // 0x3668(0x0030)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_13;                          // 0x3698(0x0028)
		struct FAnimNode_StateResult                                 AnimGraphNode_StateResult_16;                            // 0x36C0(0x0030)
		struct FAnimNode_StateMachine                                AnimGraphNode_StateMachine_4;                            // 0x36F0(0x00B0)
		struct FAnimNode_PivotBone                                   AnimGraphNode_PivotBone_2;                               // 0x37A0(0x0100)
		struct FAnimNode_BlendListByEnum                             AnimGraphNode_BlendListByEnum_4;                         // 0x38A0(0x00B0)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_63;                         // 0x3950(0x0080)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_62;                         // 0x39D0(0x0080)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_61;                         // 0x3A50(0x0080)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_60;                         // 0x3AD0(0x0080)
		struct FAnimNode_SaveCachedPose                              AnimGraphNode_SaveCachedPose_9;                          // 0x3B50(0x0158)
		struct FAnimNode_BlendListByEnum                             AnimGraphNode_BlendListByEnum_3;                         // 0x3CA8(0x00B0)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_59;                         // 0x3D58(0x0080)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_58;                         // 0x3DD8(0x0080)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_57;                         // 0x3E58(0x0080)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_56;                         // 0x3ED8(0x0080)
		struct FAnimNode_SaveCachedPose                              AnimGraphNode_SaveCachedPose_8;                          // 0x3F58(0x0158)
		struct FAnimNode_BlendListByEnum                             AnimGraphNode_BlendListByEnum_2;                         // 0x40B0(0x00B0)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_55;                         // 0x4160(0x0080)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_54;                         // 0x41E0(0x0080)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_53;                         // 0x4260(0x0080)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_52;                         // 0x42E0(0x0080)
		struct FAnimNode_SaveCachedPose                              AnimGraphNode_SaveCachedPose_7;                          // 0x4360(0x0158)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_51;                         // 0x44B8(0x0080)
		struct FAnimNode_BlendListByEnum                             AnimGraphNode_BlendListByEnum;                           // 0x4538(0x00B0)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_50;                         // 0x45E8(0x0080)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_49;                         // 0x4668(0x0080)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_48;                         // 0x46E8(0x0080)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_47;                         // 0x4768(0x0080)
		struct FAnimNode_SaveCachedPose                              AnimGraphNode_SaveCachedPose_6;                          // 0x47E8(0x0158)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_46;                         // 0x4940(0x0080)
		struct FAnimNode_ModifyBone                                  AnimGraphNode_ModifyBone_3;                              // 0x49C0(0x0108)
		struct FAnimNode_ApplyAdditive                               AnimGraphNode_ApplyAdditive_16;                          // 0x4AC8(0x00C8)
		struct FAnimNode_PivotBone                                   AnimGraphNode_PivotBone;                                 // 0x4B90(0x0100)
		struct FAnimNode_ApplyAdditive                               AnimGraphNode_ApplyAdditive_15;                          // 0x4C90(0x00C8)
		struct FAnimNode_ConvertLocalToComponentSpace                AnimGraphNode_LocalToComponentSpace_2;                   // 0x4D58(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace                AnimGraphNode_ComponentToLocalSpace_2;                   // 0x4D78(0x0020)
		struct FAnimNode_TransitionResult                            AnimGraphNode_TransitionResult_26;                       // 0x4D98(0x0028)
		struct FAnimNode_TransitionResult                            AnimGraphNode_TransitionResult_25;                       // 0x4DC0(0x0028)
		struct FAnimNode_TransitionResult                            AnimGraphNode_TransitionResult_24;                       // 0x4DE8(0x0028)
		struct FAnimNode_TransitionResult                            AnimGraphNode_TransitionResult_23;                       // 0x4E10(0x0028)
		struct FAnimNode_TransitionResult                            AnimGraphNode_TransitionResult_22;                       // 0x4E38(0x0028)
		struct FAnimNode_TransitionResult                            AnimGraphNode_TransitionResult_21;                       // 0x4E60(0x0028)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool_22;                        // 0x4E88(0x00A0)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool_21;                        // 0x4F28(0x00A0)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_45;                         // 0x4FC8(0x0080)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool_20;                        // 0x5048(0x00A0)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_44;                         // 0x50E8(0x0080)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_43;                         // 0x5168(0x0080)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool_19;                        // 0x51E8(0x00A0)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool_18;                        // 0x5288(0x00A0)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_42;                         // 0x5328(0x0080)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_41;                         // 0x53A8(0x0080)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_40;                         // 0x5428(0x0080)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_39;                         // 0x54A8(0x0080)
		struct FAnimNode_ApplyAdditive                               AnimGraphNode_ApplyAdditive_14;                          // 0x5528(0x00C8)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_38;                         // 0x55F0(0x0080)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool_17;                        // 0x5670(0x00A0)
		struct FAnimNode_StateResult                                 AnimGraphNode_StateResult_15;                            // 0x5710(0x0030)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_37;                         // 0x5740(0x0080)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_36;                         // 0x57C0(0x0080)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool_16;                        // 0x5840(0x00A0)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_35;                         // 0x58E0(0x0080)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool_15;                        // 0x5960(0x00A0)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_34;                         // 0x5A00(0x0080)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool_14;                        // 0x5A80(0x00A0)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_33;                         // 0x5B20(0x0080)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool_13;                        // 0x5BA0(0x00A0)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool_12;                        // 0x5C40(0x00A0)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_32;                         // 0x5CE0(0x0080)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool_11;                        // 0x5D60(0x00A0)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_31;                         // 0x5E00(0x0080)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_30;                         // 0x5E80(0x0080)
		struct FAnimNode_ApplyAdditive                               AnimGraphNode_ApplyAdditive_13;                          // 0x5F00(0x00C8)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_29;                         // 0x5FC8(0x0080)
		struct FAnimNode_LayeredBoneBlend                            AnimGraphNode_LayeredBoneBlend_4;                        // 0x6048(0x00C0)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_28;                         // 0x6108(0x0080)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_27;                         // 0x6188(0x0080)
		struct FAnimNode_ApplyAdditive                               AnimGraphNode_ApplyAdditive_12;                          // 0x6208(0x00C8)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool_10;                        // 0x62D0(0x00A0)
		struct FAnimNode_StateResult                                 AnimGraphNode_StateResult_14;                            // 0x6370(0x0030)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_26;                         // 0x63A0(0x0080)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool_9;                         // 0x6420(0x00A0)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_25;                         // 0x64C0(0x0080)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool_8;                         // 0x6540(0x00A0)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_24;                         // 0x65E0(0x0080)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_23;                         // 0x6660(0x0080)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool_7;                         // 0x66E0(0x00A0)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_22;                         // 0x6780(0x0080)
		struct FAnimNode_ApplyAdditive                               AnimGraphNode_ApplyAdditive_11;                          // 0x6800(0x00C8)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool_6;                         // 0x68C8(0x00A0)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_21;                         // 0x6968(0x0080)
		struct FAnimNode_LayeredBoneBlend                            AnimGraphNode_LayeredBoneBlend_3;                        // 0x69E8(0x00C0)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_20;                         // 0x6AA8(0x0080)
		struct FAnimNode_ApplyAdditive                               AnimGraphNode_ApplyAdditive_10;                          // 0x6B28(0x00C8)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_19;                         // 0x6BF0(0x0080)
		struct FAnimNode_StateResult                                 AnimGraphNode_StateResult_13;                            // 0x6C70(0x0030)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_12;                          // 0x6CA0(0x0028)
		struct FAnimNode_StateResult                                 AnimGraphNode_StateResult_12;                            // 0x6CC8(0x0030)
		struct FAnimNode_StateMachine                                AnimGraphNode_StateMachine_3;                            // 0x6CF8(0x00B0)
		struct FAnimNode_SaveCachedPose                              AnimGraphNode_SaveCachedPose_5;                          // 0x6DA8(0x0158)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool_5;                         // 0x6F00(0x00A0)
		struct FAnimNode_ConvertLocalToComponentSpace                AnimGraphNode_LocalToComponentSpace;                     // 0x6FA0(0x0020)
		struct FAnimNode_LayeredBoneBlend                            AnimGraphNode_LayeredBoneBlend_2;                        // 0x6FC0(0x00C0)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_18;                         // 0x7080(0x0080)
		struct FAnimNode_Slot                                        AnimGraphNode_Slot_2;                                    // 0x7100(0x0048)
		struct FAnimNode_SaveCachedPose                              AnimGraphNode_SaveCachedPose_4;                          // 0x7148(0x0158)
		struct FAnimNode_TransitionResult                            AnimGraphNode_TransitionResult_20;                       // 0x72A0(0x0028)
		struct FAnimNode_TransitionResult                            AnimGraphNode_TransitionResult_19;                       // 0x72C8(0x0028)
		struct FAnimNode_TransitionResult                            AnimGraphNode_TransitionResult_18;                       // 0x72F0(0x0028)
		struct FAnimNode_TransitionResult                            AnimGraphNode_TransitionResult_17;                       // 0x7318(0x0028)
		struct FAnimNode_TransitionResult                            AnimGraphNode_TransitionResult_16;                       // 0x7340(0x0028)
		struct FAnimNode_TransitionResult                            AnimGraphNode_TransitionResult_15;                       // 0x7368(0x0028)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_11;                          // 0x7390(0x0028)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_17;                         // 0x73B8(0x0080)
		struct FAnimNode_ApplyAdditive                               AnimGraphNode_ApplyAdditive_9;                           // 0x7438(0x00C8)
		struct FAnimNode_StateResult                                 AnimGraphNode_StateResult_11;                            // 0x7500(0x0030)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_10;                          // 0x7530(0x0028)
		struct FAnimNode_StateResult                                 AnimGraphNode_StateResult_10;                            // 0x7558(0x0030)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_9;                           // 0x7588(0x0028)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_16;                         // 0x75B0(0x0080)
		struct FAnimNode_ApplyAdditive                               AnimGraphNode_ApplyAdditive_8;                           // 0x7630(0x00C8)
		struct FAnimNode_StateResult                                 AnimGraphNode_StateResult_9;                             // 0x76F8(0x0030)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_8;                           // 0x7728(0x0028)
		struct FAnimNode_StateResult                                 AnimGraphNode_StateResult_8;                             // 0x7750(0x0030)
		struct FAnimNode_StateMachine                                AnimGraphNode_StateMachine_2;                            // 0x7780(0x00B0)
		struct FAnimNode_LayeredBoneBlend                            AnimGraphNode_LayeredBoneBlend;                          // 0x7830(0x00C0)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_15;                         // 0x78F0(0x0080)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_7;                           // 0x7970(0x0028)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_6;                           // 0x7998(0x0028)
		struct FAnimNode_SaveCachedPose                              AnimGraphNode_SaveCachedPose_3;                          // 0x79C0(0x0158)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_5;                           // 0x7B18(0x0028)
		struct FAnimNode_Slot                                        AnimGraphNode_Slot;                                      // 0x7B40(0x0048)
		struct FAnimNode_ModifyBone                                  AnimGraphNode_ModifyBone_2;                              // 0x7B88(0x0108)
		struct FAnimNode_SaveCachedPose                              AnimGraphNode_SaveCachedPose_2;                          // 0x7C90(0x0158)
		struct FAnimNode_ModifyBone                                  AnimGraphNode_ModifyBone;                                // 0x7DE8(0x0108)
		struct FAnimNode_LegIK                                       AnimGraphNode_LegIK_2;                                   // 0x7EF0(0x00F8)
		struct FAnimNode_LegIK                                       AnimGraphNode_LegIK;                                     // 0x7FE8(0x00F8)
		struct FAnimNode_TransitionResult                            AnimGraphNode_TransitionResult_14;                       // 0x80E0(0x0028)
		struct FAnimNode_TransitionResult                            AnimGraphNode_TransitionResult_13;                       // 0x8108(0x0028)
		struct FAnimNode_TransitionResult                            AnimGraphNode_TransitionResult_12;                       // 0x8130(0x0028)
		struct FAnimNode_TransitionResult                            AnimGraphNode_TransitionResult_11;                       // 0x8158(0x0028)
		struct FAnimNode_TransitionResult                            AnimGraphNode_TransitionResult_10;                       // 0x8180(0x0028)
		struct FAnimNode_TransitionResult                            AnimGraphNode_TransitionResult_9;                        // 0x81A8(0x0028)
		struct FAnimNode_TransitionResult                            AnimGraphNode_TransitionResult_8;                        // 0x81D0(0x0028)
		struct FAnimNode_TransitionResult                            AnimGraphNode_TransitionResult_7;                        // 0x81F8(0x0028)
		struct FAnimNode_TransitionResult                            AnimGraphNode_TransitionResult_6;                        // 0x8220(0x0028)
		struct FAnimNode_TransitionResult                            AnimGraphNode_TransitionResult_5;                        // 0x8248(0x0028)
		struct FAnimNode_TransitionResult                            AnimGraphNode_TransitionResult_4;                        // 0x8270(0x0028)
		struct FAnimNode_TransitionResult                            AnimGraphNode_TransitionResult_3;                        // 0x8298(0x0028)
		struct FAnimNode_TransitionResult                            AnimGraphNode_TransitionResult_2;                        // 0x82C0(0x0028)
		struct FAnimNode_TransitionResult                            AnimGraphNode_TransitionResult;                          // 0x82E8(0x0028)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_14;                         // 0x8310(0x0080)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_13;                         // 0x8390(0x0080)
		struct FAnimNode_ApplyAdditive                               AnimGraphNode_ApplyAdditive_7;                           // 0x8410(0x00C8)
		struct FAnimNode_StateResult                                 AnimGraphNode_StateResult_7;                             // 0x84D8(0x0030)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_12;                         // 0x8508(0x0080)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_11;                         // 0x8588(0x0080)
		struct FAnimNode_ApplyAdditive                               AnimGraphNode_ApplyAdditive_6;                           // 0x8608(0x00C8)
		struct FAnimNode_StateResult                                 AnimGraphNode_StateResult_6;                             // 0x86D0(0x0030)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_10;                         // 0x8700(0x0080)
		struct FAnimNode_ApplyAdditive                               AnimGraphNode_ApplyAdditive_5;                           // 0x8780(0x00C8)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_9;                          // 0x8848(0x0080)
		struct FAnimNode_StateResult                                 AnimGraphNode_StateResult_5;                             // 0x88C8(0x0030)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_8;                          // 0x88F8(0x0080)
		struct FAnimNode_ApplyAdditive                               AnimGraphNode_ApplyAdditive_4;                           // 0x8978(0x00C8)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_7;                          // 0x8A40(0x0080)
		struct FAnimNode_StateResult                                 AnimGraphNode_StateResult_4;                             // 0x8AC0(0x0030)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_6;                          // 0x8AF0(0x0080)
		struct FAnimNode_ApplyAdditive                               AnimGraphNode_ApplyAdditive_3;                           // 0x8B70(0x00C8)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_5;                          // 0x8C38(0x0080)
		struct FAnimNode_StateResult                                 AnimGraphNode_StateResult_3;                             // 0x8CB8(0x0030)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool_4;                         // 0x8CE8(0x00A0)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool_3;                         // 0x8D88(0x00A0)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool_2;                         // 0x8E28(0x00A0)
		struct FAnimNode_ApplyAdditive                               AnimGraphNode_ApplyAdditive_2;                           // 0x8EC8(0x00C8)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_4;                           // 0x8F90(0x0028)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_3;                           // 0x8FB8(0x0028)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose_2;                           // 0x8FE0(0x0028)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_4;                          // 0x9008(0x0080)
		struct FAnimNode_UseCachedPose                               AnimGraphNode_UseCachedPose;                             // 0x9088(0x0028)
		struct FAnimNode_StateResult                                 AnimGraphNode_StateResult_2;                             // 0x90B0(0x0030)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_3;                          // 0x90E0(0x0080)
		struct FAnimNode_BlendListByBool                             AnimGraphNode_BlendListByBool;                           // 0x9160(0x00A0)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer_2;                          // 0x9200(0x0080)
		struct FAnimNode_ApplyAdditive                               AnimGraphNode_ApplyAdditive;                             // 0x9280(0x00C8)
		struct FAnimNode_SequencePlayer                              AnimGraphNode_SequencePlayer;                            // 0x9348(0x0080)
		struct FAnimNode_StateResult                                 AnimGraphNode_StateResult;                               // 0x93C8(0x0030)
		struct FAnimNode_StateMachine                                AnimGraphNode_StateMachine;                              // 0x93F8(0x00B0)
		struct FAnimNode_ConvertComponentToLocalSpace                AnimGraphNode_ComponentToLocalSpace;                     // 0x94A8(0x0020)
		struct FAnimNode_SaveCachedPose                              AnimGraphNode_SaveCachedPose;                            // 0x94C8(0x0158)
		struct FAnimNode_Root                                        AnimGraphNode_Root;                                      // 0x9620(0x0030)
		struct FRotator                                 CameraRotationRate;                                      // 0x9650(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bIsAiming;                                               // 0x965C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bIsFocusedAiming;                                        // 0x965D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bIsReloading;                                            // 0x965E(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0000[0x1];                                   // 0x965F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        AimInterp;                                               // 0x9660(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         bIsMagCheck;                                             // 0x9664(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0001[0x3];                                   // 0x9665(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        IdlePlayrate;                                            // 0x9668(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                  ProcRecoilTrans;                                         // 0x966C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                 ProcRecoilRot;                                           // 0x9678(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                  ProcRecoilBuildupTrans;                                  // 0x9684(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                 ProcRecoilBuildupRot;                                    // 0x9690(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                 NewVar_1;                                                // 0x969C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                  StanceAdjustment;                                        // 0x96A8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                 CapsuleRot;                                              // 0x96B4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                        LazyAlpha;                                               // 0x96C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                                UnknownData_0002[0x4];                                   // 0x96C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABaseMagazineWeapon*                                   BaseMagWeaponRef;                                        // 0x96C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APlayerCharacter*                                      PlayerCharRef;                                           // 0x96D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        DeltaSeconds;                                            // 0x96D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         LegsBroken;                                              // 0x96DC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         ArmsBroken;                                              // 0x96DD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0003[0x2];                                   // 0x96DE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        AimingLocoStrength;                                      // 0x96E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         bIsCrouched;                                             // 0x96E4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bLowReadyPointUp;                                        // 0x96E5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bLowReadyPointDown;                                      // 0x96E6(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0004[0x1];                                   // 0x96E7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        LowReadyPointUpAlpha;                                    // 0x96E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        LowReadyPointDownAlpha;                                  // 0x96EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        LeanAlpha;                                               // 0x96F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                 FreeLookRot;                                             // 0x96F4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                        StabilizeMovementAlpha;                                  // 0x9700(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        QuickLeanAmount;                                         // 0x9704(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         bSightTweakMode;                                         // 0x9708(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bIsJumping;                                              // 0x9709(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bIsSprinting;                                            // 0x970A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0005[0x1];                                   // 0x970B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        InputUpDown;                                             // 0x970C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         bOnLadder;                                               // 0x9710(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bInteractionActive;                                      // 0x9711(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0006[0x2];                                   // 0x9712(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        Hand_IK_Left;                                            // 0x9714(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        Hand_IK_Right;                                           // 0x9718(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         bHasUnderbarrelAttachment;                               // 0x971C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EWeaponUnderbarrelAnimationType                              UnderbarrelType;                                         // 0x971D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         bIsMontagePlaying;                                       // 0x971E(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bIsGrenade;                                              // 0x971F(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                        ShakeAmount;                                             // 0x9720(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         bArrested;                                               // 0x9724(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0007[0x3];                                   // 0x9725(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        DirBlendTime;                                            // 0x9728(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        LeftHandSprintHack;                                      // 0x972C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                  LeftHandWorldVector;                                     // 0x9730(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                 LeftHandWorldRotator;                                    // 0x973C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                        LeftHandWorldAlpha;                                      // 0x9748(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                  LeftHandWorldElbowVector;                                // 0x974C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         bLeftHandDoorActive;                                     // 0x9758(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0008[0x3];                                   // 0x9759(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                  LeanHeadSocketLocation;                                  // 0x975C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        LeanHeadBlendAlpha;                                      // 0x9768(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                  LeanHeadOffset;                                          // 0x976C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                  Acceleration;                                            // 0x9778(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                  CameraBobTrans;                                          // 0x9784(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        StartMotionWeight;                                       // 0x9790(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                        StartMotionPlayrate;                                     // 0x9794(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                  WeaponBobTrans;                                          // 0x9798(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                 WeaponBobRot;                                            // 0x97A4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                        WeaponBobAlpha;                                          // 0x97B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         WeaponBobTrigger;                                        // 0x97B4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bShouldAllowStopMotion;                                  // 0x97B5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                         bBuildUpSprint;                                          // 0x97B6(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                                UnknownData_0009[0x1];                                   // 0x97B7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                        SprintBuildupAlpha;                                      // 0x97B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                         bIsHeavyArmor;                                           // 0x97BC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
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
		void ExecuteUbergraph_ANIMBP_Player_FP_Master(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

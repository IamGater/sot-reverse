// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_RevealableDiorama_NPCSkeleton_C::UserConstructionScript (3 bytes)
void BP_RevealableDiorama_NPCSkeleton_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_RevealableDiorama_NPCSkeleton_C::BndEvt__Revealable_K2Node_ComponentBoundEvent_15_OnCloseReveal__DelegateSignature (22 bytes)
void BP_RevealableDiorama_NPCSkeleton_C::BndEvt__Revealable_K2Node_ComponentBoundEvent_15_OnCloseReveal__DelegateSignature()
{
    ExecuteUbergraph_BP_RevealableDiorama_NPCSkeleton();
    return;
}

// Recovered Kismet: BP_RevealableDiorama_NPCSkeleton_C::BndEvt__Revealable_K2Node_ComponentBoundEvent_24_OnHide__DelegateSignature (22 bytes)
void BP_RevealableDiorama_NPCSkeleton_C::BndEvt__Revealable_K2Node_ComponentBoundEvent_24_OnHide__DelegateSignature()
{
    ExecuteUbergraph_BP_RevealableDiorama_NPCSkeleton();
    return;
}

// Recovered Kismet: BP_RevealableDiorama_NPCSkeleton_C::ExecuteUbergraph_BP_RevealableDiorama_NPCSkeleton (334 bytes)
void BP_RevealableDiorama_NPCSkeleton_C::ExecuteUbergraph_BP_RevealableDiorama_NPCSkeleton()
{
    auto CallFunc_GetAnimInstance_ReturnValue = SkeletalMesh->GetAnimInstance();
    Revealable_NPCGenericSkeleton_AnimInstance_C* K2Node_DynamicCast_AsRevealable_NPCGeneric_Skeleton_Anim_Instance = Cast<Revealable_NPCGenericSkeleton_AnimInstance_C*>(CallFunc_GetAnimInstance_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsRevealable_NPCGeneric_Skeleton_Anim_Instance);
    if (!K2Node_DynamicCast_bSuccess) goto L_14B;
    K2Node_DynamicCast_AsRevealable_NPCGeneric_Skeleton_Anim_Instance = K2Node_DynamicCast_AsRevealable_NPCGeneric_Skeleton_Anim_Instance;
    auto CallFunc_GetAnimInstance_ReturnValue2 = SkeletalMesh->GetAnimInstance();
    Revealable_NPCGenericSkeleton_AnimInstance_C* K2Node_DynamicCast_AsRevealable_NPCGeneric_Skeleton_Anim_Instance2 = Cast<Revealable_NPCGenericSkeleton_AnimInstance_C*>(CallFunc_GetAnimInstance_ReturnValue2);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(K2Node_DynamicCast_AsRevealable_NPCGeneric_Skeleton_Anim_Instance2);
    if (!K2Node_DynamicCast_bSuccess2) goto L_14B;
    K2Node_DynamicCast_AsRevealable_NPCGeneric_Skeleton_Anim_Instance2 = K2Node_DynamicCast_AsRevealable_NPCGeneric_Skeleton_Anim_Instance2;
L_14B:
    return;
}

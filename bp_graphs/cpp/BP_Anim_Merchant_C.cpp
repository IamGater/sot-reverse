// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Anim_Merchant_C::AnimNotify_NPCItemAnimation (22 bytes)
void BP_Anim_Merchant_C::AnimNotify_NPCItemAnimation()
{
    ExecuteUbergraph_BP_Anim_Merchant();
    return;
}

// Recovered Kismet: BP_Anim_Merchant_C::ExecuteUbergraph_BP_Anim_Merchant (149 bytes)
void BP_Anim_Merchant_C::ExecuteUbergraph_BP_Anim_Merchant()
{
    AActor* CallFunc_GetOwningActor_ReturnValue = UAnimInstance::GetOwningActor();
    TScriptInterface<UBP_NPC_AnimatedItemInterface_C> idx_254402 = TScriptInterface<UBP_NPC_AnimatedItemInterface_C>(CallFunc_GetOwningActor_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(idx_254402);
    if (!UniqueObjectNameForCooking_bSuccess) goto L_92;
L_92:
    return;
}

// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Skeleton_Cutlass_Item_C::DoBlockEffect (254 bytes)
void BP_Skeleton_Cutlass_Item_C::DoBlockEffect()
{
    AActor* CallFunc_GetWielder_ReturnValue = GetWielder();
    AthenaPlayerCharacter* K2Node_DynamicCast_AsAthena_Player_Character = Cast<AthenaPlayerCharacter*>(CallFunc_GetWielder_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Character);
    if (!K2Node_DynamicCast_bSuccess) goto L_FB;
    bool CallFunc_IsUnderwater_ReturnValue = IsUnderwater();
    UParticleSystemComponent* CallFunc_AthenaSpawnEmitterAttachedWithOwner_ReturnValue = UVfxFunctionLibrary::AthenaSpawnEmitterAttachedWithOwner(vfx_sword_Metal_Block_MainPlayer, FirstPersonMesh, K2Node_DynamicCast_AsAthena_Player_Character, true, true, false, CallFunc_IsUnderwater_ReturnValue);
L_FB:
    return;
}

// Recovered Kismet: BP_Skeleton_Cutlass_Item_C::UserConstructionScript (3 bytes)
void BP_Skeleton_Cutlass_Item_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_Skeleton_Cutlass_Item_C::OnBlockedAttack (40 bytes)
void BP_Skeleton_Cutlass_Item_C::OnBlockedAttack()
{
    ExecuteUbergraph_BP_Skeleton_Cutlass_Item();
    return;
}

// Recovered Kismet: BP_Skeleton_Cutlass_Item_C::ExecuteUbergraph_BP_Skeleton_Cutlass_Item (118 bytes)
void BP_Skeleton_Cutlass_Item_C::ExecuteUbergraph_BP_Skeleton_Cutlass_Item()
{
L_A:
    DoBlockEffect();
    bool CallFunc_IsDedicatedServer_ReturnValue = UKismetSystemLibrary::IsDedicatedServer();
    if (!CallFunc_IsDedicatedServer_ReturnValue) goto L_A;
    this->OnBlockedAttack(K2Node_Event_Event);
    return;
}

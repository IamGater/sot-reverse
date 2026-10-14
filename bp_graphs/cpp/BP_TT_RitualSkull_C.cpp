// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TT_RitualSkull_C::UserConstructionScript (3 bytes)
void BP_TT_RitualSkull_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_TT_RitualSkull_C::ReceiveBeginPlay (22 bytes)
void BP_TT_RitualSkull_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_TT_RitualSkull();
    return;
}

// Recovered Kismet: BP_TT_RitualSkull_C::fn_idx_256961 (40 bytes)
void BP_TT_RitualSkull_C::fn_idx_256961()
{
    ExecuteUbergraph_BP_TT_RitualSkull();
    return;
}

// Recovered Kismet: BP_TT_RitualSkull_C::fn_idx_256957 (452 bytes)
void BP_TT_RitualSkull_C::fn_idx_256957()
{
    TScriptInterface<UInterface_Animatable> UniqueObjectNameForCooking_AsInterface_Animatable = TScriptInterface<UInterface_Animatable>(SkeletalMesh);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsInterface_Animatable);
    if (!UniqueObjectNameForCooking_bSuccess) goto L_12F;
    auto CallFunc_GetAnimInstance_ReturnValue = UniqueObjectNameForCooking_AsInterface_Animatable->GetAnimInstance();
    auto Temp_object_Variable = CallFunc_GetAnimInstance_ReturnValue;
    BP_Anim_TT_RitualSkullMain_C* K2Node_DynamicCast_AsBP_Anim_TT_Ritual_Skull_Main = Cast<BP_Anim_TT_RitualSkullMain_C*>(Temp_object_Variable);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsBP_Anim_TT_Ritual_Skull_Main);
    if (!K2Node_DynamicCast_bSuccess) goto L_1C1;
L_12F:
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue = SkeletalMesh->CreateDynamicMaterialInstance();
    auto DynamicMaterial = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
L_1C1:
    return;
}

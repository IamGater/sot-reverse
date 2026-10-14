// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TT_SwordOfSouls_Prop_C::UserConstructionScript (3 bytes)
void BP_TT_SwordOfSouls_Prop_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_TT_SwordOfSouls_Prop_C::ReceiveBeginPlay (22 bytes)
void BP_TT_SwordOfSouls_Prop_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_TT_SwordOfSouls_Prop();
    return;
}

// Recovered Kismet: BP_TT_SwordOfSouls_Prop_C::fn_idx_254667 (58 bytes)
void BP_TT_SwordOfSouls_Prop_C::fn_idx_254667()
{
    ExecuteUbergraph_BP_TT_SwordOfSouls_Prop();
    return;
}

// Recovered Kismet: BP_TT_SwordOfSouls_Prop_C::fn_idx_254705 (735 bytes)
void BP_TT_SwordOfSouls_Prop_C::fn_idx_254705()
{
    auto CallFunc_GetOwner_ReturnValue = this->GetOwner();
    TScriptInterface<UGhostVisibilityEffectsInterface_C> UniqueObjectNameForCooking_AsGhost_Visibility_Effects_Interface = TScriptInterface<UGhostVisibilityEffectsInterface_C>(CallFunc_GetOwner_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsGhost_Visibility_Effects_Interface);
    if (!UniqueObjectNameForCooking_bSuccess) goto L_190;
    if (!CallFunc_GetGhostOwnerVisibility_Visibility) goto L_1A0;
    UMaterialInterface* CallFunc_GetMaterial_ReturnValue = SwordOfSouls->GetMaterial();
    MaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic = Cast<MaterialInstanceDynamic*>(CallFunc_GetMaterial_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsMaterial_Instance_Dynamic);
    if (!K2Node_DynamicCast_bSuccess) goto L_1BC;
    auto DynamicMaterial = K2Node_DynamicCast_AsMaterial_Instance_Dynamic;
L_190:
    bool CallFunc_GetGhostOwnerVisibility_Visibility = false;
L_1A0:
L_1BC:
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue = SwordOfSouls->CreateDynamicMaterialInstance();
    DynamicMaterial = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
    return;
}

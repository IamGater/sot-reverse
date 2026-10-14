// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_MaskedStranger_HeartOfFire_C::UserConstructionScript (13 bytes)
void BP_MaskedStranger_HeartOfFire_C::UserConstructionScript()
{
    this->UserConstructionScript();
    return;
}

// Recovered Kismet: BP_MaskedStranger_HeartOfFire_C::ReceiveBeginPlay (22 bytes)
void BP_MaskedStranger_HeartOfFire_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_MaskedStranger_HeartOfFire();
    return;
}

// Recovered Kismet: BP_MaskedStranger_HeartOfFire_C::ExecuteUbergraph_BP_MaskedStranger_HeartOfFire (325 bytes)
void BP_MaskedStranger_HeartOfFire_C::ExecuteUbergraph_BP_MaskedStranger_HeartOfFire()
{
L_A:
    BP_Anim_Tasha_LegendaryStoryteller_C* idx_274972 = Cast<BP_Anim_Tasha_LegendaryStoryteller_C*>(Temp_object_Variable);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_274972);
    if (!K2Node_DynamicCast_bSuccess) goto L_142;
    idx_274972 = idx_274972;
    TScriptInterface<UInterface_Animatable> UniqueObjectNameForCooking_AsInterface_Animatable = TScriptInterface<UInterface_Animatable>(Mesh);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsInterface_Animatable);
    if (!UniqueObjectNameForCooking_bSuccess) goto L_A;
    auto CallFunc_GetAnimInstance_ReturnValue = UniqueObjectNameForCooking_AsInterface_Animatable->GetAnimInstance();
    auto Temp_object_Variable = CallFunc_GetAnimInstance_ReturnValue;
L_142:
    return;
}

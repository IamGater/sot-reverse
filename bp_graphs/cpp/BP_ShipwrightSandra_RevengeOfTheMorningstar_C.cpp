// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_ShipwrightSandra_RevengeOfTheMorningstar_C::UserConstructionScript (13 bytes)
void BP_ShipwrightSandra_RevengeOfTheMorningstar_C::UserConstructionScript()
{
    this->UserConstructionScript();
    return;
}

// Recovered Kismet: BP_ShipwrightSandra_RevengeOfTheMorningstar_C::ReceiveBeginPlay (22 bytes)
void BP_ShipwrightSandra_RevengeOfTheMorningstar_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_ShipwrightSandra_RevengeOfTheMorningstar();
    return;
}

// Recovered Kismet: BP_ShipwrightSandra_RevengeOfTheMorningstar_C::ExecuteUbergraph_BP_ShipwrightSandra_RevengeOfTheMorningstar (325 bytes)
void BP_ShipwrightSandra_RevengeOfTheMorningstar_C::ExecuteUbergraph_BP_ShipwrightSandra_RevengeOfTheMorningstar()
{
L_A:
    BP_Anim_Shipwright_RevengeOfThemorningstar_C* idx_275185 = Cast<BP_Anim_Shipwright_RevengeOfThemorningstar_C*>(Temp_object_Variable);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_275185);
    if (!K2Node_DynamicCast_bSuccess) goto L_142;
    idx_275185 = idx_275185;
    TScriptInterface<UInterface_Animatable> UniqueObjectNameForCooking_AsInterface_Animatable = TScriptInterface<UInterface_Animatable>(Mesh);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsInterface_Animatable);
    if (!UniqueObjectNameForCooking_bSuccess) goto L_A;
    auto CallFunc_GetAnimInstance_ReturnValue = UniqueObjectNameForCooking_AsInterface_Animatable->GetAnimInstance();
    auto Temp_object_Variable = CallFunc_GetAnimInstance_ReturnValue;
L_142:
    return;
}

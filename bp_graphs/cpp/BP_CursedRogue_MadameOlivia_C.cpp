// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_CursedRogue_MadameOlivia_C::UserConstructionScript (13 bytes)
void BP_CursedRogue_MadameOlivia_C::UserConstructionScript()
{
    this->UserConstructionScript();
    return;
}

// Recovered Kismet: BP_CursedRogue_MadameOlivia_C::ReceiveBeginPlay (22 bytes)
void BP_CursedRogue_MadameOlivia_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_CursedRogue_MadameOlivia();
    return;
}

// Recovered Kismet: BP_CursedRogue_MadameOlivia_C::ExecuteUbergraph_BP_CursedRogue_MadameOlivia (325 bytes)
void BP_CursedRogue_MadameOlivia_C::ExecuteUbergraph_BP_CursedRogue_MadameOlivia()
{
L_A:
    BP_MadameOlivia_CursedRogue_C* idx_274905 = Cast<BP_MadameOlivia_CursedRogue_C*>(Temp_object_Variable);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_274905);
    if (!K2Node_DynamicCast_bSuccess) goto L_142;
    idx_274905 = idx_274905;
    TScriptInterface<UInterface_Animatable> UniqueObjectNameForCooking_AsInterface_Animatable = TScriptInterface<UInterface_Animatable>(Mesh);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsInterface_Animatable);
    if (!UniqueObjectNameForCooking_bSuccess) goto L_A;
    auto CallFunc_GetAnimInstance_ReturnValue = UniqueObjectNameForCooking_AsInterface_Animatable->GetAnimInstance();
    auto Temp_object_Variable = CallFunc_GetAnimInstance_ReturnValue;
L_142:
    return;
}

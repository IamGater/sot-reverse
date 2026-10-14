// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Grace_ShoresOfGold_C::UserConstructionScript (3 bytes)
void BP_Grace_ShoresOfGold_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_Grace_ShoresOfGold_C::ReceiveBeginPlay (22 bytes)
void BP_Grace_ShoresOfGold_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_Grace_ShoresOfGold();
    return;
}

// Recovered Kismet: BP_Grace_ShoresOfGold_C::ReceiveTick (40 bytes)
void BP_Grace_ShoresOfGold_C::ReceiveTick()
{
    ExecuteUbergraph_BP_Grace_ShoresOfGold();
    return;
}

// Recovered Kismet: BP_Grace_ShoresOfGold_C::ReceiveBeginPlay_Copy (22 bytes)
void BP_Grace_ShoresOfGold_C::ReceiveBeginPlay_Copy()
{
    ExecuteUbergraph_BP_Grace_ShoresOfGold();
    return;
}

// Recovered Kismet: BP_Grace_ShoresOfGold_C::ExecuteUbergraph_BP_Grace_ShoresOfGold (306 bytes)
void BP_Grace_ShoresOfGold_C::ExecuteUbergraph_BP_Grace_ShoresOfGold()
{
    TScriptInterface<UInterface_Animatable> UniqueObjectNameForCooking_AsInterface_Animatable = TScriptInterface<UInterface_Animatable>(Mesh);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsInterface_Animatable);
    if (!UniqueObjectNameForCooking_bSuccess) goto L_110;
    auto CallFunc_GetAnimInstance_ReturnValue = UniqueObjectNameForCooking_AsInterface_Animatable->GetAnimInstance();
    auto Temp_object_Variable = CallFunc_GetAnimInstance_ReturnValue;
    BP_Anim_AllianceLeader_Custom_C* idx_274944 = Cast<BP_Anim_AllianceLeader_Custom_C*>(Temp_object_Variable);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_274944);
    if (!K2Node_DynamicCast_bSuccess) goto L_12F;
    idx_274944 = idx_274944;
L_110:
L_12F:
    return;
}

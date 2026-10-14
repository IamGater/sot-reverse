// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TT_RitualBox_C::fn_idx_256166 (136 bytes)
void BP_TT_RitualBox_C::fn_idx_256166()
{
    Get World OOS Magic Box to Replace(CallFunc_Get_World_OOS_Magic_Box_to_Replace_Magic_Box_to_Replace);
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(CallFunc_Get_World_OOS_Magic_Box_to_Replace_Magic_Box_to_Replace);
    if (!CallFunc_IsValid_ReturnValue) goto L_85;
L_85:
    return;
}

// Recovered Kismet: BP_TT_RitualBox_C::fn_idx_256162 (14 bytes)
void BP_TT_RitualBox_C::fn_idx_256162()
{
    return;
}

// Recovered Kismet: BP_TT_RitualBox_C::UserConstructionScript (3 bytes)
void BP_TT_RitualBox_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_TT_RitualBox_C::fn_idx_256157 (112 bytes)
void BP_TT_RitualBox_C::fn_idx_256157()
{
    ExecuteUbergraph_BP_TT_RitualBox();
    return;
}

// Recovered Kismet: BP_TT_RitualBox_C::ReceiveBeginPlay (22 bytes)
void BP_TT_RitualBox_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_TT_RitualBox();
    return;
}

// Recovered Kismet: BP_TT_RitualBox_C::ReceiveEndPlay (40 bytes)
void BP_TT_RitualBox_C::ReceiveEndPlay()
{
    ExecuteUbergraph_BP_TT_RitualBox();
    return;
}

// Recovered Kismet: BP_TT_RitualBox_C::fn_idx_256161 (241 bytes)
void BP_TT_RitualBox_C::fn_idx_256161()
{
    Set Replaced World OOS Magic Box Hidden(false);
    this->ReceiveEndPlay(K2Node_Event_EndPlayReason);
    this->ReceiveBeginPlay();
    Set Replaced World OOS Magic Box Hidden(true);
    AthenaPlayerCharacter* K2Node_DynamicCast_AsAthena_Player_Character = Cast<AthenaPlayerCharacter*>(K2Node_ComponentBoundEvent_OtherActor);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Character);
    if (!K2Node_DynamicCast_bSuccess) goto L_EE;
    bool CallFunc_IsLocallyControlled_ReturnValue = K2Node_DynamicCast_AsAthena_Player_Character->IsLocallyControlled();
    if (!CallFunc_IsLocallyControlled_ReturnValue) goto L_EE;
    Set Replaced World OOS Magic Box Hidden(true);
L_EE:
    return;
}

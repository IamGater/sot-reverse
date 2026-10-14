// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_cmn_cannonball_cur_fire_01_a_Wieldable_C::SetLightVisibility (216 bytes)
void BP_cmn_cannonball_cur_fire_01_a_Wieldable_C::SetLightVisibility()
{
    if (!Visibility) goto L_D5;
    bool CallFunc_GetIsFirstPerson_ReturnValue = AWieldableItem::GetIsFirstPerson();
    if (!CallFunc_GetIsFirstPerson_ReturnValue) goto L_9C;
L_9C:
L_D5:
    return;
}

// Recovered Kismet: BP_cmn_cannonball_cur_fire_01_a_Wieldable_C::OnRep_IsWielded (26 bytes)
void BP_cmn_cannonball_cur_fire_01_a_Wieldable_C::OnRep_IsWielded()
{
    SetLightVisibility(IsWielded);
    return;
}

// Recovered Kismet: BP_cmn_cannonball_cur_fire_01_a_Wieldable_C::UserConstructionScript (13 bytes)
void BP_cmn_cannonball_cur_fire_01_a_Wieldable_C::UserConstructionScript()
{
    this->UserConstructionScript();
    return;
}

// Recovered Kismet: BP_cmn_cannonball_cur_fire_01_a_Wieldable_C::ReceiveBeginPlay (22 bytes)
void BP_cmn_cannonball_cur_fire_01_a_Wieldable_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_cmn_cannonball_cur_fire_01_a_Wieldable();
    return;
}

// Recovered Kismet: BP_cmn_cannonball_cur_fire_01_a_Wieldable_C::OnIsWielded (40 bytes)
void BP_cmn_cannonball_cur_fire_01_a_Wieldable_C::OnIsWielded()
{
    ExecuteUbergraph_BP_cmn_cannonball_cur_fire_01_a_Wieldable();
    return;
}

// Recovered Kismet: BP_cmn_cannonball_cur_fire_01_a_Wieldable_C::ReceiveEndPlay (40 bytes)
void BP_cmn_cannonball_cur_fire_01_a_Wieldable_C::ReceiveEndPlay()
{
    ExecuteUbergraph_BP_cmn_cannonball_cur_fire_01_a_Wieldable();
    return;
}

// Recovered Kismet: BP_cmn_cannonball_cur_fire_01_a_Wieldable_C::ExecuteUbergraph_BP_cmn_cannonball_cur_fire_01_a_Wieldable (378 bytes)
void BP_cmn_cannonball_cur_fire_01_a_Wieldable_C::ExecuteUbergraph_BP_cmn_cannonball_cur_fire_01_a_Wieldable()
{
    OnRep_IsWielded();
    SetLightVisibility(IsWielded);
    auto CallFunc_FlushNetDormancy_ReturnValue = this->FlushNetDormancy();
    auto IsWielded = K2Node_CustomEvent_NewParam;
    bool CallFunc_IsServer_ReturnValue = UKismetSystemLibrary::IsServer();
    if (!CallFunc_IsServer_ReturnValue) goto L_AC;
L_AC:
    bool CallFunc_IsHandleRegistered_ReturnValue = UObjectMessagingFunctions::IsHandleRegistered(OnWieldedHandle);
    if (!CallFunc_IsHandleRegistered_ReturnValue) goto L_177;
L_177:
    return;
}

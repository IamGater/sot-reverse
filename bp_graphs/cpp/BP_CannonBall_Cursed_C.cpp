// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_CannonBall_Cursed_C::SetLightVisibility (216 bytes)
void BP_CannonBall_Cursed_C::SetLightVisibility()
{
    if (!Visibility) goto L_D5;
    bool CallFunc_GetIsFirstPerson_ReturnValue = AWieldableItem::GetIsFirstPerson();
    if (!CallFunc_GetIsFirstPerson_ReturnValue) goto L_9C;
L_9C:
L_D5:
    return;
}

// Recovered Kismet: BP_CannonBall_Cursed_C::OnRep_IsWielded (26 bytes)
void BP_CannonBall_Cursed_C::OnRep_IsWielded()
{
    SetLightVisibility(IsWielded);
    return;
}

// Recovered Kismet: BP_CannonBall_Cursed_C::UserConstructionScript (13 bytes)
void BP_CannonBall_Cursed_C::UserConstructionScript()
{
    this->UserConstructionScript();
    return;
}

// Recovered Kismet: BP_CannonBall_Cursed_C::ReceiveBeginPlay (22 bytes)
void BP_CannonBall_Cursed_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_CannonBall_Cursed();
    return;
}

// Recovered Kismet: BP_CannonBall_Cursed_C::OnIsWielded (40 bytes)
void BP_CannonBall_Cursed_C::OnIsWielded()
{
    ExecuteUbergraph_BP_CannonBall_Cursed();
    return;
}

// Recovered Kismet: BP_CannonBall_Cursed_C::ReceiveEndPlay (40 bytes)
void BP_CannonBall_Cursed_C::ReceiveEndPlay()
{
    ExecuteUbergraph_BP_CannonBall_Cursed();
    return;
}

// Recovered Kismet: BP_CannonBall_Cursed_C::ExecuteUbergraph_BP_CannonBall_Cursed (316 bytes)
void BP_CannonBall_Cursed_C::ExecuteUbergraph_BP_CannonBall_Cursed()
{
    OnRep_IsWielded();
    bool CallFunc_IsHandleRegistered_ReturnValue = UObjectMessagingFunctions::IsHandleRegistered(OnWieldedHandle);
    if (!CallFunc_IsHandleRegistered_ReturnValue) goto L_139;
    auto CallFunc_FlushNetDormancy_ReturnValue = this->FlushNetDormancy();
    auto IsWielded = K2Node_CustomEvent_NewParam;
    SetLightVisibility(IsWielded);
L_139:
    return;
}

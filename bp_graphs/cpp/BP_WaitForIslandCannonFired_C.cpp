// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_WaitForIslandCannonFired_C::OnIslandCAnnonFired (40 bytes)
void BP_WaitForIslandCannonFired_C::OnIslandCAnnonFired()
{
    ExecuteUbergraph_BP_WaitForIslandCannonFired();
    return;
}

// Recovered Kismet: BP_WaitForIslandCannonFired_C::OnParticipantJoin (40 bytes)
void BP_WaitForIslandCannonFired_C::OnParticipantJoin()
{
    ExecuteUbergraph_BP_WaitForIslandCannonFired();
    return;
}

// Recovered Kismet: BP_WaitForIslandCannonFired_C::OnParticipantLeave (40 bytes)
void BP_WaitForIslandCannonFired_C::OnParticipantLeave()
{
    ExecuteUbergraph_BP_WaitForIslandCannonFired();
    return;
}

// Recovered Kismet: BP_WaitForIslandCannonFired_C::ExecuteUbergraph_BP_WaitForIslandCannonFired (729 bytes)
void BP_WaitForIslandCannonFired_C::ExecuteUbergraph_BP_WaitForIslandCannonFired()
{
    this->SignalComplete();
    idx_229395* idx_229400 = Cast<idx_229395*>(K2Node_CustomEvent_Event);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_229400);
    if (!K2Node_DynamicCast_bSuccess) goto L_2D6;
    this->GetVariables(idx_227630);
    idx_229396* idx_229401 = Cast<idx_229396*>(idx_227630);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(idx_229401);
    if (!K2Node_DynamicCast_bSuccess2) goto L_2D6;
    AthenaPlayerCharacter* K2Node_DynamicCast_AsAthena_Player_Character = Cast<AthenaPlayerCharacter*>(idx_229307);
    bool K2Node_DynamicCast_bSuccess3 = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Character);
    if (!K2Node_DynamicCast_bSuccess3) goto L_2D6;
    AController* idx_229301 = K2Node_DynamicCast_AsAthena_Player_Character->GetController();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(idx_229301);
    AthenaPlayerCharacter* K2Node_DynamicCast_AsAthena_Player_Character2 = Cast<AthenaPlayerCharacter*>(idx_229306);
    bool K2Node_DynamicCast_bSuccess4 = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Character2);
    if (!K2Node_DynamicCast_bSuccess4) goto L_2D6;
    AController* idx_229302 = K2Node_DynamicCast_AsAthena_Player_Character2->GetController();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue2 = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(idx_229302);
L_2D6:
    return;
}

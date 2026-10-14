// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_WaitForCatchFish_C::OnFishCaught (40 bytes)
void BP_WaitForCatchFish_C::OnFishCaught()
{
    ExecuteUbergraph_BP_WaitForCatchFish();
    return;
}

// Recovered Kismet: BP_WaitForCatchFish_C::OnParticipantJoin (40 bytes)
void BP_WaitForCatchFish_C::OnParticipantJoin()
{
    ExecuteUbergraph_BP_WaitForCatchFish();
    return;
}

// Recovered Kismet: BP_WaitForCatchFish_C::OnParticipantLeave (40 bytes)
void BP_WaitForCatchFish_C::OnParticipantLeave()
{
    ExecuteUbergraph_BP_WaitForCatchFish();
    return;
}

// Recovered Kismet: BP_WaitForCatchFish_C::ExecuteUbergraph_BP_WaitForCatchFish (522 bytes)
void BP_WaitForCatchFish_C::ExecuteUbergraph_BP_WaitForCatchFish()
{
    AthenaPlayerCharacter* K2Node_DynamicCast_AsAthena_Player_Character = Cast<AthenaPlayerCharacter*>(K2Node_Event_Participant);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Character);
    if (!K2Node_DynamicCast_bSuccess) goto L_207;
    AController* CallFunc_GetController_ReturnValue = K2Node_DynamicCast_AsAthena_Player_Character->GetController();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetController_ReturnValue);
    this->SignalComplete();
    AthenaPlayerCharacter* K2Node_DynamicCast_AsAthena_Player_Character2 = Cast<AthenaPlayerCharacter*>(K2Node_Event_Participant2);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Character2);
    if (!K2Node_DynamicCast_bSuccess2) goto L_207;
    AController* idx_283287 = K2Node_DynamicCast_AsAthena_Player_Character2->GetController();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue2 = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(idx_283287);
L_207:
    return;
}

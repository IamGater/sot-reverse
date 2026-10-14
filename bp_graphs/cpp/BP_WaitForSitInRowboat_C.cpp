// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_WaitForSitInRowboat_C::OnPlayerInRowboat (40 bytes)
void BP_WaitForSitInRowboat_C::OnPlayerInRowboat()
{
    ExecuteUbergraph_BP_WaitForSitInRowboat();
    return;
}

// Recovered Kismet: BP_WaitForSitInRowboat_C::OnParticipantJoin (40 bytes)
void BP_WaitForSitInRowboat_C::OnParticipantJoin()
{
    ExecuteUbergraph_BP_WaitForSitInRowboat();
    return;
}

// Recovered Kismet: BP_WaitForSitInRowboat_C::OnParticipantLeave (40 bytes)
void BP_WaitForSitInRowboat_C::OnParticipantLeave()
{
    ExecuteUbergraph_BP_WaitForSitInRowboat();
    return;
}

// Recovered Kismet: BP_WaitForSitInRowboat_C::ExecuteUbergraph_BP_WaitForSitInRowboat (727 bytes)
void BP_WaitForSitInRowboat_C::ExecuteUbergraph_BP_WaitForSitInRowboat()
{
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    BP_PromptActor_MaidenVoyage_RowboatTutorial_C* idx_283343 = Cast<BP_PromptActor_MaidenVoyage_RowboatTutorial_C*>(CallFunc_GetVariables_OutStruct);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_283343);
    if (!K2Node_DynamicCast_bSuccess) goto L_2D4;
    AthenaPlayerCharacter* K2Node_DynamicCast_AsAthena_Player_Character = Cast<AthenaPlayerCharacter*>(K2Node_Event_Participant2);
    bool K2Node_DynamicCast_bSuccess3 = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Character);
    if (!K2Node_DynamicCast_bSuccess3) goto L_2D4;
    AController* CallFunc_GetController_ReturnValue = K2Node_DynamicCast_AsAthena_Player_Character->GetController();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetController_ReturnValue);
    RowingSeat* K2Node_DynamicCast_AsRowing_Seat = Cast<RowingSeat*>(K2Node_CustomEvent_Event);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(K2Node_DynamicCast_AsRowing_Seat);
    if (!K2Node_DynamicCast_bSuccess2) goto L_2D4;
    AthenaPlayerCharacter* K2Node_DynamicCast_AsAthena_Player_Character2 = Cast<AthenaPlayerCharacter*>(K2Node_Event_Participant);
    bool K2Node_DynamicCast_bSuccess4 = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Character2);
    if (!K2Node_DynamicCast_bSuccess4) goto L_2D4;
    AController* idx_283287 = K2Node_DynamicCast_AsAthena_Player_Character2->GetController();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue2 = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(idx_283287);
L_2D4:
    return;
}

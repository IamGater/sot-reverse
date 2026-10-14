// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_WaitForPlayerOnShip_C::OnPlayerEnteredShip (40 bytes)
void BP_WaitForPlayerOnShip_C::OnPlayerEnteredShip()
{
    ExecuteUbergraph_BP_WaitForPlayerOnShip();
    return;
}

// Recovered Kismet: BP_WaitForPlayerOnShip_C::OnParticipantJoin (40 bytes)
void BP_WaitForPlayerOnShip_C::OnParticipantJoin()
{
    ExecuteUbergraph_BP_WaitForPlayerOnShip();
    return;
}

// Recovered Kismet: BP_WaitForPlayerOnShip_C::OnParticipantLeave (40 bytes)
void BP_WaitForPlayerOnShip_C::OnParticipantLeave()
{
    ExecuteUbergraph_BP_WaitForPlayerOnShip();
    return;
}

// Recovered Kismet: BP_WaitForPlayerOnShip_C::ExecuteUbergraph_BP_WaitForPlayerOnShip (440 bytes)
void BP_WaitForPlayerOnShip_C::ExecuteUbergraph_BP_WaitForPlayerOnShip()
{
    this->SignalComplete();
    AthenaPlayerCharacter* K2Node_DynamicCast_AsAthena_Player_Character = Cast<AthenaPlayerCharacter*>(idx_229307);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Character);
    if (!K2Node_DynamicCast_bSuccess) goto L_1B5;
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(K2Node_DynamicCast_AsAthena_Player_Character);
    AthenaPlayerCharacter* K2Node_DynamicCast_AsAthena_Player_Character2 = Cast<AthenaPlayerCharacter*>(idx_229306);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Character2);
    if (!K2Node_DynamicCast_bSuccess2) goto L_1B5;
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue2 = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(K2Node_DynamicCast_AsAthena_Player_Character2);
L_1B5:
    return;
}

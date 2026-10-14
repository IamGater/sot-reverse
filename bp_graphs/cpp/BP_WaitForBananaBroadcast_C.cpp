// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_WaitForBananaBroadcast_C::OnBegin (40 bytes)
void BP_WaitForBananaBroadcast_C::OnBegin()
{
    ExecuteUbergraph_BP_WaitForBananaBroadcast();
    return;
}

// Recovered Kismet: BP_WaitForBananaBroadcast_C::BananaEaten (22 bytes)
void BP_WaitForBananaBroadcast_C::BananaEaten()
{
    ExecuteUbergraph_BP_WaitForBananaBroadcast();
    return;
}

// Recovered Kismet: BP_WaitForBananaBroadcast_C::OnCharacterDead (40 bytes)
void BP_WaitForBananaBroadcast_C::OnCharacterDead()
{
    ExecuteUbergraph_BP_WaitForBananaBroadcast();
    return;
}

// Recovered Kismet: BP_WaitForBananaBroadcast_C::OnEnd (22 bytes)
void BP_WaitForBananaBroadcast_C::OnEnd()
{
    ExecuteUbergraph_BP_WaitForBananaBroadcast();
    return;
}

// Recovered Kismet: BP_WaitForBananaBroadcast_C::ExecuteUbergraph_BP_WaitForBananaBroadcast (797 bytes)
void BP_WaitForBananaBroadcast_C::ExecuteUbergraph_BP_WaitForBananaBroadcast()
{
    this->GetVariables(idx_227630);
    idx_229248* idx_229256 = Cast<idx_229248*>(idx_227630);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_229256);
    if (!K2Node_DynamicCast_bSuccess) goto L_31A;
    UBlueprintStepBase::GetParticipants(idx_228863);
    AthenaPlayerCharacter* K2Node_DynamicCast_AsAthena_Player_Character = Cast<AthenaPlayerCharacter*>(CallFunc_Array_Get_Item);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Character);
    if (!K2Node_DynamicCast_bSuccess2) goto L_31A;
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(K2Node_DynamicCast_AsAthena_Player_Character);
    this->SignalComplete();
    this->SignalComplete();
    UBlueprintStepBase::GetParticipants(idx_229252);
    AthenaPlayerCharacter* K2Node_DynamicCast_AsAthena_Player_Character2 = Cast<AthenaPlayerCharacter*>(CallFunc_Array_Get_Item2);
    bool K2Node_DynamicCast_bSuccess3 = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Character2);
    if (!K2Node_DynamicCast_bSuccess3) goto L_31A;
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue2 = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(K2Node_DynamicCast_AsAthena_Player_Character2);
L_31A:
    return;
}

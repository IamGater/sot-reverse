// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_WaitForCookMeat_C::OnFoodInPotFunc (201 bytes)
void BP_WaitForCookMeat_C::OnFoodInPotFunc()
{
    UClass* CallFunc_GetObjectClass_ReturnValue = UGameplayStatics::GetObjectClass(this);
    auto CallFunc_NotEqual_ClassClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
    auto CallFunc_NotEqual_ClassClass_ReturnValue2 = CallFunc_GetObjectClass_ReturnValue;
    auto CallFunc_BooleanAND_ReturnValue = CallFunc_NotEqual_ClassClass_ReturnValue;
    if (!CallFunc_BooleanAND_ReturnValue) goto L_C6;
    this->SignalComplete();
L_C6:
    return;
}

// Recovered Kismet: BP_WaitForCookMeat_C::OnFoodInPot (40 bytes)
void BP_WaitForCookMeat_C::OnFoodInPot()
{
    ExecuteUbergraph_BP_WaitForCookMeat();
    return;
}

// Recovered Kismet: BP_WaitForCookMeat_C::OnParticipantJoin (40 bytes)
void BP_WaitForCookMeat_C::OnParticipantJoin()
{
    ExecuteUbergraph_BP_WaitForCookMeat();
    return;
}

// Recovered Kismet: BP_WaitForCookMeat_C::OnParticipantLeave (40 bytes)
void BP_WaitForCookMeat_C::OnParticipantLeave()
{
    ExecuteUbergraph_BP_WaitForCookMeat();
    return;
}

// Recovered Kismet: BP_WaitForCookMeat_C::ExecuteUbergraph_BP_WaitForCookMeat (529 bytes)
void BP_WaitForCookMeat_C::ExecuteUbergraph_BP_WaitForCookMeat()
{
    AthenaPlayerCharacter* K2Node_DynamicCast_AsAthena_Player_Character = Cast<AthenaPlayerCharacter*>(idx_229306);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Character);
    if (!K2Node_DynamicCast_bSuccess) goto L_20E;
    AController* idx_229301 = K2Node_DynamicCast_AsAthena_Player_Character->GetController();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(idx_229301);
    OnFoodInPotFunc(K2Node_CustomEvent_NewParam);
    AthenaPlayerCharacter* K2Node_DynamicCast_AsAthena_Player_Character2 = Cast<AthenaPlayerCharacter*>(idx_229307);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Character2);
    if (!K2Node_DynamicCast_bSuccess2) goto L_20E;
    AController* idx_229302 = K2Node_DynamicCast_AsAthena_Player_Character2->GetController();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue2 = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(idx_229302);
L_20E:
    return;
}

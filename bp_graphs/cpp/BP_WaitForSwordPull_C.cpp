// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_WaitForSwordPull_C::OnBegin (40 bytes)
void BP_WaitForSwordPull_C::OnBegin()
{
    ExecuteUbergraph_BP_WaitForSwordPull();
    return;
}

// Recovered Kismet: BP_WaitForSwordPull_C::OnSwordPull (40 bytes)
void BP_WaitForSwordPull_C::OnSwordPull()
{
    ExecuteUbergraph_BP_WaitForSwordPull();
    return;
}

// Recovered Kismet: BP_WaitForSwordPull_C::OnEnd (22 bytes)
void BP_WaitForSwordPull_C::OnEnd()
{
    ExecuteUbergraph_BP_WaitForSwordPull();
    return;
}

// Recovered Kismet: BP_WaitForSwordPull_C::ExecuteUbergraph_BP_WaitForSwordPull (774 bytes)
void BP_WaitForSwordPull_C::ExecuteUbergraph_BP_WaitForSwordPull()
{
    UBlueprintStepBase::GetParticipants(CallFunc_GetParticipants_Participants);
    AthenaPlayerCharacter* K2Node_DynamicCast_AsAthena_Player_Character = Cast<AthenaPlayerCharacter*>(CallFunc_Array_Get_Item);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Character);
    if (!K2Node_DynamicCast_bSuccess) goto L_303;
    AController* CallFunc_GetController_ReturnValue = K2Node_DynamicCast_AsAthena_Player_Character->GetController();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetController_ReturnValue);
    BP_MaidenVoyage_SkeletonTree_C* idx_283350 = Cast<BP_MaidenVoyage_SkeletonTree_C*>(K2Node_CustomEvent_Event);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(idx_283350);
    if (!K2Node_DynamicCast_bSuccess2) goto L_303;
    this->SignalComplete();
    UBlueprintStepBase::GetParticipants(idx_282682);
    AthenaPlayerCharacter* K2Node_DynamicCast_AsAthena_Player_Character2 = Cast<AthenaPlayerCharacter*>(CallFunc_Array_Get_Item2);
    bool K2Node_DynamicCast_bSuccess3 = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Character2);
    if (!K2Node_DynamicCast_bSuccess3) goto L_303;
    AController* idx_283287 = K2Node_DynamicCast_AsAthena_Player_Character2->GetController();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue2 = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(idx_283287);
L_303:
    return;
}

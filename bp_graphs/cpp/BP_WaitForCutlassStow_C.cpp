// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_WaitForCutlassStow_C::OnBegin (40 bytes)
void BP_WaitForCutlassStow_C::OnBegin()
{
    ExecuteUbergraph_BP_WaitForCutlassStow();
    return;
}

// Recovered Kismet: BP_WaitForCutlassStow_C::CutlassStowed (40 bytes)
void BP_WaitForCutlassStow_C::CutlassStowed()
{
    ExecuteUbergraph_BP_WaitForCutlassStow();
    return;
}

// Recovered Kismet: BP_WaitForCutlassStow_C::OnEnd (22 bytes)
void BP_WaitForCutlassStow_C::OnEnd()
{
    ExecuteUbergraph_BP_WaitForCutlassStow();
    return;
}

// Recovered Kismet: BP_WaitForCutlassStow_C::ExecuteUbergraph_BP_WaitForCutlassStow (917 bytes)
void BP_WaitForCutlassStow_C::ExecuteUbergraph_BP_WaitForCutlassStow()
{
    this->GetVariables(idx_227630);
    idx_229345* idx_229350 = Cast<idx_229345*>(idx_227630);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_229350);
    if (!K2Node_DynamicCast_bSuccess) goto L_1CE;
    UBlueprintStepBase::GetParticipants(idx_228863);
    AthenaPlayerCharacter* K2Node_DynamicCast_AsAthena_Player_Character = Cast<AthenaPlayerCharacter*>(CallFunc_Array_Get_Item);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Character);
    if (!K2Node_DynamicCast_bSuccess2) goto L_392;
    AController* idx_229301 = K2Node_DynamicCast_AsAthena_Player_Character->GetController();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(idx_229301);
L_1CE:
L_22C:
    this->SignalComplete();
    if (!K2Node_CustomEvent_Event) goto L_22C;
    UBlueprintStepBase::GetParticipants(idx_229252);
    AthenaPlayerCharacter* K2Node_DynamicCast_AsAthena_Player_Character2 = Cast<AthenaPlayerCharacter*>(CallFunc_Array_Get_Item2);
    bool K2Node_DynamicCast_bSuccess3 = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Character2);
    if (!K2Node_DynamicCast_bSuccess3) goto L_392;
    AController* idx_229302 = K2Node_DynamicCast_AsAthena_Player_Character2->GetController();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue2 = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(idx_229302);
L_392:
    return;
}

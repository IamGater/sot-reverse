// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_StarsOfAThief_BindDispatcherToVaulOpen_C::OnBegin (40 bytes)
void BP_StarsOfAThief_BindDispatcherToVaulOpen_C::OnBegin()
{
    ExecuteUbergraph_BP_StarsOfAThief_BindDispatcherToVaulOpen();
    return;
}

// Recovered Kismet: BP_StarsOfAThief_BindDispatcherToVaulOpen_C::ExecuteUbergraph_BP_StarsOfAThief_BindDispatcherToVaulOpen (1153 bytes)
void BP_StarsOfAThief_BindDispatcherToVaulOpen_C::ExecuteUbergraph_BP_StarsOfAThief_BindDispatcherToVaulOpen()
{
L_A:
    FString CallFunc_Concat_StrStr_ReturnValue = UKismetStringLibrary::Concat_StrStr();
L_C7:
    FString CallFunc_Concat_StrStr_ReturnValue2 = UKismetStringLibrary::Concat_StrStr();
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    auto CallFunc_GetVariables_OutStruct = CallFunc_GetVariables_OutStruct;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct);
    this->GetVariables(CallFunc_GetVariables_OutStruct2);
    BP_PuzzleVault_C* K2Node_DynamicCast_AsBP_Puzzle_Vault = Cast<BP_PuzzleVault_C*>(CallFunc_GetVariables_OutStruct2);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsBP_Puzzle_Vault);
    if (!K2Node_DynamicCast_bSuccess) goto L_C7;
    TArray<UActorComponent*> CallFunc_GetComponentsByClass_ReturnValue = K2Node_DynamicCast_AsBP_Puzzle_Vault->GetComponentsByClass(LockComponent);
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetComponentsByClass_ReturnValue);
    auto CallFunc_Greater_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue;
    if (!CallFunc_Greater_IntInt_ReturnValue) goto L_47E;
    auto CallFunc_GetTransform_ReturnValue = K2Node_DynamicCast_AsBP_Puzzle_Vault->this->GetTransform();
    auto CallFunc_SpawnActor_ReturnValue = this->SpawnActor(idx_284110, CallFunc_GetTransform_ReturnValue, false);
    BP_TaleLockDelegateTrackerProxy_C* idx_283414 = Cast<BP_TaleLockDelegateTrackerProxy_C*>(CallFunc_SpawnActor_ReturnValue);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(idx_283414);
    if (!K2Node_DynamicCast_bSuccess2) goto L_A;
    CallFunc_GetComponentsByClass_ReturnValue = K2Node_DynamicCast_AsBP_Puzzle_Vault->GetComponentsByClass(LockComponent);
L_47E:
    return;
}

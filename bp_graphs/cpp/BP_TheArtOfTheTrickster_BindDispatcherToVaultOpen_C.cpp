// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TheArtOfTheTrickster_BindDispatcherToVaultOpen_C::GetStepName (132 bytes)
void BP_TheArtOfTheTrickster_BindDispatcherToVaultOpen_C::GetStepName()
{
    UClass* CallFunc_GetObjectClass_ReturnValue = UGameplayStatics::GetObjectClass();
    FString CallFunc_GetClassDisplayName_ReturnValue = UKismetSystemLibrary::GetClassDisplayName(CallFunc_GetObjectClass_ReturnValue);
    return;
}

// Recovered Kismet: BP_TheArtOfTheTrickster_BindDispatcherToVaultOpen_C::OnBegin (40 bytes)
void BP_TheArtOfTheTrickster_BindDispatcherToVaultOpen_C::OnBegin()
{
    ExecuteUbergraph_BP_TheArtOfTheTrickster_BindDispatcherToVaultOpen();
    return;
}

// Recovered Kismet: BP_TheArtOfTheTrickster_BindDispatcherToVaultOpen_C::ExecuteUbergraph_BP_TheArtOfTheTrickster_BindDispatcherToVaultOpen (1203 bytes)
void BP_TheArtOfTheTrickster_BindDispatcherToVaultOpen_C::ExecuteUbergraph_BP_TheArtOfTheTrickster_BindDispatcherToVaultOpen()
{
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    auto CallFunc_GetVariables_OutStruct = CallFunc_GetVariables_OutStruct;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct);
L_60:
    GetStepName(CallFunc_GetStepName_Name);
    FString CallFunc_Concat_StrStr_ReturnValue = UKismetStringLibrary::Concat_StrStr(CallFunc_GetStepName_Name);
    this->GetVariables(CallFunc_GetVariables_OutStruct2);
    BP_PuzzleVault_C* K2Node_DynamicCast_AsBP_Puzzle_Vault = Cast<BP_PuzzleVault_C*>(CallFunc_GetVariables_OutStruct2);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsBP_Puzzle_Vault);
    if (!K2Node_DynamicCast_bSuccess) goto L_3DA;
    TArray<UActorComponent*> CallFunc_GetComponentsByClass_ReturnValue = K2Node_DynamicCast_AsBP_Puzzle_Vault->GetComponentsByClass(LockComponent);
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetComponentsByClass_ReturnValue);
    auto CallFunc_Greater_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue;
    if (!CallFunc_Greater_IntInt_ReturnValue) goto L_4B0;
    auto CallFunc_GetTransform_ReturnValue = K2Node_DynamicCast_AsBP_Puzzle_Vault->this->GetTransform();
    auto CallFunc_SpawnActor_ReturnValue = this->SpawnActor(idx_284469, CallFunc_GetTransform_ReturnValue, false);
    BP_TaleLockDelegateTrackerProxy_C* K2Node_DynamicCast_AsBP_Tale_Lock_Delegate_Tracker_Proxy = Cast<BP_TaleLockDelegateTrackerProxy_C*>(CallFunc_SpawnActor_ReturnValue);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(K2Node_DynamicCast_AsBP_Tale_Lock_Delegate_Tracker_Proxy);
    if (!K2Node_DynamicCast_bSuccess2) goto L_60;
    CallFunc_GetComponentsByClass_ReturnValue = K2Node_DynamicCast_AsBP_Puzzle_Vault->GetComponentsByClass(LockComponent);
L_3DA:
    GetStepName(CallFunc_GetStepName_Name2);
    FString CallFunc_Concat_StrStr_ReturnValue2 = UKismetStringLibrary::Concat_StrStr(CallFunc_GetStepName_Name2);
L_4B0:
    return;
}

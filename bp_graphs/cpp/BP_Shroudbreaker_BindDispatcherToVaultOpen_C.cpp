// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Shroudbreaker_BindDispatcherToVaultOpen_C::GetStepName (132 bytes)
void BP_Shroudbreaker_BindDispatcherToVaultOpen_C::GetStepName()
{
    UClass* CallFunc_GetObjectClass_ReturnValue = UGameplayStatics::GetObjectClass();
    FString CallFunc_GetClassDisplayName_ReturnValue = UKismetSystemLibrary::GetClassDisplayName(CallFunc_GetObjectClass_ReturnValue);
    return;
}

// Recovered Kismet: BP_Shroudbreaker_BindDispatcherToVaultOpen_C::OnBegin (40 bytes)
void BP_Shroudbreaker_BindDispatcherToVaultOpen_C::OnBegin()
{
    ExecuteUbergraph_BP_Shroudbreaker_BindDispatcherToVaultOpen();
    return;
}

// Recovered Kismet: BP_Shroudbreaker_BindDispatcherToVaultOpen_C::ExecuteUbergraph_BP_Shroudbreaker_BindDispatcherToVaultOpen (1203 bytes)
void BP_Shroudbreaker_BindDispatcherToVaultOpen_C::ExecuteUbergraph_BP_Shroudbreaker_BindDispatcherToVaultOpen()
{
L_A:
    GetStepName(CallFunc_GetStepName_Name);
    FString CallFunc_Concat_StrStr_ReturnValue = UKismetStringLibrary::Concat_StrStr(CallFunc_GetStepName_Name);
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    BP_PuzzleVault_C* K2Node_DynamicCast_AsBP_Puzzle_Vault = Cast<BP_PuzzleVault_C*>(CallFunc_GetVariables_OutStruct);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsBP_Puzzle_Vault);
    if (!K2Node_DynamicCast_bSuccess) goto L_A;
    TArray<UActorComponent*> CallFunc_GetComponentsByClass_ReturnValue = K2Node_DynamicCast_AsBP_Puzzle_Vault->GetComponentsByClass(LockComponent);
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetComponentsByClass_ReturnValue);
    auto CallFunc_Greater_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue;
    if (!CallFunc_Greater_IntInt_ReturnValue) goto L_4B0;
    auto CallFunc_GetTransform_ReturnValue = K2Node_DynamicCast_AsBP_Puzzle_Vault->this->GetTransform();
    auto CallFunc_SpawnActor_ReturnValue = this->SpawnActor(idx_283412, CallFunc_GetTransform_ReturnValue, false);
    BP_TaleLockDelegateTrackerProxy_C* idx_283414 = Cast<BP_TaleLockDelegateTrackerProxy_C*>(CallFunc_SpawnActor_ReturnValue);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(idx_283414);
    if (!K2Node_DynamicCast_bSuccess2) goto L_3D0;
    CallFunc_GetComponentsByClass_ReturnValue = K2Node_DynamicCast_AsBP_Puzzle_Vault->GetComponentsByClass(LockComponent);
    this->GetVariables(CallFunc_GetVariables_OutStruct2);
    auto CallFunc_GetVariables_OutStruct2 = CallFunc_GetVariables_OutStruct2;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct2);
    this->SignalComplete();
L_3D0:
    GetStepName(idx_283410);
    FString CallFunc_Concat_StrStr_ReturnValue2 = UKismetStringLibrary::Concat_StrStr(idx_283410);
L_4B0:
    return;
}

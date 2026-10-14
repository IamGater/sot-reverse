// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_CT_XMarks_InitialisePromptWhilstInRangeOfTargets_C::GetVectorsFromActors (481 bytes)
void BP_CT_XMarks_InitialisePromptWhilstInRangeOfTargets_C::GetVectorsFromActors()
{
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length();
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_174;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    FVector CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_Array_Get_Item->K2_GetActorLocation();
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(idx_282346, CallFunc_K2_GetActorLocation_ReturnValue);
L_174:
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_CT_XMarks_InitialisePromptWhilstInRangeOfTargets_C::OnBeginCustom (525 bytes)
void BP_CT_XMarks_InitialisePromptWhilstInRangeOfTargets_C::OnBeginCustom()
{
    AActor* CallFunc_SpawnPhasedActor_ReturnValue = UBlueprintStepBase::SpawnPhasedActor(PromptActor, CallFunc_MakeTransform_ReturnValue);
    BP_PromptActor_PromptWhilstInRangeOfTargets_C* idx_282351 = Cast<BP_PromptActor_PromptWhilstInRangeOfTargets_C*>(CallFunc_SpawnPhasedActor_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_282351);
    if (!K2Node_DynamicCast_bSuccess) goto L_20A;
    auto CallFunc_FlushNetDormancy_ReturnValue = idx_282351->this->FlushNetDormancy();
    GetVectorsFromActors(idx_282348);
    idx_282351 = idx_282351;
    auto CallFunc_FlushNetDormancy_ReturnValue3 = idx_282351->this->FlushNetDormancy();
    idx_282351 = idx_282351;
    auto CallFunc_FlushNetDormancy_ReturnValue2 = idx_282351->this->FlushNetDormancy();
    idx_282351 = idx_282351;
L_20A:
    return;
}

// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_CT_XMarks_InitialiseRecurringReturnToGoldhoarderPrompt_C::GetVectorsFromActorArray (481 bytes)
void BP_CT_XMarks_InitialiseRecurringReturnToGoldhoarderPrompt_C::GetVectorsFromActorArray()
{
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length();
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_174;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    FVector CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_Array_Get_Item->K2_GetActorLocation();
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(idx_282366, CallFunc_K2_GetActorLocation_ReturnValue);
L_174:
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_CT_XMarks_InitialiseRecurringReturnToGoldhoarderPrompt_C::OnBeginCustom (743 bytes)
void BP_CT_XMarks_InitialiseRecurringReturnToGoldhoarderPrompt_C::OnBeginCustom()
{
    AActor* CallFunc_SpawnPhasedActor_ReturnValue = UBlueprintStepBase::SpawnPhasedActor(PromptActor, CallFunc_MakeTransform_ReturnValue);
    BP_PromptActor_RecurringPromptWithExclusionZones_C* idx_282363 = Cast<BP_PromptActor_RecurringPromptWithExclusionZones_C*>(CallFunc_SpawnPhasedActor_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_282363);
    if (!K2Node_DynamicCast_bSuccess) goto L_2E4;
    auto CallFunc_FlushNetDormancy_ReturnValue = idx_282363->this->FlushNetDormancy();
    idx_282363 = idx_282363;
    auto CallFunc_FlushNetDormancy_ReturnValue5 = idx_282363->this->FlushNetDormancy();
    idx_282363 = idx_282363;
    auto CallFunc_FlushNetDormancy_ReturnValue4 = idx_282363->this->FlushNetDormancy();
    idx_282363 = idx_282363;
    GetVectorsFromActorArray(idx_282355);
    auto CallFunc_FlushNetDormancy_ReturnValue3 = idx_282363->this->FlushNetDormancy();
    idx_282363 = idx_282363;
    auto CallFunc_FlushNetDormancy_ReturnValue2 = idx_282363->this->FlushNetDormancy();
    idx_282363 = idx_282363;
L_2E4:
    return;
}

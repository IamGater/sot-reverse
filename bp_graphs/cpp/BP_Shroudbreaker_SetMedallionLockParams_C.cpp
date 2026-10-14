// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Shroudbreaker_SetMedallionLockParams_C::MakeMedallionMaterialArray (505 bytes)
void BP_Shroudbreaker_SetMedallionLockParams_C::MakeMedallionMaterialArray()
{
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(idx_283562);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_15D;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(Materials, CallFunc_Array_Get_Item);
L_15D:
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    auto CallFunc_GetVariables_OutStruct = CallFunc_GetVariables_OutStruct;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct);
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_Shroudbreaker_SetMedallionLockParams_C::OnBegin (40 bytes)
void BP_Shroudbreaker_SetMedallionLockParams_C::OnBegin()
{
    ExecuteUbergraph_BP_Shroudbreaker_SetMedallionLockParams();
    return;
}

// Recovered Kismet: BP_Shroudbreaker_SetMedallionLockParams_C::ExecuteUbergraph_BP_Shroudbreaker_SetMedallionLockParams (345 bytes)
void BP_Shroudbreaker_SetMedallionLockParams_C::ExecuteUbergraph_BP_Shroudbreaker_SetMedallionLockParams()
{
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    auto CallFunc_GetVariables_OutStruct = CallFunc_GetVariables_OutStruct;
    CallFunc_GetVariables_OutStruct = CallFunc_GetVariables_OutStruct;
    CallFunc_GetVariables_OutStruct = CallFunc_GetVariables_OutStruct;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct);
    MakeMedallionMaterialArray(CallFunc_GetVariables_OutStruct2);
    this->GetVariables(CallFunc_GetVariables_OutStruct2);
    auto CallFunc_GetTransform_ReturnValue = CallFunc_GetVariables_OutStruct2->this->GetTransform();
    AActor* CallFunc_SpawnPhasedActor_ReturnValue = UBlueprintStepBase::SpawnPhasedActor(Class, CallFunc_GetTransform_ReturnValue);
    return;
}

// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Shroudbreaker_SelectPagesForVault_C::OnBegin (40 bytes)
void BP_Shroudbreaker_SelectPagesForVault_C::OnBegin()
{
    ExecuteUbergraph_BP_Shroudbreaker_SelectPagesForVault();
    return;
}

// Recovered Kismet: BP_Shroudbreaker_SelectPagesForVault_C::ExecuteUbergraph_BP_Shroudbreaker_SelectPagesForVault (935 bytes)
void BP_Shroudbreaker_SelectPagesForVault_C::ExecuteUbergraph_BP_Shroudbreaker_SelectPagesForVault()
{
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    this->GetVariables(CallFunc_GetVariables_OutStruct3);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_Array_Get_Item);
    PuzzleVault* idx_283538 = Cast<PuzzleVault*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(idx_283538);
    auto CallFunc_EqualEqual_ObjectObject_ReturnValue = idx_283538;
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    auto CallFunc_GetVariables_OutStruct = CallFunc_GetVariables_OutStruct;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct);
    this->GetVariables(CallFunc_GetVariables_OutStruct4);
    auto CallFunc_GetVariables_OutStruct4 = CallFunc_GetVariables_OutStruct4;
    CallFunc_GetVariables_OutStruct4 = CallFunc_GetVariables_OutStruct4;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct4);
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetVariables_OutStruct2);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_349;
L_349:
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct2);
    return;
}

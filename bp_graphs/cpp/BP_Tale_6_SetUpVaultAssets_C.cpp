// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Tale_6_SetUpVaultAssets_C::OnBegin (40 bytes)
void BP_Tale_6_SetUpVaultAssets_C::OnBegin()
{
    ExecuteUbergraph_BP_Tale_6_SetUpVaultAssets();
    return;
}

// Recovered Kismet: BP_Tale_6_SetUpVaultAssets_C::ExecuteUbergraph_BP_Tale_6_SetUpVaultAssets (985 bytes)
void BP_Tale_6_SetUpVaultAssets_C::ExecuteUbergraph_BP_Tale_6_SetUpVaultAssets()
{
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetVariables_OutStruct);
    auto CallFunc_Not_PreBool_ReturnValue = Temp_bool_True_if_break_was_hit_Variable;
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto CallFunc_BooleanAND_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
    if (!CallFunc_BooleanAND_ReturnValue) goto L_318;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_Array_Get_Item);
    PuzzleVault* UniqueObjectNameForCooking_AsPuzzle_Vault = Cast<PuzzleVault*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsPuzzle_Vault);
    auto CallFunc_EqualEqual_ObjectObject_ReturnValue = UniqueObjectNameForCooking_AsPuzzle_Vault;
    this->GetVariables(CallFunc_GetVariables_OutStruct3);
    auto CallFunc_GetVariables_OutStruct3 = CallFunc_GetVariables_OutStruct3;
    CallFunc_GetVariables_OutStruct3 = CallFunc_GetVariables_OutStruct3;
    CallFunc_GetVariables_OutStruct3 = CallFunc_GetVariables_OutStruct3;
    CallFunc_GetVariables_OutStruct3 = CallFunc_GetVariables_OutStruct3;
    CallFunc_GetVariables_OutStruct3 = CallFunc_GetVariables_OutStruct3;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct3);
    bool Temp_bool_True_if_break_was_hit_Variable = true;
L_318:
    this->SignalComplete();
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    this->GetVariables(CallFunc_GetVariables_OutStruct2);
    auto idx_284464 = CallFunc_GetVariables_OutStruct2;
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    Temp_bool_True_if_break_was_hit_Variable = false;
    return;
}

// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TheArtOfTheTrickster_SelectVaultPages_C::OnBegin (40 bytes)
void BP_TheArtOfTheTrickster_SelectVaultPages_C::OnBegin()
{
    ExecuteUbergraph_BP_TheArtOfTheTrickster_SelectVaultPages();
    return;
}

// Recovered Kismet: BP_TheArtOfTheTrickster_SelectVaultPages_C::ExecuteUbergraph_BP_TheArtOfTheTrickster_SelectVaultPages (901 bytes)
void BP_TheArtOfTheTrickster_SelectVaultPages_C::ExecuteUbergraph_BP_TheArtOfTheTrickster_SelectVaultPages()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue2 = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_Array_Get_Item);
    PuzzleVault* UniqueObjectNameForCooking_AsPuzzle_Vault = Cast<PuzzleVault*>(CallFunc_Conv_AssetToObject_ReturnValue2);
    bool UniqueObjectNameForCooking_bSuccess2 = static_cast<bool>(UniqueObjectNameForCooking_AsPuzzle_Vault);
    auto CallFunc_EqualEqual_ObjectObject_ReturnValue = UniqueObjectNameForCooking_AsPuzzle_Vault;
    this->GetVariables(CallFunc_GetVariables_OutStruct2);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_Array_Get_Item);
    AActor* UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    auto CallFunc_GetVariables_OutStruct2 = CallFunc_GetVariables_OutStruct2;
    CallFunc_GetVariables_OutStruct2 = CallFunc_GetVariables_OutStruct2;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct2);
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetVariables_OutStruct3);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_32C;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
L_32C:
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct3);
    return;
}

// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_RevengeOfTheMorningstar_SetupVariables_C::OnBegin (40 bytes)
void BP_RevengeOfTheMorningstar_SetupVariables_C::OnBegin()
{
    ExecuteUbergraph_BP_RevengeOfTheMorningstar_SetupVariables();
    return;
}

// Recovered Kismet: BP_RevengeOfTheMorningstar_SetupVariables_C::ExecuteUbergraph_BP_RevengeOfTheMorningstar_SetupVariables (1529 bytes)
void BP_RevengeOfTheMorningstar_SetupVariables_C::ExecuteUbergraph_BP_RevengeOfTheMorningstar_SetupVariables()
{
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(idx_284820, CallFunc_Array_Get_Item);
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetVariables_OutStruct);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_18C;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
L_18C:
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_GetVariables_OutStruct);
    AActor* UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue2 = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_GetVariables_OutStruct);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue3 = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_GetVariables_OutStruct);
    AActor* UniqueObjectNameForCooking_AsActor2 = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue2);
    bool UniqueObjectNameForCooking_bSuccess2 = static_cast<bool>(UniqueObjectNameForCooking_AsActor2);
    AActor* UniqueObjectNameForCooking_AsActor3 = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue3);
    bool UniqueObjectNameForCooking_bSuccess3 = static_cast<bool>(UniqueObjectNameForCooking_AsActor3);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue4 = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_GetVariables_OutStruct);
    AActor* UniqueObjectNameForCooking_AsActor4 = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue4);
    bool UniqueObjectNameForCooking_bSuccess4 = static_cast<bool>(UniqueObjectNameForCooking_AsActor4);
    auto idx_285007 = idx_285007;
    idx_285007 = idx_285007;
    idx_285007 = idx_285007;
    idx_285007 = idx_285007;
    idx_285007 = idx_285007;
    idx_285007 = idx_285007;
    idx_285007 = idx_285007;
    idx_285007 = idx_285007;
    idx_285007 = idx_285007;
    idx_285007 = idx_285007;
    idx_285007 = idx_285007;
    idx_285007 = idx_285007;
    idx_285007 = idx_285007;
    idx_285007 = idx_285007;
    idx_285007 = idx_285007;
    idx_285007 = idx_285007;
    idx_285007 = idx_285007;
    UBlueprintStepBase::SetVariables(idx_285007);
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    return;
}

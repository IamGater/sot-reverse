// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Shroudbreaker_ResolveNPCLocations_C::OnBegin (40 bytes)
void BP_Shroudbreaker_ResolveNPCLocations_C::OnBegin()
{
    ExecuteUbergraph_BP_Shroudbreaker_ResolveNPCLocations();
    return;
}

// Recovered Kismet: BP_Shroudbreaker_ResolveNPCLocations_C::ExecuteUbergraph_BP_Shroudbreaker_ResolveNPCLocations (662 bytes)
void BP_Shroudbreaker_ResolveNPCLocations_C::ExecuteUbergraph_BP_Shroudbreaker_ResolveNPCLocations()
{
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_Array_Get_Item);
    AActor* UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(idx_283502, UniqueObjectNameForCooking_AsActor);
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetVariables_OutStruct);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_1EE;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
L_1EE:
    this->GetVariables(CallFunc_GetVariables_OutStruct2);
    auto CallFunc_GetVariables_OutStruct2 = CallFunc_GetVariables_OutStruct2;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct2);
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    return;
}

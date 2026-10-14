// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Shroudbreaker_SelectMedallionParams_C::OnBegin (40 bytes)
void BP_Shroudbreaker_SelectMedallionParams_C::OnBegin()
{
    ExecuteUbergraph_BP_Shroudbreaker_SelectMedallionParams();
    return;
}

// Recovered Kismet: BP_Shroudbreaker_SelectMedallionParams_C::ExecuteUbergraph_BP_Shroudbreaker_SelectMedallionParams (636 bytes)
void BP_Shroudbreaker_SelectMedallionParams_C::ExecuteUbergraph_BP_Shroudbreaker_SelectMedallionParams()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    auto CallFunc_GetVariables_OutStruct = CallFunc_GetVariables_OutStruct;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct);
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct2);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_Array_Get_Item);
    AActor* UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    auto idx_283527 = idx_283527;
    idx_283527 = idx_283527;
    idx_283527 = idx_283527;
    idx_283527 = idx_283527;
    UBlueprintStepBase::SetVariables(idx_283527);
    this->GetVariables(CallFunc_GetVariables_OutStruct3);
    return;
}

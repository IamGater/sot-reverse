// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_ChooseBriggsyChestLocation_C::OnBegin (40 bytes)
void BP_ChooseBriggsyChestLocation_C::OnBegin()
{
    ExecuteUbergraph_BP_ChooseBriggsyChestLocation();
    return;
}

// Recovered Kismet: BP_ChooseBriggsyChestLocation_C::ExecuteUbergraph_BP_ChooseBriggsyChestLocation (743 bytes)
void BP_ChooseBriggsyChestLocation_C::ExecuteUbergraph_BP_ChooseBriggsyChestLocation()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_Array_Get_Item);
    AActor* UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    auto CallFunc_GetVariables_OutStruct = CallFunc_GetVariables_OutStruct;
    CallFunc_GetVariables_OutStruct = CallFunc_GetVariables_OutStruct;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue2 = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_Array_Get_Item);
    AActor* UniqueObjectNameForCooking_AsActor2 = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue2);
    bool UniqueObjectNameForCooking_bSuccess2 = static_cast<bool>(UniqueObjectNameForCooking_AsActor2);
    auto idx_283975 = idx_283975;
    idx_283975 = idx_283975;
    idx_283975 = idx_283975;
    idx_283975 = idx_283975;
    idx_283975 = idx_283975;
    UBlueprintStepBase::SetVariables(idx_283975);
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct2);
    return;
}

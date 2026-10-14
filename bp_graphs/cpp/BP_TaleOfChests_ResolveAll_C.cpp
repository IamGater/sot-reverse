// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TaleOfChests_ResolveAll_C::OnBegin (40 bytes)
void BP_TaleOfChests_ResolveAll_C::OnBegin()
{
    idx:286012();
    return;
}

// Recovered Kismet: BP_TaleOfChests_ResolveAll_C::fn_idx_286012 (627 bytes)
void BP_TaleOfChests_ResolveAll_C::fn_idx_286012()
{
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    this->GetVariables(CallFunc_GetVariables_OutStruct2);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_GetVariables_OutStruct);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue2 = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_GetVariables_OutStruct);
    AActor* UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    AActor* UniqueObjectNameForCooking_AsActor2 = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue2);
    bool UniqueObjectNameForCooking_bSuccess2 = static_cast<bool>(UniqueObjectNameForCooking_AsActor2);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue3 = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_GetVariables_OutStruct);
    AActor* UniqueObjectNameForCooking_AsActor3 = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue3);
    bool UniqueObjectNameForCooking_bSuccess3 = static_cast<bool>(UniqueObjectNameForCooking_AsActor3);
    auto CallFunc_GetVariables_OutStruct2 = CallFunc_GetVariables_OutStruct2;
    CallFunc_GetVariables_OutStruct2 = CallFunc_GetVariables_OutStruct2;
    CallFunc_GetVariables_OutStruct2 = CallFunc_GetVariables_OutStruct2;
    CallFunc_GetVariables_OutStruct2 = CallFunc_GetVariables_OutStruct2;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct2);
    return;
}

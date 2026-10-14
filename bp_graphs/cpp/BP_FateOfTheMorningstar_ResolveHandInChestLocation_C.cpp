// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_FateOfTheMorningstar_ResolveHandInChestLocation_C::OnBegin (40 bytes)
void BP_FateOfTheMorningstar_ResolveHandInChestLocation_C::OnBegin()
{
    ExecuteUbergraph_BP_FateOfTheMorningstar_ResolveHandInChestLocation();
    return;
}

// Recovered Kismet: BP_FateOfTheMorningstar_ResolveHandInChestLocation_C::ExecuteUbergraph_BP_FateOfTheMorningstar_ResolveHandInChestLocation (243 bytes)
void BP_FateOfTheMorningstar_ResolveHandInChestLocation_C::ExecuteUbergraph_BP_FateOfTheMorningstar_ResolveHandInChestLocation()
{
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    this->GetVariables(CallFunc_GetVariables_OutStruct2);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_GetVariables_OutStruct);
    AActor* UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    auto CallFunc_GetVariables_OutStruct2 = CallFunc_GetVariables_OutStruct2;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct2);
    return;
}

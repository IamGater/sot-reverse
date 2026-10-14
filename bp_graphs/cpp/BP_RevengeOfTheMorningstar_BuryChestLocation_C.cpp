// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_RevengeOfTheMorningstar_BuryChestLocation_C::OnBegin (40 bytes)
void BP_RevengeOfTheMorningstar_BuryChestLocation_C::OnBegin()
{
    ExecuteUbergraph_BP_RevengeOfTheMorningstar_BuryChestLocation();
    return;
}

// Recovered Kismet: BP_RevengeOfTheMorningstar_BuryChestLocation_C::ExecuteUbergraph_BP_RevengeOfTheMorningstar_BuryChestLocation (319 bytes)
void BP_RevengeOfTheMorningstar_BuryChestLocation_C::ExecuteUbergraph_BP_RevengeOfTheMorningstar_BuryChestLocation()
{
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_GetVariables_OutStruct);
    AActor* UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    auto idx_284754 = idx_284754;
    idx_284754 = idx_284754;
    idx_284754 = idx_284754;
    idx_284754 = idx_284754;
    UBlueprintStepBase::SetVariables(idx_284754);
    return;
}

// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_RevengeOfTheMorningstar_BuryTrinket_Chalice_C::OnBegin (40 bytes)
void BP_RevengeOfTheMorningstar_BuryTrinket_Chalice_C::OnBegin()
{
    ExecuteUbergraph_BP_RevengeOfTheMorningstar_BuryTrinket_Chalice();
    return;
}

// Recovered Kismet: BP_RevengeOfTheMorningstar_BuryTrinket_Chalice_C::ExecuteUbergraph_BP_RevengeOfTheMorningstar_BuryTrinket_Chalice (279 bytes)
void BP_RevengeOfTheMorningstar_BuryTrinket_Chalice_C::ExecuteUbergraph_BP_RevengeOfTheMorningstar_BuryTrinket_Chalice()
{
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_GetVariables_OutStruct);
    AActor* UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    auto idx_284803 = idx_284803;
    idx_284803 = idx_284803;
    UBlueprintStepBase::SetVariables(idx_284803);
    return;
}

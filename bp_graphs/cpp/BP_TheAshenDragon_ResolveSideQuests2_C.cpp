// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TheAshenDragon_ResolveSideQuests2_C::OnBegin (40 bytes)
void BP_TheAshenDragon_ResolveSideQuests2_C::OnBegin()
{
    ExecuteUbergraph_BP_TheAshenDragon_ResolveSideQuests2();
    return;
}

// Recovered Kismet: BP_TheAshenDragon_ResolveSideQuests2_C::ExecuteUbergraph_BP_TheAshenDragon_ResolveSideQuests2 (466 bytes)
void BP_TheAshenDragon_ResolveSideQuests2_C::ExecuteUbergraph_BP_TheAshenDragon_ResolveSideQuests2()
{
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_GetVariables_OutStruct);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue2 = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_GetVariables_OutStruct);
    AActor* UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    AActor* idx_281811 = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue2);
    bool UniqueObjectNameForCooking_bSuccess2 = static_cast<bool>(idx_281811);
    auto idx_281808 = idx_281808;
    idx_281808 = idx_281808;
    idx_281808 = idx_281808;
    idx_281808 = idx_281808;
    UBlueprintStepBase::SetVariables(idx_281808);
    return;
}

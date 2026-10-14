// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TheAshenDragon_ResolveMarthaIsland_C::OnBegin (40 bytes)
void BP_TheAshenDragon_ResolveMarthaIsland_C::OnBegin()
{
    ExecuteUbergraph_BP_TheAshenDragon_ResolveMarthaIsland();
    return;
}

// Recovered Kismet: BP_TheAshenDragon_ResolveMarthaIsland_C::ExecuteUbergraph_BP_TheAshenDragon_ResolveMarthaIsland (252 bytes)
void BP_TheAshenDragon_ResolveMarthaIsland_C::ExecuteUbergraph_BP_TheAshenDragon_ResolveMarthaIsland()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(idx_281459);
    AActor* UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    auto CallFunc_GetVariables_OutStruct = CallFunc_GetVariables_OutStruct;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct);
    this->SignalComplete();
    this->GetVariables(idx_281459);
    return;
}

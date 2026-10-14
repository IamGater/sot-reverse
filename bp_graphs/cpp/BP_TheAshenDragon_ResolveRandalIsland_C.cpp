// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TheAshenDragon_ResolveRandalIsland_C::OnBegin (40 bytes)
void BP_TheAshenDragon_ResolveRandalIsland_C::OnBegin()
{
    ExecuteUbergraph_BP_TheAshenDragon_ResolveRandalIsland();
    return;
}

// Recovered Kismet: BP_TheAshenDragon_ResolveRandalIsland_C::ExecuteUbergraph_BP_TheAshenDragon_ResolveRandalIsland (252 bytes)
void BP_TheAshenDragon_ResolveRandalIsland_C::ExecuteUbergraph_BP_TheAshenDragon_ResolveRandalIsland()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_GetVariables_OutStruct2);
    AActor* UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    auto CallFunc_GetVariables_OutStruct = CallFunc_GetVariables_OutStruct;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct);
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct2);
    return;
}

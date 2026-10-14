// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TheAshenDragon_ResolveFinalIslandPendragonTriggerVolumeParams_C::OnBegin (40 bytes)
void BP_TheAshenDragon_ResolveFinalIslandPendragonTriggerVolumeParams_C::OnBegin()
{
    ExecuteUbergraph_BP_TheAshenDragon_ResolveFinalIslandPendragonTriggerVolumeParams();
    return;
}

// Recovered Kismet: BP_TheAshenDragon_ResolveFinalIslandPendragonTriggerVolumeParams_C::ExecuteUbergraph_BP_TheAshenDragon_ResolveFinalIslandPendragonTriggerVolumeParams (243 bytes)
void BP_TheAshenDragon_ResolveFinalIslandPendragonTriggerVolumeParams_C::ExecuteUbergraph_BP_TheAshenDragon_ResolveFinalIslandPendragonTriggerVolumeParams()
{
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    this->GetVariables(idx_281459);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_GetVariables_OutStruct);
    AActor* UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    auto idx_281459 = idx_281459;
    UBlueprintStepBase::SetVariables(idx_281459);
    return;
}

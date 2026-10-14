// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Shroudbreaker_ResolveCollectorsChestPosition_C::OnBegin (40 bytes)
void BP_Shroudbreaker_ResolveCollectorsChestPosition_C::OnBegin()
{
    ExecuteUbergraph_BP_Shroudbreaker_ResolveCollectorsChestPosition();
    return;
}

// Recovered Kismet: BP_Shroudbreaker_ResolveCollectorsChestPosition_C::ExecuteUbergraph_BP_Shroudbreaker_ResolveCollectorsChestPosition (347 bytes)
void BP_Shroudbreaker_ResolveCollectorsChestPosition_C::ExecuteUbergraph_BP_Shroudbreaker_ResolveCollectorsChestPosition()
{
    this->SignalComplete();
    this->GetVariables(idx_227630);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(idx_227630);
    AActor* UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    FVector CallFunc_K2_GetActorLocation_ReturnValue = UniqueObjectNameForCooking_AsActor->K2_GetActorLocation();
    auto idx_230463 = idx_230463;
    idx_230463 = idx_230463;
    idx_230463 = idx_230463;
    UBlueprintStepBase::SetVariables(idx_230463);
    return;
}

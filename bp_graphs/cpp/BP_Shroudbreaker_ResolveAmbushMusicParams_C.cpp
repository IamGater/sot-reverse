// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Shroudbreaker_ResolveAmbushMusicParams_C::OnBegin (40 bytes)
void BP_Shroudbreaker_ResolveAmbushMusicParams_C::OnBegin()
{
    ExecuteUbergraph_BP_Shroudbreaker_ResolveAmbushMusicParams();
    return;
}

// Recovered Kismet: BP_Shroudbreaker_ResolveAmbushMusicParams_C::ExecuteUbergraph_BP_Shroudbreaker_ResolveAmbushMusicParams (243 bytes)
void BP_Shroudbreaker_ResolveAmbushMusicParams_C::ExecuteUbergraph_BP_Shroudbreaker_ResolveAmbushMusicParams()
{
    this->SignalComplete();
    this->GetVariables(idx_227630);
    this->GetVariables(idx_227631);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(idx_227630);
    AActor* UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    auto idx_227631 = idx_227631;
    UBlueprintStepBase::SetVariables(idx_227631);
    return;
}

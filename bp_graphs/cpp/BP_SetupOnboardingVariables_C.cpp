// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_SetupOnboardingVariables_C::OnBegin (40 bytes)
void BP_SetupOnboardingVariables_C::OnBegin()
{
    ExecuteUbergraph_BP_SetupOnboardingVariables();
    return;
}

// Recovered Kismet: BP_SetupOnboardingVariables_C::ExecuteUbergraph_BP_SetupOnboardingVariables (1336 bytes)
void BP_SetupOnboardingVariables_C::ExecuteUbergraph_BP_SetupOnboardingVariables()
{
    this->SignalComplete();
    this->GetVariables(idx_227630);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(idx_227630);
    UObject* idx_227622 = UKismetSystemLibrary::Conv_AssetToObject(idx_227630);
    AActor* UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    AActor* idx_227664 = Cast<AActor*>(idx_227622);
    bool UniqueObjectNameForCooking_bSuccess2 = static_cast<bool>(idx_227664);
    UObject* idx_227623 = UKismetSystemLibrary::Conv_AssetToObject(idx_227630);
    UObject* idx_227624 = UKismetSystemLibrary::Conv_AssetToObject(idx_227630);
    AActor* idx_227665 = Cast<AActor*>(idx_227623);
    bool UniqueObjectNameForCooking_bSuccess3 = static_cast<bool>(idx_227665);
    AActor* idx_227666 = Cast<AActor*>(idx_227624);
    bool UniqueObjectNameForCooking_bSuccess4 = static_cast<bool>(idx_227666);
    UObject* idx_227625 = UKismetSystemLibrary::Conv_AssetToObject(idx_227630);
    AActor* idx_227667 = Cast<AActor*>(idx_227625);
    bool idx_227677 = static_cast<bool>(idx_227667);
    auto idx_229054 = idx_229054;
    idx_229054 = idx_229054;
    idx_229054 = idx_229054;
    idx_229054 = idx_229054;
    idx_229054 = idx_229054;
    idx_229054 = idx_229054;
    idx_229054 = idx_229054;
    idx_229054 = idx_229054;
    idx_229054 = idx_229054;
    idx_229054 = idx_229054;
    idx_229054 = idx_229054;
    idx_229054 = idx_229054;
    idx_229054 = idx_229054;
    idx_229054 = idx_229054;
    idx_229054 = idx_229054;
    idx_229054 = idx_229054;
    idx_229054 = idx_229054;
    idx_229054 = idx_229054;
    idx_229054 = idx_229054;
    idx_229054 = idx_229054;
    idx_229054 = idx_229054;
    idx_229054 = idx_229054;
    idx_229054 = idx_229054;
    idx_229054 = idx_229054;
    idx_229054 = idx_229054;
    idx_229054 = idx_229054;
    idx_229054 = idx_229054;
    idx_229054 = idx_229054;
    idx_229054 = idx_229054;
    idx_229054 = idx_229054;
    UBlueprintStepBase::SetVariables(idx_229054);
    return;
}

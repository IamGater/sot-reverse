// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_CursedRogue_SetBuriedChestParams_C::OnBegin (40 bytes)
void BP_CursedRogue_SetBuriedChestParams_C::OnBegin()
{
    ExecuteUbergraph_BP_CursedRogue_SetBuriedChestParams();
    return;
}

// Recovered Kismet: BP_CursedRogue_SetBuriedChestParams_C::ExecuteUbergraph_BP_CursedRogue_SetBuriedChestParams (334 bytes)
void BP_CursedRogue_SetBuriedChestParams_C::ExecuteUbergraph_BP_CursedRogue_SetBuriedChestParams()
{
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct2);
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_GetVariables_OutStruct);
    AActor* UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    auto idx_283749 = idx_283749;
    idx_283749 = idx_283749;
    idx_283749 = idx_283749;
    UBlueprintStepBase::SetVariables(idx_283749);
    return;
}

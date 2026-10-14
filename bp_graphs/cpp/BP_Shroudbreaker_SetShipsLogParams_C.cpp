// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Shroudbreaker_SetShipsLogParams_C::OnBegin (40 bytes)
void BP_Shroudbreaker_SetShipsLogParams_C::OnBegin()
{
    ExecuteUbergraph_BP_Shroudbreaker_SetShipsLogParams();
    return;
}

// Recovered Kismet: BP_Shroudbreaker_SetShipsLogParams_C::ExecuteUbergraph_BP_Shroudbreaker_SetShipsLogParams (308 bytes)
void BP_Shroudbreaker_SetShipsLogParams_C::ExecuteUbergraph_BP_Shroudbreaker_SetShipsLogParams()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    this->GetVariables(CallFunc_GetVariables_OutStruct2);
    auto idx_283582 = CallFunc_GetVariables_OutStruct2;
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_GetVariables_OutStruct);
    AActor* UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    auto idx_283580 = idx_283580;
    idx_283580 = idx_283580;
    UBlueprintStepBase::SetVariables(idx_283580);
    this->SignalComplete();
    return;
}

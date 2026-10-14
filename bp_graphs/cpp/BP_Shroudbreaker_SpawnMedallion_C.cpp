// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Shroudbreaker_SpawnMedallion_C::OnBegin (40 bytes)
void BP_Shroudbreaker_SpawnMedallion_C::OnBegin()
{
    ExecuteUbergraph_BP_Shroudbreaker_SpawnMedallion();
    return;
}

// Recovered Kismet: BP_Shroudbreaker_SpawnMedallion_C::ExecuteUbergraph_BP_Shroudbreaker_SpawnMedallion (308 bytes)
void BP_Shroudbreaker_SpawnMedallion_C::ExecuteUbergraph_BP_Shroudbreaker_SpawnMedallion()
{
    this->SignalComplete();
    this->GetVariables(idx_227630);
    auto CallFunc_GetTransform_ReturnValue = idx_227630->this->GetTransform();
    AActor* idx_230478 = UBlueprintStepBase::SpawnPhasedItem(idx_227630, CallFunc_GetTransform_ReturnValue, true, true);
    this->GetVariables(idx_227631);
    auto idx_227631 = idx_227631;
    UBlueprintStepBase::SetVariables(idx_227631);
    return;
}

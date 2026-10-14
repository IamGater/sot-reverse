// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Shroudbreaker_SpawnCollectorsChest_C::OnBegin (40 bytes)
void BP_Shroudbreaker_SpawnCollectorsChest_C::OnBegin()
{
    ExecuteUbergraph_BP_Shroudbreaker_SpawnCollectorsChest();
    return;
}

// Recovered Kismet: BP_Shroudbreaker_SpawnCollectorsChest_C::ExecuteUbergraph_BP_Shroudbreaker_SpawnCollectorsChest (238 bytes)
void BP_Shroudbreaker_SpawnCollectorsChest_C::ExecuteUbergraph_BP_Shroudbreaker_SpawnCollectorsChest()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    auto CallFunc_GetVariables_OutStruct = CallFunc_GetVariables_OutStruct;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct);
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct2);
    auto CallFunc_GetTransform_ReturnValue = CallFunc_GetVariables_OutStruct2->this->GetTransform();
    AActor* CallFunc_SpawnPhasedItem_ReturnValue = UBlueprintStepBase::SpawnPhasedItem(CallFunc_GetVariables_OutStruct2, CallFunc_GetTransform_ReturnValue, false, false);
    return;
}

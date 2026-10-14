// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_FateOfTheMorningstar_RemoveDingersChestFromCriticalActors_C::OnBegin (40 bytes)
void BP_FateOfTheMorningstar_RemoveDingersChestFromCriticalActors_C::OnBegin()
{
    ExecuteUbergraph_BP_FateOfTheMorningstar_RemoveDingersChestFromCriticalActors();
    return;
}

// Recovered Kismet: BP_FateOfTheMorningstar_RemoveDingersChestFromCriticalActors_C::ExecuteUbergraph_BP_FateOfTheMorningstar_RemoveDingersChestFromCriticalActors (204 bytes)
void BP_FateOfTheMorningstar_RemoveDingersChestFromCriticalActors_C::ExecuteUbergraph_BP_FateOfTheMorningstar_RemoveDingersChestFromCriticalActors()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    UBlueprintStepBase::MarkActorAsNonCritical(CallFunc_GetVariables_OutStruct);
    BP_LockedFateoftheMorningstarChest_ItemInfo_C* idx_284643 = Cast<BP_LockedFateoftheMorningstarChest_ItemInfo_C*>(CallFunc_GetVariables_OutStruct);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_284643);
    if (!K2Node_DynamicCast_bSuccess) goto L_C9;
    this->SignalComplete();
L_C9:
    return;
}

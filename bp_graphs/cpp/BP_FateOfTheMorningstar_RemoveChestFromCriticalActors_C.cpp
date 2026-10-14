// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_FateOfTheMorningstar_RemoveChestFromCriticalActors_C::OnBegin (40 bytes)
void BP_FateOfTheMorningstar_RemoveChestFromCriticalActors_C::OnBegin()
{
    ExecuteUbergraph_BP_FateOfTheMorningstar_RemoveChestFromCriticalActors();
    return;
}

// Recovered Kismet: BP_FateOfTheMorningstar_RemoveChestFromCriticalActors_C::ExecuteUbergraph_BP_FateOfTheMorningstar_RemoveChestFromCriticalActors (80 bytes)
void BP_FateOfTheMorningstar_RemoveChestFromCriticalActors_C::ExecuteUbergraph_BP_FateOfTheMorningstar_RemoveChestFromCriticalActors()
{
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    UBlueprintStepBase::MarkActorAsNonCritical(CallFunc_GetVariables_OutStruct);
    return;
}

// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_SetupSpawner_C::OnBegin (40 bytes)
void BP_SetupSpawner_C::OnBegin()
{
    ExecuteUbergraph_BP_SetupSpawner();
    return;
}

// Recovered Kismet: BP_SetupSpawner_C::ExecuteUbergraph_BP_SetupSpawner (156 bytes)
void BP_SetupSpawner_C::ExecuteUbergraph_BP_SetupSpawner()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    FVector CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_GetVariables_OutStruct->K2_GetActorLocation();
    auto CallFunc_GetVariables_OutStruct = CallFunc_GetVariables_OutStruct;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct);
    this->SignalComplete();
    return;
}

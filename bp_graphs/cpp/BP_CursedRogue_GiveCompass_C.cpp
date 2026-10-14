// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_CursedRogue_GiveCompass_C::OnBegin (40 bytes)
void BP_CursedRogue_GiveCompass_C::OnBegin()
{
    ExecuteUbergraph_BP_CursedRogue_GiveCompass();
    return;
}

// Recovered Kismet: BP_CursedRogue_GiveCompass_C::ExecuteUbergraph_BP_CursedRogue_GiveCompass (80 bytes)
void BP_CursedRogue_GiveCompass_C::ExecuteUbergraph_BP_CursedRogue_GiveCompass()
{
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    UBlueprintStepBase::GiveCompassToAllParticipants(CallFunc_GetVariables_OutStruct);
    return;
}

// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_AshenLordEncounter_MusicZone_Phase1_C::OnRep_IsInVulnerableState (230 bytes)
void BP_AshenLordEncounter_MusicZone_Phase1_C::OnRep_IsInVulnerableState()
{
    auto idx_231597 = idx_231592->GetEmitter();
    if (!idx_231603) goto L_96;
    bool idx_231599 = UWwiseEmitterBlueprintLibrary::WwiseEmitterSetSwitch(idx_231597);
L_96:
    bool idx_231598 = UWwiseEmitterBlueprintLibrary::WwiseEmitterSetSwitch(idx_231597);
    return;
}

// Recovered Kismet: BP_AshenLordEncounter_MusicZone_Phase1_C::UserConstructionScript (3 bytes)
void BP_AshenLordEncounter_MusicZone_Phase1_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_AshenLordEncounter_MusicZone_Phase1_C::OnVulnerabilityStateEntered (22 bytes)
void BP_AshenLordEncounter_MusicZone_Phase1_C::OnVulnerabilityStateEntered()
{
    ExecuteUbergraph_BP_AshenLordEncounter_MusicZone_Phase1();
    return;
}

// Recovered Kismet: BP_AshenLordEncounter_MusicZone_Phase1_C::ExecuteUbergraph_BP_AshenLordEncounter_MusicZone_Phase1 (73 bytes)
void BP_AshenLordEncounter_MusicZone_Phase1_C::ExecuteUbergraph_BP_AshenLordEncounter_MusicZone_Phase1()
{
    bool idx_231603 = true;
    OnRep_IsInVulnerableState();
    auto CallFunc_FlushNetDormancy_ReturnValue = this->FlushNetDormancy();
    return;
}

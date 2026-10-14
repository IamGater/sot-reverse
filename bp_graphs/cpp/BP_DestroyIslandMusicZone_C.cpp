// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_DestroyIslandMusicZone_C::OnBegin (40 bytes)
void BP_DestroyIslandMusicZone_C::OnBegin()
{
    ExecuteUbergraph_BP_DestroyIslandMusicZone();
    return;
}

// Recovered Kismet: BP_DestroyIslandMusicZone_C::ExecuteUbergraph_BP_DestroyIslandMusicZone (161 bytes)
void BP_DestroyIslandMusicZone_C::ExecuteUbergraph_BP_DestroyIslandMusicZone()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(CallFunc_GetVariables_OutStruct);
    if (!CallFunc_IsValid_ReturnValue) goto L_94;
L_94:
    this->SignalComplete();
    return;
}

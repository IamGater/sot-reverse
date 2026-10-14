// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TheAshenDragon_WaitForTriggerBroadcastFinalIsland_C::OnBegin (40 bytes)
void BP_TheAshenDragon_WaitForTriggerBroadcastFinalIsland_C::OnBegin()
{
    ExecuteUbergraph_BP_TheAshenDragon_WaitForTriggerBroadcastFinalIsland();
    return;
}

// Recovered Kismet: BP_TheAshenDragon_WaitForTriggerBroadcastFinalIsland_C::Player Entered Trigger (40 bytes)
void BP_TheAshenDragon_WaitForTriggerBroadcastFinalIsland_C::Player Entered Trigger()
{
    ExecuteUbergraph_BP_TheAshenDragon_WaitForTriggerBroadcastFinalIsland();
    return;
}

// Recovered Kismet: BP_TheAshenDragon_WaitForTriggerBroadcastFinalIsland_C::ExecuteUbergraph_BP_TheAshenDragon_WaitForTriggerBroadcastFinalIsland (327 bytes)
void BP_TheAshenDragon_WaitForTriggerBroadcastFinalIsland_C::ExecuteUbergraph_BP_TheAshenDragon_WaitForTriggerBroadcastFinalIsland()
{
    UBlueprintStepBase::GetParticipants(idx_281947);
    bool CallFunc_Array_Contains_ReturnValue = UKismetArrayLibrary::Array_Contains(idx_281947, idx_281950);
    if (!CallFunc_Array_Contains_ReturnValue) goto L_144;
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
L_144:
    return;
}

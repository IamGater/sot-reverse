// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TheAshenDragon_WaitForEnterIslandDirectlyTriggerBroadcast_C::OnBegin (40 bytes)
void BP_TheAshenDragon_WaitForEnterIslandDirectlyTriggerBroadcast_C::OnBegin()
{
    ExecuteUbergraph_BP_TheAshenDragon_WaitForEnterIslandDirectlyTriggerBroadcast();
    return;
}

// Recovered Kismet: BP_TheAshenDragon_WaitForEnterIslandDirectlyTriggerBroadcast_C::OnPlayerEnteredTrigger (40 bytes)
void BP_TheAshenDragon_WaitForEnterIslandDirectlyTriggerBroadcast_C::OnPlayerEnteredTrigger()
{
    ExecuteUbergraph_BP_TheAshenDragon_WaitForEnterIslandDirectlyTriggerBroadcast();
    return;
}

// Recovered Kismet: BP_TheAshenDragon_WaitForEnterIslandDirectlyTriggerBroadcast_C::ExecuteUbergraph_BP_TheAshenDragon_WaitForEnterIslandDirectlyTriggerBroadcast (335 bytes)
void BP_TheAshenDragon_WaitForEnterIslandDirectlyTriggerBroadcast_C::ExecuteUbergraph_BP_TheAshenDragon_WaitForEnterIslandDirectlyTriggerBroadcast()
{
    UBlueprintStepBase::GetParticipants(idx_281947);
    bool CallFunc_Array_Contains_ReturnValue = UKismetArrayLibrary::Array_Contains(idx_281947, idx_281950);
    if (!CallFunc_Array_Contains_ReturnValue) goto L_14C;
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
L_14C:
    return;
}

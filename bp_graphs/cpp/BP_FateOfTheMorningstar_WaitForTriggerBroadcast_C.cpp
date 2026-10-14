// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_FateOfTheMorningstar_WaitForTriggerBroadcast_C::OnBegin (40 bytes)
void BP_FateOfTheMorningstar_WaitForTriggerBroadcast_C::OnBegin()
{
    ExecuteUbergraph_BP_FateOfTheMorningstar_WaitForTriggerBroadcast();
    return;
}

// Recovered Kismet: BP_FateOfTheMorningstar_WaitForTriggerBroadcast_C::Player Entered Trigger (40 bytes)
void BP_FateOfTheMorningstar_WaitForTriggerBroadcast_C::Player Entered Trigger()
{
    ExecuteUbergraph_BP_FateOfTheMorningstar_WaitForTriggerBroadcast();
    return;
}

// Recovered Kismet: BP_FateOfTheMorningstar_WaitForTriggerBroadcast_C::ExecuteUbergraph_BP_FateOfTheMorningstar_WaitForTriggerBroadcast (342 bytes)
void BP_FateOfTheMorningstar_WaitForTriggerBroadcast_C::ExecuteUbergraph_BP_FateOfTheMorningstar_WaitForTriggerBroadcast()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    this->SignalComplete();
    UBlueprintStepBase::GetParticipants(CallFunc_GetParticipants_Participants);
    bool CallFunc_Array_Contains_ReturnValue = UKismetArrayLibrary::Array_Contains(CallFunc_GetParticipants_Participants, K2Node_CustomEvent_PlayerCharacter);
    if (!CallFunc_Array_Contains_ReturnValue) goto L_153;
L_153:
    return;
}

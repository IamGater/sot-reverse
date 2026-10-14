// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TheAshenDragon_WaitForSarcophagusInteraction_C::OnBegin (40 bytes)
void BP_TheAshenDragon_WaitForSarcophagusInteraction_C::OnBegin()
{
    ExecuteUbergraph_BP_TheAshenDragon_WaitForSarcophagusInteraction();
    return;
}

// Recovered Kismet: BP_TheAshenDragon_WaitForSarcophagusInteraction_C::SarcophagusOpenedEvent (40 bytes)
void BP_TheAshenDragon_WaitForSarcophagusInteraction_C::SarcophagusOpenedEvent()
{
    ExecuteUbergraph_BP_TheAshenDragon_WaitForSarcophagusInteraction();
    return;
}

// Recovered Kismet: BP_TheAshenDragon_WaitForSarcophagusInteraction_C::ExecuteUbergraph_BP_TheAshenDragon_WaitForSarcophagusInteraction (249 bytes)
void BP_TheAshenDragon_WaitForSarcophagusInteraction_C::ExecuteUbergraph_BP_TheAshenDragon_WaitForSarcophagusInteraction()
{
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetVariables_OutStruct);
    return;
}

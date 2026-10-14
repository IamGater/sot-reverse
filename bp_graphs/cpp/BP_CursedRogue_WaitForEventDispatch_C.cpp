// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_CursedRogue_WaitForEventDispatch_C::OnBegin (40 bytes)
void BP_CursedRogue_WaitForEventDispatch_C::OnBegin()
{
    ExecuteUbergraph_BP_CursedRogue_WaitForEventDispatch();
    return;
}

// Recovered Kismet: BP_CursedRogue_WaitForEventDispatch_C::On Broadcast Received (22 bytes)
void BP_CursedRogue_WaitForEventDispatch_C::On Broadcast Received()
{
    ExecuteUbergraph_BP_CursedRogue_WaitForEventDispatch();
    return;
}

// Recovered Kismet: BP_CursedRogue_WaitForEventDispatch_C::ExecuteUbergraph_BP_CursedRogue_WaitForEventDispatch (372 bytes)
void BP_CursedRogue_WaitForEventDispatch_C::ExecuteUbergraph_BP_CursedRogue_WaitForEventDispatch()
{
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    BP_TaleEventDispatcherProxy_C* idx_283436 = Cast<BP_TaleEventDispatcherProxy_C*>(CallFunc_GetVariables_OutStruct);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_283436);
    if (!K2Node_DynamicCast_bSuccess) goto L_C9;
L_C9:
    return;
}

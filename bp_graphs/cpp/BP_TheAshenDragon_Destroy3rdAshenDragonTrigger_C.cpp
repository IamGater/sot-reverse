// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TheAshenDragon_Destroy3rdAshenDragonTrigger_C::OnBegin (40 bytes)
void BP_TheAshenDragon_Destroy3rdAshenDragonTrigger_C::OnBegin()
{
    ExecuteUbergraph_BP_TheAshenDragon_Destroy3rdAshenDragonTrigger();
    return;
}

// Recovered Kismet: BP_TheAshenDragon_Destroy3rdAshenDragonTrigger_C::ExecuteUbergraph_BP_TheAshenDragon_Destroy3rdAshenDragonTrigger (161 bytes)
void BP_TheAshenDragon_Destroy3rdAshenDragonTrigger_C::ExecuteUbergraph_BP_TheAshenDragon_Destroy3rdAshenDragonTrigger()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(CallFunc_GetVariables_OutStruct);
    if (!CallFunc_IsValid_ReturnValue) goto L_94;
L_94:
    this->SignalComplete();
    return;
}

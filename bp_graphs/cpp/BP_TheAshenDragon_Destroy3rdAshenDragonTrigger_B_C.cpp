// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TheAshenDragon_Destroy3rdAshenDragonTrigger_B_C::OnBegin (40 bytes)
void BP_TheAshenDragon_Destroy3rdAshenDragonTrigger_B_C::OnBegin()
{
    ExecuteUbergraph_BP_TheAshenDragon_Destroy3rdAshenDragonTrigger_B();
    return;
}

// Recovered Kismet: BP_TheAshenDragon_Destroy3rdAshenDragonTrigger_B_C::ExecuteUbergraph_BP_TheAshenDragon_Destroy3rdAshenDragonTrigger_B (161 bytes)
void BP_TheAshenDragon_Destroy3rdAshenDragonTrigger_B_C::ExecuteUbergraph_BP_TheAshenDragon_Destroy3rdAshenDragonTrigger_B()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(CallFunc_GetVariables_OutStruct);
    if (!CallFunc_IsValid_ReturnValue) goto L_94;
L_94:
    this->SignalComplete();
    return;
}

// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TheAshenDragon_SetPendragonVisible_C::OnBegin (40 bytes)
void BP_TheAshenDragon_SetPendragonVisible_C::OnBegin()
{
    ExecuteUbergraph_BP_TheAshenDragon_SetPendragonVisible();
    return;
}

// Recovered Kismet: BP_TheAshenDragon_SetPendragonVisible_C::ExecuteUbergraph_BP_TheAshenDragon_SetPendragonVisible (294 bytes)
void BP_TheAshenDragon_SetPendragonVisible_C::ExecuteUbergraph_BP_TheAshenDragon_SetPendragonVisible()
{
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(CallFunc_GetVariables_OutStruct);
    if (!CallFunc_IsValid_ReturnValue) goto L_123;
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetVariables_OutStruct);
    auto idx_281886 = idx_281886;
L_123:
    return;
}

// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TheAshenDragon_SetPendragonVisible2_C::OnBegin (40 bytes)
void BP_TheAshenDragon_SetPendragonVisible2_C::OnBegin()
{
    ExecuteUbergraph_BP_TheAshenDragon_SetPendragonVisible2();
    return;
}

// Recovered Kismet: BP_TheAshenDragon_SetPendragonVisible2_C::ExecuteUbergraph_BP_TheAshenDragon_SetPendragonVisible2 (294 bytes)
void BP_TheAshenDragon_SetPendragonVisible2_C::ExecuteUbergraph_BP_TheAshenDragon_SetPendragonVisible2()
{
    this->SignalComplete();
    this->GetVariables(idx_227630);
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(idx_227630);
    if (!CallFunc_IsValid_ReturnValue) goto L_123;
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(idx_227630);
    auto idx_227763 = idx_227763;
L_123:
    return;
}

// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TheAshenDragon_DestroyInitialPendragon_C::OnBegin (40 bytes)
void BP_TheAshenDragon_DestroyInitialPendragon_C::OnBegin()
{
    ExecuteUbergraph_BP_TheAshenDragon_DestroyInitialPendragon();
    return;
}

// Recovered Kismet: BP_TheAshenDragon_DestroyInitialPendragon_C::ExecuteUbergraph_BP_TheAshenDragon_DestroyInitialPendragon (394 bytes)
void BP_TheAshenDragon_DestroyInitialPendragon_C::ExecuteUbergraph_BP_TheAshenDragon_DestroyInitialPendragon()
{
    this->Delay();
L_72:
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(CallFunc_GetVariables_OutStruct);
    if (!CallFunc_IsValid_ReturnValue) goto L_72;
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetVariables_OutStruct);
    auto idx_281656 = idx_281656;
    return;
}

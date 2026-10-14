// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_PirateLord_Appear_C::OnBegin (40 bytes)
void BP_PirateLord_Appear_C::OnBegin()
{
    ExecuteUbergraph_BP_PirateLord_Appear();
    return;
}

// Recovered Kismet: BP_PirateLord_Appear_C::ExecuteUbergraph_BP_PirateLord_Appear (294 bytes)
void BP_PirateLord_Appear_C::ExecuteUbergraph_BP_PirateLord_Appear()
{
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(CallFunc_GetVariables_OutStruct);
    if (!CallFunc_IsValid_ReturnValue) goto L_123;
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetVariables_OutStruct);
    auto idx_283124 = idx_283124;
L_123:
    return;
}

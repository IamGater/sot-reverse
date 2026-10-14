// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_DestroyDingerChestVO_C::OnBegin (40 bytes)
void BP_DestroyDingerChestVO_C::OnBegin()
{
    ExecuteUbergraph_BP_DestroyDingerChestVO();
    return;
}

// Recovered Kismet: BP_DestroyDingerChestVO_C::ExecuteUbergraph_BP_DestroyDingerChestVO (206 bytes)
void BP_DestroyDingerChestVO_C::ExecuteUbergraph_BP_DestroyDingerChestVO()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(CallFunc_GetVariables_OutStruct);
    if (!CallFunc_IsValid_ReturnValue) goto L_C1;
L_C1:
    this->SignalComplete();
    return;
}

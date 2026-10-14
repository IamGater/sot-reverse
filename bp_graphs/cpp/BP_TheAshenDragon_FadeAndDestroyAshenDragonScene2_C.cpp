// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TheAshenDragon_FadeAndDestroyAshenDragonScene2_C::OnBegin (40 bytes)
void BP_TheAshenDragon_FadeAndDestroyAshenDragonScene2_C::OnBegin()
{
    ExecuteUbergraph_BP_TheAshenDragon_FadeAndDestroyAshenDragonScene2();
    return;
}

// Recovered Kismet: BP_TheAshenDragon_FadeAndDestroyAshenDragonScene2_C::ExecuteUbergraph_BP_TheAshenDragon_FadeAndDestroyAshenDragonScene2 (256 bytes)
void BP_TheAshenDragon_FadeAndDestroyAshenDragonScene2_C::ExecuteUbergraph_BP_TheAshenDragon_FadeAndDestroyAshenDragonScene2()
{
L_A:
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(CallFunc_GetVariables_OutStruct);
    if (!CallFunc_IsValid_ReturnValue) goto L_A;
    BP_ghost_ship_scene_C* idx_281687 = Cast<BP_ghost_ship_scene_C*>(CallFunc_GetVariables_OutStruct);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_281687);
    if (!K2Node_DynamicCast_bSuccess) goto L_A;
    return;
}

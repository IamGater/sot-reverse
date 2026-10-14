// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Shroudbreaker_DeleteCaveMusicActor_C::OnBegin (40 bytes)
void BP_Shroudbreaker_DeleteCaveMusicActor_C::OnBegin()
{
    ExecuteUbergraph_BP_Shroudbreaker_DeleteCaveMusicActor();
    return;
}

// Recovered Kismet: BP_Shroudbreaker_DeleteCaveMusicActor_C::ExecuteUbergraph_BP_Shroudbreaker_DeleteCaveMusicActor (176 bytes)
void BP_Shroudbreaker_DeleteCaveMusicActor_C::ExecuteUbergraph_BP_Shroudbreaker_DeleteCaveMusicActor()
{
L_A:
    this->SignalComplete();
    this->GetVariables(idx_227630);
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(idx_227630);
    if (!CallFunc_IsValid_ReturnValue) goto L_A;
    return;
}

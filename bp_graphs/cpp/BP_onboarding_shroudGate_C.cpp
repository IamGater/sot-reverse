// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_onboarding_shroudGate_C::StopReaction (61 bytes)
void BP_onboarding_shroudGate_C::StopReaction()
{
    auto CallFunc_StopReaction_ReturnValue = this->StopReaction();
    AActor::SetActorTickEnabled(false);
    return;
}

// Recovered Kismet: BP_onboarding_shroudGate_C::StartReaction (61 bytes)
void BP_onboarding_shroudGate_C::StartReaction()
{
    auto idx_285286 = this->StartReaction();
    AActor::SetActorTickEnabled(true);
    return;
}

// Recovered Kismet: BP_onboarding_shroudGate_C::UserConstructionScript (3 bytes)
void BP_onboarding_shroudGate_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_onboarding_shroudGate_C::GateOpen__FinishedFunc (22 bytes)
void BP_onboarding_shroudGate_C::GateOpen__FinishedFunc()
{
    ExecuteUbergraph_BP_onboarding_shroudGate();
    return;
}

// Recovered Kismet: BP_onboarding_shroudGate_C::GateOpen__UpdateFunc (22 bytes)
void BP_onboarding_shroudGate_C::GateOpen__UpdateFunc()
{
    ExecuteUbergraph_BP_onboarding_shroudGate();
    return;
}

// Recovered Kismet: BP_onboarding_shroudGate_C::ReceiveTick (40 bytes)
void BP_onboarding_shroudGate_C::ReceiveTick()
{
    ExecuteUbergraph_BP_onboarding_shroudGate();
    return;
}

// Recovered Kismet: BP_onboarding_shroudGate_C::ExecuteUbergraph_BP_onboarding_shroudGate (310 bytes)
void BP_onboarding_shroudGate_C::ExecuteUbergraph_BP_onboarding_shroudGate()
{
    FVector CallFunc_K2_GetComponentLocation_ReturnValue = idx_285300->K2_GetComponentLocation();
    FVector CallFunc_K2_GetComponentLocation_ReturnValue2 = idx_285288->K2_GetComponentLocation();
    auto CallFunc_VLerp_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
    return;
}

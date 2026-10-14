// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: bp_vfx_onboarding_lightning_C::UserConstructionScript (3 bytes)
void bp_vfx_onboarding_lightning_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: bp_vfx_onboarding_lightning_C::ReceiveBeginPlay (22 bytes)
void bp_vfx_onboarding_lightning_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_bp_vfx_onboarding_lightning();
    return;
}

// Recovered Kismet: bp_vfx_onboarding_lightning_C::TriggerParticles (22 bytes)
void bp_vfx_onboarding_lightning_C::TriggerParticles()
{
    ExecuteUbergraph_bp_vfx_onboarding_lightning();
    return;
}

// Recovered Kismet: bp_vfx_onboarding_lightning_C::ExecuteUbergraph_bp_vfx_onboarding_lightning (483 bytes)
void bp_vfx_onboarding_lightning_C::ExecuteUbergraph_bp_vfx_onboarding_lightning()
{
    int CallFunc_WwiseEmitterComponentPostEvent_ReturnValue = UWwiseEmitterBlueprintLibrary::WwiseEmitterComponentPostEvent(idx_285315, idx_285322);
    bool CallFunc_IsServer_ReturnValue = UKismetSystemLibrary::IsServer();
    if (!CallFunc_IsServer_ReturnValue) goto L_D2;
L_D2:
    FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue2 = UKismetSystemLibrary::K2_SetTimerDelegate(UniqueObjectNameForCooking_OutputDelegate, CallFunc_RandomFloatInRange_ReturnValue2, false);
    FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue = UKismetSystemLibrary::K2_SetTimerDelegate(UniqueObjectNameForCooking_OutputDelegate, CallFunc_RandomFloatInRange_ReturnValue, false);
    return;
}

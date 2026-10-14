// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Anim_FlintlockPistol_C::AnimNotify_ExitedFire (22 bytes)
void BP_Anim_FlintlockPistol_C::AnimNotify_ExitedFire()
{
    ExecuteUbergraph_BP_Anim_FlintlockPistol();
    return;
}

// Recovered Kismet: BP_Anim_FlintlockPistol_C::OnOneShotUseTriggered (58 bytes)
void BP_Anim_FlintlockPistol_C::OnOneShotUseTriggered()
{
    ExecuteUbergraph_BP_Anim_FlintlockPistol();
    return;
}

// Recovered Kismet: BP_Anim_FlintlockPistol_C::OnUseStarted (58 bytes)
void BP_Anim_FlintlockPistol_C::OnUseStarted()
{
    ExecuteUbergraph_BP_Anim_FlintlockPistol();
    return;
}

// Recovered Kismet: BP_Anim_FlintlockPistol_C::BlueprintInitializeAnimation (22 bytes)
void BP_Anim_FlintlockPistol_C::BlueprintInitializeAnimation()
{
    ExecuteUbergraph_BP_Anim_FlintlockPistol();
    return;
}

// Recovered Kismet: BP_Anim_FlintlockPistol_C::ReloadEventDelegate (40 bytes)
void BP_Anim_FlintlockPistol_C::ReloadEventDelegate()
{
    ExecuteUbergraph_BP_Anim_FlintlockPistol();
    return;
}

// Recovered Kismet: BP_Anim_FlintlockPistol_C::BlueprintUninitializeAnimation (22 bytes)
void BP_Anim_FlintlockPistol_C::BlueprintUninitializeAnimation()
{
    ExecuteUbergraph_BP_Anim_FlintlockPistol();
    return;
}

// Recovered Kismet: BP_Anim_FlintlockPistol_C::AnimNotify_ResetReload (22 bytes)
void BP_Anim_FlintlockPistol_C::AnimNotify_ResetReload()
{
    ExecuteUbergraph_BP_Anim_FlintlockPistol();
    return;
}

// Recovered Kismet: BP_Anim_FlintlockPistol_C::ExecuteUbergraph_BP_Anim_FlintlockPistol (455 bytes)
void BP_Anim_FlintlockPistol_C::ExecuteUbergraph_BP_Anim_FlintlockPistol()
{
    bool bReloadWanted = false;
    auto CallFunc_EqualEqual_ClassClass_ReturnValue = K2Node_Event_InputId2;
    if (!CallFunc_EqualEqual_ClassClass_ReturnValue) goto L_1C4;
    auto CallFunc_EqualEqual_ClassClass_ReturnValue2 = K2Node_Event_InputId;
    if (!CallFunc_EqualEqual_ClassClass_ReturnValue2) goto L_1C4;
    bool CallFunc_IsHandleRegistered_ReturnValue = UObjectMessagingFunctions::IsHandleRegistered(ReloadEventHandle);
    if (!CallFunc_IsHandleRegistered_ReturnValue) goto L_122;
L_122:
    bReloadWanted = true;
L_1C4:
    return;
}

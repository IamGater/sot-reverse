// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Memento_MusicBox_Wieldable_C::ResetRotationTimer (60 bytes)
void BP_Memento_MusicBox_Wieldable_C::ResetRotationTimer()
{
    bool IsPlaying = false;
    return;
}

// Recovered Kismet: BP_Memento_MusicBox_Wieldable_C::RotateParts (201 bytes)
void BP_Memento_MusicBox_Wieldable_C::RotateParts()
{
    auto CallFunc_MakeRotator_ReturnValue2 = InRotation;
    auto CallFunc_MakeRotator_ReturnValue = InRotation;
    return;
}

// Recovered Kismet: BP_Memento_MusicBox_Wieldable_C::UserConstructionScript (13 bytes)
void BP_Memento_MusicBox_Wieldable_C::UserConstructionScript()
{
    this->UserConstructionScript();
    return;
}

// Recovered Kismet: BP_Memento_MusicBox_Wieldable_C::ReceiveTick (40 bytes)
void BP_Memento_MusicBox_Wieldable_C::ReceiveTick()
{
    ExecuteUbergraph_BP_Memento_MusicBox_Wieldable();
    return;
}

// Recovered Kismet: BP_Memento_MusicBox_Wieldable_C::ReceivePrimaryItemUse (22 bytes)
void BP_Memento_MusicBox_Wieldable_C::ReceivePrimaryItemUse()
{
    ExecuteUbergraph_BP_Memento_MusicBox_Wieldable();
    return;
}

// Recovered Kismet: BP_Memento_MusicBox_Wieldable_C::ReceiveBeginPlay (22 bytes)
void BP_Memento_MusicBox_Wieldable_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_Memento_MusicBox_Wieldable();
    return;
}

// Recovered Kismet: BP_Memento_MusicBox_Wieldable_C::ExecuteUbergraph_BP_Memento_MusicBox_Wieldable (630 bytes)
void BP_Memento_MusicBox_Wieldable_C::ExecuteUbergraph_BP_Memento_MusicBox_Wieldable()
{
    bool IsPlaying = true;
    FTimerHandle CallFunc_K2_SetTimer_ReturnValue = UKismetSystemLibrary::K2_SetTimer(RotationTime, false);
    if (!IsPlaying) goto L_273;
    auto CallFunc_Add_FloatFloat_ReturnValue = RotationTimer;
    auto RotationTimer = CallFunc_Add_FloatFloat_ReturnValue;
    auto CallFunc_Divide_FloatFloat_ReturnValue = RotationTimer;
    auto CallFunc_Lerp_ReturnValue = RotationSpeed;
    RotateParts(CallFunc_Lerp_ReturnValue);
L_181:
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(InteractionSfx);
    if (!CallFunc_IsValid_ReturnValue) goto L_273;
    float CallFunc_GetDurationMin_ReturnValue = InteractionSfx->GetDurationMin();
    auto RotationTime = CallFunc_GetDurationMin_ReturnValue;
    if (!IsPlaying) goto L_181;
L_273:
    return;
}

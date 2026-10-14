// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_VaultSpikeTrigger_C::UserConstructionScript (3 bytes)
void BP_VaultSpikeTrigger_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_VaultSpikeTrigger_C::BndEvt__PuzzleVault_K2Node_ComponentBoundEvent_18_VaultEventOccurredDelegate__DelegateSignature (22 bytes)
void BP_VaultSpikeTrigger_C::BndEvt__PuzzleVault_K2Node_ComponentBoundEvent_18_VaultEventOccurredDelegate__DelegateSignature()
{
    ExecuteUbergraph_BP_VaultSpikeTrigger();
    return;
}

// Recovered Kismet: BP_VaultSpikeTrigger_C::BndEvt__PuzzleVault_K2Node_ComponentBoundEvent_52_VaultEventOccurredDelegate__DelegateSignature (22 bytes)
void BP_VaultSpikeTrigger_C::BndEvt__PuzzleVault_K2Node_ComponentBoundEvent_52_VaultEventOccurredDelegate__DelegateSignature()
{
    ExecuteUbergraph_BP_VaultSpikeTrigger();
    return;
}

// Recovered Kismet: BP_VaultSpikeTrigger_C::BndEvt__PuzzleVault_K2Node_ComponentBoundEvent_54_VaultEventOccurredDelegate__DelegateSignature (22 bytes)
void BP_VaultSpikeTrigger_C::BndEvt__PuzzleVault_K2Node_ComponentBoundEvent_54_VaultEventOccurredDelegate__DelegateSignature()
{
    ExecuteUbergraph_BP_VaultSpikeTrigger();
    return;
}

// Recovered Kismet: BP_VaultSpikeTrigger_C::ExecuteUbergraph_BP_VaultSpikeTrigger (292 bytes)
void BP_VaultSpikeTrigger_C::ExecuteUbergraph_BP_VaultSpikeTrigger()
{
    bool CallFunc_HasAuthority_ReturnValue = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue) goto L_121;
    bool CallFunc_DeactivateTrigger_ReturnValue = MechanismTrigger->DeactivateTrigger();
    bool CallFunc_HasAuthority_ReturnValue2 = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue2) goto L_121;
    TEnumAsByte<EMechanismTriggerState> CallFunc_GetTriggerState_ReturnValue = MechanismTrigger->GetTriggerState();
    auto CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_GetTriggerState_ReturnValue;
    if (!CallFunc_NotEqual_ByteByte_ReturnValue) goto L_121;
    bool CallFunc_ActivateTrigger_ReturnValue = MechanismTrigger->ActivateTrigger();
L_121:
    return;
}

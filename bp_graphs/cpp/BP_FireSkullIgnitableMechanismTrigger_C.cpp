// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_FireSkullIgnitableMechanismTrigger_C::UserConstructionScript (3 bytes)
void BP_FireSkullIgnitableMechanismTrigger_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_FireSkullIgnitableMechanismTrigger_C::GemGlowIn__FinishedFunc (22 bytes)
void BP_FireSkullIgnitableMechanismTrigger_C::GemGlowIn__FinishedFunc()
{
    ExecuteUbergraph_BP_FireSkullIgnitableMechanismTrigger();
    return;
}

// Recovered Kismet: BP_FireSkullIgnitableMechanismTrigger_C::GemGlowIn__UpdateFunc (22 bytes)
void BP_FireSkullIgnitableMechanismTrigger_C::GemGlowIn__UpdateFunc()
{
    ExecuteUbergraph_BP_FireSkullIgnitableMechanismTrigger();
    return;
}

// Recovered Kismet: BP_FireSkullIgnitableMechanismTrigger_C::GemGlowOut__FinishedFunc (22 bytes)
void BP_FireSkullIgnitableMechanismTrigger_C::GemGlowOut__FinishedFunc()
{
    ExecuteUbergraph_BP_FireSkullIgnitableMechanismTrigger();
    return;
}

// Recovered Kismet: BP_FireSkullIgnitableMechanismTrigger_C::GemGlowOut__UpdateFunc (22 bytes)
void BP_FireSkullIgnitableMechanismTrigger_C::GemGlowOut__UpdateFunc()
{
    ExecuteUbergraph_BP_FireSkullIgnitableMechanismTrigger();
    return;
}

// Recovered Kismet: BP_FireSkullIgnitableMechanismTrigger_C::ReceiveBeginPlay (22 bytes)
void BP_FireSkullIgnitableMechanismTrigger_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_FireSkullIgnitableMechanismTrigger();
    return;
}

// Recovered Kismet: BP_FireSkullIgnitableMechanismTrigger_C::BndEvt__MechanismTriggerComponent_K2Node_ComponentBoundEvent_12_OnMechanismTriggerStateChangedDelegate__DelegateSignature (94 bytes)
void BP_FireSkullIgnitableMechanismTrigger_C::BndEvt__MechanismTriggerComponent_K2Node_ComponentBoundEvent_12_OnMechanismTriggerStateChangedDelegate__DelegateSignature()
{
    ExecuteUbergraph_BP_FireSkullIgnitableMechanismTrigger();
    return;
}

// Recovered Kismet: BP_FireSkullIgnitableMechanismTrigger_C::ExecuteUbergraph_BP_FireSkullIgnitableMechanismTrigger (1080 bytes)
void BP_FireSkullIgnitableMechanismTrigger_C::ExecuteUbergraph_BP_FireSkullIgnitableMechanismTrigger()
{
L_35:
    int CallFunc_WwiseEmitterComponentPostEvent_ReturnValue = UWwiseEmitterBlueprintLibrary::WwiseEmitterComponentPostEvent(WwiseEmitter, Play_sfx_island_spirit_validation);
    bool CallFunc_IsDedicatedServer_ReturnValue = UKismetSystemLibrary::IsDedicatedServer();
    if (!CallFunc_IsDedicatedServer_ReturnValue) goto L_167;
L_167:
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue = skull->CreateDynamicMaterialInstance();
    auto DynamicMaterial = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
    TEnumAsByte<EMechanismTriggerState> CallFunc_GetTriggerState_ReturnValue = MechanismTriggerComponent->GetTriggerState();
    auto K2Node_SwitchEnum2_CmpSuccess = CallFunc_GetTriggerState_ReturnValue;
    if (!K2Node_SwitchEnum2_CmpSuccess) goto L_269;
    K2Node_SwitchEnum2_CmpSuccess = CallFunc_GetTriggerState_ReturnValue;
    if (!K2Node_SwitchEnum2_CmpSuccess) goto L_29C;
    K2Node_SwitchEnum2_CmpSuccess = CallFunc_GetTriggerState_ReturnValue;
L_269:
L_29C:
    bool CallFunc_HasAuthority_ReturnValue = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue) goto L_2F2;
L_2F2:
    auto K2Node_SwitchEnum_CmpSuccess = K2Node_ComponentBoundEvent_NewState;
    if (!K2Node_SwitchEnum_CmpSuccess) goto L_35;
    K2Node_SwitchEnum_CmpSuccess = K2Node_ComponentBoundEvent_NewState;
    if (!K2Node_SwitchEnum_CmpSuccess) goto L_376;
    K2Node_SwitchEnum_CmpSuccess = K2Node_ComponentBoundEvent_NewState;
L_376:
    return;
}

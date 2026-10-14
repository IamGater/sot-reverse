// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_PressurePlateMechanismTriggerBase_C::UpdateAudio (222 bytes)
void BP_PressurePlateMechanismTriggerBase_C::UpdateAudio()
{
    auto K2Node_SwitchEnum_CmpSuccess = State;
    if (!K2Node_SwitchEnum_CmpSuccess) goto L_8C;
    K2Node_SwitchEnum_CmpSuccess = State;
    if (!K2Node_SwitchEnum_CmpSuccess) goto L_A8;
    K2Node_SwitchEnum_CmpSuccess = State;
    if (!K2Node_SwitchEnum_CmpSuccess) goto L_C4;
L_8C:
    CreateEmitterFromPoolWithEvent(idx_242382);
L_A8:
    CreateEmitterFromPoolWithEvent(idx_242384);
L_C4:
    CreateEmitterFromPoolWithEvent(idx_242387);
    return;
}

// Recovered Kismet: BP_PressurePlateMechanismTriggerBase_C::CreateEmitterFromPoolWithEvent (325 bytes)
void BP_PressurePlateMechanismTriggerBase_C::CreateEmitterFromPoolWithEvent()
{
    FVector CallFunc_K2_GetActorLocation_ReturnValue = AActor::K2_GetActorLocation();
    auto K2Node_MakeStruct_WwiseEmitterCreationParams = K2Node_MakeStruct_WwiseEmitterCreationParams;
    K2Node_MakeStruct_WwiseEmitterCreationParams = K2Node_MakeStruct_WwiseEmitterCreationParams;
    K2Node_MakeStruct_WwiseEmitterCreationParams = K2Node_MakeStruct_WwiseEmitterCreationParams;
    K2Node_MakeStruct_WwiseEmitterCreationParams = K2Node_MakeStruct_WwiseEmitterCreationParams;
    K2Node_MakeStruct_WwiseEmitterCreationParams = K2Node_MakeStruct_WwiseEmitterCreationParams;
    int idx_242407 = UWwiseEmitterBlueprintLibrary::WwiseCreateDetachedEmitter(idx_242406, pool_mechanisms, CallFunc_K2_GetActorLocation_ReturnValue, K2Node_MakeStruct_WwiseEmitterCreationParams);
    return;
}

// Recovered Kismet: BP_PressurePlateMechanismTriggerBase_C::UserConstructionScript (3 bytes)
void BP_PressurePlateMechanismTriggerBase_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_PressurePlateMechanismTriggerBase_C::BndEvt__MechanismTriggerComponent_K2Node_ComponentBoundEvent_9_OnMechanismTriggerStateChangedDelegate__DelegateSignature (94 bytes)
void BP_PressurePlateMechanismTriggerBase_C::BndEvt__MechanismTriggerComponent_K2Node_ComponentBoundEvent_9_OnMechanismTriggerStateChangedDelegate__DelegateSignature()
{
    ExecuteUbergraph_BP_PressurePlateMechanismTriggerBase();
    return;
}

// Recovered Kismet: BP_PressurePlateMechanismTriggerBase_C::BndEvt__MechanismInteractionComponent_K2Node_ComponentBoundEvent_15_OnMechanismInteractionCollisionShape__DelegateSignature (22 bytes)
void BP_PressurePlateMechanismTriggerBase_C::BndEvt__MechanismInteractionComponent_K2Node_ComponentBoundEvent_15_OnMechanismInteractionCollisionShape__DelegateSignature()
{
    ExecuteUbergraph_BP_PressurePlateMechanismTriggerBase();
    return;
}

// Recovered Kismet: BP_PressurePlateMechanismTriggerBase_C::ExecuteUbergraph_BP_PressurePlateMechanismTriggerBase (126 bytes)
void BP_PressurePlateMechanismTriggerBase_C::ExecuteUbergraph_BP_PressurePlateMechanismTriggerBase()
{
    bool CallFunc_HasAuthority_ReturnValue = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue) goto L_31;
L_31:
    UpdateAudio(K2Node_ComponentBoundEvent_NewState);
    return;
}

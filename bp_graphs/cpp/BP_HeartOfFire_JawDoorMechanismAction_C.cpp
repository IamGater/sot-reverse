// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_HeartOfFire_JawDoorMechanismAction_C::UserConstructionScript (3 bytes)
void BP_HeartOfFire_JawDoorMechanismAction_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_HeartOfFire_JawDoorMechanismAction_C::Timeline_0__FinishedFunc (22 bytes)
void BP_HeartOfFire_JawDoorMechanismAction_C::Timeline_0__FinishedFunc()
{
    ExecuteUbergraph_BP_HeartOfFire_JawDoorMechanismAction();
    return;
}

// Recovered Kismet: BP_HeartOfFire_JawDoorMechanismAction_C::Timeline_0__UpdateFunc (22 bytes)
void BP_HeartOfFire_JawDoorMechanismAction_C::Timeline_0__UpdateFunc()
{
    ExecuteUbergraph_BP_HeartOfFire_JawDoorMechanismAction();
    return;
}

// Recovered Kismet: BP_HeartOfFire_JawDoorMechanismAction_C::Timeline_1__FinishedFunc (22 bytes)
void BP_HeartOfFire_JawDoorMechanismAction_C::Timeline_1__FinishedFunc()
{
    ExecuteUbergraph_BP_HeartOfFire_JawDoorMechanismAction();
    return;
}

// Recovered Kismet: BP_HeartOfFire_JawDoorMechanismAction_C::Timeline_1__UpdateFunc (22 bytes)
void BP_HeartOfFire_JawDoorMechanismAction_C::Timeline_1__UpdateFunc()
{
    ExecuteUbergraph_BP_HeartOfFire_JawDoorMechanismAction();
    return;
}

// Recovered Kismet: BP_HeartOfFire_JawDoorMechanismAction_C::ReceiveBeginPlay (22 bytes)
void BP_HeartOfFire_JawDoorMechanismAction_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_HeartOfFire_JawDoorMechanismAction();
    return;
}

// Recovered Kismet: BP_HeartOfFire_JawDoorMechanismAction_C::BndEvt__MechanismActionComponent_K2Node_ComponentBoundEvent_12_OnMechanismActionStateChangedDelegate__DelegateSignature (94 bytes)
void BP_HeartOfFire_JawDoorMechanismAction_C::BndEvt__MechanismActionComponent_K2Node_ComponentBoundEvent_12_OnMechanismActionStateChangedDelegate__DelegateSignature()
{
    ExecuteUbergraph_BP_HeartOfFire_JawDoorMechanismAction();
    return;
}

// Recovered Kismet: BP_HeartOfFire_JawDoorMechanismAction_C::ExecuteUbergraph_BP_HeartOfFire_JawDoorMechanismAction (752 bytes)
void BP_HeartOfFire_JawDoorMechanismAction_C::ExecuteUbergraph_BP_HeartOfFire_JawDoorMechanismAction()
{
    bool CallFunc_IsDedicatedServer_ReturnValue = UKismetSystemLibrary::IsDedicatedServer();
    if (!CallFunc_IsDedicatedServer_ReturnValue) goto L_88;
L_88:
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue = idx_241121->CreateDynamicMaterialInstance();
    auto DynamicMaterial = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
    TEnumAsByte<EMechanismActionState> CallFunc_GetActionState_ReturnValue = MechanismActionComponent->GetActionState();
    auto K2Node_SwitchEnum_CmpSuccess = CallFunc_GetActionState_ReturnValue;
    if (!K2Node_SwitchEnum_CmpSuccess) goto L_165;
    K2Node_SwitchEnum_CmpSuccess = CallFunc_GetActionState_ReturnValue;
    if (!K2Node_SwitchEnum_CmpSuccess) goto L_19C;
L_165:
L_19C:
L_1D3:
    bool CallFunc_HasAuthority_ReturnValue = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue) goto L_21F;
L_21F:
    auto K2Node_SwitchEnum2_CmpSuccess = idx_240871;
    if (!K2Node_SwitchEnum2_CmpSuccess) goto L_1D3;
    K2Node_SwitchEnum2_CmpSuccess = idx_240871;
    if (!K2Node_SwitchEnum2_CmpSuccess) goto L_27E;
L_27E:
    return;
}

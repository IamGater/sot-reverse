// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Prompt_RepairShip_C::UnregisterDamageEventFromCurrentShip (3 bytes)
void BP_Prompt_RepairShip_C::UnregisterDamageEventFromCurrentShip()
{
    return;
}

// Recovered Kismet: BP_Prompt_RepairShip_C::RegisterDamageEventWithCurrentShip (3 bytes)
void BP_Prompt_RepairShip_C::RegisterDamageEventWithCurrentShip()
{
    return;
}

// Recovered Kismet: BP_Prompt_RepairShip_C::Evaluate (22 bytes)
void BP_Prompt_RepairShip_C::Evaluate()
{
    ExecuteUbergraph_BP_Prompt_RepairShip();
    return;
}

// Recovered Kismet: BP_Prompt_RepairShip_C::RegisterCharacterEvents_Implementable (40 bytes)
void BP_Prompt_RepairShip_C::RegisterCharacterEvents_Implementable()
{
    ExecuteUbergraph_BP_Prompt_RepairShip();
    return;
}

// Recovered Kismet: BP_Prompt_RepairShip_C::OnCurrentShipChanged (40 bytes)
void BP_Prompt_RepairShip_C::OnCurrentShipChanged()
{
    ExecuteUbergraph_BP_Prompt_RepairShip();
    return;
}

// Recovered Kismet: BP_Prompt_RepairShip_C::OnShipDamaged (40 bytes)
void BP_Prompt_RepairShip_C::OnShipDamaged()
{
    ExecuteUbergraph_BP_Prompt_RepairShip();
    return;
}

// Recovered Kismet: BP_Prompt_RepairShip_C::UnregisterCharacterEvents_Implementable (40 bytes)
void BP_Prompt_RepairShip_C::UnregisterCharacterEvents_Implementable()
{
    ExecuteUbergraph_BP_Prompt_RepairShip();
    return;
}

// Recovered Kismet: BP_Prompt_RepairShip_C::ExecuteUbergraph_BP_Prompt_RepairShip (1648 bytes)
void BP_Prompt_RepairShip_C::ExecuteUbergraph_BP_Prompt_RepairShip()
{
    bool State_Complete = true;
    UBasePromptCoordinator::DismissAllPrompts();
    APawn* CallFunc_K2_GetPawn_ReturnValue = PlayerController->K2_GetPawn();
    AthenaPlayerCharacter* K2Node_DynamicCast_AsAthena_Player_Character = Cast<AthenaPlayerCharacter*>(CallFunc_K2_GetPawn_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Character);
    auto CallFunc_GetCurrentShip_ReturnValue = K2Node_DynamicCast_AsAthena_Player_Character->GetCurrentShip();
    Ship* K2Node_DynamicCast_AsShip = Cast<Ship*>(CallFunc_GetCurrentShip_ReturnValue);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(K2Node_DynamicCast_AsShip);
    auto CurrentShip = K2Node_DynamicCast_AsShip;
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue2 = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CurrentShip);
    if (!State_Complete) goto L_23D;
    UBasePromptCoordinator::DismissAllPrompts();
L_23D:
    if (!State_ShipDamaged) goto L_263;
    UBasePromptCoordinator::SetPromptAs(Prompt_RepairShip);
L_263:
    UBasePromptCoordinator::DismissAllPrompts();
    auto CallFunc_IsValid_ReturnValue2 = KismetSystemLibrary->this->IsValid(K2Node_CustomEvent_Event2);
    auto CallFunc_NotEqual_ObjectObject_ReturnValue = K2Node_CustomEvent_Event2;
    auto CallFunc_BooleanAND_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(CurrentShip);
    if (!CallFunc_IsValid_ReturnValue) goto L_44F;
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CurrentShip);
    bool CallFunc_IsHandleRegistered_ReturnValue = UObjectMessagingFunctions::IsHandleRegistered(Handle_OnShipDamaged);
    if (!CallFunc_IsHandleRegistered_ReturnValue) goto L_44F;
L_44F:
    Ship* K2Node_DynamicCast_AsShip2 = Cast<Ship*>(K2Node_CustomEvent_Event2);
    bool K2Node_DynamicCast_bSuccess3 = static_cast<bool>(K2Node_DynamicCast_AsShip2);
    CurrentShip = K2Node_DynamicCast_AsShip2;
    auto CallFunc_Greater_IntInt_ReturnValue = K2Node_CustomEvent_Event;
    auto CallFunc_EqualEqual_BoolBool_ReturnValue = State_ShipDamaged;
    auto CallFunc_BooleanAND_ReturnValue2 = CallFunc_Greater_IntInt_ReturnValue;
    bool State_ShipDamaged = true;
    Evaluate();
    auto CallFunc_IsValid_ReturnValue3 = KismetSystemLibrary->this->IsValid(CurrentShip);
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue3 = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CurrentShip);
    bool CallFunc_IsHandleRegistered_ReturnValue2 = UObjectMessagingFunctions::IsHandleRegistered(Handle_OnShipDamaged);
    return;
}

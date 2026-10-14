// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Prompt_RepairShipCapstan_C::UnregisterDamageEventFromCurrentShip (3 bytes)
void BP_Prompt_RepairShipCapstan_C::UnregisterDamageEventFromCurrentShip()
{
    return;
}

// Recovered Kismet: BP_Prompt_RepairShipCapstan_C::RegisterDamageEventWithCurrentShip (3 bytes)
void BP_Prompt_RepairShipCapstan_C::RegisterDamageEventWithCurrentShip()
{
    return;
}

// Recovered Kismet: BP_Prompt_RepairShipCapstan_C::Evaluate (22 bytes)
void BP_Prompt_RepairShipCapstan_C::Evaluate()
{
    ExecuteUbergraph_BP_Prompt_RepairShipCapstan();
    return;
}

// Recovered Kismet: BP_Prompt_RepairShipCapstan_C::RegisterCharacterEvents_Implementable (40 bytes)
void BP_Prompt_RepairShipCapstan_C::RegisterCharacterEvents_Implementable()
{
    ExecuteUbergraph_BP_Prompt_RepairShipCapstan();
    return;
}

// Recovered Kismet: BP_Prompt_RepairShipCapstan_C::OnCurrentShipChanged (40 bytes)
void BP_Prompt_RepairShipCapstan_C::OnCurrentShipChanged()
{
    ExecuteUbergraph_BP_Prompt_RepairShipCapstan();
    return;
}

// Recovered Kismet: BP_Prompt_RepairShipCapstan_C::OnShipDamaged (40 bytes)
void BP_Prompt_RepairShipCapstan_C::OnShipDamaged()
{
    ExecuteUbergraph_BP_Prompt_RepairShipCapstan();
    return;
}

// Recovered Kismet: BP_Prompt_RepairShipCapstan_C::UnregisterCharacterEvents_Implementable (40 bytes)
void BP_Prompt_RepairShipCapstan_C::UnregisterCharacterEvents_Implementable()
{
    ExecuteUbergraph_BP_Prompt_RepairShipCapstan();
    return;
}

// Recovered Kismet: BP_Prompt_RepairShipCapstan_C::ExecuteUbergraph_BP_Prompt_RepairShipCapstan (2539 bytes)
void BP_Prompt_RepairShipCapstan_C::ExecuteUbergraph_BP_Prompt_RepairShipCapstan()
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
    TArray<AActor*> CallFunc_GetDamageableParts_ReturnValue2 = CurrentShip->GetDamageableParts();
    int CallFunc_Array_Length_ReturnValue2 = UKismetArrayLibrary::Array_Length(CallFunc_GetDamageableParts_ReturnValue2);
    auto CallFunc_Less_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable2;
    auto Temp_int_Array_Index_Variable2 = Temp_int_Loop_Counter_Variable2;
    Capstan* K2Node_DynamicCast_AsCapstan2 = Cast<Capstan*>(CallFunc_Array_Get_Item2);
    bool K2Node_DynamicCast_bSuccess5 = static_cast<bool>(K2Node_DynamicCast_AsCapstan2);
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue3 = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(K2Node_DynamicCast_AsCapstan2);
    auto CallFunc_Add_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable2;
    auto Temp_int_Loop_Counter_Variable2 = CallFunc_Add_IntInt_ReturnValue2;
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetDamageableParts_ReturnValue);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    Capstan* K2Node_DynamicCast_AsCapstan = Cast<Capstan*>(CallFunc_Array_Get_Item);
    bool K2Node_DynamicCast_bSuccess4 = static_cast<bool>(K2Node_DynamicCast_AsCapstan);
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue2 = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(K2Node_DynamicCast_AsCapstan);
    bool CallFunc_IsHandleRegistered_ReturnValue2 = UObjectMessagingFunctions::IsHandleRegistered(Handle_OnCapstanDamaged);
    if (!State_Complete) goto L_5BA;
    UBasePromptCoordinator::DismissAllPrompts();
L_5BA:
    if (!State_CapstanDamaged) goto L_652;
    UBasePromptCoordinator::SetPromptAs(Prompt_RepairShip);
L_652:
    UBasePromptCoordinator::DismissAllPrompts();
    auto CallFunc_IsValid_ReturnValue2 = KismetSystemLibrary->this->IsValid(K2Node_CustomEvent_Event2);
    auto CallFunc_NotEqual_ObjectObject_ReturnValue = K2Node_CustomEvent_Event2;
    auto CallFunc_BooleanAND_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(CurrentShip);
    if (!CallFunc_IsValid_ReturnValue) goto L_83E;
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CurrentShip);
    bool CallFunc_IsHandleRegistered_ReturnValue = UObjectMessagingFunctions::IsHandleRegistered(Handle_OnCapstanDamaged);
    if (!CallFunc_IsHandleRegistered_ReturnValue) goto L_83E;
L_83E:
    Ship* K2Node_DynamicCast_AsShip2 = Cast<Ship*>(K2Node_CustomEvent_Event2);
    bool K2Node_DynamicCast_bSuccess3 = static_cast<bool>(K2Node_DynamicCast_AsShip2);
    CurrentShip = K2Node_DynamicCast_AsShip2;
    auto CallFunc_Greater_IntInt_ReturnValue = K2Node_CustomEvent_Event;
    auto CallFunc_EqualEqual_BoolBool_ReturnValue = State_CapstanDamaged;
    auto CallFunc_BooleanAND_ReturnValue2 = CallFunc_Greater_IntInt_ReturnValue;
    bool State_CapstanDamaged = true;
    Evaluate();
    auto CallFunc_IsValid_ReturnValue3 = KismetSystemLibrary->this->IsValid(CurrentShip);
    TArray<AActor*> CallFunc_GetDamageableParts_ReturnValue = CurrentShip->GetDamageableParts();
    return;
}

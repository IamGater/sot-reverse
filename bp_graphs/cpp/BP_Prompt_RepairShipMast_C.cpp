// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Prompt_RepairShipMast_C::UnregisterDamageEventFromCurrentShip (3 bytes)
void BP_Prompt_RepairShipMast_C::UnregisterDamageEventFromCurrentShip()
{
    return;
}

// Recovered Kismet: BP_Prompt_RepairShipMast_C::RegisterDamageEventWithCurrentShip (3 bytes)
void BP_Prompt_RepairShipMast_C::RegisterDamageEventWithCurrentShip()
{
    return;
}

// Recovered Kismet: BP_Prompt_RepairShipMast_C::Evaluate (22 bytes)
void BP_Prompt_RepairShipMast_C::Evaluate()
{
    ExecuteUbergraph_BP_Prompt_RepairShipMast();
    return;
}

// Recovered Kismet: BP_Prompt_RepairShipMast_C::RegisterCharacterEvents_Implementable (40 bytes)
void BP_Prompt_RepairShipMast_C::RegisterCharacterEvents_Implementable()
{
    ExecuteUbergraph_BP_Prompt_RepairShipMast();
    return;
}

// Recovered Kismet: BP_Prompt_RepairShipMast_C::OnCurrentShipChanged (40 bytes)
void BP_Prompt_RepairShipMast_C::OnCurrentShipChanged()
{
    ExecuteUbergraph_BP_Prompt_RepairShipMast();
    return;
}

// Recovered Kismet: BP_Prompt_RepairShipMast_C::OnShipMastDamaged (40 bytes)
void BP_Prompt_RepairShipMast_C::OnShipMastDamaged()
{
    ExecuteUbergraph_BP_Prompt_RepairShipMast();
    return;
}

// Recovered Kismet: BP_Prompt_RepairShipMast_C::UnregisterCharacterEvents_Implementable (40 bytes)
void BP_Prompt_RepairShipMast_C::UnregisterCharacterEvents_Implementable()
{
    ExecuteUbergraph_BP_Prompt_RepairShipMast();
    return;
}

// Recovered Kismet: BP_Prompt_RepairShipMast_C::ExecuteUbergraph_BP_Prompt_RepairShipMast (3353 bytes)
void BP_Prompt_RepairShipMast_C::ExecuteUbergraph_BP_Prompt_RepairShipMast()
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
    TArray<AActor*> CallFunc_GetDamageableParts_ReturnValue = CurrentShip->GetDamageableParts();
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetDamageableParts_ReturnValue);
    auto CallFunc_Less_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable2;
    auto Temp_int_Array_Index_Variable2 = Temp_int_Loop_Counter_Variable2;
    Mast* K2Node_DynamicCast_AsMast2 = Cast<Mast*>(CallFunc_Array_Get_Item2);
    bool K2Node_DynamicCast_bSuccess5 = static_cast<bool>(K2Node_DynamicCast_AsMast2);
    auto CallFunc_Add_IntInt_ReturnValue2 = NumMastsRegistered;
    auto NumMastsRegistered = CallFunc_Add_IntInt_ReturnValue2;
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue3 = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(K2Node_DynamicCast_AsMast2);
    auto CallFunc_EqualEqual_IntInt_ReturnValue3 = NumMastsRegistered;
    if (!CallFunc_EqualEqual_IntInt_ReturnValue3) goto L_3E6;
    auto CallFunc_Add_IntInt_ReturnValue3 = Temp_int_Loop_Counter_Variable2;
    auto Temp_int_Loop_Counter_Variable2 = CallFunc_Add_IntInt_ReturnValue3;
L_3E6:
    auto CallFunc_EqualEqual_IntInt_ReturnValue2 = NumMastsRegistered;
    if (!CallFunc_EqualEqual_IntInt_ReturnValue2) goto L_466;
L_466:
    auto CallFunc_EqualEqual_IntInt_ReturnValue = NumMastsRegistered;
    if (!State_Complete) goto L_4FB;
    UBasePromptCoordinator::DismissAllPrompts();
L_4FB:
    if (!State_ShipMastDamaged) goto L_593;
    UBasePromptCoordinator::SetPromptAs(Prompt_RepairShip);
L_593:
    UBasePromptCoordinator::DismissAllPrompts();
    auto CallFunc_IsValid_ReturnValue2 = KismetSystemLibrary->this->IsValid(K2Node_CustomEvent_Event2);
    auto CallFunc_NotEqual_ObjectObject_ReturnValue = K2Node_CustomEvent_Event2;
    auto CallFunc_BooleanAND_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(CurrentShip);
    if (!CallFunc_IsValid_ReturnValue) goto L_77F;
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CurrentShip);
    bool CallFunc_IsHandleRegistered_ReturnValue = UObjectMessagingFunctions::IsHandleRegistered(Handle_OnMastDamaged1);
    if (!CallFunc_IsHandleRegistered_ReturnValue) goto L_77F;
L_77F:
    Ship* K2Node_DynamicCast_AsShip2 = Cast<Ship*>(K2Node_CustomEvent_Event2);
    bool K2Node_DynamicCast_bSuccess3 = static_cast<bool>(K2Node_DynamicCast_AsShip2);
    CurrentShip = K2Node_DynamicCast_AsShip2;
    int CallFunc_Array_Length_ReturnValue2 = UKismetArrayLibrary::Array_Length(CallFunc_GetDamageableParts_ReturnValue2);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    Mast* K2Node_DynamicCast_AsMast = Cast<Mast*>(CallFunc_Array_Get_Item);
    bool K2Node_DynamicCast_bSuccess4 = static_cast<bool>(K2Node_DynamicCast_AsMast);
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue2 = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(K2Node_DynamicCast_AsMast);
    auto CallFunc_EqualEqual_IntInt_ReturnValue6 = NumMastsRegistered;
    if (!CallFunc_EqualEqual_IntInt_ReturnValue6) goto L_A33;
    bool CallFunc_IsHandleRegistered_ReturnValue2 = UObjectMessagingFunctions::IsHandleRegistered(Handle_OnMastDamaged3);
    auto CallFunc_Subtract_IntInt_ReturnValue = NumMastsRegistered;
    NumMastsRegistered = CallFunc_Subtract_IntInt_ReturnValue;
L_A33:
    auto CallFunc_EqualEqual_IntInt_ReturnValue5 = NumMastsRegistered;
    if (!CallFunc_EqualEqual_IntInt_ReturnValue5) goto L_AD7;
    bool CallFunc_IsHandleRegistered_ReturnValue3 = UObjectMessagingFunctions::IsHandleRegistered(Handle_OnMastDamaged2);
L_AD7:
    auto CallFunc_EqualEqual_IntInt_ReturnValue4 = NumMastsRegistered;
    bool CallFunc_IsHandleRegistered_ReturnValue4 = UObjectMessagingFunctions::IsHandleRegistered(Handle_OnMastDamaged1);
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    auto CallFunc_Greater_IntInt_ReturnValue = K2Node_CustomEvent_Event;
    auto CallFunc_EqualEqual_BoolBool_ReturnValue = State_ShipMastDamaged;
    auto CallFunc_BooleanAND_ReturnValue2 = CallFunc_Greater_IntInt_ReturnValue;
    bool State_ShipMastDamaged = true;
    Evaluate();
    auto CallFunc_IsValid_ReturnValue3 = KismetSystemLibrary->this->IsValid(CurrentShip);
    TArray<AActor*> CallFunc_GetDamageableParts_ReturnValue2 = CurrentShip->GetDamageableParts();
    return;
}

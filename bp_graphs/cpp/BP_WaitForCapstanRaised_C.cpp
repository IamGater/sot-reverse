// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_WaitForCapstanRaised_C::OnBegin (40 bytes)
void BP_WaitForCapstanRaised_C::OnBegin()
{
    ExecuteUbergraph_BP_WaitForCapstanRaised();
    return;
}

// Recovered Kismet: BP_WaitForCapstanRaised_C::OnCapstanRaised (40 bytes)
void BP_WaitForCapstanRaised_C::OnCapstanRaised()
{
    ExecuteUbergraph_BP_WaitForCapstanRaised();
    return;
}

// Recovered Kismet: BP_WaitForCapstanRaised_C::OnShipSunk (40 bytes)
void BP_WaitForCapstanRaised_C::OnShipSunk()
{
    ExecuteUbergraph_BP_WaitForCapstanRaised();
    return;
}

// Recovered Kismet: BP_WaitForCapstanRaised_C::OnEnd (22 bytes)
void BP_WaitForCapstanRaised_C::OnEnd()
{
    ExecuteUbergraph_BP_WaitForCapstanRaised();
    return;
}

// Recovered Kismet: BP_WaitForCapstanRaised_C::ExecuteUbergraph_BP_WaitForCapstanRaised (1969 bytes)
void BP_WaitForCapstanRaised_C::ExecuteUbergraph_BP_WaitForCapstanRaised()
{
    Capstan* K2Node_DynamicCast_AsCapstan = Cast<Capstan*>(CallFunc_Array_Get_Item2);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsCapstan);
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue2 = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(K2Node_DynamicCast_AsCapstan);
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    if (!CallFunc_GetVariables_OutStruct) goto L_227;
    this->SignalComplete();
    auto CallFunc_Add_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable2;
    auto Temp_int_Loop_Counter_Variable2 = CallFunc_Add_IntInt_ReturnValue2;
    int CallFunc_Array_Length_ReturnValue2 = UKismetArrayLibrary::Array_Length(CallFunc_GetDamageableParts_ReturnValue);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable2;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable2;
L_227:
    auto CallFunc_GetGameState_ReturnValue = this->GetGameState();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetGameState_ReturnValue);
    Capstan* K2Node_DynamicCast_AsCapstan2 = Cast<Capstan*>(CallFunc_Array_Get_Item4);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(K2Node_DynamicCast_AsCapstan2);
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue4 = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(K2Node_DynamicCast_AsCapstan2);
    bool CallFunc_IsHandleRegistered_ReturnValue = UObjectMessagingFunctions::IsHandleRegistered(idx_283144);
    auto CallFunc_GetGameState_ReturnValue2 = this->GetGameState();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue3 = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetGameState_ReturnValue2);
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    int CallFunc_Array_Length_ReturnValue4 = UKismetArrayLibrary::Array_Length(CallFunc_GetDamageableParts_ReturnValue2);
    auto CallFunc_Less_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable2 = Temp_int_Loop_Counter_Variable;
    TArray<AShip*> CallFunc_GetCrewShips_ReturnValue = UBlueprintStepBase::GetCrewShips();
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetCrewShips_ReturnValue);
    auto CallFunc_Greater_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue;
    TArray<AActor*> CallFunc_GetDamageableParts_ReturnValue = CallFunc_Array_Get_Item->GetDamageableParts();
    this->SignalComplete();
    this->SignalComplete();
    TArray<AShip*> idx_282789 = UBlueprintStepBase::GetCrewShips();
    int CallFunc_Array_Length_ReturnValue3 = UKismetArrayLibrary::Array_Length(idx_282789);
    auto CallFunc_Greater_IntInt_ReturnValue2 = CallFunc_Array_Length_ReturnValue3;
    TArray<AActor*> CallFunc_GetDamageableParts_ReturnValue2 = CallFunc_Array_Get_Item3->GetDamageableParts();
    return;
}

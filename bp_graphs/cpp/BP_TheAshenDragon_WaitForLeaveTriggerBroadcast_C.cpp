// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TheAshenDragon_WaitForLeaveTriggerBroadcast_C::OnBegin (40 bytes)
void BP_TheAshenDragon_WaitForLeaveTriggerBroadcast_C::OnBegin()
{
    ExecuteUbergraph_BP_TheAshenDragon_WaitForLeaveTriggerBroadcast();
    return;
}

// Recovered Kismet: BP_TheAshenDragon_WaitForLeaveTriggerBroadcast_C::PlayerLeftTrigger (40 bytes)
void BP_TheAshenDragon_WaitForLeaveTriggerBroadcast_C::PlayerLeftTrigger()
{
    ExecuteUbergraph_BP_TheAshenDragon_WaitForLeaveTriggerBroadcast();
    return;
}

// Recovered Kismet: BP_TheAshenDragon_WaitForLeaveTriggerBroadcast_C::ExecuteUbergraph_BP_TheAshenDragon_WaitForLeaveTriggerBroadcast (1208 bytes)
void BP_TheAshenDragon_WaitForLeaveTriggerBroadcast_C::ExecuteUbergraph_BP_TheAshenDragon_WaitForLeaveTriggerBroadcast()
{
    bool idx_281953 = false;
    UBlueprintStepBase::GetParticipants(idx_281947);
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(idx_281947);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_1A0;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    UBlueprintStepBase::GetParticipants(idx_281947);
    auto idx_281955 = CallFunc_Array_Get_Item->this->IsOverlappingActor(CallFunc_GetVariables_OutStruct);
    idx_281953 = true;
L_1A0:
    if (!idx_281953) goto L_21E;
L_21E:
    this->SignalComplete();
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    this->GetVariables(CallFunc_GetVariables_OutStruct);
L_348:
    this->SignalComplete();
    UBlueprintStepBase::GetParticipants(idx_281947);
    int CallFunc_Array_Length_ReturnValue2 = UKismetArrayLibrary::Array_Length(idx_281947);
    auto CallFunc_Greater_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue2;
    if (!CallFunc_Greater_IntInt_ReturnValue) goto L_348;
    UBlueprintStepBase::GetParticipants(idx_281947);
    bool CallFunc_Array_Contains_ReturnValue = UKismetArrayLibrary::Array_Contains(idx_281947, K2Node_CustomEvent_NewParam);
    return;
}

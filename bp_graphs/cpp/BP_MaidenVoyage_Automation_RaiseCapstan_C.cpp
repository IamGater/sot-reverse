// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_MaidenVoyage_Automation_RaiseCapstan_C::OnBegin (40 bytes)
void BP_MaidenVoyage_Automation_RaiseCapstan_C::OnBegin()
{
    idx:286103();
    return;
}

// Recovered Kismet: BP_MaidenVoyage_Automation_RaiseCapstan_C::fn_idx_286103 (795 bytes)
void BP_MaidenVoyage_Automation_RaiseCapstan_C::fn_idx_286103()
{
    Capstan* K2Node_DynamicCast_AsCapstan = Cast<Capstan*>(CallFunc_Array_Get_Item2);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsCapstan);
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(K2Node_DynamicCast_AsCapstan);
    this->SignalComplete();
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetDamageableParts_ReturnValue);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    TArray<AShip*> CallFunc_GetCrewShips_ReturnValue = UBlueprintStepBase::GetCrewShips();
    int CallFunc_Array_Length_ReturnValue2 = UKismetArrayLibrary::Array_Length(CallFunc_GetCrewShips_ReturnValue);
    auto CallFunc_Greater_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue2;
    TArray<AActor*> CallFunc_GetDamageableParts_ReturnValue = CallFunc_Array_Get_Item->GetDamageableParts();
    return;
}

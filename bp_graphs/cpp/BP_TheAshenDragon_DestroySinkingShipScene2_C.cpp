// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TheAshenDragon_DestroySinkingShipScene2_C::OnBegin (40 bytes)
void BP_TheAshenDragon_DestroySinkingShipScene2_C::OnBegin()
{
    ExecuteUbergraph_BP_TheAshenDragon_DestroySinkingShipScene2();
    return;
}

// Recovered Kismet: BP_TheAshenDragon_DestroySinkingShipScene2_C::ExecuteUbergraph_BP_TheAshenDragon_DestroySinkingShipScene2 (435 bytes)
void BP_TheAshenDragon_DestroySinkingShipScene2_C::ExecuteUbergraph_BP_TheAshenDragon_DestroySinkingShipScene2()
{
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetVariables_OutStruct);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_15A;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
L_15A:
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    return;
}

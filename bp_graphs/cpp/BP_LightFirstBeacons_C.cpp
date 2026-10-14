// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_LightFirstBeacons_C::OnBeginCustom (600 bytes)
void BP_LightFirstBeacons_C::OnBeginCustom()
{
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(K2Node_MakeArray_Array);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_1AC;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    BP_OnboardingBeacon_C* idx_282871 = Cast<BP_OnboardingBeacon_C*>(CallFunc_Array_Get_Item);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_282871);
    if (!K2Node_DynamicCast_bSuccess) goto L_201;
L_1AC:
    this->SignalComplete();
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
L_201:
    return;
}

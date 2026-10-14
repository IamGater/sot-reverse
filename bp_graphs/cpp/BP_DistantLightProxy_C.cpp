// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_DistantLightProxy_C::FindExistingLight (615 bytes)
void BP_DistantLightProxy_C::FindExistingLight()
{
    bool idx_228606 = false;
    bool Temp_bool_Variable = false;
    auto CallFunc_Not_PreBool_ReturnValue = Temp_bool_Variable;
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(idx_228601);
    auto CallFunc_LessEqual_IntInt_ReturnValue = Temp_int_Variable;
    auto CallFunc_BooleanAND_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
    if (!CallFunc_BooleanAND_ReturnValue) goto L_1BC;
    bool CallFunc_EqualEqual_StrStr_ReturnValue = UKismetStringLibrary::EqualEqual_StrStr(Name, CallFunc_Array_Get_Item);
    idx_228606 = true;
    auto idx_228605 = Temp_int_Variable;
    Temp_bool_Variable = true;
L_1BC:
    CallFunc_Not_PreBool_ReturnValue = Temp_bool_Variable;
    if (!CallFunc_Not_PreBool_ReturnValue) goto L_1BC;
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Variable;
    auto Temp_int_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_DistantLightProxy_C::Create Lights (431 bytes)
void BP_DistantLightProxy_C::Create Lights()
{
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(idx_228601);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    int CallFunc_AddInstanceWorldSpace_ReturnValue = idx_228595->AddInstanceWorldSpace(CallFunc_Array_Get_Item);
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_DistantLightProxy_C::UserConstructionScript (17 bytes)
void BP_DistantLightProxy_C::UserConstructionScript()
{
    Create Lights();
    return;
}

// Recovered Kismet: BP_DistantLightProxy_C::Add Light (94 bytes)
void BP_DistantLightProxy_C::Add Light()
{
    ExecuteUbergraph_BP_DistantLightProxy();
    return;
}

// Recovered Kismet: BP_DistantLightProxy_C::ExecuteUbergraph_BP_DistantLightProxy (617 bytes)
void BP_DistantLightProxy_C::ExecuteUbergraph_BP_DistantLightProxy()
{
    Create Lights();
    FindExistingLight(idx_228599, idx_228590, idx_228589);
    if (!idx_228590) goto L_159;
    auto CallFunc_Conv_FloatToVector_ReturnValue = idx_228600;
    auto CallFunc_MakeTransform_ReturnValue2 = idx_228597;
    auto idx_228610 = idx_228610;
    idx_228610 = idx_228610;
    idx_228610 = idx_228610;
L_159:
    CallFunc_Conv_FloatToVector_ReturnValue = idx_228600;
    auto CallFunc_MakeTransform_ReturnValue = idx_228597;
    auto idx_228609 = idx_228609;
    idx_228609 = idx_228609;
    idx_228609 = idx_228609;
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(idx_228601, idx_228609);
    return;
}

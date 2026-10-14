// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_SmallShipNetProxy_C::Set Colour on All Materials (377 bytes)
void BP_SmallShipNetProxy_C::Set Colour on All Materials()
{
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(Dynamic);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_SmallShipNetProxy_C::Set Value on All Materials (377 bytes)
void BP_SmallShipNetProxy_C::Set Value on All Materials()
{
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(Dynamic);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_SmallShipNetProxy_C::Apply Bits to Lanterns (2661 bytes)
void BP_SmallShipNetProxy_C::Apply Bits to Lanterns()
{
    auto CallFunc_And_IntInt_ReturnValue6 = idx_277583;
    auto CallFunc_NotEqual_IntInt_ReturnValue3 = CallFunc_And_IntInt_ReturnValue6;
    auto CallFunc_Conv_BoolToFloat_ReturnValue3 = CallFunc_NotEqual_IntInt_ReturnValue3;
    Set Value on All Materials(CallFunc_Conv_BoolToFloat_ReturnValue3);
    auto CallFunc_And_IntInt_ReturnValue5 = idx_277583;
    auto CallFunc_NotEqual_IntInt_ReturnValue2 = CallFunc_And_IntInt_ReturnValue5;
    auto CallFunc_Conv_BoolToFloat_ReturnValue2 = CallFunc_NotEqual_IntInt_ReturnValue2;
    Set Value on All Materials(CallFunc_Conv_BoolToFloat_ReturnValue2);
    auto CallFunc_And_IntInt_ReturnValue4 = idx_277583;
    auto CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_And_IntInt_ReturnValue4;
    auto CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
    Set Value on All Materials(CallFunc_Conv_BoolToFloat_ReturnValue);
    auto CallFunc_Divide_IntInt_ReturnValue3 = idx_277583;
    auto CallFunc_And_IntInt_ReturnValue3 = CallFunc_Divide_IntInt_ReturnValue3;
    auto CallFunc_Conv_IntToByte_ReturnValue3 = CallFunc_And_IntInt_ReturnValue3;
    unsigned char CallFunc_GetValidIndex_ReturnValue3 = UKismetNodeHelperLibrary::GetValidIndex(EFlameOfFateType, CallFunc_Conv_IntToByte_ReturnValue3);
    auto Temp_byte_Variable2 = CallFunc_GetValidIndex_ReturnValue3;
    Set Colour on All Materials();
    auto CallFunc_Divide_IntInt_ReturnValue2 = idx_277583;
    auto CallFunc_And_IntInt_ReturnValue2 = CallFunc_Divide_IntInt_ReturnValue2;
    auto CallFunc_Conv_IntToByte_ReturnValue2 = CallFunc_And_IntInt_ReturnValue2;
    unsigned char CallFunc_GetValidIndex_ReturnValue2 = UKismetNodeHelperLibrary::GetValidIndex(EFlameOfFateType, CallFunc_Conv_IntToByte_ReturnValue2);
    auto Temp_byte_Variable = CallFunc_GetValidIndex_ReturnValue2;
    Set Colour on All Materials();
    auto CallFunc_Divide_IntInt_ReturnValue = idx_277583;
    auto CallFunc_And_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
    auto CallFunc_Conv_IntToByte_ReturnValue = CallFunc_And_IntInt_ReturnValue;
    unsigned char CallFunc_GetValidIndex_ReturnValue = UKismetNodeHelperLibrary::GetValidIndex(EFlameOfFateType, CallFunc_Conv_IntToByte_ReturnValue);
    auto Temp_byte_Variable3 = CallFunc_GetValidIndex_ReturnValue;
    Set Colour on All Materials();
    return;
}

// Recovered Kismet: BP_SmallShipNetProxy_C::Create Dynamic Materials (558 bytes)
void BP_SmallShipNetProxy_C::Create Dynamic Materials()
{
    TArray<UMaterialInterface*> CallFunc_GetMaterials_ReturnValue = Mesh->GetMaterials();
    int CallFunc_Array_LastIndex_ReturnValue = UKismetArrayLibrary::Array_LastIndex(CallFunc_GetMaterials_ReturnValue);
    auto CallFunc_LessEqual_IntInt_ReturnValue = Temp_int_Variable;
    CallFunc_GetMaterials_ReturnValue = Mesh->GetMaterials();
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue = Mesh->CreateDynamicMaterialInstance(Temp_int_Variable, CallFunc_Array_Get_Item);
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(Dynamic, CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Variable;
    auto Temp_int_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_SmallShipNetProxy_C::UserConstructionScript (3 bytes)
void BP_SmallShipNetProxy_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_SmallShipNetProxy_C::ReceiveBeginPlay (22 bytes)
void BP_SmallShipNetProxy_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_SmallShipNetProxy();
    return;
}

// Recovered Kismet: BP_SmallShipNetProxy_C::OnLanternStateChanged (40 bytes)
void BP_SmallShipNetProxy_C::OnLanternStateChanged()
{
    ExecuteUbergraph_BP_SmallShipNetProxy();
    return;
}

// Recovered Kismet: BP_SmallShipNetProxy_C::OnEmissaryActiveStateChanged (40 bytes)
void BP_SmallShipNetProxy_C::OnEmissaryActiveStateChanged()
{
    ExecuteUbergraph_BP_SmallShipNetProxy();
    return;
}

// Recovered Kismet: BP_SmallShipNetProxy_C::ExecuteUbergraph_BP_SmallShipNetProxy (157 bytes)
void BP_SmallShipNetProxy_C::ExecuteUbergraph_BP_SmallShipNetProxy()
{
    Create Dynamic Materials();
    int CallFunc_GetLanternBits_ReturnValue = AShipNetProxy::GetLanternBits();
    Apply Bits to Lanterns(CallFunc_GetLanternBits_ReturnValue);
    Apply Bits to Lanterns(K2Node_Event_LanternStateBits);
    return;
}

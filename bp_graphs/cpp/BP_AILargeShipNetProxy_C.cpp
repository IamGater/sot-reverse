// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_AILargeShipNetProxy_C::Set Value on All Materials (377 bytes)
void BP_AILargeShipNetProxy_C::Set Value on All Materials()
{
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(Dynamic);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_AILargeShipNetProxy_C::Apply Bits to Lanterns (897 bytes)
void BP_AILargeShipNetProxy_C::Apply Bits to Lanterns()
{
    auto CallFunc_And_IntInt_ReturnValue = Lantern;
    auto CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_And_IntInt_ReturnValue;
    auto CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
    Set Value on All Materials(CallFunc_Conv_BoolToFloat_ReturnValue);
    auto CallFunc_And_IntInt_ReturnValue6 = Lantern;
    auto CallFunc_NotEqual_IntInt_ReturnValue6 = CallFunc_And_IntInt_ReturnValue6;
    auto CallFunc_Conv_BoolToFloat_ReturnValue6 = CallFunc_NotEqual_IntInt_ReturnValue6;
    Set Value on All Materials(CallFunc_Conv_BoolToFloat_ReturnValue6);
    auto CallFunc_And_IntInt_ReturnValue5 = Lantern;
    auto CallFunc_NotEqual_IntInt_ReturnValue5 = CallFunc_And_IntInt_ReturnValue5;
    auto CallFunc_Conv_BoolToFloat_ReturnValue5 = CallFunc_NotEqual_IntInt_ReturnValue5;
    Set Value on All Materials(CallFunc_Conv_BoolToFloat_ReturnValue5);
    auto CallFunc_And_IntInt_ReturnValue4 = Lantern;
    auto CallFunc_NotEqual_IntInt_ReturnValue4 = CallFunc_And_IntInt_ReturnValue4;
    auto CallFunc_Conv_BoolToFloat_ReturnValue4 = CallFunc_NotEqual_IntInt_ReturnValue4;
    Set Value on All Materials(CallFunc_Conv_BoolToFloat_ReturnValue4);
    auto CallFunc_And_IntInt_ReturnValue3 = Lantern;
    auto CallFunc_NotEqual_IntInt_ReturnValue3 = CallFunc_And_IntInt_ReturnValue3;
    auto CallFunc_Conv_BoolToFloat_ReturnValue3 = CallFunc_NotEqual_IntInt_ReturnValue3;
    Set Value on All Materials(CallFunc_Conv_BoolToFloat_ReturnValue3);
    auto CallFunc_And_IntInt_ReturnValue2 = Lantern;
    auto CallFunc_NotEqual_IntInt_ReturnValue2 = CallFunc_And_IntInt_ReturnValue2;
    auto CallFunc_Conv_BoolToFloat_ReturnValue2 = CallFunc_NotEqual_IntInt_ReturnValue2;
    Set Value on All Materials(CallFunc_Conv_BoolToFloat_ReturnValue2);
    return;
}

// Recovered Kismet: BP_AILargeShipNetProxy_C::Create Dynamic Materials (558 bytes)
void BP_AILargeShipNetProxy_C::Create Dynamic Materials()
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

// Recovered Kismet: BP_AILargeShipNetProxy_C::UserConstructionScript (3 bytes)
void BP_AILargeShipNetProxy_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_AILargeShipNetProxy_C::ReceiveBeginPlay (22 bytes)
void BP_AILargeShipNetProxy_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_AILargeShipNetProxy();
    return;
}

// Recovered Kismet: BP_AILargeShipNetProxy_C::OnLanternStateChanged (40 bytes)
void BP_AILargeShipNetProxy_C::OnLanternStateChanged()
{
    ExecuteUbergraph_BP_AILargeShipNetProxy();
    return;
}

// Recovered Kismet: BP_AILargeShipNetProxy_C::ExecuteUbergraph_BP_AILargeShipNetProxy (111 bytes)
void BP_AILargeShipNetProxy_C::ExecuteUbergraph_BP_AILargeShipNetProxy()
{
    Create Dynamic Materials();
    int CallFunc_GetLanternBits_ReturnValue = AShipNetProxy::GetLanternBits();
    Apply Bits to Lanterns(CallFunc_GetLanternBits_ReturnValue);
    Apply Bits to Lanterns(K2Node_Event_LanternStateBits);
    return;
}

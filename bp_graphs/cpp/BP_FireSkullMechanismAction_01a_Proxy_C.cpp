// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_FireSkullMechanismAction_01a_Proxy_C::UserConstructionScript (3 bytes)
void BP_FireSkullMechanismAction_01a_Proxy_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_FireSkullMechanismAction_01a_Proxy_C::ApplyInstanceProperties (40 bytes)
void BP_FireSkullMechanismAction_01a_Proxy_C::ApplyInstanceProperties()
{
    ExecuteUbergraph_BP_FireSkullMechanismAction_01a_Proxy();
    return;
}

// Recovered Kismet: BP_FireSkullMechanismAction_01a_Proxy_C::ExecuteUbergraph_BP_FireSkullMechanismAction_01a_Proxy (529 bytes)
void BP_FireSkullMechanismAction_01a_Proxy_C::ExecuteUbergraph_BP_FireSkullMechanismAction_01a_Proxy()
{
    TArray<UActorComponent*> CallFunc_GetComponentsByClass_ReturnValue = K2Node_Event_Instance->GetComponentsByClass(FlamethrowerComponent);
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    CallFunc_GetComponentsByClass_ReturnValue = K2Node_Event_Instance->GetComponentsByClass(FlamethrowerComponent);
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetComponentsByClass_ReturnValue);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    UMechanismElementProxyInterface::ApplyInstanceProperties(K2Node_Event_Instance);
    return;
}

// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_CursedRogue_SetBriggsyArtifactsHandInRequirements_C::OnBegin (40 bytes)
void BP_CursedRogue_SetBriggsyArtifactsHandInRequirements_C::OnBegin()
{
    ExecuteUbergraph_BP_CursedRogue_SetBriggsyArtifactsHandInRequirements();
    return;
}

// Recovered Kismet: BP_CursedRogue_SetBriggsyArtifactsHandInRequirements_C::ExecuteUbergraph_BP_CursedRogue_SetBriggsyArtifactsHandInRequirements (863 bytes)
void BP_CursedRogue_SetBriggsyArtifactsHandInRequirements_C::ExecuteUbergraph_BP_CursedRogue_SetBriggsyArtifactsHandInRequirements()
{
L_F:
    this->SignalComplete();
    TScriptInterface<UNPCCustomItemPurchaseInterface> UniqueObjectNameForCooking_AsNPCCustom_Item_Purchase_Interface = TScriptInterface<UNPCCustomItemPurchaseInterface>(CallFunc_Array_Get_Item2);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsNPCCustom_Item_Purchase_Interface);
    if (!UniqueObjectNameForCooking_bSuccess) goto L_245;
    bool CallFunc_AddItemToPurchaseList_ReturnValue = UniqueObjectNameForCooking_AsNPCCustom_Item_Purchase_Interface->AddItemToPurchaseList(CallFunc_Array_Get_Item);
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    int CallFunc_Array_Length_ReturnValue2 = UKismetArrayLibrary::Array_Length(CallFunc_GetVariables_OutStruct2);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_F;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
L_245:
    CallFunc_AddItemToPurchaseList_ReturnValue = false;
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetComponentInterfacesByClass_OutInterfaces);
    auto CallFunc_Greater_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue;
    this->GetVariables(CallFunc_GetVariables_OutStruct2);
    return;
}

// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_GenerateBuriedMomentoes_C::SetPuzzle (272 bytes)
void BP_GenerateBuriedMomentoes_C::SetPuzzle()
{
    GetPuzzle(idx_284146);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(idx_284146);
    AActor* UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    auto idx_284156 = idx_284156;
    idx_284156 = idx_284156;
    idx_284156 = idx_284156;
    UTaleQuestParallelForeachStep::ToContext(idx_284156);
    return;
}

// Recovered Kismet: BP_GenerateBuriedMomentoes_C::GetIslandFromActor (389 bytes)
void BP_GenerateBuriedMomentoes_C::GetIslandFromActor()
{
    auto CallFunc_GetDefinition_ReturnValue = this->GetDefinition();
    ULevelStreaming* UniqueObjectNameForCooking_AsLevel_Streaming = Cast<ULevelStreaming*>(CallFunc_GetDefinition_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess2 = static_cast<bool>(UniqueObjectNameForCooking_AsLevel_Streaming);
    if (!UniqueObjectNameForCooking_bSuccess2) goto L_146;
    ALevelScriptActor* CallFunc_GetLevelScriptActor_ReturnValue = UniqueObjectNameForCooking_AsLevel_Streaming->GetLevelScriptActor();
    auto Temp_object_Variable = CallFunc_GetLevelScriptActor_ReturnValue;
    TScriptInterface<UWildRoseDefinitionInterface_C> UniqueObjectNameForCooking_AsWild_Rose_Definition_Interface = TScriptInterface<UWildRoseDefinitionInterface_C>(Temp_object_Variable);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsWild_Rose_Definition_Interface);
    if (!UniqueObjectNameForCooking_bSuccess) goto L_15E;
L_146:
    Temp_object_Variable = CallFunc_GetDefinition_ReturnValue;
L_15E:
    return;
}

// Recovered Kismet: BP_GenerateBuriedMomentoes_C::GetPuzzle (669 bytes)
void BP_GenerateBuriedMomentoes_C::GetPuzzle()
{
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length();
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_150;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    GetIslandFromActor(idx_284145);
    bool CallFunc_Array_Contains_ReturnValue = UKismetArrayLibrary::Array_Contains(IslandsToExclude, idx_284145);
    if (!CallFunc_Array_Contains_ReturnValue) goto L_21A;
L_150:
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
L_21A:
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(UsablePuzzles, CallFunc_Array_Get_Item);
    return;
}

// Recovered Kismet: BP_GenerateBuriedMomentoes_C::Start (22 bytes)
void BP_GenerateBuriedMomentoes_C::Start()
{
    ExecuteUbergraph_BP_GenerateBuriedMomentoes();
    return;
}

// Recovered Kismet: BP_GenerateBuriedMomentoes_C::ForIndex (40 bytes)
void BP_GenerateBuriedMomentoes_C::ForIndex()
{
    ExecuteUbergraph_BP_GenerateBuriedMomentoes();
    return;
}

// Recovered Kismet: BP_GenerateBuriedMomentoes_C::ExecuteUbergraph_BP_GenerateBuriedMomentoes (425 bytes)
void BP_GenerateBuriedMomentoes_C::ExecuteUbergraph_BP_GenerateBuriedMomentoes()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    auto CallFunc_EqualEqual_IntInt_ReturnValue = K2Node_Event_Index;
    if (!CallFunc_EqualEqual_IntInt_ReturnValue) goto L_BF;
    SetPuzzle(CallFunc_GetVariables_OutStruct, CallFunc_Array_Get_Item);
L_BF:
    SetPuzzle(CallFunc_GetVariables_OutStruct, CallFunc_Array_Get_Item);
    this->GetVariables(CallFunc_GetVariables_OutStruct2);
    GetIslandFromActor(CallFunc_GetVariables_OutStruct2, idx_284145);
    auto IslandsToExclude = K2Node_MakeArray_Array;
    return;
}

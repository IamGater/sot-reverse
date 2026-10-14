// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_ChooseWoodenPlankPuzzle_LegendaryStoryteller_AdditionalPuzzles_C::Set Puzzle (682 bytes)
void BP_ChooseWoodenPlankPuzzle_LegendaryStoryteller_AdditionalPuzzles_C::Set Puzzle()
{
    Get Puzzle(idx_283827);
    this->GetVariables(CallFunc_GetVariables_OutStruct2);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(idx_283827);
    AActor* UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue3 = UKismetSystemLibrary::Conv_AssetToObject(idx_283827);
    AActor* UniqueObjectNameForCooking_AsActor3 = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue3);
    bool UniqueObjectNameForCooking_bSuccess3 = static_cast<bool>(UniqueObjectNameForCooking_AsActor3);
    auto CallFunc_GetVariables_OutStruct2 = CallFunc_GetVariables_OutStruct2;
    CallFunc_GetVariables_OutStruct2 = CallFunc_GetVariables_OutStruct2;
    CallFunc_GetVariables_OutStruct2 = CallFunc_GetVariables_OutStruct2;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct2);
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue2 = UKismetSystemLibrary::Conv_AssetToObject(idx_283827);
    AActor* UniqueObjectNameForCooking_AsActor2 = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue2);
    bool UniqueObjectNameForCooking_bSuccess2 = static_cast<bool>(UniqueObjectNameForCooking_AsActor2);
    auto CallFunc_GetVariables_OutStruct = CallFunc_GetVariables_OutStruct;
    CallFunc_GetVariables_OutStruct = CallFunc_GetVariables_OutStruct;
    CallFunc_GetVariables_OutStruct = CallFunc_GetVariables_OutStruct;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct);
    this->SignalComplete();
    return;
}

// Recovered Kismet: BP_ChooseWoodenPlankPuzzle_LegendaryStoryteller_AdditionalPuzzles_C::GetIslandActorFromRef (393 bytes)
void BP_ChooseWoodenPlankPuzzle_LegendaryStoryteller_AdditionalPuzzles_C::GetIslandActorFromRef()
{
    auto CallFunc_GetDefinition_ReturnValue = this->GetDefinition();
    ULevelStreaming* UniqueObjectNameForCooking_AsLevel_Streaming = Cast<ULevelStreaming*>(CallFunc_GetDefinition_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess2 = static_cast<bool>(UniqueObjectNameForCooking_AsLevel_Streaming);
    if (!UniqueObjectNameForCooking_bSuccess2) goto L_14A;
    ALevelScriptActor* CallFunc_GetLevelScriptActor_ReturnValue = UniqueObjectNameForCooking_AsLevel_Streaming->GetLevelScriptActor();
    auto Temp_object_Variable = CallFunc_GetLevelScriptActor_ReturnValue;
    TScriptInterface<Uidx_283843> idx_283841 = TScriptInterface<Uidx_283843>(Temp_object_Variable);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(idx_283841);
    if (!UniqueObjectNameForCooking_bSuccess) goto L_162;
L_14A:
    Temp_object_Variable = CallFunc_GetDefinition_ReturnValue;
L_162:
    return;
}

// Recovered Kismet: BP_ChooseWoodenPlankPuzzle_LegendaryStoryteller_AdditionalPuzzles_C::Get Puzzle (798 bytes)
void BP_ChooseWoodenPlankPuzzle_LegendaryStoryteller_AdditionalPuzzles_C::Get Puzzle()
{
    auto idx_283842 = UniqueObjectNameForCooking_Array;
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length();
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_251;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    GetIslandActorFromRef(CallFunc_Array_Get_Item, idx_283828);
    bool CallFunc_Array_Contains_ReturnValue = UKismetArrayLibrary::Array_Contains(idx_283837, idx_283828);
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(idx_283842, CallFunc_Array_Get_Item);
L_251:
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_ChooseWoodenPlankPuzzle_LegendaryStoryteller_AdditionalPuzzles_C::OnBegin (40 bytes)
void BP_ChooseWoodenPlankPuzzle_LegendaryStoryteller_AdditionalPuzzles_C::OnBegin()
{
    ExecuteUbergraph_BP_ChooseWoodenPlankPuzzle_LegendaryStoryteller_AdditionalPuzzles();
    return;
}

// Recovered Kismet: BP_ChooseWoodenPlankPuzzle_LegendaryStoryteller_AdditionalPuzzles_C::ExecuteUbergraph_BP_ChooseWoodenPlankPuzzle_LegendaryStoryteller_AdditionalPuzzles (300 bytes)
void BP_ChooseWoodenPlankPuzzle_LegendaryStoryteller_AdditionalPuzzles_C::ExecuteUbergraph_BP_ChooseWoodenPlankPuzzle_LegendaryStoryteller_AdditionalPuzzles()
{
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct2);
    GetIslandActorFromRef(CallFunc_GetVariables_OutStruct2, idx_283830);
    GetIslandActorFromRef(CallFunc_GetVariables_OutStruct2, idx_283829);
    GetIslandActorFromRef(CallFunc_GetVariables_OutStruct2, idx_283828);
    auto idx_283837 = K2Node_MakeArray_Array;
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    Set Puzzle(CallFunc_GetVariables_OutStruct);
    return;
}

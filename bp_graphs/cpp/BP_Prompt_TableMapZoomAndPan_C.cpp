// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Prompt_TableMapZoomAndPan_C::OnPlayerStoppedUsingControllableFunc (116 bytes)
void BP_Prompt_TableMapZoomAndPan_C::OnPlayerStoppedUsingControllableFunc()
{
    MapTableControlPoint* K2Node_DynamicCast_AsMap_Table_Control_Point = Cast<MapTableControlPoint*>(nullptr);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsMap_Table_Control_Point);
    if (!K2Node_DynamicCast_bSuccess) goto L_71;
    bool State_MapTableUsed = false;
    Evaluate();
L_71:
    return;
}

// Recovered Kismet: BP_Prompt_TableMapZoomAndPan_C::OnPlayerDockedWithControllableFunc (116 bytes)
void BP_Prompt_TableMapZoomAndPan_C::OnPlayerDockedWithControllableFunc()
{
    MapTableControlPoint* K2Node_DynamicCast_AsMap_Table_Control_Point = Cast<MapTableControlPoint*>(nullptr);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsMap_Table_Control_Point);
    if (!K2Node_DynamicCast_bSuccess) goto L_71;
    bool State_MapTableUsed = true;
    Evaluate();
L_71:
    return;
}

// Recovered Kismet: BP_Prompt_TableMapZoomAndPan_C::TableMapPanChangedFunc (230 bytes)
void BP_Prompt_TableMapZoomAndPan_C::TableMapPanChangedFunc()
{
    auto K2Node_SwitchEnum_CmpSuccess = CurrentControllingMapPrompt;
    if (!K2Node_SwitchEnum_CmpSuccess) goto L_B9;
    K2Node_SwitchEnum_CmpSuccess = CurrentControllingMapPrompt;
    if (!K2Node_SwitchEnum_CmpSuccess) goto L_B9;
    K2Node_SwitchEnum_CmpSuccess = CurrentControllingMapPrompt;
    if (!K2Node_SwitchEnum_CmpSuccess) goto L_B9;
    K2Node_SwitchEnum_CmpSuccess = CurrentControllingMapPrompt;
    if (!K2Node_SwitchEnum_CmpSuccess) goto L_BE;
L_B9:
L_BE:
    IncrementTableMapPan(InputPin);
    return;
}

// Recovered Kismet: BP_Prompt_TableMapZoomAndPan_C::TableMapZoomChangedFunc (267 bytes)
void BP_Prompt_TableMapZoomAndPan_C::TableMapZoomChangedFunc()
{
    auto K2Node_SwitchEnum_CmpSuccess = CurrentControllingMapPrompt;
    if (!K2Node_SwitchEnum_CmpSuccess) goto L_B9;
    K2Node_SwitchEnum_CmpSuccess = CurrentControllingMapPrompt;
    if (!K2Node_SwitchEnum_CmpSuccess) goto L_BE;
    K2Node_SwitchEnum_CmpSuccess = CurrentControllingMapPrompt;
    if (!K2Node_SwitchEnum_CmpSuccess) goto L_E3;
    K2Node_SwitchEnum_CmpSuccess = CurrentControllingMapPrompt;
    if (!K2Node_SwitchEnum_CmpSuccess) goto L_B9;
L_B9:
L_BE:
    IncrementZoomIn(this);
L_E3:
    IncrementZoomOut(this);
    return;
}

// Recovered Kismet: BP_Prompt_TableMapZoomAndPan_C::OnPlayerPinnedMapTableFunc (199 bytes)
void BP_Prompt_TableMapZoomAndPan_C::OnPlayerPinnedMapTableFunc()
{
    auto CallFunc_Conv_Vector2DToVector_ReturnValue = this;
    float CallFunc_Distance_ReturnValue = UVectorMaths::Distance(DesiredIslandLocation, CallFunc_Conv_Vector2DToVector_ReturnValue);
    auto CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_Distance_ReturnValue;
    if (!CallFunc_LessEqual_FloatFloat_ReturnValue) goto L_C4;
    bool State_IslandPinned = true;
    Evaluate();
L_C4:
    return;
}

// Recovered Kismet: BP_Prompt_TableMapZoomAndPan_C::GetClassName(Text) (191 bytes)
void BP_Prompt_TableMapZoomAndPan_C::GetClassName_Text_()
{
    UClass* CallFunc_GetObjectClass_ReturnValue = UGameplayStatics::GetObjectClass();
    FString CallFunc_GetClassDisplayName_ReturnValue = UKismetSystemLibrary::GetClassDisplayName(CallFunc_GetObjectClass_ReturnValue);
    FText CallFunc_Conv_StringToText_ReturnValue = UKismetTextLibrary::Conv_StringToText(CallFunc_GetClassDisplayName_ReturnValue);
    return;
}

// Recovered Kismet: BP_Prompt_TableMapZoomAndPan_C::SelectSupportPrompt (598 bytes)
void BP_Prompt_TableMapZoomAndPan_C::SelectSupportPrompt()
{
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(CachedPrompts);
    if (!CallFunc_IsValid_ReturnValue) goto L_97;
L_97:
    GetClassName(Text)(CallFunc_GetClassName_Text__Name);
    auto UniqueObjectNameForCooking_FormatTextArgument = UniqueObjectNameForCooking_FormatTextArgument;
    UniqueObjectNameForCooking_FormatTextArgument = UniqueObjectNameForCooking_FormatTextArgument;
    FText CallFunc_Format_ReturnValue = UKismetTextLibrary::Format(UniqueObjectNameForCooking_Array);
    return;
}

// Recovered Kismet: BP_Prompt_TableMapZoomAndPan_C::Evaluate (22 bytes)
void BP_Prompt_TableMapZoomAndPan_C::Evaluate()
{
    ExecuteUbergraph_BP_Prompt_TableMapZoomAndPan();
    return;
}

// Recovered Kismet: BP_Prompt_TableMapZoomAndPan_C::PostInitialize (22 bytes)
void BP_Prompt_TableMapZoomAndPan_C::PostInitialize()
{
    ExecuteUbergraph_BP_Prompt_TableMapZoomAndPan();
    return;
}

// Recovered Kismet: BP_Prompt_TableMapZoomAndPan_C::UnregisterHandles (22 bytes)
void BP_Prompt_TableMapZoomAndPan_C::UnregisterHandles()
{
    ExecuteUbergraph_BP_Prompt_TableMapZoomAndPan();
    return;
}

// Recovered Kismet: BP_Prompt_TableMapZoomAndPan_C::RegisterCharacterEvents_Implementable (40 bytes)
void BP_Prompt_TableMapZoomAndPan_C::RegisterCharacterEvents_Implementable()
{
    ExecuteUbergraph_BP_Prompt_TableMapZoomAndPan();
    return;
}

// Recovered Kismet: BP_Prompt_TableMapZoomAndPan_C::UnregisterCharacterEvents_Implementable (40 bytes)
void BP_Prompt_TableMapZoomAndPan_C::UnregisterCharacterEvents_Implementable()
{
    ExecuteUbergraph_BP_Prompt_TableMapZoomAndPan();
    return;
}

// Recovered Kismet: BP_Prompt_TableMapZoomAndPan_C::TableMapZoomChanged (40 bytes)
void BP_Prompt_TableMapZoomAndPan_C::TableMapZoomChanged()
{
    ExecuteUbergraph_BP_Prompt_TableMapZoomAndPan();
    return;
}

// Recovered Kismet: BP_Prompt_TableMapZoomAndPan_C::TableMapPanChanged (40 bytes)
void BP_Prompt_TableMapZoomAndPan_C::TableMapPanChanged()
{
    ExecuteUbergraph_BP_Prompt_TableMapZoomAndPan();
    return;
}

// Recovered Kismet: BP_Prompt_TableMapZoomAndPan_C::StartSupportPromptTimer (22 bytes)
void BP_Prompt_TableMapZoomAndPan_C::StartSupportPromptTimer()
{
    ExecuteUbergraph_BP_Prompt_TableMapZoomAndPan();
    return;
}

// Recovered Kismet: BP_Prompt_TableMapZoomAndPan_C::IncrementZoomIn (40 bytes)
void BP_Prompt_TableMapZoomAndPan_C::IncrementZoomIn()
{
    ExecuteUbergraph_BP_Prompt_TableMapZoomAndPan();
    return;
}

// Recovered Kismet: BP_Prompt_TableMapZoomAndPan_C::IncrementZoomOut (40 bytes)
void BP_Prompt_TableMapZoomAndPan_C::IncrementZoomOut()
{
    ExecuteUbergraph_BP_Prompt_TableMapZoomAndPan();
    return;
}

// Recovered Kismet: BP_Prompt_TableMapZoomAndPan_C::IncrementTableMapPan (40 bytes)
void BP_Prompt_TableMapZoomAndPan_C::IncrementTableMapPan()
{
    ExecuteUbergraph_BP_Prompt_TableMapZoomAndPan();
    return;
}

// Recovered Kismet: BP_Prompt_TableMapZoomAndPan_C::OnPlayerPinnedMapTable (40 bytes)
void BP_Prompt_TableMapZoomAndPan_C::OnPlayerPinnedMapTable()
{
    ExecuteUbergraph_BP_Prompt_TableMapZoomAndPan();
    return;
}

// Recovered Kismet: BP_Prompt_TableMapZoomAndPan_C::OnPlayerDockedWithControllable (40 bytes)
void BP_Prompt_TableMapZoomAndPan_C::OnPlayerDockedWithControllable()
{
    ExecuteUbergraph_BP_Prompt_TableMapZoomAndPan();
    return;
}

// Recovered Kismet: BP_Prompt_TableMapZoomAndPan_C::OnPlayerStoppedUsingControllable (40 bytes)
void BP_Prompt_TableMapZoomAndPan_C::OnPlayerStoppedUsingControllable()
{
    ExecuteUbergraph_BP_Prompt_TableMapZoomAndPan();
    return;
}

// Recovered Kismet: BP_Prompt_TableMapZoomAndPan_C::ExecuteUbergraph_BP_Prompt_TableMapZoomAndPan (3020 bytes)
void BP_Prompt_TableMapZoomAndPan_C::ExecuteUbergraph_BP_Prompt_TableMapZoomAndPan()
{
    bool State_PlayerDidn_tPinIslandWithinTime = true;
    Evaluate();
    bool State_ShowPinIslandPrompt = true;
    StartSupportPromptTimer();
    Evaluate();
    if (!State_IslandPinned) goto L_8F;
    UBasePromptCoordinator::DismissAllPrompts();
    Complete();
L_8F:
    auto CallFunc_Not_PreBool_ReturnValue = State_MapTableUsed;
    if (!CallFunc_Not_PreBool_ReturnValue) goto L_CE;
    UBasePromptCoordinator::SetPromptAs(Prompt_UseMapTable);
L_CE:
    if (!State_PlayerDidn_tPinIslandWithinTime) goto L_F0;
    UBasePromptCoordinator::SetPromptAs(Prompt_SupportPrompt);
L_F0:
    if (!State_ShowPinIslandPrompt) goto L_112;
    UBasePromptCoordinator::SetPromptAs(Prompt_PlacePin);
L_112:
    auto K2Node_SwitchEnum_CmpSuccess = CurrentControllingMapPrompt;
    K2Node_SwitchEnum_CmpSuccess = CurrentControllingMapPrompt;
    if (!K2Node_SwitchEnum_CmpSuccess) goto L_1C3;
    K2Node_SwitchEnum_CmpSuccess = CurrentControllingMapPrompt;
    if (!K2Node_SwitchEnum_CmpSuccess) goto L_1D7;
    K2Node_SwitchEnum_CmpSuccess = CurrentControllingMapPrompt;
    if (!K2Node_SwitchEnum_CmpSuccess) goto L_1EB;
L_1C3:
    UBasePromptCoordinator::SetPromptAs(Prompt_ZoomIn);
L_1D7:
    UBasePromptCoordinator::SetPromptAs(Prompt_ZoomOut);
L_1EB:
    UBasePromptCoordinator::SetPromptAs(Prompt_Pan);
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher);
    UObject* CallFunc_SpawnObject_ReturnValue = UGameplayStatics::SpawnObject(TableMapCachedSupportPrompts_C);
    auto CachedPrompts = CallFunc_SpawnObject_ReturnValue;
    FString CallFunc_Conv_NameToString_ReturnValue = UKismetStringLibrary::Conv_NameToString(DesiredIslandName);
    SelectSupportPrompt(CallFunc_Conv_NameToString_ReturnValue, CallFunc_SelectSupportPrompt_SelectedPrompt);
    auto Prompt_SupportPrompt = CallFunc_SelectSupportPrompt_SelectedPrompt;
    Evaluate();
    auto CallFunc_EqualEqual_FloatFloat_ReturnValue3 = ZoomCounter;
    auto CallFunc_Multiply_FloatFloat_ReturnValue = AmountToZoomIn;
    auto ZoomCounter = CallFunc_Multiply_FloatFloat_ReturnValue;
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher3);
    auto CallFunc_EqualEqual_FloatFloat_ReturnValue = ZoomCounter;
    auto PanCounter = AmountToPan;
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher2);
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher4);
    auto CallFunc_EqualEqual_FloatFloat_ReturnValue2 = ZoomCounter;
    ZoomCounter = AmountToZoomOut;
L_56D:
    Evaluate();
    TableMapZoomChangedFunc(K2Node_CustomEvent_Event5);
    TableMapPanChangedFunc(K2Node_CustomEvent_Event4);
    auto CallFunc_Not_PreBool_ReturnValue2 = TimerStarted;
    bool TimerStarted = true;
    auto CallFunc_SignOfFloat_ReturnValue = ZoomCounter;
    CallFunc_Multiply_FloatFloat_ReturnValue = AmountToZoomIn;
    auto CallFunc_SignOfFloat_ReturnValue5 = CallFunc_Multiply_FloatFloat_ReturnValue;
    auto CallFunc_EqualEqual_FloatFloat_ReturnValue4 = CallFunc_SignOfFloat_ReturnValue5;
    if (!CallFunc_EqualEqual_FloatFloat_ReturnValue4) goto L_89A;
L_89A:
    Evaluate();
    auto CallFunc_SignOfFloat_ReturnValue3 = ZoomCounter;
    auto CallFunc_SignOfFloat_ReturnValue6 = K2Node_CustomEvent_ZoomDelta2;
    auto CallFunc_EqualEqual_FloatFloat_ReturnValue5 = CallFunc_SignOfFloat_ReturnValue3;
    auto CallFunc_Subtract_FloatFloat_ReturnValue = ZoomCounter;
    ZoomCounter = CallFunc_Subtract_FloatFloat_ReturnValue;
    auto CallFunc_SignOfFloat_ReturnValue2 = ZoomCounter;
    auto CallFunc_SignOfFloat_ReturnValue7 = K2Node_CustomEvent_ZoomDelta;
    auto CallFunc_EqualEqual_FloatFloat_ReturnValue6 = CallFunc_SignOfFloat_ReturnValue2;
    auto CallFunc_Subtract_FloatFloat_ReturnValue2 = ZoomCounter;
    ZoomCounter = CallFunc_Subtract_FloatFloat_ReturnValue2;
    auto CallFunc_SignOfFloat_ReturnValue4 = AmountToZoomOut;
    auto CallFunc_SignOfFloat_ReturnValue8 = ZoomCounter;
    auto CallFunc_EqualEqual_FloatFloat_ReturnValue7 = CallFunc_SignOfFloat_ReturnValue4;
    if (!CallFunc_EqualEqual_FloatFloat_ReturnValue7) goto L_56D;
    auto CallFunc_VSize2D_ReturnValue = K2Node_CustomEvent_DeltaPan;
    auto CallFunc_Subtract_FloatFloat_ReturnValue3 = PanCounter;
    PanCounter = CallFunc_Subtract_FloatFloat_ReturnValue3;
    auto CallFunc_LessEqual_FloatFloat_ReturnValue = PanCounter;
    OnPlayerPinnedMapTableFunc(K2Node_CustomEvent_Event3);
    OnPlayerDockedWithControllableFunc(K2Node_CustomEvent_Event2);
    OnPlayerStoppedUsingControllableFunc(K2Node_CustomEvent_Event);
    return;
}

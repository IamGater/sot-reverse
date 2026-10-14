// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TreasureRoomBrazier_C::UserConstructionScript (1455 bytes)
void BP_TreasureRoomBrazier_C::UserConstructionScript()
{
    int CallFunc_Array_Length_ReturnValue2 = UKismetArrayLibrary::Array_Length(CallFunc_GetChildrenComponents_Children);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_354;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    LightComponent* K2Node_DynamicCast_AsLight_Component = Cast<LightComponent*>(CallFunc_Array_Get_Item2);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsLight_Component);
    int CallFunc_Array_AddUnique_ReturnValue = UKismetArrayLibrary::Array_AddUnique(Lights, K2Node_DynamicCast_AsLight_Component);
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(OriginalIntensities, K2Node_DynamicCast_AsLight_Component);
    auto CallFunc_Multiply_FloatFloat_ReturnValue2 = K2Node_DynamicCast_AsLight_Component;
    int CallFunc_Array_Add_ReturnValue2 = UKismetArrayLibrary::Array_Add(MinIntensities, CallFunc_Multiply_FloatFloat_ReturnValue2);
L_354:
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(Lights);
    auto CallFunc_Greater_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue;
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(CallFunc_Array_Get_Item);
    auto CallFunc_GetLightColor_ReturnValue = CallFunc_Array_Get_Item->this->GetLightColor();
    auto OriginalColor = CallFunc_GetLightColor_ReturnValue;
    auto FireOriginalScale = CallFunc_BreakVector_X;
    auto CallFunc_Multiply_FloatFloat_ReturnValue = FireOriginalScale;
    auto FireMinScale = CallFunc_Multiply_FloatFloat_ReturnValue;
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_TreasureRoomBrazier_C::ReceiveBeginPlay (22 bytes)
void BP_TreasureRoomBrazier_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_TreasureRoomBrazier();
    return;
}

// Recovered Kismet: BP_TreasureRoomBrazier_C::IntensityChanged (40 bytes)
void BP_TreasureRoomBrazier_C::IntensityChanged()
{
    ExecuteUbergraph_BP_TreasureRoomBrazier();
    return;
}

// Recovered Kismet: BP_TreasureRoomBrazier_C::LightColourChanged (40 bytes)
void BP_TreasureRoomBrazier_C::LightColourChanged()
{
    ExecuteUbergraph_BP_TreasureRoomBrazier();
    return;
}

// Recovered Kismet: BP_TreasureRoomBrazier_C::PlayFireLoop (40 bytes)
void BP_TreasureRoomBrazier_C::PlayFireLoop()
{
    ExecuteUbergraph_BP_TreasureRoomBrazier();
    return;
}

// Recovered Kismet: BP_TreasureRoomBrazier_C::PlayFireOn (22 bytes)
void BP_TreasureRoomBrazier_C::PlayFireOn()
{
    ExecuteUbergraph_BP_TreasureRoomBrazier();
    return;
}

// Recovered Kismet: BP_TreasureRoomBrazier_C::PlayWwiseEvent (40 bytes)
void BP_TreasureRoomBrazier_C::PlayWwiseEvent()
{
    ExecuteUbergraph_BP_TreasureRoomBrazier();
    return;
}

// Recovered Kismet: BP_TreasureRoomBrazier_C::ExecuteUbergraph_BP_TreasureRoomBrazier (2188 bytes)
void BP_TreasureRoomBrazier_C::ExecuteUbergraph_BP_TreasureRoomBrazier()
{
    int CallFunc_Array_Length_ReturnValue2 = UKismetArrayLibrary::Array_Length(Lights);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    auto CallFunc_LinearColorLerp_ReturnValue2 = OriginalColor;
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    IntensityChanged();
    LightColourChanged();
    PlayFireLoop(true);
    auto CallFunc_NotEqual_FloatFloat_ReturnValue = K2Node_CustomEvent_NormalizedScale;
    auto CallFunc_BooleanAND_ReturnValue = WasZero;
    if (!CallFunc_BooleanAND_ReturnValue) goto L_255;
    PlayFireLoop(true);
L_255:
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(Lights);
    auto CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue;
    auto CallFunc_LessEqual_IntInt_ReturnValue = Temp_int_Variable;
    if (!CallFunc_LessEqual_IntInt_ReturnValue) goto L_46F;
    auto CallFunc_Subtract_FloatFloat_ReturnValue3 = CallFunc_Array_Get_Item2;
    auto CallFunc_Multiply_FloatFloat_ReturnValue2 = CallFunc_Subtract_FloatFloat_ReturnValue3;
    auto CallFunc_Subtract_FloatFloat_ReturnValue4 = CallFunc_Multiply_FloatFloat_ReturnValue2;
L_46F:
    auto CallFunc_EqualEqual_FloatFloat_ReturnValue = K2Node_CustomEvent_NormalizedScale;
    auto WasZero = CallFunc_EqualEqual_FloatFloat_ReturnValue;
    PlayFireLoop(false);
    PlayFireOn();
    auto CallFunc_Add_IntInt_ReturnValue2 = Temp_int_Variable;
    auto Temp_int_Variable = CallFunc_Add_IntInt_ReturnValue2;
    auto K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    auto CallFunc_LinearColorLerp_ReturnValue3 = K2Node_MakeStruct_LinearColor;
    auto vfx_brazier_fire = vfx_brazier_fire;
    auto CallFunc_LinearColorLerp_ReturnValue = K2Node_CustomEvent_LerpAmount;
    auto CallFunc_Conv_LinearColorToVector_ReturnValue = CallFunc_LinearColorLerp_ReturnValue;
    int CallFunc_WwiseEmitterComponentPostEvent_ReturnValue = UWwiseEmitterBlueprintLibrary::WwiseEmitterComponentPostEvent(WwiseEmitter, Play_sfx_treasureroom_brazier_on);
L_74E:
    int CallFunc_WwiseEmitterComponentPostEvent_ReturnValue2 = UWwiseEmitterBlueprintLibrary::WwiseEmitterComponentPostEvent(WwiseEmitter, Stop_sfx_treasureroom_brazier_loop);
    int CallFunc_WwiseEmitterComponentPostEvent_ReturnValue3 = UWwiseEmitterBlueprintLibrary::WwiseEmitterComponentPostEvent(WwiseEmitter, Play_sfx_treasureroom_brazier_loop);
    if (!K2Node_CustomEvent_Enabled) goto L_74E;
    int CallFunc_WwiseEmitterComponentPostEvent_ReturnValue4 = UWwiseEmitterBlueprintLibrary::WwiseEmitterComponentPostEvent(WwiseEmitter, K2Node_CustomEvent_EventToPlay);
    return;
}

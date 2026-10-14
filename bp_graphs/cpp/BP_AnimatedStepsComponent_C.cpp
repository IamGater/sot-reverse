// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_AnimatedStepsComponent_C::StartOpeningSteps (41 bytes)
void BP_AnimatedStepsComponent_C::StartOpeningSteps()
{
    SetComponentTickEnabled(true);
    return;
}

// Recovered Kismet: BP_AnimatedStepsComponent_C::SetAllStepsZs (620 bytes)
void BP_AnimatedStepsComponent_C::SetAllStepsZs()
{
    if (!OpeningOrClosing) goto L_1FE;
    auto MovementTimer = AnimationDuration;
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(Boxes);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_21A;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Array_Index_Variable;
    UpdateStep(CallFunc_Add_IntInt_ReturnValue, CallFunc_Array_Get_Item, CallFunc_Array_Get_Item3, CallFunc_Array_Get_Item2);
L_1FE:
L_21A:
    auto CallFunc_Add_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue2;
    return;
}

// Recovered Kismet: BP_AnimatedStepsComponent_C::UpdateStep (783 bytes)
void BP_AnimatedStepsComponent_C::UpdateStep()
{
    auto CallFunc_Subtract_FloatFloat_ReturnValue = MovementTimer;
    auto CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
    auto CallFunc_FClamp_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
    float CallFunc_GetFloatValue_ReturnValue = AnimCurve->GetFloatValue(CallFunc_FClamp_ReturnValue);
    auto CallFunc_Lerp_ReturnValue = TargetZ;
    auto CallFunc_MakeVector_ReturnValue = CallFunc_Lerp_ReturnValue;
    auto CallFunc_Conv_VectorToTransform_ReturnValue = CallFunc_MakeVector_ReturnValue;
    CallFunc_Subtract_FloatFloat_ReturnValue = MovementTimer;
    CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
    CallFunc_FClamp_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
    CallFunc_GetFloatValue_ReturnValue = AnimCurve->GetFloatValue(CallFunc_FClamp_ReturnValue);
    CallFunc_Lerp_ReturnValue = TargetZ;
    auto CallFunc_MakeVector_ReturnValue2 = CallFunc_Lerp_ReturnValue;
    auto CallFunc_Subtract_VectorVector_ReturnValue = BoxOrigin;
    return;
}

// Recovered Kismet: BP_AnimatedStepsComponent_C::ReceiveTick (40 bytes)
void BP_AnimatedStepsComponent_C::ReceiveTick()
{
    ExecuteUbergraph_BP_AnimatedStepsComponent();
    return;
}

// Recovered Kismet: BP_AnimatedStepsComponent_C::StartOpening (22 bytes)
void BP_AnimatedStepsComponent_C::StartOpening()
{
    ExecuteUbergraph_BP_AnimatedStepsComponent();
    return;
}

// Recovered Kismet: BP_AnimatedStepsComponent_C::OpenImmediate (22 bytes)
void BP_AnimatedStepsComponent_C::OpenImmediate()
{
    ExecuteUbergraph_BP_AnimatedStepsComponent();
    return;
}

// Recovered Kismet: BP_AnimatedStepsComponent_C::Close (22 bytes)
void BP_AnimatedStepsComponent_C::Close()
{
    ExecuteUbergraph_BP_AnimatedStepsComponent();
    return;
}

// Recovered Kismet: BP_AnimatedStepsComponent_C::ExecuteUbergraph_BP_AnimatedStepsComponent (2116 bytes)
void BP_AnimatedStepsComponent_C::ExecuteUbergraph_BP_AnimatedStepsComponent()
{
    auto CallFunc_Add_IntInt_ReturnValue5 = Temp_int_Array_Index_Variable4;
    UpdateStep(CallFunc_Add_IntInt_ReturnValue5, CallFunc_Array_Get_Item2, CallFunc_Array_Get_Item, CallFunc_Array_Get_Item4, CallFunc_Array_Get_Item3);
    auto CallFunc_Add_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable2;
    auto Temp_int_Loop_Counter_Variable2 = CallFunc_Add_IntInt_ReturnValue2;
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(Boxes);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable2;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_23A;
    auto Temp_int_Array_Index_Variable4 = Temp_int_Loop_Counter_Variable2;
L_23A:
    auto CallFunc_Add_FloatFloat_ReturnValue = AnimationDuration;
    auto CallFunc_GreaterEqual_FloatFloat_ReturnValue = MovementTimer;
    int CallFunc_Array_Length_ReturnValue3 = UKismetArrayLibrary::Array_Length(Boxes);
    auto CallFunc_Less_IntInt_ReturnValue3 = Temp_int_Loop_Counter_Variable3;
    if (!CallFunc_Less_IntInt_ReturnValue3) goto L_3BE;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable3;
L_3BE:
    SetComponentTickEnabled(false);
    auto CallFunc_Add_IntInt_ReturnValue4 = Temp_int_Loop_Counter_Variable3;
    auto Temp_int_Loop_Counter_Variable3 = CallFunc_Add_IntInt_ReturnValue4;
    StartOpeningSteps();
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    int CallFunc_Array_Length_ReturnValue2 = UKismetArrayLibrary::Array_Length(Boxes);
    auto CallFunc_Less_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable2 = Temp_int_Loop_Counter_Variable;
    int CallFunc_Array_Length_ReturnValue4 = UKismetArrayLibrary::Array_Length(Boxes);
    auto CallFunc_Less_IntInt_ReturnValue4 = Temp_int_Loop_Counter_Variable4;
    auto Temp_int_Array_Index_Variable3 = Temp_int_Loop_Counter_Variable4;
    auto CallFunc_Add_IntInt_ReturnValue3 = Temp_int_Loop_Counter_Variable4;
    auto Temp_int_Loop_Counter_Variable4 = CallFunc_Add_IntInt_ReturnValue3;
    SetAllStepsZs(K2Node_MakeArray_Array, false);
    SetAllStepsZs(BoxTargetZs, true);
    auto CallFunc_Add_FloatFloat_ReturnValue2 = MovementTimer;
    auto MovementTimer = CallFunc_Add_FloatFloat_ReturnValue2;
    return;
}

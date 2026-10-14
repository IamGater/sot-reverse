// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_LocalWindGenerator_C::StopReaction (33 bytes)
void BP_LocalWindGenerator_C::StopReaction()
{
    AActor::SetActorTickEnabled(false);
    return;
}

// Recovered Kismet: BP_LocalWindGenerator_C::ApplyDisturbanceAtCurrentTime (935 bytes)
void BP_LocalWindGenerator_C::ApplyDisturbanceAtCurrentTime()
{
    auto CallFunc_Add_FloatFloat_ReturnValue = DeltaTme;
    auto CurrentTime = CallFunc_Add_FloatFloat_ReturnValue;
    auto CallFunc_Divide_FloatFloat_ReturnValue = CurrentTime;
    auto CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
    if (!CallFunc_LessEqual_FloatFloat_ReturnValue) goto L_29D;
    auto CallFunc_Multiply_FloatFloat_ReturnValue = Radius;
    FVector CallFunc_K2_GetActorLocation_ReturnValue = AActor::K2_GetActorLocation();
    auto K2Node_MakeStruct_LinearColor2 = K2Node_MakeStruct_LinearColor2;
    K2Node_MakeStruct_LinearColor2 = K2Node_MakeStruct_LinearColor2;
    K2Node_MakeStruct_LinearColor2 = K2Node_MakeStruct_LinearColor2;
    K2Node_MakeStruct_LinearColor2 = K2Node_MakeStruct_LinearColor2;
    CallFunc_Divide_FloatFloat_ReturnValue = CurrentTime;
    float CallFunc_GetFloatValue_ReturnValue = WindScaleCurve->GetFloatValue(CallFunc_Divide_FloatFloat_ReturnValue);
L_29D:
    AActor::SetActorTickEnabled(false);
    auto K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    return;
}

// Recovered Kismet: BP_LocalWindGenerator_C::StartReaction (56 bytes)
void BP_LocalWindGenerator_C::StartReaction()
{
    AActor::SetActorTickEnabled(true);
    return;
}

// Recovered Kismet: BP_LocalWindGenerator_C::UserConstructionScript (3 bytes)
void BP_LocalWindGenerator_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_LocalWindGenerator_C::ReceiveTick (40 bytes)
void BP_LocalWindGenerator_C::ReceiveTick()
{
    ExecuteUbergraph_BP_LocalWindGenerator();
    return;
}

// Recovered Kismet: BP_LocalWindGenerator_C::ExecuteUbergraph_BP_LocalWindGenerator (36 bytes)
void BP_LocalWindGenerator_C::ExecuteUbergraph_BP_LocalWindGenerator()
{
    ApplyDisturbanceAtCurrentTime(K2Node_Event_DeltaSeconds);
    return;
}

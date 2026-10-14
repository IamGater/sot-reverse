// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TaleDistanceTrackerProxy_C::Initialise (76 bytes)
void BP_TaleDistanceTrackerProxy_C::Initialise()
{
    auto idx_278989 = idx_278989;
    auto idx_278988 = idx_278988;
    auto idx_278990 = idx_278990;
    return;
}

// Recovered Kismet: BP_TaleDistanceTrackerProxy_C::GetDistance (163 bytes)
void BP_TaleDistanceTrackerProxy_C::GetDistance()
{
    FVector CallFunc_K2_GetActorLocation_ReturnValue = idx_278978->K2_GetActorLocation();
    auto CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
    auto CallFunc_VSize_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
    return;
}

// Recovered Kismet: BP_TaleDistanceTrackerProxy_C::UserConstructionScript (3 bytes)
void BP_TaleDistanceTrackerProxy_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_TaleDistanceTrackerProxy_C::ReceiveTick (40 bytes)
void BP_TaleDistanceTrackerProxy_C::ReceiveTick()
{
    ExecuteUbergraph_BP_TaleDistanceTrackerProxy();
    return;
}

// Recovered Kismet: BP_TaleDistanceTrackerProxy_C::ExecuteUbergraph_BP_TaleDistanceTrackerProxy (625 bytes)
void BP_TaleDistanceTrackerProxy_C::ExecuteUbergraph_BP_TaleDistanceTrackerProxy()
{
    Broadcast();
    K2_DestroyActor();
    auto CallFunc_NotEqual_ObjectObject_ReturnValue = idx_278989;
    if (!CallFunc_NotEqual_ObjectObject_ReturnValue) goto L_20D;
    GetDistance(idx_278989, idx_278988, idx_278982);
    FString CallFunc_Conv_FloatToString_ReturnValue = UKismetStringLibrary::Conv_FloatToString(idx_278982);
    FString CallFunc_Concat_StrStr_ReturnValue = UKismetStringLibrary::Concat_StrStr(CallFunc_Conv_FloatToString_ReturnValue);
    auto CallFunc_Less_FloatFloat_ReturnValue = idx_278990;
    if (!CallFunc_Less_FloatFloat_ReturnValue) goto L_26E;
L_20D:
L_26E:
    return;
}

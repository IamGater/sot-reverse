// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TrackActorTriggerProxyBase_C::TryAddTrackedActor (339 bytes)
void BP_TrackActorTriggerProxyBase_C::TryAddTrackedActor()
{
    bool CallFunc_Array_Contains_ReturnValue = UKismetArrayLibrary::Array_Contains(idx_279024, Actor);
    if (!CallFunc_Array_Contains_ReturnValue) goto L_4F;
L_4F:
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(idx_279024, Actor);
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(idx_279024);
    int CallFunc_Array_Length_ReturnValue2 = UKismetArrayLibrary::Array_Length(TrackedActors);
    auto CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue;
    if (!CallFunc_EqualEqual_IntInt_ReturnValue) goto L_150;
L_150:
    return;
}

// Recovered Kismet: BP_TrackActorTriggerProxyBase_C::Initialize (30 bytes)
void BP_TrackActorTriggerProxyBase_C::Initialize()
{
    return;
}

// Recovered Kismet: BP_TrackActorTriggerProxyBase_C::IsTrackedActor (205 bytes)
void BP_TrackActorTriggerProxyBase_C::IsTrackedActor()
{
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(TrackedActors);
    auto CallFunc_Greater_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue;
    if (!CallFunc_Greater_IntInt_ReturnValue) goto L_BF;
    bool CallFunc_Array_Contains_ReturnValue = UKismetArrayLibrary::Array_Contains(TrackedActors, Actor);
L_BF:
    return;
}

// Recovered Kismet: BP_TrackActorTriggerProxyBase_C::UserConstructionScript (13 bytes)
void BP_TrackActorTriggerProxyBase_C::UserConstructionScript()
{
    this->UserConstructionScript();
    return;
}

// Recovered Kismet: BP_TrackActorTriggerProxyBase_C::TriggerActivated (40 bytes)
void BP_TrackActorTriggerProxyBase_C::TriggerActivated()
{
    ExecuteUbergraph_BP_TrackActorTriggerProxyBase();
    return;
}

// Recovered Kismet: BP_TrackActorTriggerProxyBase_C::TriggerExited (40 bytes)
void BP_TrackActorTriggerProxyBase_C::TriggerExited()
{
    ExecuteUbergraph_BP_TrackActorTriggerProxyBase();
    return;
}

// Recovered Kismet: BP_TrackActorTriggerProxyBase_C::ExecuteUbergraph_BP_TrackActorTriggerProxyBase (434 bytes)
void BP_TrackActorTriggerProxyBase_C::ExecuteUbergraph_BP_TrackActorTriggerProxyBase()
{
    IsTrackedActor(K2Node_CustomEvent_Actor, idx_279010);
    bool CallFunc_Array_Contains_ReturnValue = UKismetArrayLibrary::Array_Contains(idx_279012, K2Node_CustomEvent_Actor);
    auto CallFunc_BooleanAND_ReturnValue = idx_279010;
    if (!CallFunc_BooleanAND_ReturnValue) goto L_1AF;
    bool CallFunc_Array_RemoveItem_ReturnValue = UKismetArrayLibrary::Array_RemoveItem(idx_279012, K2Node_CustomEvent_Actor);
    this->TriggerActivated(idx_279017);
    IsTrackedActor(idx_279017, idx_279011);
    if (!idx_279011) goto L_1AF;
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(idx_279012, idx_279017);
    TryAddTrackedActor(idx_279017);
L_1AF:
    return;
}

// Recovered Kismet: BP_TrackActorTriggerProxyBase_C::UserConstructionScript (3 bytes)
void BP_TrackActorTriggerProxyBase_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_TrackActorTriggerProxyBase_C::fn_idx_279021 (3 bytes)
void BP_TrackActorTriggerProxyBase_C::fn_idx_279021()
{
    return;
}

// Recovered Kismet: BP_TrackActorTriggerProxyBase_C::fn_idx_279019 (3 bytes)
void BP_TrackActorTriggerProxyBase_C::fn_idx_279019()
{
    return;
}

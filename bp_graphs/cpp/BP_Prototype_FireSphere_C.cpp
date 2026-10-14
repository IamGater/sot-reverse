// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Prototype_FireSphere_C::UserConstructionScript (3 bytes)
void BP_Prototype_FireSphere_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_Prototype_FireSphere_C::fn_idx_285706 (22 bytes)
void BP_Prototype_FireSphere_C::fn_idx_285706()
{
    idx:285702();
    return;
}

// Recovered Kismet: BP_Prototype_FireSphere_C::fn_idx_285707 (22 bytes)
void BP_Prototype_FireSphere_C::fn_idx_285707()
{
    idx:285702();
    return;
}

// Recovered Kismet: BP_Prototype_FireSphere_C::Enable (58 bytes)
void BP_Prototype_FireSphere_C::Enable()
{
    idx:285702();
    return;
}

// Recovered Kismet: BP_Prototype_FireSphere_C::AreAllTutorialsOnState (22 bytes)
void BP_Prototype_FireSphere_C::AreAllTutorialsOnState()
{
    idx:285702();
    return;
}

// Recovered Kismet: BP_Prototype_FireSphere_C::fn_idx_285698 (112 bytes)
void BP_Prototype_FireSphere_C::fn_idx_285698()
{
    idx:285702();
    return;
}

// Recovered Kismet: BP_Prototype_FireSphere_C::fn_idx_285702 (1019 bytes)
void BP_Prototype_FireSphere_C::fn_idx_285702()
{
    auto CallFunc_Multiply_VectorFloat_ReturnValue = Direction;
    auto CallFunc_Multiply_VectorFloat_ReturnValue2 = CallFunc_Multiply_VectorFloat_ReturnValue;
    auto CallFunc_Add_VectorVector_ReturnValue = Origin;
    bool idx_285699 = AActor::K2_SetActorLocation(CallFunc_Add_VectorVector_ReturnValue, false, idx_285700, false);
    auto CallFunc_MakeRotFromX_ReturnValue = Direction;
    bool CallFunc_SetActorRotation_ReturnValue = AActor::SetActorRotation(CallFunc_MakeRotFromX_ReturnValue);
    bool CallFunc_HasAuthority_ReturnValue = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue) goto L_3F8;
    TArray<UActorComponent*> CallFunc_GetComponentsByClass_ReturnValue = K2Node_ComponentBoundEvent_OtherActor->GetComponentsByClass(HealthComponent);
    auto K2Node_MakeStruct_DamageInstance = K2Node_MakeStruct_DamageInstance;
    K2Node_MakeStruct_DamageInstance = K2Node_MakeStruct_DamageInstance;
    auto K2Node_MakeStruct_StatusDescriptor = K2Node_MakeStruct_StatusDescriptor;
    auto K2Node_MakeStruct_Status = K2Node_MakeStruct_Status;
    K2Node_MakeStruct_Status = K2Node_MakeStruct_Status;
    auto Origin = idx_285704;
    auto CallFunc_Normal_ReturnValue = idx_285703;
    auto Direction = CallFunc_Normal_ReturnValue;
    bool Enabled = true;
    Enabled = false;
    bool CallFunc_K2_SetActorLocation_ReturnValue = AActor::K2_SetActorLocation(false, CallFunc_K2_SetActorLocation_SweepHitResult, false);
    if (!Enabled) goto L_3F8;
    Disable();
L_3F8:
    return;
}

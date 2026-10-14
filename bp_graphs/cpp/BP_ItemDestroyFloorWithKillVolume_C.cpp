// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_ItemDestroyFloorWithKillVolume_C::UserConstructionScript (1304 bytes)
void BP_ItemDestroyFloorWithKillVolume_C::UserConstructionScript()
{
    auto CallFunc_MakeVector_ReturnValue4 = idx_242167;
    auto CallFunc_MakeVector_ReturnValue = CallFunc_BreakVector_X;
    FVector idx_242175 = idx_242183->GetUnscaledBoxExtent();
    FVector CallFunc_K2_GetComponentScale_ReturnValue = idx_242183->K2_GetComponentScale();
    auto CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_BreakVector_Z5;
    FVector idx_242176 = idx_242183->GetUnscaledBoxExtent();
    auto CallFunc_MakeVector_ReturnValue3 = idx_242166;
    FVector idx_242173 = idx_242179->GetUnscaledBoxExtent();
    FTransform idx_242172 = idx_242179->GetRelativeTransform();
    FVector idx_242174 = idx_242183->GetUnscaledBoxExtent();
    auto CallFunc_Add_FloatFloat_ReturnValue = CallFunc_BreakVector_Z4;
    auto CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
    auto CallFunc_MakeVector_ReturnValue2 = CallFunc_BreakVector_X3;
    auto CallFunc_MakeTransform_ReturnValue = CallFunc_MakeVector_ReturnValue2;
    return;
}

// Recovered Kismet: BP_ItemDestroyFloorWithKillVolume_C::ReceiveActorBeginOverlap (40 bytes)
void BP_ItemDestroyFloorWithKillVolume_C::ReceiveActorBeginOverlap()
{
    ExecuteUbergraph_BP_ItemDestroyFloorWithKillVolume();
    return;
}

// Recovered Kismet: BP_ItemDestroyFloorWithKillVolume_C::ExecuteUbergraph_BP_ItemDestroyFloorWithKillVolume (601 bytes)
void BP_ItemDestroyFloorWithKillVolume_C::ExecuteUbergraph_BP_ItemDestroyFloorWithKillVolume()
{
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    TArray<UActorComponent*> CallFunc_GetComponentsByClass_ReturnValue = K2Node_Event_OtherActor->GetComponentsByClass(HealthComponent);
    auto CallFunc_Multiply_FloatFloat_ReturnValue = Damage;
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    CallFunc_GetComponentsByClass_ReturnValue = K2Node_Event_OtherActor->GetComponentsByClass(HealthComponent);
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetComponentsByClass_ReturnValue);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    bool CallFunc_HasAuthority_ReturnValue = AActor::HasAuthority();
    return;
}

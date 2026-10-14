// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Revealable_BaseMesh_C::UserConstructionScript (3 bytes)
void BP_Revealable_BaseMesh_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_Revealable_BaseMesh_C::BndEvt__Revealable_K2Node_ComponentBoundEvent_39_OnHide__DelegateSignature (22 bytes)
void BP_Revealable_BaseMesh_C::BndEvt__Revealable_K2Node_ComponentBoundEvent_39_OnHide__DelegateSignature()
{
    ExecuteUbergraph_BP_Revealable_BaseMesh();
    return;
}

// Recovered Kismet: BP_Revealable_BaseMesh_C::BndEvt__Revealable_K2Node_ComponentBoundEvent_44_OnCloseReveal__DelegateSignature (22 bytes)
void BP_Revealable_BaseMesh_C::BndEvt__Revealable_K2Node_ComponentBoundEvent_44_OnCloseReveal__DelegateSignature()
{
    ExecuteUbergraph_BP_Revealable_BaseMesh();
    return;
}

// Recovered Kismet: BP_Revealable_BaseMesh_C::ReceiveBeginPlay (22 bytes)
void BP_Revealable_BaseMesh_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_Revealable_BaseMesh();
    return;
}

// Recovered Kismet: BP_Revealable_BaseMesh_C::ExecuteUbergraph_BP_Revealable_BaseMesh (1334 bytes)
void BP_Revealable_BaseMesh_C::ExecuteUbergraph_BP_Revealable_BaseMesh()
{
    int CallFunc_Array_Length_ReturnValue3 = UKismetArrayLibrary::Array_Length(AnimInstances);
    auto CallFunc_Less_IntInt_ReturnValue3 = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    TArray<UActorComponent*> CallFunc_GetComponentsByClass_ReturnValue = AActor::GetComponentsByClass(SkeletalMeshComponent);
    int CallFunc_Array_Length_ReturnValue2 = UKismetArrayLibrary::Array_Length(CallFunc_GetComponentsByClass_ReturnValue);
    auto CallFunc_Less_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable2;
    auto Temp_int_Array_Index_Variable2 = Temp_int_Loop_Counter_Variable2;
    CallFunc_GetComponentsByClass_ReturnValue = AActor::GetComponentsByClass(SkeletalMeshComponent);
    auto CallFunc_GetAnimInstance_ReturnValue = CallFunc_Array_Get_Item2->GetAnimInstance();
    TScriptInterface<URevealableAnimInstance_C> K2Node_DynamicCast_AsRevealable_Anim_Instance = TScriptInterface<URevealableAnimInstance_C>(CallFunc_GetAnimInstance_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsRevealable_Anim_Instance);
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(AnimInstances, K2Node_DynamicCast_AsRevealable_Anim_Instance);
    auto CallFunc_Add_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable2;
    auto Temp_int_Loop_Counter_Variable2 = CallFunc_Add_IntInt_ReturnValue2;
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(AnimInstances);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable3;
    auto Temp_int_Array_Index_Variable3 = Temp_int_Loop_Counter_Variable3;
    auto CallFunc_Add_IntInt_ReturnValue3 = Temp_int_Loop_Counter_Variable3;
    auto Temp_int_Loop_Counter_Variable3 = CallFunc_Add_IntInt_ReturnValue3;
    return;
}

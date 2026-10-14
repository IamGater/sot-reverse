// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Base_Capstan_C::GetArms (610 bytes)
void BP_Base_Capstan_C::GetArms()
{
    TArray<UActorComponent*> CallFunc_GetComponentsByClass_ReturnValue = AActor::GetComponentsByClass(ChildActorComponent);
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetComponentsByClass_ReturnValue);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_1ED;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    CallFunc_GetComponentsByClass_ReturnValue = AActor::GetComponentsByClass(ChildActorComponent);
    BP_CapstanArm_C* K2Node_DynamicCast_AsBP_Capstan_Arm = Cast<BP_CapstanArm_C*>(CallFunc_Array_Get_Item);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsBP_Capstan_Arm);
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(Arms, K2Node_DynamicCast_AsBP_Capstan_Arm);
L_1ED:
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_Base_Capstan_C::UserConstructionScript (3 bytes)
void BP_Base_Capstan_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_Base_Capstan_C::Update Athena Character (40 bytes)
void BP_Base_Capstan_C::Update Athena Character()
{
    ExecuteUbergraph_BP_Base_Capstan();
    return;
}

// Recovered Kismet: BP_Base_Capstan_C::CapstanRotationSpeed (40 bytes)
void BP_Base_Capstan_C::EIKLimbName__NewEnumerator4()
{
    ExecuteUbergraph_BP_Base_Capstan();
    return;
}

// Recovered Kismet: BP_Base_Capstan_C::DockingInterface (40 bytes)
void BP_Base_Capstan_C::EDocking__EDocking_MAX()
{
    ExecuteUbergraph_BP_Base_Capstan();
    return;
}

// Recovered Kismet: BP_Base_Capstan_C::CapstanForce (94 bytes)
void BP_Base_Capstan_C::EIKLimbName__NewEnumerator3()
{
    ExecuteUbergraph_BP_Base_Capstan();
    return;
}

// Recovered Kismet: BP_Base_Capstan_C::IK Limb Update Transform (58 bytes)
void BP_Base_Capstan_C::IK Limb Update Transform()
{
    ExecuteUbergraph_BP_Base_Capstan();
    return;
}

// Recovered Kismet: BP_Base_Capstan_C::IK Limb Blend Timing (76 bytes)
void BP_Base_Capstan_C::EDocking__NewEnumerator1()
{
    ExecuteUbergraph_BP_Base_Capstan();
    return;
}

// Recovered Kismet: BP_Base_Capstan_C::IK Limb Update Strength (76 bytes)
void BP_Base_Capstan_C::IK Limb Update Strength()
{
    ExecuteUbergraph_BP_Base_Capstan();
    return;
}

// Recovered Kismet: BP_Base_Capstan_C::IK Limb Active (76 bytes)
void BP_Base_Capstan_C::EDocking__NewEnumerator0()
{
    ExecuteUbergraph_BP_Base_Capstan();
    return;
}

// Recovered Kismet: BP_Base_Capstan_C::IK Limb Stretch (76 bytes)
void BP_Base_Capstan_C::EDocking__NewEnumerator2()
{
    ExecuteUbergraph_BP_Base_Capstan();
    return;
}

// Recovered Kismet: BP_Base_Capstan_C::OnCapstanDescLoaded (40 bytes)
void BP_Base_Capstan_C::OnCapstanDescLoaded()
{
    ExecuteUbergraph_BP_Base_Capstan();
    return;
}

// Recovered Kismet: BP_Base_Capstan_C::ExecuteUbergraph_BP_Base_Capstan (905 bytes)
void BP_Base_Capstan_C::ExecuteUbergraph_BP_Base_Capstan()
{
    auto CallFunc_GetArms_ReturnValue = GetArms();
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetArms_ReturnValue);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(K2Node_Event_CapstanDesc);
    bool CallFunc_SetStaticMesh_ReturnValue = MeshComponent->SetStaticMesh(K2Node_Event_CapstanDesc);
    BP_CapstanRelease_C* K2Node_DynamicCast_AsBP_Capstan_Release = Cast<BP_CapstanRelease_C*>(CapstanReleaseComponent);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsBP_Capstan_Release);
    bool CallFunc_SetStaticMesh_ReturnValue2 = K2Node_DynamicCast_AsBP_Capstan_Release->SetStaticMesh(K2Node_Event_CapstanDesc);
    return;
}

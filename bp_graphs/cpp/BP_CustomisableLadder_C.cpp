// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_CustomisableLadder_C::Construct Ladder (135 bytes)
void BP_CustomisableLadder_C::Construct Ladder()
{
    auto K2Node_MakeStruct_DockableInfo = K2Node_MakeStruct_DockableInfo;
    K2Node_MakeStruct_DockableInfo = K2Node_MakeStruct_DockableInfo;
    K2Node_MakeStruct_DockableInfo = K2Node_MakeStruct_DockableInfo;
    return;
    Get Total Height Before Cap(CallFunc_Get_Total_Height_Before_Cap_Height);
    auto TotalHeightBeforeCap = CallFunc_Get_Total_Height_Before_Cap_Height;
    bool CallFunc_SetStaticMesh_ReturnValue = MeshComponent->SetStaticMesh();
    Get Steps(CallFunc_Get_Steps_Num_Steps);
    int CallFunc_Array_Length_ReturnValue4 = UKismetArrayLibrary::Array_Length(LadderCustomisationDefinition);
    auto CallFunc_Percent_IntInt_ReturnValue = CallFunc_Get_Steps_Num_Steps;
    auto CallFunc_Greater_IntInt_ReturnValue3 = CallFunc_Percent_IntInt_ReturnValue;
    if (!CallFunc_Greater_IntInt_ReturnValue3) goto L_374;
    Get Steps(CallFunc_Get_Steps_Num_Steps);
    CallFunc_Array_Length_ReturnValue4 = UKismetArrayLibrary::Array_Length(LadderCustomisationDefinition);
    CallFunc_Percent_IntInt_ReturnValue = CallFunc_Get_Steps_Num_Steps;
    auto CallFunc_Subtract_IntInt_ReturnValue3 = CallFunc_Percent_IntInt_ReturnValue;
    int CallFunc_Array_Add_ReturnValue4 = UKismetArrayLibrary::Array_Add(MeshIndices, CallFunc_Subtract_IntInt_ReturnValue3);
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(PartOffsets, HeightAccumulation);
    Get Steps(CallFunc_Get_Steps_Num_Steps);
    CallFunc_Array_Length_ReturnValue4 = UKismetArrayLibrary::Array_Length(LadderCustomisationDefinition);
    CallFunc_Percent_IntInt_ReturnValue = CallFunc_Get_Steps_Num_Steps;
    auto CallFunc_Multiply_IntFloat_ReturnValue2 = CallFunc_Percent_IntInt_ReturnValue;
L_374:
    Get Steps(CallFunc_Get_Steps_Num_Steps);
    CallFunc_Array_Length_ReturnValue4 = UKismetArrayLibrary::Array_Length(LadderCustomisationDefinition);
    auto CallFunc_Divide_IntInt_ReturnValue = CallFunc_Get_Steps_Num_Steps;
    auto CallFunc_Greater_IntInt_ReturnValue2 = CallFunc_Divide_IntInt_ReturnValue;
    if (!CallFunc_Greater_IntInt_ReturnValue2) goto L_D87;
    Get Steps(CallFunc_Get_Steps_Num_Steps);
    CallFunc_Array_Length_ReturnValue4 = UKismetArrayLibrary::Array_Length(LadderCustomisationDefinition);
    CallFunc_Divide_IntInt_ReturnValue = CallFunc_Get_Steps_Num_Steps;
    auto CallFunc_LessEqual_IntInt_ReturnValue2 = Temp_int_Variable;
    if (!CallFunc_LessEqual_IntInt_ReturnValue2) goto L_D87;
    CallFunc_Array_Length_ReturnValue4 = UKismetArrayLibrary::Array_Length(LadderCustomisationDefinition);
    auto CallFunc_Subtract_IntInt_ReturnValue2 = CallFunc_Array_Length_ReturnValue4;
    int CallFunc_Array_Add_ReturnValue3 = UKismetArrayLibrary::Array_Add(MeshIndices, CallFunc_Subtract_IntInt_ReturnValue2);
    int CallFunc_Array_Add_ReturnValue2 = UKismetArrayLibrary::Array_Add(PartOffsets, HeightAccumulation);
    CallFunc_Array_Length_ReturnValue4 = UKismetArrayLibrary::Array_Length(LadderCustomisationDefinition);
    auto CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Array_Length_ReturnValue4;
    bool CallFunc_SetStaticMesh_ReturnValue4 = Ladder->SetStaticMesh(LadderCustomisationDefinition);
    Get World Loc at Height Along Z(TotalHeightBeforeCap, CallFunc_Get_World_Loc_at_Height_Along_Z_Return_Value2);
    auto CallFunc_Multiply_FloatFloat_ReturnValue = TotalHeightBeforeCap;
    auto CallFunc_MakeVector_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
    auto Interactable = CallFunc_MakeVector_ReturnValue;
    auto CallFunc_Add_FloatFloat_ReturnValue = TotalHeightBeforeCap;
    auto CallFunc_Multiply_FloatFloat_ReturnValue2 = CallFunc_Add_FloatFloat_ReturnValue;
    auto CallFunc_MakeVector_ReturnValue2 = CallFunc_Multiply_FloatFloat_ReturnValue2;
    Interactable = CallFunc_MakeVector_ReturnValue2;
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(Material);
    if (!CallFunc_IsValid_ReturnValue) goto L_BDE;
    TArray<UActorComponent*> CallFunc_GetComponentsByClass_ReturnValue2 = AActor::GetComponentsByClass(StaticMeshComponent);
    int CallFunc_Array_Length_ReturnValue2 = UKismetArrayLibrary::Array_Length(CallFunc_GetComponentsByClass_ReturnValue2);
    auto CallFunc_Less_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable2;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable2;
    CallFunc_GetComponentsByClass_ReturnValue2 = AActor::GetComponentsByClass(StaticMeshComponent);
    int CallFunc_GetNumMaterials_ReturnValue = CallFunc_Array_Get_Item->GetNumMaterials();
    auto CallFunc_Subtract_IntInt_ReturnValue = CallFunc_GetNumMaterials_ReturnValue;
    auto CallFunc_LessEqual_IntInt_ReturnValue = Temp_int_Variable2;
    CallFunc_GetComponentsByClass_ReturnValue2 = AActor::GetComponentsByClass(StaticMeshComponent);
    auto CallFunc_Add_IntInt_ReturnValue5 = Temp_int_Variable2;
    auto Temp_int_Variable2 = CallFunc_Add_IntInt_ReturnValue5;
    auto CallFunc_Add_IntInt_ReturnValue3 = Temp_int_Loop_Counter_Variable2;
    auto Temp_int_Loop_Counter_Variable2 = CallFunc_Add_IntInt_ReturnValue3;
L_BDE:
    TArray<UActorComponent*> CallFunc_GetComponentsByClass_ReturnValue = AActor::GetComponentsByClass(StaticMeshComponent);
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetComponentsByClass_ReturnValue);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable3 = Temp_int_Loop_Counter_Variable;
    CallFunc_GetComponentsByClass_ReturnValue = AActor::GetComponentsByClass(StaticMeshComponent);
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
L_D87:
    int CallFunc_Array_Length_ReturnValue3 = UKismetArrayLibrary::Array_Length(MeshIndices);
    auto CallFunc_Less_IntInt_ReturnValue3 = Temp_int_Loop_Counter_Variable3;
    auto Temp_int_Array_Index_Variable2 = Temp_int_Loop_Counter_Variable3;
    auto CallFunc_Greater_IntInt_ReturnValue = Temp_int_Array_Index_Variable2;
    if (!CallFunc_Greater_IntInt_ReturnValue) goto L_1052;
    UActorComponent* CallFunc_AddComponent_ReturnValue = AActor::AddComponent(false, CallFunc_MakeTransform_ReturnValue);
    bool CallFunc_SetStaticMesh_ReturnValue3 = CallFunc_AddComponent_ReturnValue->SetStaticMesh(CallFunc_Array_Get_Item5);
    Get World Loc at Height Along Z(CallFunc_Array_Get_Item3, CallFunc_Get_World_Loc_at_Height_Along_Z_Return_Value);
L_1052:
    bool CallFunc_SetStaticMesh_ReturnValue2 = MeshComponent->SetStaticMesh(CallFunc_Array_Get_Item5);
    auto CallFunc_Add_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable3;
    auto Temp_int_Loop_Counter_Variable3 = CallFunc_Add_IntInt_ReturnValue2;
    auto CallFunc_Add_IntInt_ReturnValue4 = Temp_int_Variable;
    auto Temp_int_Variable = CallFunc_Add_IntInt_ReturnValue4;
    return;
    Get Steps(CallFunc_Get_Steps_Num_Steps);
    auto CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Get_Steps_Num_Steps;
    CallFunc_Multiply_FloatFloat_ReturnValue = StepHeight;
    return;
    auto CallFunc_Max_ReturnValue = Steps;
    return;
}

// Recovered Kismet: BP_CustomisableLadder_C::GetBottomLadderRungTransform (203 bytes)
void BP_CustomisableLadder_C::GetBottomLadderRungTransform()
{
    auto CallFunc_Add_FloatFloat_ReturnValue = LadderCustomisationDefinition;
    auto CallFunc_MakeVector_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
    auto CallFunc_MakeTransform_ReturnValue = CallFunc_MakeVector_ReturnValue;
    return;
}

// Recovered Kismet: BP_CustomisableLadder_C::GetTopLadderRungTransform (314 bytes)
void BP_CustomisableLadder_C::GetTopLadderRungTransform()
{
    Get Total Height Before Cap(CallFunc_Get_Total_Height_Before_Cap_Height);
    auto CallFunc_Multiply_FloatFloat_ReturnValue = StepHeight;
    auto CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Get_Total_Height_Before_Cap_Height;
    auto CallFunc_Add_FloatFloat_ReturnValue = LadderCustomisationDefinition;
    auto CallFunc_MakeVector_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
    auto CallFunc_MakeTransform_ReturnValue = CallFunc_MakeVector_ReturnValue;
    return;
    FVector CallFunc_GetActorUpVector_ReturnValue = AActor::GetActorUpVector();
    FVector CallFunc_K2_GetActorLocation_ReturnValue = AActor::K2_GetActorLocation();
    auto CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_GetActorUpVector_ReturnValue;
    auto CallFunc_Add_VectorVector_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
    return;
}

// Recovered Kismet: BP_CustomisableLadder_C::SetupSpline (78 bytes)
void BP_CustomisableLadder_C::SetupSpline()
{
    return;
}

// Recovered Kismet: BP_CustomisableLadder_C::UserConstructionScript (91 bytes)
void BP_CustomisableLadder_C::UserConstructionScript()
{
    this->UserConstructionScript();
    Construct Ladder();
    SetupSpline(OnTopSplineComponent, OnTopSplineComponentPositions);
    SetupSpline(OffTopSplineComponent, OffTopSplineComponentPositions);
    return;
}

// Recovered Kismet: BP_CustomisableLadder_C::ReceiveBeginPlay (22 bytes)
void BP_CustomisableLadder_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_CustomisableLadder();
    return;
}

// Recovered Kismet: BP_CustomisableLadder_C::ExecuteUbergraph_BP_CustomisableLadder (160 bytes)
void BP_CustomisableLadder_C::ExecuteUbergraph_BP_CustomisableLadder()
{
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(InteractableComponent);
    if (!CallFunc_IsValid_ReturnValue) goto L_9D;
L_9D:
    return;
}

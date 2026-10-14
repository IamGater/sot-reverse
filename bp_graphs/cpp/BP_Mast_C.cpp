// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Mast_C::AttemptToAddDamageDecal (327 bytes)
void BP_Mast_C::AttemptToAddDamageDecal()
{
    bool CallFunc_IsDedicatedServer_ReturnValue = UKismetSystemLibrary::IsDedicatedServer();
    if (!CallFunc_IsDedicatedServer_ReturnValue) goto L_3E;
L_3E:
    auto CallFunc_NotEqual_ByteByte_ReturnValue = RepairableState;
    if (!CallFunc_NotEqual_ByteByte_ReturnValue) goto L_144;
    auto CallFunc_IsMastVisuallyFractured_ReturnValue = IsMastVisuallyFractured();
    if (!CallFunc_IsMastVisuallyFractured_ReturnValue) goto L_96;
L_96:
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid();
    if (!CallFunc_IsValid_ReturnValue) goto L_DC;
L_DC:
    UActorComponent* CallFunc_AddComponent_ReturnValue = AActor::AddComponent(false, RelativeTransform);
L_144:
    return;
}

// Recovered Kismet: BP_Mast_C::Initialise Sail Parameters (188 bytes)
void BP_Mast_C::Initialise Sail Parameters()
{
    auto CallFunc_EqualEqual_ObjectObject_ReturnValue = MastTopComponent;
    auto CallFunc_EqualEqual_ObjectObject_ReturnValue2 = MastBaseComponent;
    auto CallFunc_BooleanAND_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue2;
    return;
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(New);
    if (!CallFunc_IsValid_ReturnValue) goto L_98;
    bool CallFunc_SetStaticMesh_ReturnValue = Static->SetStaticMesh(New);
L_98:
    return;
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length();
    auto CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue;
    auto CallFunc_Greater_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
    CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length();
    CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue;
    auto CallFunc_Subtract_IntInt_ReturnValue3 = CallFunc_Subtract_IntInt_ReturnValue;
    auto Loop = CallFunc_Subtract_IntInt_ReturnValue3;
    auto CallFunc_LessEqual_IntInt_ReturnValue = Temp_int_Variable;
    CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length();
    auto CallFunc_Subtract_IntInt_ReturnValue2 = CallFunc_Array_Length_ReturnValue;
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Variable;
    auto Temp_int_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
    int CallFunc_Array_Length_ReturnValue3 = UKismetArrayLibrary::Array_Length(Sail);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_3F9;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(Yards);
    int CallFunc_Array_Length_ReturnValue2 = UKismetArrayLibrary::Array_Length(Sails);
    auto CallFunc_Min_ReturnValue = CallFunc_Array_Length_ReturnValue;
    CallFunc_Greater_IntInt_ReturnValue = CallFunc_Min_ReturnValue;
    auto CallFunc_IsValid_ReturnValue2 = KismetSystemLibrary->this->IsValid(CallFunc_Array_Get_Item4);
    auto CallFunc_MakeVector_ReturnValue = CallFunc_Array_Get_Item4;
    auto CallFunc_MakeTransform_ReturnValue = CallFunc_MakeVector_ReturnValue;
    CallFunc_SetStaticMesh_ReturnValue = CallFunc_Array_Get_Item3->SetStaticMesh(CallFunc_Array_Get_Item4);
L_3F9:
    CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    auto CallFunc_IsValid_ReturnValue3 = KismetSystemLibrary->this->IsValid(CallFunc_Array_Get_Item4);
    auto CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Array_Get_Item4;
    auto CallFunc_MakeVector_ReturnValue2 = CallFunc_Array_Get_Item4;
    auto CallFunc_MakeTransform_ReturnValue2 = CallFunc_MakeVector_ReturnValue2;
    CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(Sail);
    return;
    int CallFunc_Array_Add_ReturnValue9 = UKismetArrayLibrary::Array_Add(Yards, Main);
    int CallFunc_Array_Add_ReturnValue8 = UKismetArrayLibrary::Array_Add(Yards, Top);
    int CallFunc_Array_Add_ReturnValue6 = UKismetArrayLibrary::Array_Add(Yards, Topgallant);
    BP_Sail_C* K2Node_DynamicCast_AsBP_Sail3 = Cast<BP_Sail_C*>(MainsailActor);
    bool K2Node_DynamicCast_bSuccess3 = static_cast<bool>(K2Node_DynamicCast_AsBP_Sail3);
    if (!K2Node_DynamicCast_bSuccess3) goto L_1B9;
    int CallFunc_Array_Add_ReturnValue5 = UKismetArrayLibrary::Array_Add(Sails, MainsailActor);
    int CallFunc_Array_Add_ReturnValue7 = UKismetArrayLibrary::Array_Add(SailActors, K2Node_DynamicCast_AsBP_Sail3);
L_1B9:
    BP_Sail_C* K2Node_DynamicCast_AsBP_Sail = Cast<BP_Sail_C*>(TopsailActor);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsBP_Sail);
    if (!K2Node_DynamicCast_bSuccess) goto L_2A6;
    int CallFunc_Array_Add_ReturnValue2 = UKismetArrayLibrary::Array_Add(Sails, TopsailActor);
    int CallFunc_Array_Add_ReturnValue3 = UKismetArrayLibrary::Array_Add(SailActors, K2Node_DynamicCast_AsBP_Sail);
L_2A6:
    BP_Sail_C* K2Node_DynamicCast_AsBP_Sail2 = Cast<BP_Sail_C*>(TopgallantActor);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(K2Node_DynamicCast_AsBP_Sail2);
    if (!K2Node_DynamicCast_bSuccess2) goto L_393;
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(Sails, TopgallantActor);
    int CallFunc_Array_Add_ReturnValue4 = UKismetArrayLibrary::Array_Add(SailActors, K2Node_DynamicCast_AsBP_Sail2);
L_393:
    return;
    CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length();
    CallFunc_Array_Length_ReturnValue2 = UKismetArrayLibrary::Array_Length(Sail);
    CallFunc_Subtract_IntInt_ReturnValue2 = CallFunc_Array_Length_ReturnValue;
    CallFunc_Greater_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue2;
    CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length();
    CallFunc_Array_Length_ReturnValue2 = UKismetArrayLibrary::Array_Length(Sail);
    CallFunc_Subtract_IntInt_ReturnValue2 = CallFunc_Array_Length_ReturnValue;
    CallFunc_Subtract_IntInt_ReturnValue3 = CallFunc_Array_Length_ReturnValue;
    Temp_int_Variable = CallFunc_Subtract_IntInt_ReturnValue3;
    CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length();
    CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue;
    CallFunc_LessEqual_IntInt_ReturnValue = Temp_int_Variable;
    if (!CallFunc_LessEqual_IntInt_ReturnValue) goto L_2BD;
L_2BD:
    CallFunc_Array_Length_ReturnValue2 = UKismetArrayLibrary::Array_Length(Sail);
    Trim Array Func(CallFunc_Array_Length_ReturnValue2);
    CallFunc_Add_IntInt_ReturnValue = Temp_int_Variable;
    Temp_int_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
    CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(SailActors);
    CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_Mast_C::UserConstructionScript (352 bytes)
void BP_Mast_C::UserConstructionScript()
{
    auto MastIntactMesh = MastBaseComponent;
    Populate Lists of Yards and Sails();
    Cull Excess Components(Yards);
    Cull Excess Components(Sails);
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(Sail);
    Trim Array Func(SailActors, CallFunc_Array_Length_ReturnValue);
    Initialise Sail Parameters();
    AMast::FinaliseSails(Sails);
    Initialise Sails();
    auto MastPhysicsComponents = MastPhysicsComponents;
    MastPhysicsComponents = MastPhysicsComponents;
    MastPhysicsComponents = MastPhysicsComponents;
    return;
}

// Recovered Kismet: BP_Mast_C::OnMastDescLoaded (40 bytes)
void BP_Mast_C::OnMastDescLoaded()
{
    ExecuteUbergraph_BP_Mast();
    return;
}

// Recovered Kismet: BP_Mast_C::OnMastMeshSwapRequested (58 bytes)
void BP_Mast_C::OnMastMeshSwapRequested()
{
    ExecuteUbergraph_BP_Mast();
    return;
}

// Recovered Kismet: BP_Mast_C::BndEvt__RepairableComponentFirst_K2Node_ComponentBoundEvent_3_RepairableStateChangedDelegate__DelegateSignature (76 bytes)
void BP_Mast_C::BndEvt__RepairableComponentFirst_K2Node_ComponentBoundEvent_3_RepairableStateChangedDelegate__DelegateSignature()
{
    ExecuteUbergraph_BP_Mast();
    return;
}

// Recovered Kismet: BP_Mast_C::BndEvt__RepairableComponentSecond_K2Node_ComponentBoundEvent_6_RepairableStateChangedDelegate__DelegateSignature (76 bytes)
void BP_Mast_C::BndEvt__RepairableComponentSecond_K2Node_ComponentBoundEvent_6_RepairableStateChangedDelegate__DelegateSignature()
{
    ExecuteUbergraph_BP_Mast();
    return;
}

// Recovered Kismet: BP_Mast_C::BndEvt__RepairableComponentThird_K2Node_ComponentBoundEvent_10_RepairableStateChangedDelegate__DelegateSignature (76 bytes)
void BP_Mast_C::BndEvt__RepairableComponentThird_K2Node_ComponentBoundEvent_10_RepairableStateChangedDelegate__DelegateSignature()
{
    ExecuteUbergraph_BP_Mast();
    return;
}

// Recovered Kismet: BP_Mast_C::ExecuteUbergraph_BP_Mast (2174 bytes)
void BP_Mast_C::ExecuteUbergraph_BP_Mast()
{
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(DamageDecalRight);
    bool CallFunc_IsDedicatedServer_ReturnValue = UKismetSystemLibrary::IsDedicatedServer();
    if (!CallFunc_IsDedicatedServer_ReturnValue) goto L_AD;
L_AD:
    auto CallFunc_EqualEqual_ByteByte_ReturnValue2 = K2Node_ComponentBoundEvent_State2;
    AMast::ToggleRepairPlankVisibility(RepairableComponentSecond, CallFunc_EqualEqual_ByteByte_ReturnValue2);
    bool CallFunc_IsDedicatedServer_ReturnValue2 = UKismetSystemLibrary::IsDedicatedServer();
    if (!CallFunc_IsDedicatedServer_ReturnValue2) goto L_123;
L_123:
    auto CallFunc_EqualEqual_ByteByte_ReturnValue3 = K2Node_ComponentBoundEvent_State;
    AMast::ToggleRepairPlankVisibility(RepairableComponentThird, CallFunc_EqualEqual_ByteByte_ReturnValue3);
    auto CallFunc_IsValid_ReturnValue2 = KismetSystemLibrary->this->IsValid(K2Node_Event_MastDesc);
    Customise Static Mesh(K2Node_Event_MastDesc, MastBaseComponent);
    Customise Static Mesh(K2Node_Event_MastDesc, Main);
    Customise Static Mesh(K2Node_Event_MastDesc, Top);
    Customise Static Mesh(K2Node_Event_MastDesc, Topgallant);
    auto CallFunc_IsValid_ReturnValue3 = KismetSystemLibrary->this->IsValid(DamageDecalLeft);
    auto CallFunc_Conv_FloatToVector_ReturnValue = MastFractureMeshBottomScale;
    auto CallFunc_IsValid_ReturnValue4 = KismetSystemLibrary->this->IsValid(MastBaseComponent);
    bool CallFunc_SetStaticMesh_ReturnValue2 = MastBaseComponent->SetStaticMesh(K2Node_Event_NewMeshBottom);
    auto CallFunc_IsMastVisuallyFractured_ReturnValue = IsMastVisuallyFractured();
    auto MastBaseComponent = MastBaseComponent;
    auto MastTopComponent = MastTopComponent;
    auto CallFunc_IsValid_ReturnValue5 = KismetSystemLibrary->this->IsValid(MastTopComponent);
    bool CallFunc_SetStaticMesh_ReturnValue = MastTopComponent->SetStaticMesh(K2Node_Event_NewMeshTop);
    bool CallFunc_IsDedicatedServer_ReturnValue3 = UKismetSystemLibrary::IsDedicatedServer();
    if (!CallFunc_IsDedicatedServer_ReturnValue3) goto L_529;
L_529:
    auto CallFunc_EqualEqual_ByteByte_ReturnValue = K2Node_ComponentBoundEvent_State3;
    AMast::ToggleRepairPlankVisibility(RepairableComponentFirst, CallFunc_EqualEqual_ByteByte_ReturnValue);
    FTransform CallFunc_GetMountLocationOffset_ReturnValue = RepairableComponentFirst->GetMountLocationOffset();
    auto CallFunc_Abs_ReturnValue = CallFunc_BreakVector_Y;
    auto CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Abs_ReturnValue;
    auto CallFunc_MakeVector_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
    auto CallFunc_MakeTransform_ReturnValue = CallFunc_BreakTransform_Location;
    AttemptToAddDamageDecal(K2Node_ComponentBoundEvent_State3, DamageDecalRight, CallFunc_MakeTransform_ReturnValue, M_Mast_Decal_01);
    FTransform CallFunc_GetMountLocationOffset_ReturnValue2 = RepairableComponentSecond->GetMountLocationOffset();
    auto CallFunc_Abs_ReturnValue2 = CallFunc_BreakVector_Y2;
    auto CallFunc_Multiply_FloatFloat_ReturnValue2 = CallFunc_Abs_ReturnValue2;
    auto CallFunc_MakeVector_ReturnValue2 = CallFunc_Multiply_FloatFloat_ReturnValue2;
    auto CallFunc_MakeTransform_ReturnValue2 = CallFunc_BreakTransform_Location2;
    AttemptToAddDamageDecal(K2Node_ComponentBoundEvent_State2, DamageDecalLeft, CallFunc_MakeTransform_ReturnValue2, M_Mast_Decal_02);
    return;
}

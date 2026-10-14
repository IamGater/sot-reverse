// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_PlayerPirate_Ghost_C::GetPxActorCapacityForPhysXAggregate (31 bytes)
void BP_PlayerPirate_Ghost_C::GetPxActorCapacityForPhysXAggregate()
{
    return;
}

// Recovered Kismet: BP_PlayerPirate_Ghost_C::GetAllMaterialParents (848 bytes)
void BP_PlayerPirate_Ghost_C::GetAllMaterialParents()
{
    auto idx_222383 = MaterialInstance;
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(idx_222383);
    if (!CallFunc_IsValid_ReturnValue) goto L_11B;
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(idx_222400, idx_222383);
    MaterialInstance* idx_222395 = Cast<MaterialInstance*>(idx_222383);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_222395);
    if (!K2Node_DynamicCast_bSuccess) goto L_107;
L_107:
    idx_222383 = idx_222395;
L_11B:
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(idx_222400);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_2E3;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    int CallFunc_Array_Length_ReturnValue2 = UKismetArrayLibrary::Array_Length(idx_222400);
    auto CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue2;
    auto CallFunc_Subtract_IntInt_ReturnValue2 = CallFunc_Subtract_IntInt_ReturnValue;
L_2E3:
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_PlayerPirate_Ghost_C::CheckBaseMaterial (207 bytes)
void BP_PlayerPirate_Ghost_C::CheckBaseMaterial()
{
    UMaterial* idx_222380 = MaterialInstance->GetBaseMaterial();
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(idx_222380);
    if (!CallFunc_IsValid_ReturnValue) goto L_BC;
    auto CallFunc_EqualEqual_ObjectObject_ReturnValue = idx_222380;
    auto Output = CallFunc_EqualEqual_ObjectObject_ReturnValue;
L_BC:
    Output = false;
    return;
}

// Recovered Kismet: BP_PlayerPirate_Ghost_C::Set Up Ghost Materials (13202 bytes)
void BP_PlayerPirate_Ghost_C::Set Up Ghost Materials()
{
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(idx_222393);
    int CallFunc_GetNumMaterials_ReturnValue = idx_222393->GetNumMaterials();
    auto CallFunc_Subtract_IntInt_ReturnValue = CallFunc_GetNumMaterials_ReturnValue;
    auto CallFunc_LessEqual_IntInt_ReturnValue = Temp_int_Variable;
    bool IPG = false;
    TArray<UMaterialInterface*> CallFunc_GetMaterials_ReturnValue = idx_222393->GetMaterials();
    MaterialInstance* idx_222395 = Cast<MaterialInstance*>(CallFunc_Array_Get_Item);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_222395);
    if (!K2Node_DynamicCast_bSuccess) goto L_4B7;
    CheckBaseMaterial(idx_222395, MT_unq_ferry_ghost_opaque, idx_222350);
    CheckBaseMaterial(idx_222395, MT_unq_ferry_ghost_opaque_IPG, idx_222351);
    auto CallFunc_BooleanOR_ReturnValue = idx_222350;
    if (!CallFunc_BooleanOR_ReturnValue) goto L_D53;
L_436:
    auto CallFunc_Add_IntInt_ReturnValue4 = Temp_int_Variable;
    auto Temp_int_Variable = CallFunc_Add_IntInt_ReturnValue4;
L_4B7:
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue = idx_222393->CreateDynamicMaterialInstance(Temp_int_Variable, idx_222394);
    if (!idx_222386) goto L_D25;
    auto CallFunc_IsValid_ReturnValue13 = KismetSystemLibrary->this->IsValid(Diffuse);
    if (!CallFunc_IsValid_ReturnValue13) goto L_5E8;
L_5E8:
    auto CallFunc_IsValid_ReturnValue12 = KismetSystemLibrary->this->IsValid(Normal);
    if (!CallFunc_IsValid_ReturnValue12) goto L_65F;
L_65F:
    auto CallFunc_IsValid_ReturnValue11 = KismetSystemLibrary->this->IsValid(Roughness);
    if (!CallFunc_IsValid_ReturnValue11) goto L_6D6;
L_6D6:
    auto CallFunc_IsValid_ReturnValue4 = KismetSystemLibrary->this->IsValid(HairColourSampler);
    if (!CallFunc_IsValid_ReturnValue4) goto L_7B9;
L_7B9:
    auto CallFunc_IsValid_ReturnValue2 = KismetSystemLibrary->this->IsValid(HairColourOverSampler);
    if (!CallFunc_IsValid_ReturnValue2) goto L_830;
L_830:
    auto CallFunc_SelectFloat_ReturnValue = FirstPersonMesh;
    auto CallFunc_IsValid_ReturnValue10 = KismetSystemLibrary->this->IsValid(Constant_ma);
    if (!CallFunc_IsValid_ReturnValue10) goto L_916;
L_916:
    auto CallFunc_IsValid_ReturnValue9 = KismetSystemLibrary->this->IsValid(Eyebrows_di);
    if (!CallFunc_IsValid_ReturnValue9) goto L_98D;
L_98D:
    auto CallFunc_IsValid_ReturnValue8 = KismetSystemLibrary->this->IsValid(FacialHair_di);
    if (!CallFunc_IsValid_ReturnValue8) goto L_A04;
L_A04:
    auto CallFunc_IsValid_ReturnValue3 = KismetSystemLibrary->this->IsValid(idx_222403);
    if (!CallFunc_IsValid_ReturnValue3) goto L_A7B;
L_A7B:
    auto CallFunc_IsValid_ReturnValue7 = KismetSystemLibrary->this->IsValid(Tattoo_di);
    if (!CallFunc_IsValid_ReturnValue7) goto L_AF2;
L_AF2:
    auto CallFunc_IsValid_ReturnValue6 = KismetSystemLibrary->this->IsValid(Makeup_di);
    if (!CallFunc_IsValid_ReturnValue6) goto L_B69;
L_B69:
    auto CallFunc_IsValid_ReturnValue5 = KismetSystemLibrary->this->IsValid(SkinColourSampler);
    if (!CallFunc_IsValid_ReturnValue5) goto L_BE0;
L_BE0:
L_D25:
L_D53:
    CheckBaseMaterial(idx_222395, MT_char_hair_aniso, idx_222349);
    if (!idx_222349) goto L_182C;
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(idx_222395);
    auto CallFunc_Less_IntInt_ReturnValue4 = idx_222406;
    if (!CallFunc_Less_IntInt_ReturnValue4) goto L_FBE;
    auto Temp_int_Array_Index_Variable3 = idx_222406;
    auto CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_Array_Get_Item2;
    auto idx_222399 = CallFunc_Array_Get_Item2;
    auto idx_222346 = idx_222406;
    auto idx_222406 = idx_222346;
L_FBE:
    GetAllMaterialParents(idx_222395, idx_222379);
    int CallFunc_Array_Length_ReturnValue2 = UKismetArrayLibrary::Array_Length(idx_222379);
    auto CallFunc_Less_IntInt_ReturnValue3 = Temp_int_Loop_Counter_Variable4;
    auto idx_222405 = Temp_int_Loop_Counter_Variable4;
    GetAllMaterialParents(idx_222395, idx_222379);
    int CallFunc_Array_Length_ReturnValue5 = UKismetArrayLibrary::Array_Length(CallFunc_Array_Get_Item5);
    auto idx_222381 = Temp_int_Loop_Counter_Variable2;
    if (!idx_222381) goto L_13D4;
    auto Temp_int_Array_Index_Variable4 = Temp_int_Loop_Counter_Variable2;
    GetAllMaterialParents(idx_222395, idx_222379);
    auto idx_222370 = CallFunc_Array_Get_Item6;
    auto idx_222371 = CallFunc_Array_Get_Item6;
    auto CallFunc_BooleanOR_ReturnValue10 = idx_222371;
    if (!CallFunc_BooleanOR_ReturnValue10) goto L_1AA2;
    GetAllMaterialParents(idx_222395, idx_222379);
    auto Diffuse = CallFunc_Array_Get_Item6;
L_13D4:
    if (!IPG) goto L_4B7;
    int CallFunc_Array_Length_ReturnValue4 = UKismetArrayLibrary::Array_Length(idx_222395);
    auto CallFunc_Less_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue2) goto L_15BD;
    auto Temp_int_Array_Index_Variable2 = Temp_int_Loop_Counter_Variable;
    auto idx_222376 = CallFunc_Array_Get_Item4;
    if (!idx_222376) goto L_2F77;
    auto FacialHairColour = CallFunc_Array_Get_Item4;
L_15BD:
    int CallFunc_Array_Length_ReturnValue3 = UKismetArrayLibrary::Array_Length(idx_222395);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable3;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_4B7;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable3;
    auto idx_222374 = CallFunc_Array_Get_Item3;
    if (!idx_222374) goto L_307B;
    auto FacialHairScale = CallFunc_Array_Get_Item3;
    auto CallFunc_Add_IntInt_ReturnValue3 = Temp_int_Loop_Counter_Variable3;
    auto Temp_int_Loop_Counter_Variable3 = CallFunc_Add_IntInt_ReturnValue3;
    auto idx_222345 = Temp_int_Loop_Counter_Variable4;
    auto Temp_int_Loop_Counter_Variable4 = idx_222345;
L_182C:
    CheckBaseMaterial(idx_222395, MT_Char_Projected_Eyes, idx_222355);
    if (!idx_222355) goto L_18B8;
L_18B8:
    CheckBaseMaterial(idx_222395, MT_Char_Skin_Unoptimized_MetalCurse, idx_222347);
    CheckBaseMaterial(idx_222395, MT_Char_Skin_Unoptimized_OOSCurse, idx_222348);
    CheckBaseMaterial(idx_222395, MT_Char_Skin_Unoptimized_E317, idx_222353);
    CheckBaseMaterial(idx_222395, MT_Char_Skin_Unoptimized, idx_222354);
    auto CallFunc_BooleanOR_ReturnValue2 = idx_222354;
    auto CallFunc_BooleanOR_ReturnValue3 = CallFunc_BooleanOR_ReturnValue2;
    auto CallFunc_BooleanOR_ReturnValue4 = CallFunc_BooleanOR_ReturnValue3;
    if (!CallFunc_BooleanOR_ReturnValue4) goto L_19FF;
    IPG = true;
L_19FF:
    CheckBaseMaterial(idx_222395, MT_obj, idx_222352);
    auto CallFunc_Not_PreBool_ReturnValue = idx_222352;
    if (!CallFunc_Not_PreBool_ReturnValue) goto L_436;
    auto CallFunc_Add_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable2;
    auto Temp_int_Loop_Counter_Variable2 = CallFunc_Add_IntInt_ReturnValue2;
L_1AA2:
    GetAllMaterialParents(idx_222395, idx_222379);
    auto idx_222368 = CallFunc_Array_Get_Item6;
    auto idx_222369 = CallFunc_Array_Get_Item6;
    auto CallFunc_BooleanOR_ReturnValue7 = idx_222369;
    if (!CallFunc_BooleanOR_ReturnValue7) goto L_1CB1;
    GetAllMaterialParents(idx_222395, idx_222379);
    auto Normal = CallFunc_Array_Get_Item6;
L_1CB1:
    GetAllMaterialParents(idx_222395, idx_222379);
    auto idx_222363 = CallFunc_Array_Get_Item6;
    auto idx_222364 = CallFunc_Array_Get_Item6;
    auto idx_222365 = CallFunc_Array_Get_Item6;
    auto idx_222366 = CallFunc_Array_Get_Item6;
    auto idx_222367 = CallFunc_Array_Get_Item6;
    auto CallFunc_BooleanOR_ReturnValue5 = idx_222367;
    auto CallFunc_BooleanOR_ReturnValue6 = CallFunc_BooleanOR_ReturnValue5;
    auto CallFunc_BooleanOR_ReturnValue8 = CallFunc_BooleanOR_ReturnValue6;
    auto CallFunc_BooleanOR_ReturnValue9 = CallFunc_BooleanOR_ReturnValue8;
    if (!CallFunc_BooleanOR_ReturnValue9) goto L_1FCB;
    GetAllMaterialParents(idx_222395, idx_222379);
    auto Roughness = CallFunc_Array_Get_Item6;
L_1FCB:
    GetAllMaterialParents(idx_222395, idx_222379);
    auto idx_222362 = CallFunc_Array_Get_Item6;
    if (!idx_222362) goto L_2181;
    GetAllMaterialParents(idx_222395, idx_222379);
    auto Constant_ma = CallFunc_Array_Get_Item6;
L_2181:
    GetAllMaterialParents(idx_222395, idx_222379);
    auto idx_222361 = CallFunc_Array_Get_Item6;
    if (!idx_222361) goto L_2337;
    GetAllMaterialParents(idx_222395, idx_222379);
    auto Eyebrows_di = CallFunc_Array_Get_Item6;
L_2337:
    GetAllMaterialParents(idx_222395, idx_222379);
    auto idx_222360 = CallFunc_Array_Get_Item6;
    if (!idx_222360) goto L_24ED;
    GetAllMaterialParents(idx_222395, idx_222379);
    auto FacialHair_di = CallFunc_Array_Get_Item6;
L_24ED:
    GetAllMaterialParents(idx_222395, idx_222379);
    auto idx_222378 = CallFunc_Array_Get_Item6;
    if (!idx_222378) goto L_26A3;
    GetAllMaterialParents(idx_222395, idx_222379);
    auto idx_222403 = CallFunc_Array_Get_Item6;
L_26A3:
    GetAllMaterialParents(idx_222395, idx_222379);
    auto idx_222359 = CallFunc_Array_Get_Item6;
    if (!idx_222359) goto L_2859;
    GetAllMaterialParents(idx_222395, idx_222379);
    auto Tattoo_di = CallFunc_Array_Get_Item6;
L_2859:
    GetAllMaterialParents(idx_222395, idx_222379);
    auto idx_222358 = CallFunc_Array_Get_Item6;
    if (!idx_222358) goto L_2A0F;
    GetAllMaterialParents(idx_222395, idx_222379);
    auto Makeup_di = CallFunc_Array_Get_Item6;
L_2A0F:
    GetAllMaterialParents(idx_222395, idx_222379);
    auto idx_222357 = CallFunc_Array_Get_Item6;
    if (!idx_222357) goto L_2BC5;
    GetAllMaterialParents(idx_222395, idx_222379);
    auto SkinColourSampler = CallFunc_Array_Get_Item6;
L_2BC5:
    GetAllMaterialParents(idx_222395, idx_222379);
    auto idx_222356 = CallFunc_Array_Get_Item6;
    if (!idx_222356) goto L_2D7B;
    GetAllMaterialParents(idx_222395, idx_222379);
    auto HairColourSampler = CallFunc_Array_Get_Item6;
L_2D7B:
    GetAllMaterialParents(idx_222395, idx_222379);
    auto idx_222377 = CallFunc_Array_Get_Item6;
    GetAllMaterialParents(idx_222395, idx_222379);
    auto HairColourOverSampler = CallFunc_Array_Get_Item6;
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
L_2F77:
    auto idx_222375 = CallFunc_Array_Get_Item4;
    auto TattooColour = CallFunc_Array_Get_Item4;
L_307B:
    auto idx_222373 = CallFunc_Array_Get_Item3;
    if (!idx_222373) goto L_3183;
    auto TattooScale = CallFunc_Array_Get_Item3;
L_3183:
    auto idx_222372 = CallFunc_Array_Get_Item3;
    if (!idx_222372) goto L_328B;
    auto MakeupScale = CallFunc_Array_Get_Item3;
L_328B:
    auto CallFunc_EqualEqual_NameName_ReturnValue2 = CallFunc_Array_Get_Item3;
    auto TattooAlphaOnly = CallFunc_Array_Get_Item3;
    return;
}

// Recovered Kismet: BP_PlayerPirate_Ghost_C::GetMouthPosition (105 bytes)
void BP_PlayerPirate_Ghost_C::GetMouthPosition()
{
    auto CallFunc_GetSocketLocation_ReturnValue = Mesh->GetSocketLocation();
    return;
}

// Recovered Kismet: BP_PlayerPirate_Ghost_C::Update Athena Character (3 bytes)
void BP_PlayerPirate_Ghost_C::Update Athena Character()
{
    return;
    ExecuteUbergraph_BP_PlayerPirate_Ghost();
    return;
}

// Recovered Kismet: BP_PlayerPirate_Ghost_C::CapstanRotationSpeed (40 bytes)
void BP_PlayerPirate_Ghost_C::CapstanRotationSpeed()
{
    ExecuteUbergraph_BP_PlayerPirate_Ghost();
    return;
}

// Recovered Kismet: BP_PlayerPirate_Ghost_C::DockingInterface (40 bytes)
void BP_PlayerPirate_Ghost_C::DockingInterface()
{
    ExecuteUbergraph_BP_PlayerPirate_Ghost();
    return;
}

// Recovered Kismet: BP_PlayerPirate_Ghost_C::CapstanForce (94 bytes)
void BP_PlayerPirate_Ghost_C::EDocking__NewEnumerator2()
{
    ExecuteUbergraph_BP_PlayerPirate_Ghost();
    return;
}

// Recovered Kismet: BP_PlayerPirate_Ghost_C::IK Limb Update Transform (58 bytes)
void BP_PlayerPirate_Ghost_C::IK Limb Update Transform()
{
    ExecuteUbergraph_BP_PlayerPirate_Ghost();
    return;
}

// Recovered Kismet: BP_PlayerPirate_Ghost_C::IK Limb Blend Timing (76 bytes)
void BP_PlayerPirate_Ghost_C::IK Limb Blend Timing()
{
    ExecuteUbergraph_BP_PlayerPirate_Ghost();
    return;
}

// Recovered Kismet: BP_PlayerPirate_Ghost_C::IK Limb Update Strength (76 bytes)
void BP_PlayerPirate_Ghost_C::IK Limb Update Strength()
{
    ExecuteUbergraph_BP_PlayerPirate_Ghost();
    return;
}

// Recovered Kismet: BP_PlayerPirate_Ghost_C::IK Limb Active (76 bytes)
void BP_PlayerPirate_Ghost_C::IK Limb Active()
{
    ExecuteUbergraph_BP_PlayerPirate_Ghost();
    return;
}

// Recovered Kismet: BP_PlayerPirate_Ghost_C::IK Limb Stretch (76 bytes)
void BP_PlayerPirate_Ghost_C::IK Limb Stretch()
{
    ExecuteUbergraph_BP_PlayerPirate_Ghost();
    return;
}

// Recovered Kismet: BP_PlayerPirate_Ghost_C::ReceiveBeginPlay (22 bytes)
void BP_PlayerPirate_Ghost_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_PlayerPirate_Ghost();
    return;
}

// Recovered Kismet: BP_PlayerPirate_Ghost_C::OnMeshSet (22 bytes)
void BP_PlayerPirate_Ghost_C::OnMeshSet()
{
    ExecuteUbergraph_BP_PlayerPirate_Ghost();
    return;
}

// Recovered Kismet: BP_PlayerPirate_Ghost_C::ExecuteUbergraph_BP_PlayerPirate_Ghost (564 bytes)
void BP_PlayerPirate_Ghost_C::ExecuteUbergraph_BP_PlayerPirate_Ghost()
{
    bool CallFunc_IsLocallyControlled_ReturnValue = IsLocallyControlled();
    if (!CallFunc_IsLocallyControlled_ReturnValue) goto L_5E;
L_5E:
    bool CallFunc_IsLocallyControlled_ReturnValue2 = IsLocallyControlled();
    Set Up Ghost Materials(Mesh, idx_222384, true, false);
    auto CallFunc_IsValid_ReturnValue2 = KismetSystemLibrary->this->IsValid(FirstPersonMesh);
    if (!CallFunc_IsValid_ReturnValue2) goto L_231;
    Set Up Ghost Materials(FirstPersonMesh, idx_222384, false, true);
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(Mesh);
    if (!CallFunc_IsValid_ReturnValue) goto L_231;
L_231:
    return;
}

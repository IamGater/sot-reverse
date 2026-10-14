// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_LargeShipTemplate_C::GetPxActorCapacityForPhysXAggregate (31 bytes)
void BP_LargeShipTemplate_C::GetPxActorCapacityForPhysXAggregate()
{
    return;
}

// Recovered Kismet: BP_LargeShipTemplate_C::SetupMastControls (777 bytes)
void BP_LargeShipTemplate_C::SetupMastControls()
{
    SailHoist* K2Node_DynamicCast_AsSail_Hoist2 = Cast<SailHoist*>(LeftHoist);
    bool K2Node_DynamicCast_bSuccess4 = static_cast<bool>(K2Node_DynamicCast_AsSail_Hoist2);
    SailHoist* K2Node_DynamicCast_AsSail_Hoist = Cast<SailHoist*>(RightHoist);
    bool K2Node_DynamicCast_bSuccess3 = static_cast<bool>(K2Node_DynamicCast_AsSail_Hoist);
    SailAngle* K2Node_DynamicCast_AsSail_Angle2 = Cast<SailAngle*>(LeftAngle);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(K2Node_DynamicCast_AsSail_Angle2);
    SailAngle* K2Node_DynamicCast_AsSail_Angle = Cast<SailAngle*>(RightAngle);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsSail_Angle);
    return;
}

// Recovered Kismet: BP_LargeShipTemplate_C::UserConstructionScript (629 bytes)
void BP_LargeShipTemplate_C::UserConstructionScript()
{
    TArray<UActorComponent*> CallFunc_GetComponentsByClass_ReturnValue = AActor::GetComponentsByClass(RiggingSystemComponent);
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetComponentsByClass_ReturnValue);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    CallFunc_GetComponentsByClass_ReturnValue = AActor::GetComponentsByClass(RiggingSystemComponent);
    SetupMastControls(MastForeSailHoistLeft, MastForeSailHoistRight, MastForeSailAngleLeft, MastForeSailAngleRight);
    SetupMastControls(MastMainSailHoistLeft, MastMainSailHoistRight, MastMainSailAngleLeft, MastMainSailAngleRight);
    SetupMastControls(MastMizzenSailHoistLeft, MastMizzenSailHoistRight, MastMizzenSailAngleLeft, MastMizzenSailAngleRight);
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_AshenDragonScene2_C::UserConstructionScript (3 bytes)
void BP_AshenDragonScene2_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_AshenDragonScene2_C::ReceiveBeginPlay (22 bytes)
void BP_AshenDragonScene2_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_AshenDragonScene2();
    return;
}

// Recovered Kismet: BP_AshenDragonScene2_C::Fire_Ship1 (22 bytes)
void BP_AshenDragonScene2_C::Fire_Ship1()
{
    ExecuteUbergraph_BP_AshenDragonScene2();
    return;
}

// Recovered Kismet: BP_AshenDragonScene2_C::Prep_ship1 (22 bytes)
void BP_AshenDragonScene2_C::Prep_ship1()
{
    ExecuteUbergraph_BP_AshenDragonScene2();
    return;
}

// Recovered Kismet: BP_AshenDragonScene2_C::fire_AshenDragon (22 bytes)
void BP_AshenDragonScene2_C::fire_AshenDragon()
{
    ExecuteUbergraph_BP_AshenDragonScene2();
    return;
}

// Recovered Kismet: BP_AshenDragonScene2_C::prep_AshenDragon (22 bytes)
void BP_AshenDragonScene2_C::prep_AshenDragon()
{
    ExecuteUbergraph_BP_AshenDragonScene2();
    return;
}

// Recovered Kismet: BP_AshenDragonScene2_C::Fire_Ship2 (22 bytes)
void BP_AshenDragonScene2_C::Fire_Ship2()
{
    ExecuteUbergraph_BP_AshenDragonScene2();
    return;
}

// Recovered Kismet: BP_AshenDragonScene2_C::Prep_ship2 (22 bytes)
void BP_AshenDragonScene2_C::Prep_ship2()
{
    ExecuteUbergraph_BP_AshenDragonScene2();
    return;
}

// Recovered Kismet: BP_AshenDragonScene2_C::ExecuteUbergraph_BP_AshenDragonScene2 (4549 bytes)
void BP_AshenDragonScene2_C::ExecuteUbergraph_BP_AshenDragonScene2()
{
    this->ReceiveBeginPlay();
    bool CallFunc_IsServer_ReturnValue = UKismetSystemLibrary::IsServer();
    if (!CallFunc_IsServer_ReturnValue) goto L_53;
L_53:
    auto idx_277698 = idx_277698;
    idx_277698 = idx_277698;
    auto idx_277706 = idx_277706;
    idx_277706 = idx_277706;
    auto idx_277707 = idx_277707;
    idx_277707 = idx_277707;
    auto idx_277708 = idx_277708;
    idx_277708 = idx_277708;
    auto idx_277683 = K2Node_MakeArray_Array;
    FTimerHandle idx_277675 = UKismetSystemLibrary::K2_SetTimerDelegate(UniqueObjectNameForCooking_OutputDelegate3, false);
    auto idx_277709 = idx_277709;
    idx_277709 = idx_277709;
    auto idx_277710 = idx_277710;
    idx_277710 = idx_277710;
    auto idx_277711 = idx_277711;
    idx_277711 = idx_277711;
    auto idx_277712 = idx_277712;
    idx_277712 = idx_277712;
    auto idx_277713 = idx_277713;
    idx_277713 = idx_277713;
    auto idx_277699 = idx_277699;
    idx_277699 = idx_277699;
    auto idx_277700 = idx_277700;
    idx_277700 = idx_277700;
    auto idx_277701 = idx_277701;
    idx_277701 = idx_277701;
    auto idx_277684 = K2Node_MakeArray_Array2;
    FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue2 = UKismetSystemLibrary::K2_SetTimerDelegate(UniqueObjectNameForCooking_OutputDelegate2, false);
    auto idx_277702 = idx_277702;
    idx_277702 = idx_277702;
    auto idx_277703 = idx_277703;
    idx_277703 = idx_277703;
    auto idx_277704 = idx_277704;
    idx_277704 = idx_277704;
    auto idx_277705 = idx_277705;
    idx_277705 = idx_277705;
    idx_277683 = K2Node_MakeArray_Array3;
    FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue = UKismetSystemLibrary::K2_SetTimerDelegate(UniqueObjectNameForCooking_OutputDelegate, false);
    Prep_ship1();
    prep_AshenDragon();
    Prep_ship2();
    idx_277698 = idx_277698;
    idx_277698 = idx_277698;
    idx_277706 = idx_277706;
    idx_277706 = idx_277706;
    idx_277707 = idx_277707;
    idx_277707 = idx_277707;
    idx_277708 = idx_277708;
    idx_277708 = idx_277708;
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(K2Node_MakeArray_Array);
    auto CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue;
    auto CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
    auto idx_277685 = CallFunc_Array_Get_Item;
    int CallFunc_WwiseEmitterComponentPostEvent_ReturnValue = UWwiseEmitterBlueprintLibrary::WwiseEmitterComponentPostEvent(idx_277730, idx_277722);
    auto CallFunc_RandomFloatInRange_ReturnValue = idx_277720;
    FTimerHandle idx_277676 = UKismetSystemLibrary::K2_SetTimerDelegate(UniqueObjectNameForCooking_OutputDelegate3, CallFunc_RandomFloatInRange_ReturnValue, false);
    idx_277709 = idx_277709;
    idx_277709 = idx_277709;
    idx_277710 = idx_277710;
    idx_277710 = idx_277710;
    idx_277711 = idx_277711;
    idx_277711 = idx_277711;
    idx_277712 = idx_277712;
    idx_277712 = idx_277712;
    idx_277713 = idx_277713;
    idx_277713 = idx_277713;
    idx_277699 = idx_277699;
    idx_277699 = idx_277699;
    idx_277700 = idx_277700;
    idx_277700 = idx_277700;
    idx_277701 = idx_277701;
    idx_277701 = idx_277701;
    int CallFunc_Array_Length_ReturnValue2 = UKismetArrayLibrary::Array_Length(K2Node_MakeArray_Array2);
    auto CallFunc_Subtract_IntInt_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
    auto idx_277680 = CallFunc_Subtract_IntInt_ReturnValue2;
    auto idx_277686 = CallFunc_Array_Get_Item2;
    int CallFunc_WwiseEmitterComponentPostEvent_ReturnValue2 = UWwiseEmitterBlueprintLibrary::WwiseEmitterComponentPostEvent(idx_277730, idx_277722);
    idx_277702 = idx_277702;
    idx_277702 = idx_277702;
    idx_277703 = idx_277703;
    idx_277703 = idx_277703;
    idx_277704 = idx_277704;
    idx_277704 = idx_277704;
    idx_277705 = idx_277705;
    idx_277705 = idx_277705;
    int CallFunc_Array_Length_ReturnValue3 = UKismetArrayLibrary::Array_Length(K2Node_MakeArray_Array3);
    auto CallFunc_Subtract_IntInt_ReturnValue3 = CallFunc_Array_Length_ReturnValue3;
    auto idx_277681 = CallFunc_Subtract_IntInt_ReturnValue3;
    idx_277685 = CallFunc_Array_Get_Item3;
    int CallFunc_WwiseEmitterComponentPostEvent_ReturnValue3 = UWwiseEmitterBlueprintLibrary::WwiseEmitterComponentPostEvent(idx_277730, idx_277722);
    auto idx_277679 = idx_277671;
    FTimerHandle idx_277678 = UKismetSystemLibrary::K2_SetTimerDelegate(UniqueObjectNameForCooking_OutputDelegate2, idx_277679, false);
    auto CallFunc_RandomFloatInRange_ReturnValue2 = idx_277720;
    FTimerHandle idx_277677 = UKismetSystemLibrary::K2_SetTimerDelegate(UniqueObjectNameForCooking_OutputDelegate, CallFunc_RandomFloatInRange_ReturnValue2, false);
    return;
}
